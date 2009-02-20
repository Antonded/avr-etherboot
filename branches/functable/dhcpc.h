/*----------------------------------------------------------------------------
 Copyright:      Michael Kleiber
 Author:         Michael Kleiber
 Remarks:        
 known Problems: none
 Version:        29.04.2008
 Description:    DHCP Client

 Dieses Programm ist freie Software. Sie k�nnen es unter den Bedingungen der 
 GNU General Public License, wie von der Free Software Foundation ver�ffentlicht, 
 weitergeben und/oder modifizieren, entweder gem�� Version 2 der Lizenz oder 
 (nach Ihrer Option) jeder sp�teren Version. 

 Die Ver�ffentlichung dieses Programms erfolgt in der Hoffnung, 
 da� es Ihnen von Nutzen sein wird, aber OHNE IRGENDEINE GARANTIE, 
 sogar ohne die implizite Garantie der MARKTREIFE oder der VERWENDBARKEIT 
 F�R EINEN BESTIMMTEN ZWECK. Details finden Sie in der GNU General Public License. 

 Sie sollten eine Kopie der GNU General Public License zusammen mit diesem 
 Programm erhalten haben. 
 Falls nicht, schreiben Sie an die Free Software Foundation, 
 Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA. 
------------------------------------------------------------------------------*/
#include "config.h"

#if USE_DHCP
#ifndef _DHCPCLIENT_H
	#define _DHCPCLIENT_H

	//#define DHCP_DEBUG usart_write
	#define DHCP_DEBUG(...)

	#include <avr/io.h>

	#define DHCP_CLIENT_PORT		  68
	#define DHCP_SERVER_PORT		  67


void dhcp_init     (void) APP_SECTION_DHCP;
void dhcp_message  (unsigned char type) APP_SECTION_DHCP;
void dhcp_get      (void) APP_SECTION_DHCP;
unsigned char dhcp (void) APP_SECTION_DHCP;

#endif //_DHCPCLIENT_H
#endif //USE_DHCP
