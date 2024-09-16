// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/iw5_ps.hpp"

namespace xsk::gsc::iw5_ps
{

extern std::array<std::pair<u16, char const*>, func_count> const func_list
{{
    { 0x001, "createprintchannel" },
    { 0x002, "setprintchannel" },
    { 0x003, "print" },
    { 0x004, "println" },
    { 0x005, "print3d" },
    { 0x006, "line" },
    { 0x007, "precacheturret" },
    { 0x008, "getweaponarray" },
    { 0x009, "spawnturret" },
    { 0x00A, "canspawnturret" },
    { 0x00B, "assert" },
    { 0x00C, "assertex" },
    { 0x00D, "assertmsg" },
    { 0x00E, "isdefined" },
    { 0x00F, "isstring" },
    { 0x010, "setdvar" },
    { 0x011, "setdynamicdvar" },
    { 0x012, "setdvarifuninitialized" },
    { 0x013, "setdevdvar" },
    { 0x014, "setdevdvarifuninitialized" },
    { 0x015, "getdvar" },
    { 0x016, "getdvarint" },
    { 0x017, "getdvarfloat" },
    { 0x018, "getdvarvector" },
    { 0x019, "gettime" },
    { 0x01A, "getentbynum" },
    { 0x01B, "getweaponmodel" },
    { 0x01C, "getweaponhidetags" },
    { 0x01D, "getanimlength" },
    { 0x01E, "animhasnotetrack" },
    { 0x01F, "getnotetracktimes" },
    { 0x020, "spawn" },
    { 0x021, "spawnloopsound" },
    { 0x022, "spawnloopingsound" },
    { 0x023, "bullettrace" },
    { 0x024, "bullettracepassed" },
    { 0x025, "sighttracepassed" },
    { 0x026, "physicstrace" },
    { 0x027, "playerphysicstrace" },
    { 0x028, "getgroundposition" },
    { 0x029, "getmovedelta" },
    { 0x02A, "getangledelta" },
    { 0x02B, "getnorthyaw" },
    { 0x02C, "setnorthyaw" },
    { 0x02D, "setslowmotion" },
    { 0x02E, "randomint" },
    { 0x02F, "randomfloat" },
    { 0x030, "randomintrange" },
    { 0x031, "randomfloatrange" },
    { 0x032, "sin" },
    { 0x033, "cos" },
    { 0x034, "tan" },
    { 0x035, "asin" },
    { 0x036, "acos" },
    { 0x037, "atan" },
    { 0x038, "int" },
    { 0x039, "float" },
    { 0x03A, "abs" },
    { 0x03B, "min" },
    { 0x03C, "max" },
    { 0x03D, "floor" },
    { 0x03E, "ceil" },
    { 0x03F, "exp" },
    { 0x040, "log" },
    { 0x041, "sqrt" },
    { 0x042, "squared" },
    { 0x043, "clamp" },
    { 0x044, "angleclamp" },
    { 0x045, "angleclamp180" },
    { 0x046, "vectorfromlinetopoint" },
    { 0x047, "pointonsegmentnearesttopoint" },
    { 0x048, "distance" },
    { 0x049, "distance2d" },
    { 0x04A, "distancesquared" },
    { 0x04B, "length" },
    { 0x04C, "lengthsquared" },
    { 0x04D, "closer" },
    { 0x04E, "vectordot" },
    { 0x04F, "vectornormalize" },
    { 0x050, "vectortoangles" },
    { 0x051, "vectortoyaw" },
    { 0x052, "vectorlerp" },
    { 0x053, "anglestoup" },
    { 0x054, "anglestoright" },
    { 0x055, "anglestoforward" },
    { 0x056, "combineangles" },
    { 0x057, "transformmove" },
    { 0x058, "issubstr" },
    { 0x059, "isendstr" },
    { 0x05A, "getsubstr" },
    { 0x05B, "tolower" },
    { 0x05C, "strtok" },
    { 0x05D, "stricmp" },
    { 0x05E, "ambientplay" },
    { 0x05F, "ambientstop" },
    { 0x060, "precachemodel" },
    { 0x061, "precacheshellshock" },
    { 0x062, "precacheitem" },
    { 0x063, "precacheshader" },
    { 0x064, "precachestring" },
    { 0x065, "precachemenu" },
    { 0x066, "precacherumble" },
    { 0x067, "precachelocationselector" },
    { 0x068, "precacheleaderboards" },
    { 0x069, "loadfx" },
    { 0x06A, "playfx" },
    { 0x06B, "playfxontag" },
    { 0x06C, "stopfxontag" },
    { 0x06D, "playloopedfx" },
    { 0x06E, "spawnfx" },
    { 0x06F, "triggerfx" },
    { 0x070, "playfxontagforclients" },
    { 0x071, "physicsexplosionsphere" },
    { 0x072, "physicsexplosioncylinder" },
    { 0x073, "physicsjolt" },
    { 0x074, "physicsjitter" },
    { 0x075, "setexpfog" },
    { 0x076, "isexplosivedamagemod" },
    { 0x077, "radiusdamage" },
    { 0x078, "setplayerignoreradiusdamage" },
    { 0x079, "glassradiusdamage" },
    { 0x07A, "earthquake" },
    { 0x07B, "getnumparts" },
    { 0x07C, "getpartname" },
    { 0x07D, "weaponfiretime" },
    { 0x07E, "weaponclipsize" },
    { 0x07F, "weaponisauto" },
    { 0x080, "weaponissemiauto" },
    { 0x081, "weaponisboltaction" },
    { 0x082, "weaponinheritsperks" },
    { 0x083, "weaponburstcount" },
    { 0x084, "weapontype" },
    { 0x085, "weaponclass" },
    { 0x086, "weaponinventorytype" },
    { 0x087, "weaponstartammo" },
    { 0x088, "weaponmaxammo" },
    { 0x089, "weaponaltweaponname" },
    { 0x08A, "isweaponcliponly" },
    { 0x08B, "isweapondetonationtimed" },
    { 0x08C, "weaponhasthermalscope" },
    { 0x08D, "getvehiclenode" },
    { 0x08E, "getvehiclenodearray" },
    { 0x08F, "getallvehiclenodes" },
    { 0x090, "getnumvehicles" },
    { 0x091, "precachevehicle" },
    { 0x092, "spawnvehicle" },
    { 0x093, "vehicle_getarray" },
    { 0x094, "vehicle_getspawnerarray" },
    { 0x095, "playrumbleonposition" },
    { 0x096, "playrumblelooponposition" },
    { 0x097, "stopallrumbles" },
    { 0x098, "soundexists" },
    { 0x099, "openfile" },
    { 0x09A, "closefile" },
    { 0x09B, "fprintln" },
    { 0x09C, "fprintfields" },
    { 0x09D, "freadln" },
    { 0x09E, "fgetarg" },
    { 0x09F, "setminimap" },
    { 0x0A0, "setthermalbodymaterial" },
    { 0x0A1, "getarraykeys" },
    { 0x0A2, "getfirstarraykey" },
    { 0x0A3, "getnextarraykey" },
    { 0x0A4, "sortbydistance" },
    { 0x0A5, "tablelookup" },
    { 0x0A6, "tablelookupbyrow" },
    { 0x0A7, "tablelookupistring" },
    { 0x0A8, "tablelookupistringbyrow" },
    { 0x0A9, "tablelookuprownum" },
    { 0x0AA, "getmissileowner" },
    { 0x0AB, "magicbullet" },
    { 0x0AC, "getweaponflashtagname" },
    { 0x0AD, "averagepoint" },
    { 0x0AE, "averagenormal" },
    { 0x0AF, "getglass" },
    { 0x0B0, "getglassarray" },
    { 0x0B1, "getglassorigin" },
    { 0x0B2, "isglassdestroyed" },
    { 0x0B3, "destroyglass" },
    { 0x0B4, "deleteglass" },
    { 0x0B5, "getentchannelscount" },
    { 0x0B6, "getentchannelname" },
    { 0x0B7, "objective_add" },
    { 0x0B8, "objective_delete" },
    { 0x0B9, "objective_state" },
    { 0x0BA, "objective_icon" },
    { 0x0BB, "objective_position" },
    { 0x0BC, "objective_current" },
    { 0x0BD, "objective_onentity" },
    { 0x0BE, "objective_team" },
    { 0x0BF, "objective_player" },
    { 0x0C0, "objective_playerteam" },
    { 0x0C1, "objective_playerenemyteam" },
    { 0x0C2, "iprintln" },
    { 0x0C3, "iprintlnbold" },
    { 0x0C4, "logstring" },
    { 0x0C5, "getent" },
    { 0x0C6, "getentarray" },
    { 0x0C7, "spawnplane" },
    { 0x0C8, "spawnstruct" },
    { 0x0C9, "spawnhelicopter" },
    { 0x0CA, "isalive" },
    { 0x0CB, "isspawner" },
    { 0x0CC, "missile_createattractorent" },
    { 0x0CD, "missile_createattractororigin" },
    { 0x0CE, "missile_createrepulsorent" },
    { 0x0CF, "missile_createrepulsororigin" },
    { 0x0D0, "missile_deleteattractor" },
    { 0x0D1, "playsoundatpos" },
    { 0x0D2, "newhudelem" },
    { 0x0D3, "newclienthudelem" },
    { 0x0D4, "newteamhudelem" },
    { 0x0D5, "resettimeout" },
    { 0x0D6, "precachefxteamthermal" },
    { 0x0D7, "isplayer" },
    { 0x0D8, "isplayernumber" },
    { 0x0D9, "setwinningplayer" },
    { 0x0DA, "setwinningteam" },
    { 0x0DB, "announcement" },
    { 0x0DC, "clientannouncement" },
    { 0x0DD, "getteamscore" },
    { 0x0DE, "setteamscore" },
    { 0x0DF, "setclientnamemode" },
    { 0x0E0, "updateclientnames" },
    { 0x0E1, "getteamplayersalive" },
    { 0x0E2, "logprint" },
    { 0x0E3, "worldentnumber" },
    { 0x0E4, "obituary" },
    { 0x0E5, "positionwouldtelefrag" },
    { 0x0E6, "canspawn" },
    { 0x0E7, "getstarttime" },
    { 0x0E8, "precachestatusicon" },
    { 0x0E9, "precacheheadicon" },
    { 0x0EA, "precacheminimapicon" },
    { 0x0EB, "precachempanim" },
    { 0x0EC, "map_restart" },
    { 0x0ED, "exitlevel" },
    { 0x0EE, "addtestclient" },
    { 0x0EF, "makedvarserverinfo" },
    { 0x0F0, "setarchive" },
    { 0x0F1, "allclientsprint" },
    { 0x0F2, "clientprint" },
    { 0x0F3, "mapexists" },
    { 0x0F4, "isvalidgametype" },
    { 0x0F5, "matchend" },
    { 0x0F6, "setplayerteamrank" },
    { 0x0F7, "endparty" },
    { 0x0F8, "setteamradar" },
    { 0x0F9, "getteamradar" },
    { 0x0FA, "setteamradarstrength" },
    { 0x0FB, "getteamradarstrength" },
    { 0x0FC, "getuavstrengthmin" },
    { 0x0FD, "getuavstrengthmax" },
    { 0x0FE, "getuavstrengthlevelneutral" },
    { 0x0FF, "getuavstrengthlevelshowenemyfastsweep" },
    { 0x100, "getuavstrengthlevelshowenemydirectional" },
    { 0x101, "blockteamradar" },
    { 0x102, "unblockteamradar" },
    { 0x103, "isteamradarblocked" },
    { 0x104, "getassignedteam" },
    { 0x105, "setmatchdata" },
    { 0x106, "getmatchdata" },
    { 0x107, "sendmatchdata" },
    { 0x108, "clearmatchdata" },
    { 0x109, "setmatchdatadef" },
    { 0x10A, "setmatchclientip" },
    { 0x10B, "setmatchdataid" },
    { 0x10C, "setclientmatchdata" },
    { 0x10D, "getclientmatchdata" },
    { 0x10E, "setclientmatchdatadef" },
    { 0x10F, "sendclientmatchdata" },
    { 0x110, "getbuildversion" },
    { 0x111, "getbuildnumber" },
    { 0x112, "getsystemtime" },
    { 0x113, "getmatchrulesdata" },
    { 0x114, "isusingmatchrulesdata" },
    { 0x115, "kick" },
    { 0x116, "issplitscreen" },
    { 0x117, "setmapcenter" },
    { 0x118, "setgameendtime" },
    { 0x119, "visionsetnaked" },
    { 0x11A, "visionsetnight" },
    { 0x11B, "visionsetmissilecam" },
    { 0x11C, "visionsetthermal" },
    { 0x11D, "visionsetpain" },
    { 0x11E, "endlobby" },
    { 0x11F, "setac130ambience" },
    { 0x120, "getmapcustom" },
    { 0x121, "updateskill" },
    { 0x122, "spawnsighttrace" },
    { 0x123, "incrementcounter" },
    { 0x124, "getcountertotal" },
    { 0x125, "getlevelticks" },
    { 0x126, "perlinnoise2d" },
    { 0x127, "calcrockingangles" },
    { 0x128, "sethudlighting" },
    { 0x129, "reconevent" },
    { 0x12A, "reconspatialevent" },
    { 0x12B, "setsunflareposition" },
    { 0x12C, "createthreatbiasgroup" },
    { 0x12D, "threatbiasgroupexists" },
    { 0x12E, "getthreatbias" },
    { 0x12F, "setthreatbias" },
    { 0x130, "setthreatbiasagainstall" },
    { 0x131, "setignoremegroup" },
    { 0x132, "isenemyteam" },
    { 0x133, "objective_additionalentity" },
    { 0x134, "objective_state_nomessage" },
    { 0x135, "objective_string" },
    { 0x136, "objective_string_nomessage" },
    { 0x137, "objective_additionalposition" },
    { 0x138, "objective_current_nomessage" },
    { 0x139, "objective_additionalcurrent" },
    { 0x13A, "objective_ring" },
    { 0x13B, "objective_setpointertextoverride" },
    { 0x13C, "getnode" },
    { 0x13D, "getnodearray" },
    { 0x13E, "getallnodes" },
    { 0x13F, "getnodesinradius" },
    { 0x140, "getnodesinradiussorted" },
    { 0x141, "getclosestnodeinsight" },
    { 0x142, "getreflectionlocs" },
    { 0x143, "getreflectionreferencelocs" },
    { 0x144, "getvehicletracksegment" },
    { 0x145, "getvehicletracksegmentarray" },
    { 0x146, "getallvehicletracksegments" },
    { 0x147, "isarray" },
    { 0x148, "isai" },
    { 0x149, "issentient" },
    { 0x14A, "isgodmode" },
    { 0x14B, "getdebugdvar" },
    { 0x14C, "getdebugdvarint" },
    { 0x14D, "getdebugdvarfloat" },
    { 0x14E, "setsaveddvar" },
    { 0x14F, "getfreeaicount" },
    { 0x150, "getaicount" },
    { 0x151, "getaiarray" },
    { 0x152, "getaispeciesarray" },
    { 0x153, "getspawnerarray" },
    { 0x154, "getcorpsearray" },
    { 0x155, "getspawnerteamarray" },
    { 0x156, "getweaponclipmodel" },
    { 0x157, "getbrushmodelcenter" },
    { 0x158, "getkeybinding" },
    { 0x159, "getcommandfromkey" },
    { 0x15A, "getsticksconfig" },
    { 0x15B, "weaponfightdist" },
    { 0x15C, "weaponmaxdist" },
    { 0x15D, "isturretactive" },
    { 0x15E, "target_alloc" },
    { 0x15F, "target_flush" },
    { 0x160, "target_set" },
    { 0x161, "target_remove" },
    { 0x162, "target_setshader" },
    { 0x163, "target_setoffscreenshader" },
    { 0x164, "target_isinrect" },
    { 0x165, "target_isincircle" },
    { 0x166, "target_startreticlelockon" },
    { 0x167, "target_clearreticlelockon" },
    { 0x168, "target_getarray" },
    { 0x169, "target_istarget" },
    { 0x16A, "target_setattackmode" },
    { 0x16B, "target_setjavelinonly" },
    { 0x16C, "target_hidefromplayer" },
    { 0x16D, "target_showtoplayer" },
    { 0x16E, "target_setscaledrendermode" },
    { 0x16F, "target_drawcornersonly" },
    { 0x170, "target_drawsquare" },
    { 0x171, "target_drawsingle" },
    { 0x172, "target_setminsize" },
    { 0x173, "target_setmaxsize" },
    { 0x174, "target_setcolor" },
    { 0x175, "target_setdelay" },
    { 0x176, "getstartorigin" },
    { 0x177, "getstartangles" },
    { 0x178, "getcycleoriginoffset" },
    { 0x179, "magicgrenade" },
    { 0x17A, "magicgrenademanual" },
    { 0x17B, "setblur" },
    { 0x17C, "musicplay" },
    { 0x17D, "musicstop" },
    { 0x17E, "soundfade" },
    { 0x17F, "soundsettimescalefactor" },
    { 0x180, "soundresettimescale" },
    { 0x181, "setocclusionpreset" },
    { 0x182, "levelsoundfade" },
    { 0x183, "precachenightvisioncodeassets" },
    { 0x184, "precachedigitaldistortcodeassets" },
    { 0x185, "precacheminimapsentrycodeassets" },
    { 0x186, "savegame" },
    { 0x187, "issavesuccessful" },
    { 0x188, "issaverecentlyloaded" },
    { 0x189, "savegamenocommit" },
    { 0x18A, "commitsave" },
    { 0x18B, "commitwouldbevalid" },
    { 0x18C, "getfxvisibility" },
    { 0x18D, "setculldist" },
    { 0x18E, "getculldist" },
    { 0x18F, "sethalfresparticles" },
    { 0x190, "getmapsunlight" },
    { 0x191, "setsunlight" },
    { 0x192, "resetsunlight" },
    { 0x193, "getmapsundirection" },
    { 0x194, "getmapsunangles" },
    { 0x195, "setsundirection" },
    { 0x196, "lerpsundirection" },
    { 0x197, "lerpsunangles" },
    { 0x198, "resetsundirection" },
    { 0x199, "enableforcedsunshadows" },
    { 0x19A, "enableforcednosunshadows" },
    { 0x19B, "disableforcedsunshadows" },
    { 0x19C, "enableouterspacemodellighting" },
    { 0x19D, "disableouterspacemodellighting" },
    { 0x19E, "remapstage" },
    { 0x19F, "changelevel" },
    { 0x1A0, "missionsuccess" },
    { 0x1A1, "missionfailed" },
    { 0x1A2, "cinematic" },
    { 0x1A3, "cinematicingame" },
    { 0x1A4, "cinematicingamesync" },
    { 0x1A5, "cinematicingameloop" },
    { 0x1A6, "cinematicingameloopresident" },
    { 0x1A7, "iscinematicplaying" },
    { 0x1A8, "stopcinematicingame" },
    { 0x1A9, "pausecinematicingame" },
    { 0x1AA, "drawcompassfriendlies" },
    { 0x1AB, "bulletspread" },
    { 0x1AC, "bullettracer" },
    { 0x1AD, "badplace_delete" },
    { 0x1AE, "badplace_cylinder" },
    { 0x1AF, "badplace_arc" },
    { 0x1B0, "badplace_brush" },
    { 0x1B1, "clearallcorpses" },
    { 0x1B2, "setturretnode" },
    { 0x1B3, "unsetturretnode" },
    { 0x1B4, "setnodepriority" },
    { 0x1B5, "isnodeoccupied" },
    { 0x1B6, "setdebugorigin" },
    { 0x1B7, "setdebugangles" },
    { 0x1B8, "updategamerprofile" },
    { 0x1B9, "updategamerprofileall" },
    { 0x1BA, "clearlocalizedstrings" },
    { 0x1BB, "setphysicsgravitydir" },
    { 0x1BC, "gettimescale" },
    { 0x1BD, "settimescale" },
    { 0x1BE, "setslowmotionview" },
    { 0x1BF, "forcesharedammo" },
    { 0x1C0, "refreshhudcompass" },
    { 0x1C1, "refreshhudammocounter" },
    { 0x1C2, "notifyoncommand" },
    { 0x1C3, "gettimesincelastpaused" },
    { 0x1C4, "setlasermaterial" },
}};

} // namespace xsk::gsc::iw5_ps
