#!/usr/bin/python
import zipfile
import redis

def check_audio_zip(package):
	z = zipfile.ZipFile(package, 'r')
	for zname in z.namelist():
	    if 'audio' == zname.split('/')[-1]:
	    	return 1
	return 0



class DownloadStatus:
    pre = 0
    downloading = 1
    waiting = 2
    finish = 3
    failed = 4

if __name__ == '__main__':
	media_url = '89123123'
	vidkey = 'download' + media_url
	r=redis.Redis(host='10.2.8.82',port='6379')
	if not r.exists(vidkey):
		r.setnx(vidkey,DownloadStatus.downloading)
		print "%s set down" % vidkey
	else:
		print "has done"

	if r.get(vidkey)==str(DownloadStatus.downloading):
		print "check done"
		print r.get(vidkey)
	else:
		print "no result"