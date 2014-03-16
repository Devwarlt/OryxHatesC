Realm of the Mad God C++ Client
====================

A Realm of the Mad God client written in C++.

TODO:
--
* Update Packets ID's
* Add New Packets (From 19.5)
* 


#Client Packets:

###ACCEPTTRADE
	boolean[] myOffer
	boolean[] yourOffer
	
###AOEACK
	int time
	Location position
	
###BUY
	int objectId
	
###CANCELTRADE
	
###CHANGEGUILDRANK
	string name
	int guildRank
	
###CHANGETRADE
	boolean[] offer
	
###CHECKCREDITS
	
###CHOOSENAME
	string name
	
###CREATEGUILD
	string name
	
###CREATE
	int classType
	int skinType
	
###EDITACCOUNTLIST
	int accountListId
	boolean add
	int objectId
	
###ENEMYHIT
	int time
	int bulletId
	int targetId
	boolean kill
	
###ESCAPE

###GOTOACK
	int time
	
###GROUNDDAMAGE
	int time
	Location position
	
###GUILDINVITE
	string name
	
###GUILDREMOVE
	string name
	
###HELLO
	string buildVersion
	int gameId
	string guid
	string password
	string secret
	int keyTime
	byte[] key
	byte[] obf0
	string obf1
	string obf2
	string obf3
	string obf4
	string obf5
	
###INVDROP
	SlotObject slotObject
	
###INVSWAP
	int time
	Location position
	SlotObject slotObject1
	SlotObject slotObject2
	
###JOINGUILD
	string guildName
	
###LOAD
	int charId
	boolean isFromArena
	
###MOVE
	int tickId
	int time
	Location newPosition
	LocationRecord[] records
	
###OTHERHIT
	int time
	int bulletId
	int objectId
	int targetId
	
###PLAYERHIT
	int bulletId
	int objectId
	
###PLAYERSHOOT
	int time
	int bulletId
	int containerType
	Location startingPos
	float angle
	
###PLAYERTEXT
	string text
	
###PONG
	int serial
	int time
	
###REQUESTTRADE
	string name
	
###RESKIN
	int skinID
	
###SETCONDITION
	int conditionEffect
	float conditionDuration
	
###SHOOTACK
	int time
	
###SQUAREHIT
	int time
	int bulletId
	int objectId
	
###TELEPORT
	int objectId
	
###UPDATEACK

###USEITEM
	int time
	SlotObject slotObject
	Location itemUsePos
	int useType
	
###USEPORTAL
	int objectId
	
	
	
#Server Packets

###ACCOUNTLIST
	int accountListId
	string[] accountIds
	
###ALLYSHOOT
	int bulletId
	int ownerId
	short containerId
	float angle
	
###AOE
	Location pos
	float radius
	int damage
	int effect
	float duration
	int origType
	
###BUY
	int result
	string resultString
	
###CLIENTSTAT
	string name
	int value
	
###CREATE_SUCCESS
	int objectId
	int charId
	
###CREATEGUILDRESULT
	boolean success
	string errorText
	
###DAMAGE
	int targetId
	int[] effects
	int damageAmount
	boolean kill
	int bulletId
	int objectId
	
###DEATH
	string accountId
	int charId
	string killedBy
	int obf0
	int obf1

###FAILURE
	int errorId
	string errorDescription
	
###FILE
	string name
	byte[] bytes
	
###GLOBAL_NOTIFICATION
	int type
	string text
	
###GOTO
	int objectId
	Location pos
	
###INVITEDTOGUILD
	string name
	string guildName
	
###INVRESULT
	int result
	
###MAPINFO
	int width
	int height
	string name
	string obf0
	int obf1
	int fp
	int background
	boolean allowPlayerTeleport
	boolean showDisplays
	string[] clientXML
	string[] extraXML
	
###NAMERESULT
	boolean success
	string errorText
	
###NEW_TICK
	int tickId
	int tickTime
	Status[] statuses
	
###NOTIFICATION
	int objectId
	string message
	int color
	
###PIC
	BitmapData bitmapData
	
###PING
	int serial
	
###PLAYSOUND
	int ownerId
	int soundId
	
###QUESTOBJID
	int objectId
	
###RECONNECT
	string name
	string host
	int port
	int gameId
	int keyTime
	boolean isFromArena
	byte[] key
	
###SHOOT2
	int bulletId
	int ownerId
	int containerId
	Location startingPos
	float angle
	short damage
	
###SHOOT
	int bulletId
	int ownerId
	int bulletType
	Location startingPos
	float angle
	short damage
	int numShots
	float angleInc
	
###SHOW_EFFECT
	int effectType
	int targetObjectId
	Location pos1
	Location pos2
	int color
	
###TEXT
	string name
	int objectId
	int numStars
	int bubbleTime
	string recipient
	string text
	string cleanText
	
###TRADEACCEPTED
	boolean[] myOffer
	boolean[] yourOffer
	
###TRADECHANGED
	boolean[] offer
	
###TRADEDONE
	int code
	string description
	
###TRADEREQUESTED
	string name
	
###TRADESTART
	Item[] myItems
	string yourName
	Item[] yourItems

###UPDATE
	Tile[] tiles
	Entity[] newObjs
	int[] drops
