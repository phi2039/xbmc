/*
 *      Copyright (C) 2005-2011 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "FileAFP.h"

using namespace XFILE;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CFileAFP::CFileAFP()
{

}

CFileAFP::~CFileAFP()
{
  Close();
}

bool CFileAFP::Open(const CURL& url)
{
  return false;
//  CSingleLock lock(g_DaapClient);
//  
//  if (m_bOpened) Close();
//  
//  m_url = url;
//  
//  CLog::Log(LOGDEBUG, "CFileAFP::Open(%s)", url.GetFileName().c_str());
//  CStdString host = url.GetHostName();
//  if (url.HasPort())
//    host.Format("%s:%i",url.GetHostName(),url.GetPort());
//  m_thisHost = g_DaapClient.GetHost(host);
//  if (!m_thisHost)
//    return false;
//  
//  /* get us a new request id */
//  int requestid = ++m_thisHost->request_id;
//  
//  m_hashurl = "/" + m_url.GetFileName();
//  m_hashurl += m_url.GetOptions();
//  
//  char hash[33] = {0};
//  GenerateHash(m_thisHost->version_major, (unsigned char*)(m_hashurl.c_str()), 2, (unsigned char*)hash, requestid);
//  
//  m_curl.SetUserAgent(DAAP_USERAGENT);
//  
//  //m_curl.SetRequestHeader(HEADER_VERSION, "3.0");
//  m_curl.SetRequestHeader(HEADER_REQUESTID, requestid);
//  m_curl.SetRequestHeader(HEADER_VALIDATE, CStdString(hash));
//  m_curl.SetRequestHeader(HEADER_ACCESS_INDEX, 2);
//  
//  m_url.SetProtocol("http");
//  if(!m_url.HasPort())
//    m_url.SetPort(DAAP_PORT);
//  
//  
//  m_bOpened = true;
//  
//  return m_curl.Open(m_url);
}

unsigned int CFileAFP::Read(void *lpBuf, int64_t uiBufSize)
{
  return 0;
//  return m_curl.Read(lpBuf, uiBufSize);
}

void CFileAFP::Close()
{
//  m_curl.Close();
}

int64_t CFileAFP::Seek(int64_t iFilePosition, int iWhence)
{
  return 0;
//  CSingleLock lock(g_DaapClient);
//  
//  int requestid = ++m_thisHost->request_id;
//  
//  char hash[33] = {0};
//  GenerateHash(m_thisHost->version_major, (unsigned char*)(m_hashurl.c_str()), 2, (unsigned char*)hash, requestid);
//  
//  m_curl.SetRequestHeader(HEADER_REQUESTID, requestid);
//  m_curl.SetRequestHeader(HEADER_VALIDATE, CStdString(hash));
//  
//  return m_curl.Seek(iFilePosition, iWhence);
}

int64_t CFileAFP::GetLength()
{
  return 0;
//  return m_curl.GetLength();
}

//*********************************************************************************************
int64_t CFileAFP::GetPosition()
{
  return 0;
//  return m_curl.GetPosition();
}

bool CFileAFP::Exists(const CURL& url)
{
  return false;
}

int CFileAFP::Stat(const CURL& url, struct __stat64* buffer)
{
  return -1;
}

int CFileAFP::IoControl(EIoControl request, void* param)
{
  if(request == IOCTRL_SEEK_POSSIBLE)
    return 1;
  
  return -1;
}
