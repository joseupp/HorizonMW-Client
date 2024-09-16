// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/iw5_pc.hpp"

namespace xsk::gsc::iw5_pc
{

extern std::array<std::pair<u16, char const*>, func_count> const func_list
{{
    { 0x001, "precacheturret" },
    { 0x002, "getweaponarray" },
    { 0x003, "createprintchannel" },
    { 0x004, "updategamerprofileall" },
    { 0x005, "clearlocalizedstrings" },
    { 0x006, "setphysicsgravitydir" },
    { 0x007, "gettimescale" },
    { 0x008, "settimescale" },
    { 0x009, "setslowmotionview" },
    { 0x00A, "forcesharedammo" },
    { 0x00B, "refreshhudcompass" },
    { 0x00C, "refreshhudammocounter" },
    { 0x00D, "notifyoncommand" },
    { 0x00E, "setprintchannel" },
    { 0x00F, "print" },
    { 0x010, "println" },
    { 0x011, "print3d" },
    { 0x012, "line" },
    { 0x013, "spawnturret" },
    { 0x014, "canspawnturret" },
    { 0x015, "assert" },
    { 0x016, "pausecinematicingame" },
    { 0x017, "drawcompassfriendlies" },
    { 0x018, "bulletspread" },
    { 0x019, "bullettracer" },
    { 0x01A, "badplace_delete" },
    { 0x01B, "badplace_cylinder" },
    { 0x01C, "badplace_arc" },
    { 0x01D, "badplace_brush" },
    { 0x01E, "clearallcorpses" },
    { 0x01F, "setturretnode" },
    { 0x020, "unsetturretnode" },
    { 0x021, "setnodepriority" },
    { 0x022, "isnodeoccupied" },
    { 0x023, "setdebugorigin" },
    { 0x024, "setdebugangles" },
    { 0x025, "updategamerprofile" },
    { 0x026, "assertex" },
    { 0x027, "assertmsg" },
    { 0x028, "isdefined" },
    { 0x029, "isstring" },
    { 0x02A, "setdvar" },
    { 0x02B, "setdynamicdvar" },
    { 0x02C, "setdvarifuninitialized" },
    { 0x02D, "setdevdvar" },
    { 0x02E, "setdevdvarifuninitialized" },
    { 0x02F, "getdvar" },
    { 0x030, "getdvarint" },
    { 0x031, "getdvarfloat" },
    { 0x032, "getdvarvector" },
    { 0x033, "gettime" },
    { 0x034, "getentbynum" },
    { 0x035, "getweaponmodel" },
    { 0x036, "getculldist" },
    { 0x037, "sethalfresparticles" },
    { 0x038, "getmapsunlight" },
    { 0x039, "setsunlight" },
    { 0x03A, "resetsunlight" },
    { 0x03B, "getmapsundirection" },
    { 0x03C, "getmapsunangles" },
    { 0x03D, "setsundirection" },
    { 0x03E, "lerpsundirection" },
    { 0x03F, "lerpsunangles" },
    { 0x040, "resetsundirection" },
    { 0x041, "enableforcedsunshadows" },
    { 0x042, "enableforcednosunshadows" },
    { 0x043, "disableforcedsunshadows" },
    { 0x044, "enableouterspacemodellighting" },
    { 0x045, "disableouterspacemodellighting" },
    { 0x046, "remapstage" },
    { 0x047, "changelevel" },
    { 0x048, "missionsuccess" },
    { 0x049, "missionfailed" },
    { 0x04A, "cinematic" },
    { 0x04B, "cinematicingame" },
    { 0x04C, "cinematicingamesync" },
    { 0x04D, "cinematicingameloop" },
    { 0x04E, "cinematicingameloopresident" },
    { 0x04F, "iscinematicplaying" },
    { 0x050, "stopcinematicingame" },
    { 0x051, "getweaponhidetags" },
    { 0x052, "getanimlength" },
    { 0x053, "animhasnotetrack" },
    { 0x054, "getnotetracktimes" },
    { 0x055, "spawn" },
    { 0x056, "spawnloopsound" },
    { 0x057, "spawnloopingsound" },
    { 0x058, "bullettrace" },
    { 0x059, "target_setmaxsize" },
    { 0x05A, "target_setcolor" },
    { 0x05B, "target_setdelay" },
    { 0x05C, "getstartorigin" },
    { 0x05D, "getstartangles" },
    { 0x05E, "getcycleoriginoffset" },
    { 0x05F, "magicgrenade" },
    { 0x060, "magicgrenademanual" },
    { 0x061, "setblur" },
    { 0x062, "musicplay" },
    { 0x063, "musicstop" },
    { 0x064, "soundfade" },
    { 0x065, "soundsettimescalefactor" },
    { 0x066, "soundresettimescale" },
    { 0x067, "setocclusionpreset" },
    { 0x068, "levelsoundfade" },
    { 0x069, "precachenightvisioncodeassets" },
    { 0x06A, "precachedigitaldistortcodeassets" },
    { 0x06B, "precacheminimapsentrycodeassets" },
    { 0x06C, "savegame" },
    { 0x06D, "issavesuccessful" },
    { 0x06E, "issaverecentlyloaded" },
    { 0x06F, "savegamenocommit" },
    { 0x070, "commitsave" },
    { 0x071, "commitwouldbevalid" },
    { 0x072, "getfxvisibility" },
    { 0x073, "setculldist" },
    { 0x074, "bullettracepassed" },
    { 0x075, "sighttracepassed" },
    { 0x076, "physicstrace" },
    { 0x077, "playerphysicstrace" },
    { 0x078, "getgroundposition" },
    { 0x079, "getmovedelta" },
    { 0x07A, "getangledelta" },
    { 0x07B, "getnorthyaw" },
    { 0x07C, "getcommandfromkey" },
    { 0x07D, "getsticksconfig" },
    { 0x07E, "weaponfightdist" },
    { 0x07F, "weaponmaxdist" },
    { 0x080, "isturretactive" },
    { 0x081, "target_alloc" },
    { 0x082, "target_flush" },
    { 0x083, "target_set" },
    { 0x084, "target_remove" },
    { 0x085, "target_setshader" },
    { 0x086, "target_setoffscreenshader" },
    { 0x087, "target_isinrect" },
    { 0x088, "target_isincircle" },
    { 0x089, "target_startreticlelockon" },
    { 0x08A, "target_clearreticlelockon" },
    { 0x08B, "target_getarray" },
    { 0x08C, "target_istarget" },
    { 0x08D, "target_setattackmode" },
    { 0x08E, "target_setjavelinonly" },
    { 0x08F, "target_hidefromplayer" },
    { 0x090, "target_showtoplayer" },
    { 0x091, "target_setscaledrendermode" },
    { 0x092, "target_drawcornersonly" },
    { 0x093, "target_drawsquare" },
    { 0x094, "target_drawsingle" },
    { 0x095, "target_setminsize" },
    { 0x096, "setnorthyaw" },
    { 0x097, "setslowmotion" },
    { 0x098, "randomint" },
    { 0x099, "randomfloat" },
    { 0x09A, "randomintrange" },
    { 0x09B, "randomfloatrange" },
    { 0x09C, "sin" },
    { 0x09D, "cos" },
    { 0x09E, "tan" },
    { 0x09F, "asin" },
    { 0x0A0, "acos" },
    { 0x0A1, "atan" },
    { 0x0A2, "int" },
    { 0x0A3, "float" },
    { 0x0A4, "abs" },
    { 0x0A5, "min" },
    { 0x0A6, "objective_additionalcurrent" },
    { 0x0A7, "objective_ring" },
    { 0x0A8, "objective_setpointertextoverride" },
    { 0x0A9, "getnode" },
    { 0x0AA, "getnodearray" },
    { 0x0AB, "getallnodes" },
    { 0x0AC, "getnodesinradius" },
    { 0x0AD, "getnodesinradiussorted" },
    { 0x0AE, "getclosestnodeinsight" },
    { 0x0AF, "getreflectionlocs" },
    { 0x0B0, "getreflectionreferencelocs" },
    { 0x0B1, "getvehicletracksegment" },
    { 0x0B2, "getvehicletracksegmentarray" },
    { 0x0B3, "getallvehicletracksegments" },
    { 0x0B4, "isarray" },
    { 0x0B5, "isai" },
    { 0x0B6, "issentient" },
    { 0x0B7, "isgodmode" },
    { 0x0B8, "getdebugdvar" },
    { 0x0B9, "getdebugdvarint" },
    { 0x0BA, "getdebugdvarfloat" },
    { 0x0BB, "setsaveddvar" },
    { 0x0BC, "getfreeaicount" },
    { 0x0BD, "getaicount" },
    { 0x0BE, "getaiarray" },
    { 0x0BF, "getaispeciesarray" },
    { 0x0C0, "getspawnerarray" },
    { 0x0C1, "getcorpsearray" },
    { 0x0C2, "getspawnerteamarray" },
    { 0x0C3, "getweaponclipmodel" },
    { 0x0C4, "getbrushmodelcenter" },
    { 0x0C5, "getkeybinding" },
    { 0x0C6, "max" },
    { 0x0C7, "floor" },
    { 0x0C8, "ceil" },
    { 0x0C9, "exp" },
    { 0x0CA, "log" },
    { 0x0CB, "sqrt" },
    { 0x0CC, "squared" },
    { 0x0CD, "clamp" },
    { 0x0CE, "angleclamp" },
    { 0x0CF, "angleclamp180" },
    { 0x0D0, "vectorfromlinetopoint" },
    { 0x0D1, "pointonsegmentnearesttopoint" },
    { 0x0D2, "distance" },
    { 0x0D3, "distance2d" },
    { 0x0D4, "distancesquared" },
    { 0x0D5, "length" },
    { 0x0D6, "lengthsquared" },
    { 0x0D7, "closer" },
    { 0x0D8, "vectordot" },
    { 0x0D9, "visionsetthermal" },
    { 0x0DA, "visionsetpain" },
    { 0x0DB, "endlobby" },
    { 0x0DC, "setac130ambience" },
    { 0x0DD, "getmapcustom" },
    { 0x0DE, "updateskill" },
    { 0x0DF, "spawnsighttrace" },
    { 0x0E0, "incrementcounter" },
    { 0x0E1, "getcountertotal" },
    { 0x0E2, "getlevelticks" },
    { 0x0E3, "perlinnoise2d" },
    { 0x0E4, "calcrockingangles" },
    { 0x0E5, "sethudlighting" },
    { 0x0E6, "reconevent" },
    { 0x0E7, "reconspatialevent" },
    { 0x0E8, "setsunflareposition" },
    { 0x0E9, "createthreatbiasgroup" },
    { 0x0EA, "threatbiasgroupexists" },
    { 0x0EB, "getthreatbias" },
    { 0x0EC, "setthreatbias" },
    { 0x0ED, "setthreatbiasagainstall" },
    { 0x0EE, "setignoremegroup" },
    { 0x0EF, "isenemyteam" },
    { 0x0F0, "objective_additionalentity" },
    { 0x0F1, "objective_state_nomessage" },
    { 0x0F2, "objective_string" },
    { 0x0F3, "objective_string_nomessage" },
    { 0x0F4, "objective_additionalposition" },
    { 0x0F5, "objective_current_nomessage" },
    { 0x0F6, "vectornormalize" },
    { 0x0F7, "vectortoangles" },
    { 0x0F8, "vectortoyaw" },
    { 0x0F9, "vectorlerp" },
    { 0x0FA, "anglestoup" },
    { 0x0FB, "anglestoright" },
    { 0x0FC, "anglestoforward" },
    { 0x0FD, "combineangles" },
    { 0x0FE, "transformmove" },
    { 0x0FF, "issubstr" },
    { 0x100, "isendstr" },
    { 0x101, "getsubstr" },
    { 0x102, "tolower" },
    { 0x103, "strtok" },
    { 0x104, "stricmp" },
    { 0x105, "ambientplay" },
    { 0x106, "getuavstrengthmax" },
    { 0x107, "getuavstrengthlevelneutral" },
    { 0x108, "getuavstrengthlevelshowenemyfastsweep" },
    { 0x109, "getuavstrengthlevelshowenemydirectional" },
    { 0x10A, "blockteamradar" },
    { 0x10B, "unblockteamradar" },
    { 0x10C, "isteamradarblocked" },
    { 0x10D, "getassignedteam" },
    { 0x10E, "setmatchdata" },
    { 0x10F, "getmatchdata" },
    { 0x110, "sendmatchdata" },
    { 0x111, "clearmatchdata" },
    { 0x112, "setmatchdatadef" },
    { 0x113, "setmatchclientip" },
    { 0x114, "setmatchdataid" },
    { 0x115, "setclientmatchdata" },
    { 0x116, "getclientmatchdata" },
    { 0x117, "setclientmatchdatadef" },
    { 0x118, "sendclientmatchdata" },
    { 0x119, "getbuildversion" },
    { 0x11A, "getbuildnumber" },
    { 0x11B, "getsystemtime" },
    { 0x11C, "getmatchrulesdata" },
    { 0x11D, "isusingmatchrulesdata" },
    { 0x11E, "kick" },
    { 0x11F, "issplitscreen" },
    { 0x120, "setmapcenter" },
    { 0x121, "setgameendtime" },
    { 0x122, "visionsetnaked" },
    { 0x123, "visionsetnight" },
    { 0x124, "visionsetmissilecam" },
    { 0x125, "ambientstop" },
    { 0x126, "precachemodel" },
    { 0x127, "precacheshellshock" },
    { 0x128, "precacheitem" },
    { 0x129, "precacheshader" },
    { 0x12A, "precachestring" },
    { 0x12B, "precachemenu" },
    { 0x12C, "precacherumble" },
    { 0x12D, "precachelocationselector" },
    { 0x12E, "precacheleaderboards" },
    { 0x12F, "loadfx" },
    { 0x130, "playfx" },
    { 0x131, "playfxontag" },
    { 0x132, "stopfxontag" },
    { 0x133, "playloopedfx" },
    { 0x134, "spawnfx" },
    { 0x135, "triggerfx" },
    { 0x136, "playfxontagforclients" },
    { 0x137, "setwinningteam" },
    { 0x138, "announcement" },
    { 0x139, "clientannouncement" },
    { 0x13A, "getteamscore" },
    { 0x13B, "setteamscore" },
    { 0x13C, "setclientnamemode" },
    { 0x13D, "updateclientnames" },
    { 0x13E, "getteamplayersalive" },
    { 0x13F, "logprint" },
    { 0x140, "worldentnumber" },
    { 0x141, "obituary" },
    { 0x142, "positionwouldtelefrag" },
    { 0x143, "canspawn" },
    { 0x144, "getstarttime" },
    { 0x145, "precachestatusicon" },
    { 0x146, "precacheheadicon" },
    { 0x147, "precacheminimapicon" },
    { 0x148, "precachempanim" },
    { 0x149, "map_restart" },
    { 0x14A, "exitlevel" },
    { 0x14B, "addtestclient" },
    { 0x14C, "makedvarserverinfo" },
    { 0x14D, "setarchive" },
    { 0x14E, "allclientsprint" },
    { 0x14F, "clientprint" },
    { 0x150, "mapexists" },
    { 0x151, "isvalidgametype" },
    { 0x152, "matchend" },
    { 0x153, "setplayerteamrank" },
    { 0x154, "endparty" },
    { 0x155, "setteamradar" },
    { 0x156, "getteamradar" },
    { 0x157, "setteamradarstrength" },
    { 0x158, "getteamradarstrength" },
    { 0x159, "getuavstrengthmin" },
    { 0x15A, "physicsexplosionsphere" },
    { 0x15B, "physicsexplosioncylinder" },
    { 0x15C, "physicsjolt" },
    { 0x15D, "physicsjitter" },
    { 0x15E, "setexpfog" },
    { 0x15F, "isexplosivedamagemod" },
    { 0x160, "radiusdamage" },
    { 0x161, "setplayerignoreradiusdamage" },
    { 0x162, "glassradiusdamage" },
    { 0x163, "earthquake" },
    { 0x164, "getnumparts" },
    { 0x165, "objective_onentity" },
    { 0x166, "objective_team" },
    { 0x167, "objective_player" },
    { 0x168, "objective_playerteam" },
    { 0x169, "objective_playerenemyteam" },
    { 0x16A, "iprintln" },
    { 0x16B, "iprintlnbold" },
    { 0x16C, "logstring" },
    { 0x16D, "getent" },
    { 0x16E, "getentarray" },
    { 0x16F, "spawnplane" },
    { 0x170, "spawnstruct" },
    { 0x171, "spawnhelicopter" },
    { 0x172, "isalive" },
    { 0x173, "isspawner" },
    { 0x174, "missile_createattractorent" },
    { 0x175, "missile_createattractororigin" },
    { 0x176, "missile_createrepulsorent" },
    { 0x177, "missile_createrepulsororigin" },
    { 0x178, "missile_deleteattractor" },
    { 0x179, "playsoundatpos" },
    { 0x17A, "newhudelem" },
    { 0x17B, "newclienthudelem" },
    { 0x17C, "newteamhudelem" },
    { 0x17D, "resettimeout" },
    { 0x17E, "precachefxteamthermal" },
    { 0x17F, "isplayer" },
    { 0x180, "isplayernumber" },
    { 0x181, "setwinningplayer" },
    { 0x182, "getpartname" },
    { 0x183, "weaponfiretime" },
    { 0x184, "weaponclipsize" },
    { 0x185, "weaponisauto" },
    { 0x186, "weaponissemiauto" },
    { 0x187, "weaponisboltaction" },
    { 0x188, "weaponinheritsperks" },
    { 0x189, "weaponburstcount" },
    { 0x18A, "weapontype" },
    { 0x18B, "weaponclass" },
    { 0x18C, "getnextarraykey" },
    { 0x18D, "sortbydistance" },
    { 0x18E, "tablelookup" },
    { 0x18F, "tablelookupbyrow" },
    { 0x190, "tablelookupistring" },
    { 0x191, "tablelookupistringbyrow" },
    { 0x192, "tablelookuprownum" },
    { 0x193, "getmissileowner" },
    { 0x194, "magicbullet" },
    { 0x195, "getweaponflashtagname" },
    { 0x196, "averagepoint" },
    { 0x197, "averagenormal" },
    { 0x198, "vehicle_getspawnerarray" },
    { 0x199, "playrumbleonposition" },
    { 0x19A, "playrumblelooponposition" },
    { 0x19B, "stopallrumbles" },
    { 0x19C, "soundexists" },
    { 0x19D, "openfile" },
    { 0x19E, "closefile" },
    { 0x19F, "fprintln" },
    { 0x1A0, "fprintfields" },
    { 0x1A1, "freadln" },
    { 0x1A2, "fgetarg" },
    { 0x1A3, "setminimap" },
    { 0x1A4, "setthermalbodymaterial" },
    { 0x1A5, "getarraykeys" },
    { 0x1A6, "getfirstarraykey" },
    { 0x1A7, "getglass" },
    { 0x1A8, "getglassarray" },
    { 0x1A9, "getglassorigin" },
    { 0x1AA, "isglassdestroyed" },
    { 0x1AB, "destroyglass" },
    { 0x1AC, "deleteglass" },
    { 0x1AD, "getentchannelscount" },
    { 0x1AE, "getentchannelname" },
    { 0x1AF, "objective_add" },
    { 0x1B0, "objective_delete" },
    { 0x1B1, "objective_state" },
    { 0x1B2, "objective_icon" },
    { 0x1B3, "objective_position" },
    { 0x1B4, "objective_current" },
    { 0x1B5, "weaponinventorytype" },
    { 0x1B6, "weaponstartammo" },
    { 0x1B7, "weaponmaxammo" },
    { 0x1B8, "weaponaltweaponname" },
    { 0x1B9, "isweaponcliponly" },
    { 0x1BA, "isweapondetonationtimed" },
    { 0x1BB, "weaponhasthermalscope" },
    { 0x1BC, "getvehiclenode" },
    { 0x1BD, "getvehiclenodearray" },
    { 0x1BE, "getallvehiclenodes" },
    { 0x1BF, "getnumvehicles" },
    { 0x1C0, "precachevehicle" },
    { 0x1C1, "spawnvehicle" },
    { 0x1C2, "vehicle_getarray" },
    { 0x1C3, "gettimesincelastpaused" },
    { 0x1C4, "setlasermaterial" },
    { 0x1C5, "precachefxontag" },
    { 0x1C6, "precachetag" },
    { 0x1C7, "precachesound" },
}};

} // namespace xsk::gsc::iw5_pc
