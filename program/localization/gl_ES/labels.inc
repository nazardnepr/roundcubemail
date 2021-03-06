<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Benvido a $product';
$labels['username']  = 'Nome de usuario';
$labels['password']  = 'Contrasinal';
$labels['server']    = 'Servidor';
$labels['login']     = 'Acceder';

// taskbar
$labels['logout']   = 'Saír';
$labels['mail']     = 'Caixa de entrada';
$labels['settings'] = 'Axustes persoais';
$labels['addressbook'] = 'Caderno de enderezos';

// mailbox names
$labels['inbox']  = 'Caixa de entrada';
$labels['drafts'] = 'Borradores';
$labels['sent']   = 'Enviados';
$labels['trash']  = 'Cubo do lixo';
$labels['junk']   = 'Correo lixo';

// message listing
$labels['subject'] = 'Asunto';
$labels['from']    = 'Remitente';
$labels['sender']  = 'Sender';
$labels['to']      = 'Destinatario';
$labels['cc']      = 'Copia (Cc)';
$labels['bcc']     = 'Copia oculta (Cco)';
$labels['replyto'] = 'Respostar a (Reply-To)';
$labels['followupto'] = 'Respostar a todos (Followup-To)';
$labels['date']    = 'Data';
$labels['size']    = 'Tamaño';
$labels['priority'] = 'Prioridade';
$labels['organization'] = 'Organización';
$labels['readstatus'] = 'Estado da lectura';
$labels['listoptions'] = 'Opcións de lista...';

$labels['mailboxlist'] = 'Cartafoles';
$labels['messagesfromto'] = 'Mensaxes da $from á $to de $count';
$labels['threadsfromto'] = 'Fíos do $from ao $to de $count';
$labels['messagenrof'] = 'Mensaxe $nr de $count';
$labels['fromtoshort'] = '$from – $to of $count';

$labels['copy']     = 'Copiar';
$labels['move']     = 'Mover';
$labels['moveto']   = 'Mover a...';
$labels['download'] = 'Descargar';
$labels['open']     = 'Open';
$labels['showattachment'] = 'Show';
$labels['showanyway'] = 'Show it anyway';

$labels['filename'] = 'Nome de ficheiro';
$labels['filesize'] = 'Tamaño de ficheiro';

$labels['addtoaddressbook'] = 'Engadir ao caderno de enderezos';

// weekdays short
$labels['sun'] = 'Dom';
$labels['mon'] = 'Lun';
$labels['tue'] = 'Mar';
$labels['wed'] = 'Mér';
$labels['thu'] = 'Xov';
$labels['fri'] = 'Ven';
$labels['sat'] = 'Sáb';

// weekdays long
$labels['sunday']    = 'Domingo';
$labels['monday']    = 'Luns';
$labels['tuesday']   = 'Martes';
$labels['wednesday'] = 'Mércores';
$labels['thursday']  = 'Xoves';
$labels['friday']    = 'Venres';
$labels['saturday']  = 'Sábado';

// months short
$labels['jan']	= 'Xan';
$labels['feb']	= 'Feb';
$labels['mar']	= 'Mar';
$labels['apr']	= 'Abr';
$labels['may']	= 'Maio';
$labels['jun']	= 'Xuñ';
$labels['jul'] 	= 'Xul';
$labels['aug']	= 'Ago';
$labels['sep']	= 'Set';
$labels['oct']	= 'Out';
$labels['nov']	= 'Nov';
$labels['dec']	= 'Dec';

// months long
$labels['longjan']	= 'Xaneiro';
$labels['longfeb']	= 'Febreiro';
$labels['longmar']	= 'Marzo';
$labels['longapr']	= 'Abril';
$labels['longmay']	= 'Maio';
$labels['longjun']	= 'Xuño';
$labels['longjul']	= 'Xullo';
$labels['longaug']	= 'Agosto';
$labels['longsep']	= 'Setembro';
$labels['longoct']	= 'Outubro';
$labels['longnov']	= 'Novembro';
$labels['longdec']	= 'Decembro';

$labels['today'] = 'Hoxe';

// toolbar buttons
$labels['refresh']          = 'Actualizar';
$labels['checkmail']        = 'Procurar novas mensaxes';
$labels['compose']          = 'Redactar unha mensaxe';
$labels['writenewmessage']  = 'Redactar unha mensaxe nova';
$labels['reply']            = 'Responder';
$labels['replytomessage']   = 'Respostar a mensaxe';
$labels['replytoallmessage'] = 'Respostar á lista ou ao remitente e a tódolos destinatarios';
$labels['replyall']         = 'Respostar a todos';
$labels['replylist']        = 'Respostar á lista de correo';
$labels['forward']          = 'Forward';
$labels['forwardinline']    = 'Reenviar inserido';
$labels['forwardattachment'] = 'Reenviar como anexo';
$labels['forwardmessage']   = 'Reenviar a mensaxe';
$labels['deletemessage']    = 'Eliminar a mensaxe';
$labels['movemessagetotrash'] = 'Mover a mensaxe ao cubo do lixo';
$labels['printmessage']     = 'Imprimir esta mensaxe';
$labels['previousmessage']  = 'Amosar a mensaxe anterior';
$labels['firstmessage']     = 'Amosar a primeira mensaxe';
$labels['nextmessage']      = 'Amosar a seguinte mensaxe';
$labels['lastmessage']      = 'Amosar a última mensaxe';
$labels['backtolist']       = 'Voltar á lista de mensaxes';
$labels['viewsource']       = 'Ver código fonte';
$labels['mark']             = 'Mark';
$labels['markmessages']     = 'Marcar mensaxes';
$labels['markread']         = 'Como lidas';
$labels['markunread']       = 'Como non lidas';
$labels['markflagged']      = 'Como marcadas';
$labels['markunflagged']    = 'Como non marcadas';
$labels['moreactions']      = 'Máis accións...';
$labels['more']             = 'Máis';
$labels['back']             = 'Atrás';
$labels['options']          = 'Opcións';

$labels['select'] = 'Seleccionar';
$labels['all'] = 'Todas';
$labels['none'] = 'Ningunha';
$labels['currpage'] = 'Páxina actual';
$labels['unread'] = 'Non lidas';
$labels['flagged'] = 'Marcadas';
$labels['unanswered'] = 'Non respostadas';
$labels['withattachment'] = 'With attachment';
$labels['deleted'] = 'Marcadas como eliminadas';
$labels['undeleted'] = 'Not deleted';
$labels['invert'] = 'Inverter';
$labels['filter'] = 'Filtrar';
$labels['list'] = 'Lista';
$labels['threads'] = 'Fíos';
$labels['expand-all'] = 'Expandir todos';
$labels['expand-unread'] = 'Expandir os non lidos';
$labels['collapse-all'] = 'Contraer todos';
$labels['threaded'] = 'Agrupar conversas';

$labels['autoexpand_threads'] = 'Expandir os fíos de mensaxes';
$labels['do_expand'] = 'tódolos fíos';
$labels['expand_only_unread'] = 'só con mensaxes non lidas';
$labels['fromto'] = 'Remitente/Destinatario';
$labels['flag'] = 'Marca';
$labels['attachment'] = 'Anexo';
$labels['nonesort'] = 'Ningunha';
$labels['sentdate'] = 'Data de envío';
$labels['arrival'] = 'Data de chegada';
$labels['asc'] = 'ascendente';
$labels['desc'] = 'descendente';
$labels['listcolumns'] = 'Enumerar columnas';
$labels['listsorting'] = 'Ordenar pola columna';
$labels['listorder'] = 'Ordenación';
$labels['listmode'] = 'Modo de vista da lista';

$labels['folderactions'] = 'Accións cos cartafoles';
$labels['compact'] = 'Compactar';
$labels['empty'] = 'Baleirar';

$labels['quota'] = 'Uso de disco';
$labels['unknown']  = 'descoñecido';
$labels['unlimited']  = 'ilimitado';

$labels['quicksearch']  = 'Busca rápida';
$labels['resetsearch']  = 'Restablecer a busca';
$labels['searchmod']  = 'Modificadores de busca';
$labels['msgtext']  = 'Mensaxe enteira';
$labels['body']  = 'Body';

$labels['openinextwin'] = 'Abrir nunha nova fiestra';
$labels['emlsave'] = 'Gardar (.eml)';
$labels['changeformattext'] = 'Display in plain text format';
$labels['changeformathtml'] = 'Display in HTML format';

// message compose
$labels['editasnew']      = 'Editar como nova';
$labels['send']           = 'Send';
$labels['sendmessage']    = 'Enviar a mensaxe agora';
$labels['savemessage']    = 'Gardar a mensaxe como borrador';
$labels['addattachment']  = 'Anexar un ficheiro';
$labels['charset']        = 'Codificación';
$labels['editortype']     = 'Tipo de editor';
$labels['returnreceipt']  = 'Notificación da entrega';
$labels['dsn']            = 'Notificación do estado de envío (DSN)';
$labels['mailreplyintro'] = 'O $date, $sender escribiu:';
$labels['originalmessage'] = 'Mensaxe orixinal';

$labels['editidents']    = 'Modificar identidades';
$labels['spellcheck']    = 'Spell';
$labels['checkspelling'] = 'Revisar a ortografía';
$labels['resumeediting'] = 'Voltar á edición';
$labels['revertto']      = 'Voltar a';

$labels['attach'] = 'Attach';
$labels['attachments'] = 'Ficheiros anexos';
$labels['upload'] = 'Cargar';
$labels['uploadprogress'] = '$percent ($current de $total)';
$labels['close']  = 'Pechar';
$labels['messageoptions']  = 'Opcións da mensaxe...';

$labels['low']     = 'Baixa';
$labels['lowest']  = 'A máis baixa';
$labels['normal']  = 'Normal';
$labels['high']    = 'Alta';
$labels['highest'] = 'A máis alta';

$labels['nosubject']  = '(Sen asunto)';
$labels['showimages'] = 'Amosar as imaxes';
$labels['alwaysshow'] = 'Amosar sempre as imaxes nas mensaxes de $sender';
$labels['isdraft']    = 'Esta mensaxe é un borrador';
$labels['andnmore']   = '$nr more...';
$labels['togglemoreheaders'] = 'Show more message headers';
$labels['togglefullheaders'] = 'Toggle raw message headers';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Só texto';
$labels['savesentmessagein'] = 'Gardar a mensaxe enviada en';
$labels['dontsave'] = 'non gardar';
$labels['maxuploadsize'] = 'O tamaño máximo permitido por ficheiro é de $size';

$labels['addcc'] = 'Engadir copia (CC)';
$labels['addbcc'] = 'Engadir copia oculta (BCC)';
$labels['addreplyto'] = 'Engadir respostar a (Reply-To)';
$labels['addfollowupto'] = 'Engadir respostar a todos (Followup-To)';

// mdn
$labels['mdnrequest'] = 'O remitente desta mensaxe pediu ser notificado cando vostede a lea. Quere notificar ao remitente?';
$labels['receiptread'] = 'Notificación da entrega da mensaxe (lectura)';
$labels['yourmessage'] = 'Esta é unha notificación da entrega da súa mensaxe';
$labels['receiptnote'] = 'Nota: Esta notificación só confirma que a mensaxe se abriu no computador do destinatario. Non asegura que o destinatario a lera ou entendera o seu contido.';

// address boook
$labels['name']         = 'Nome completo';
$labels['firstname']    = 'Nome';
$labels['surname']      = 'Apelidos';
$labels['middlename']   = 'Segundo nome';
$labels['nameprefix']   = 'Prefixo';
$labels['namesuffix']   = 'Sufixo';
$labels['nickname']     = 'Alcume';
$labels['jobtitle']     = 'Titulación';
$labels['department']   = 'Departamento';
$labels['gender']       = 'Xénero';
$labels['maidenname']   = 'Nome de solteira';
$labels['email']        = 'Correo Electrónico';
$labels['phone']        = 'Teléfono';
$labels['address']      = 'Enderezo';
$labels['street']       = 'Rúa';
$labels['locality']     = 'Poboación';
$labels['zipcode']      = 'Código postal';
$labels['region']       = 'Provincia';
$labels['country']      = 'País';
$labels['birthday']     = 'Aniversario';
$labels['anniversary']  = 'Aniversario';
$labels['website']      = 'Sitio web';
$labels['instantmessenger'] = 'Mensaxería instantánea';
$labels['notes'] = 'Notes';
$labels['male']   = 'home';
$labels['female'] = 'muller';
$labels['manager'] = 'Xerente';
$labels['assistant'] = 'Asistente';
$labels['spouse'] = 'Cónxuxe';
$labels['allfields'] = 'Tódolos campos';
$labels['search'] = 'Procurar';
$labels['advsearch'] = 'Procura avanzada';
$labels['advanced'] = 'Avanzado';
$labels['other'] = 'Outro';

$labels['typehome']   = 'Casa';
$labels['typework']   = 'Traballo';
$labels['typeother']  = 'Outro';
$labels['typemobile']  = 'Móbil';
$labels['typemain']  = 'Principal';
$labels['typehomefax']  = 'Fax da casa';
$labels['typeworkfax']  = 'Fax do traballo';
$labels['typecar']  = 'Coche';
$labels['typepager']  = 'Buscapersonas';
$labels['typevideo']  = 'Vídeo';
$labels['typeassistant']  = 'Asistente';
$labels['typehomepage']  = 'Páxina principal';
$labels['typeblog'] = 'Blogue';
$labels['typeprofile'] = 'Perfil';

$labels['addfield'] = 'Engadir campo';
$labels['addcontact'] = 'Engadir novo contacto';
$labels['editcontact'] = 'Modificar este contacto';
$labels['contacts'] = 'Contactos';
$labels['contactproperties'] = 'Propiedades do contacto';
$labels['personalinfo'] = 'Información persoal';

$labels['edit']   = 'Editar';
$labels['cancel'] = 'Cancelar';
$labels['save']   = 'Gardar';
$labels['delete'] = 'Eliminar';
$labels['rename'] = 'Mudar o nome';
$labels['addphoto'] = 'Engadir';
$labels['replacephoto'] = 'Substituír';
$labels['uploadphoto'] = 'Subir foto';

$labels['newcontact']     = 'Novo contacto';
$labels['deletecontact']  = 'Eliminar os contactos seleccionados';
$labels['composeto']      = 'Redactar mensaxe para';
$labels['contactsfromto'] = 'Contactos do $from ao $to de $count';
$labels['print']          = 'Imprimir';
$labels['export']         = 'Exportar';
$labels['exportall']      = 'Export all';
$labels['exportsel']      = 'Export selected';
$labels['exportvcards']   = 'Exportar os contactos en formato vCard';
$labels['newcontactgroup'] = 'Crear novo grupo de contactos';
$labels['grouprename']    = 'Mudar o nome do grupo';
$labels['groupdelete']    = 'Borrar o grupo';
$labels['groupremoveselected'] = 'Remove selected contacts from group';

$labels['previouspage']   = 'Amosar o grupo anterior';
$labels['firstpage']      = 'Amosar o primeiro grupo';
$labels['nextpage']       = 'Amosar o seguinte grupo';
$labels['lastpage']       = 'Amosar o último grupo';

$labels['group'] = 'Grupo';
$labels['groups'] = 'Grupos';
$labels['personaladrbook'] = 'Enderezos persoais';

$labels['searchsave'] = 'Gardar procura';
$labels['searchdelete'] = 'Eliminar procura';

$labels['import'] = 'Importar';
$labels['importcontacts'] = 'Importar contactos';
$labels['importfromfile'] = 'Importar desde ficheiro:';
$labels['importtarget'] = 'Engadir contactos ao caderno de enderezos:';
$labels['importreplace'] = 'Substituír completamente o caderno de enderezos';
$labels['importdesc'] = 'You can upload contacts from an existing address book.<br/>We currently support importing addresses from the <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> or CSV (comma-separated) data format.';
$labels['done'] = 'Rematado';

// settings
$labels['settingsfor'] = 'Axustes de';
$labels['about'] = 'Acerca de';
$labels['preferences'] = 'Preferencias';
$labels['userpreferences'] = 'Preferencias de usuario';
$labels['editpreferences'] = 'Editar preferencias de usuario';

$labels['identities'] = 'Identidades';
$labels['manageidentities'] = 'Administrar as identidades desta conta';
$labels['newidentity'] = 'Nova identidade';

$labels['newitem'] = 'Novo';
$labels['edititem'] = 'Editar';

$labels['preferhtml'] = 'Prefiro HTML';
$labels['defaultcharset'] = 'Xogo de caracteres por omisión';
$labels['htmlmessage'] = 'Mensaxe HTML';
$labels['messagepart'] = 'Part';
$labels['digitalsig'] = 'Digital Signature';
$labels['dateformat'] = 'Formato da data';
$labels['timeformat'] = 'Formato da hora';
$labels['prettydate'] = 'Data decorada';
$labels['setdefault']  = 'Usar como predeterminada';
$labels['autodetect']  = 'Detectar automáticamente';
$labels['language']  = 'Linguaxe';
$labels['timezone']  = 'Zona horaria';
$labels['pagesize']  = 'Liñas por páxina';
$labels['signature'] = 'Sinatura';
$labels['dstactive']  = 'Cambio de hora según horario de verán';
$labels['showinextwin'] = 'Open message in a new window';
$labels['composeextwin'] = 'Compose in a new window';
$labels['htmleditor'] = 'Redactar mensaxes HTML';
$labels['htmlonreply'] = 'só cando se resposte a unha mensaxe HTML';
$labels['htmlonreplyandforward'] = 'on forward or reply to HTML message';
$labels['htmlsignature'] = 'Sinatura HTML';
$labels['previewpane'] = 'Amosar previsualización';
$labels['skin'] = 'Aspecto da interface';
$labels['logoutclear'] = 'Baleirar o cubo do lixo ao saír';
$labels['logoutcompact'] = 'Compactar a caixa de entrada ao saír';
$labels['uisettings'] = 'Interface de usuario';
$labels['serversettings'] = 'Axustes do servidor';
$labels['mailboxview'] = 'Vista das caixas de correo';
$labels['mdnrequests'] = 'Cando se solicitan notificacións da entrega';
$labels['askuser'] = 'preguntarme qué facer';
$labels['autosend'] = 'enviar automáticamente';
$labels['autosendknown'] = 'enviar aos meus contactos, noutros casos preguntarme';
$labels['autosendknownignore'] = 'enviar aos meus contactos, noutros casos ignorar';
$labels['ignore'] = 'ignorar';
$labels['readwhendeleted'] = 'Marcar a mensaxe como lida ao eliminar';
$labels['flagfordeletion'] = 'Marcar a mensaxe para eliminar no canto de eliminar';
$labels['skipdeleted'] = 'Non amosar as mensaxes marcadas como eliminadas';
$labels['deletealways'] = 'Eliminar as mensaxes aínda que non se poidan gardar no cubo do lixo';
$labels['deletejunk'] = 'Directly delete messages in Junk';
$labels['showremoteimages'] = 'Amosar as imaxes remotas';
$labels['fromknownsenders'] = 'de remitentes coñecidos';
$labels['always'] = 'sempre';
$labels['showinlineimages'] = 'Amosar as imaxes anexas baixo a mensaxe';
$labels['autosavedraft']  = 'Gardar borrador automáticamente';
$labels['everynminutes']  = 'cada $n minuto(s)';
$labels['refreshinterval']  = 'Refresh (check for new messages, etc.)';
$labels['never']  = 'nunca';
$labels['immediately']  = 'de inmediato';
$labels['messagesdisplaying'] = 'Visualización das mensaxes';
$labels['messagescomposition'] = 'Composición das mensaxes';
$labels['mimeparamfolding'] = 'Nomes dos ficheiros anexos';
$labels['2231folding'] = 'Conforme ao RFC 2231 (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'Conforme ao RFC 2047 (outros)';
$labels['force7bit'] = 'Usar MIME para codificar caracteres de 8 bits';
$labels['advancedoptions'] = 'Opcións avanzadas';
$labels['focusonnewmessage'] = 'Enfocar o navegador se hai mensaxes novas';
$labels['checkallfolders'] = 'Procurar novas mensaxes en tódolos cartafoles';
$labels['displaynext'] = 'Logo de eliminar ou mover unha mensaxe ir á mensaxe seguinte';
$labels['defaultfont'] = 'Fonte por defecto da mensaxe HTML';
$labels['mainoptions'] = 'Opcións principais';
$labels['browseroptions'] = 'Opcións do navegador';
$labels['section'] = 'Sección';
$labels['maintenance'] = 'Mantemento';
$labels['newmessage'] = 'Mensaxes novas';
$labels['signatureoptions'] = 'Opcións da firma';
$labels['whenreplying'] = 'Ao respostar';
$labels['replyempty'] = 'do not quote the original message';
$labels['replytopposting'] = 'comezar a nova mensaxe enriba da orixinal';
$labels['replybottomposting'] = 'comezar a nova mensaxe embaixo da orixinal';
$labels['replyremovesignature'] = 'Eliminar a firma do remitente ao respostar';
$labels['autoaddsignature'] = 'Engadir firma automáticamente';
$labels['newmessageonly'] = 'só nas mensaxes novas';
$labels['replyandforwardonly'] = 'só nas respostas e reenvíos';
$labels['insertsignature'] = 'Engadir firma';
$labels['previewpanemarkread']  = 'Marcar como lidas as mensaxes previsualizadas';
$labels['afternseconds']  = 'logo de $n segundos';
$labels['reqmdn'] = 'Solicitar sempre unha notificación da entrega';
$labels['reqdsn'] = 'Solicitar sempre unha notificación do estado de envío';
$labels['replysamefolder'] = 'Deixar as respostas no cartafol onde está a mensaxe á que se responde';
$labels['defaultabook'] = 'Default address book';
$labels['autocompletesingle'] = 'Ignorar as direccións alternativas no autocompletado';
$labels['listnamedisplay'] = 'List contacts as';
$labels['spellcheckbeforesend'] = 'Revisar a ortografía antes de enviar unha mensaxe';
$labels['spellcheckoptions'] = 'Opción da revisión ortográfica';
$labels['spellcheckignoresyms'] = 'Ignorar as palabras con símbolos';
$labels['spellcheckignorenums'] = 'Ignorar as palabras con números';
$labels['spellcheckignorecaps'] = 'Ignorar as palabras escritas en maiúsculas';
$labels['addtodict'] = 'Engadir ao diccionario';
$labels['mailtoprotohandler'] = 'Register protocol handler for mailto: links';
$labels['forwardmode'] = 'Messages forwarding';
$labels['inline'] = 'inline';
$labels['asattachment'] = 'as attachment';

$labels['folder']  = 'Cartafol';
$labels['folders']  = 'Cartafoles';
$labels['foldername']  = 'Nome do cartafol';
$labels['subscribed']  = 'Subscrito';
$labels['messagecount'] = 'Mensaxes';
$labels['create']  = 'Crear';
$labels['createfolder']  = 'Crear un novo cartafol';
$labels['managefolders']  = 'Xestionar cartafoles';
$labels['specialfolders'] = 'Cartafoles especiais';
$labels['properties'] = 'Propiedades';
$labels['folderproperties'] = 'Propiedades do cartafol';
$labels['parentfolder'] = 'Cartafol padre';
$labels['location'] = 'Situación';
$labels['info'] = 'Información';
$labels['getfoldersize'] = 'Prema para calcular o tamaño do cartafol';
$labels['changesubscription'] = 'Prema para trocar a subscrición';
$labels['foldertype'] = 'Tipo do cartafol';
$labels['personalfolder']  = 'Cartafol privado';
$labels['otherfolder']  = 'Cartafol de outro usuario';
$labels['sharedfolder']  = 'Cartafol público';

$labels['sortby'] = 'Ordenar por';
$labels['sortasc']  = 'Orde ascendente';
$labels['sortdesc'] = 'Orde descendente';
$labels['undo'] = 'Desfacer';

$labels['installedplugins'] = 'Installed plugins';
$labels['plugin'] = 'Complemento';
$labels['version'] = 'Versión';
$labels['source'] = 'Fonte';
$labels['license'] = 'Licenza';
$labels['support'] = 'Obter axuda';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KiB';
$labels['MB'] = 'MiB';
$labels['GB'] = 'GiB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Inglés';
$labels['westerneuropean'] = 'Europeo Occidental';
$labels['easterneuropean'] = 'Europeo Oriental';
$labels['southeasterneuropean'] = 'Europeo Suroriental';
$labels['baltic'] = 'Báltico';
$labels['cyrillic'] = 'Cirílico';
$labels['arabic'] = 'Arábigo';
$labels['greek'] = 'Grego';
$labels['hebrew'] = 'Hebreo';
$labels['turkish'] = 'Turco';
$labels['nordic'] = 'Nórdico';
$labels['thai'] = 'Thai';
$labels['celtic'] = 'Celta';
$labels['vietnamese'] = 'Vietnamita';
$labels['japanese'] = 'Xaponés';
$labels['korean'] = 'Coreano';
$labels['chinese'] = 'Chinés';

?>
