#include "pch.h"

typedef NTSTATUS(WINAPI* NtQueryTimerResolution_t)(ULONG* pMin, ULONG* pMax, ULONG* pCurr);
typedef NTSTATUS(WINAPI* NtSetTimerResolution_t)(ULONG desired, BOOL doSet, ULONG* pCurr);

//
// created by AheadLib
// github:https://github.com/strivexjun/AheadLib-x86-x64
//

#pragma comment( lib, "Shlwapi.lib")

#pragma comment(linker, "/EXPORT:Noname2=AheadLib_Unnamed2,@2,NONAME")
#pragma comment(linker, "/EXPORT:mciExecute=AheadLib_mciExecute,@3")
#pragma comment(linker, "/EXPORT:CloseDriver=AheadLib_CloseDriver,@4")
#pragma comment(linker, "/EXPORT:DefDriverProc=AheadLib_DefDriverProc,@5")
#pragma comment(linker, "/EXPORT:DriverCallback=AheadLib_DriverCallback,@6")
#pragma comment(linker, "/EXPORT:DrvGetModuleHandle=AheadLib_DrvGetModuleHandle,@7")
#pragma comment(linker, "/EXPORT:GetDriverModuleHandle=AheadLib_GetDriverModuleHandle,@8")
#pragma comment(linker, "/EXPORT:OpenDriver=AheadLib_OpenDriver,@9")
#pragma comment(linker, "/EXPORT:PlaySound=AheadLib_PlaySound,@10")
#pragma comment(linker, "/EXPORT:PlaySoundA=AheadLib_PlaySoundA,@11")
#pragma comment(linker, "/EXPORT:PlaySoundW=AheadLib_PlaySoundW,@12")
#pragma comment(linker, "/EXPORT:SendDriverMessage=AheadLib_SendDriverMessage,@13")
#pragma comment(linker, "/EXPORT:WOWAppExit=AheadLib_WOWAppExit,@14")
#pragma comment(linker, "/EXPORT:auxGetDevCapsA=AheadLib_auxGetDevCapsA,@15")
#pragma comment(linker, "/EXPORT:auxGetDevCapsW=AheadLib_auxGetDevCapsW,@16")
#pragma comment(linker, "/EXPORT:auxGetNumDevs=AheadLib_auxGetNumDevs,@17")
#pragma comment(linker, "/EXPORT:auxGetVolume=AheadLib_auxGetVolume,@18")
#pragma comment(linker, "/EXPORT:auxOutMessage=AheadLib_auxOutMessage,@19")
#pragma comment(linker, "/EXPORT:auxSetVolume=AheadLib_auxSetVolume,@20")
#pragma comment(linker, "/EXPORT:joyConfigChanged=AheadLib_joyConfigChanged,@21")
#pragma comment(linker, "/EXPORT:joyGetDevCapsA=AheadLib_joyGetDevCapsA,@22")
#pragma comment(linker, "/EXPORT:joyGetDevCapsW=AheadLib_joyGetDevCapsW,@23")
#pragma comment(linker, "/EXPORT:joyGetNumDevs=AheadLib_joyGetNumDevs,@24")
#pragma comment(linker, "/EXPORT:joyGetPos=AheadLib_joyGetPos,@25")
#pragma comment(linker, "/EXPORT:joyGetPosEx=AheadLib_joyGetPosEx,@26")
#pragma comment(linker, "/EXPORT:joyGetThreshold=AheadLib_joyGetThreshold,@27")
#pragma comment(linker, "/EXPORT:joyReleaseCapture=AheadLib_joyReleaseCapture,@28")
#pragma comment(linker, "/EXPORT:joySetCapture=AheadLib_joySetCapture,@29")
#pragma comment(linker, "/EXPORT:joySetThreshold=AheadLib_joySetThreshold,@30")
#pragma comment(linker, "/EXPORT:mciDriverNotify=AheadLib_mciDriverNotify,@31")
#pragma comment(linker, "/EXPORT:mciDriverYield=AheadLib_mciDriverYield,@32")
#pragma comment(linker, "/EXPORT:mciFreeCommandResource=AheadLib_mciFreeCommandResource,@33")
#pragma comment(linker, "/EXPORT:mciGetCreatorTask=AheadLib_mciGetCreatorTask,@34")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDA=AheadLib_mciGetDeviceIDA,@35")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDA=AheadLib_mciGetDeviceIDFromElementIDA,@36")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDW=AheadLib_mciGetDeviceIDFromElementIDW,@37")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDW=AheadLib_mciGetDeviceIDW,@38")
#pragma comment(linker, "/EXPORT:mciGetDriverData=AheadLib_mciGetDriverData,@39")
#pragma comment(linker, "/EXPORT:mciGetErrorStringA=AheadLib_mciGetErrorStringA,@40")
#pragma comment(linker, "/EXPORT:mciGetErrorStringW=AheadLib_mciGetErrorStringW,@41")
#pragma comment(linker, "/EXPORT:mciGetYieldProc=AheadLib_mciGetYieldProc,@42")
#pragma comment(linker, "/EXPORT:mciLoadCommandResource=AheadLib_mciLoadCommandResource,@43")
#pragma comment(linker, "/EXPORT:mciSendCommandA=AheadLib_mciSendCommandA,@44")
#pragma comment(linker, "/EXPORT:mciSendCommandW=AheadLib_mciSendCommandW,@45")
#pragma comment(linker, "/EXPORT:mciSendStringA=AheadLib_mciSendStringA,@46")
#pragma comment(linker, "/EXPORT:mciSendStringW=AheadLib_mciSendStringW,@47")
#pragma comment(linker, "/EXPORT:mciSetDriverData=AheadLib_mciSetDriverData,@48")
#pragma comment(linker, "/EXPORT:mciSetYieldProc=AheadLib_mciSetYieldProc,@49")
#pragma comment(linker, "/EXPORT:midiConnect=AheadLib_midiConnect,@50")
#pragma comment(linker, "/EXPORT:midiDisconnect=AheadLib_midiDisconnect,@51")
#pragma comment(linker, "/EXPORT:midiInAddBuffer=AheadLib_midiInAddBuffer,@52")
#pragma comment(linker, "/EXPORT:midiInClose=AheadLib_midiInClose,@53")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsA=AheadLib_midiInGetDevCapsA,@54")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsW=AheadLib_midiInGetDevCapsW,@55")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextA=AheadLib_midiInGetErrorTextA,@56")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextW=AheadLib_midiInGetErrorTextW,@57")
#pragma comment(linker, "/EXPORT:midiInGetID=AheadLib_midiInGetID,@58")
#pragma comment(linker, "/EXPORT:midiInGetNumDevs=AheadLib_midiInGetNumDevs,@59")
#pragma comment(linker, "/EXPORT:midiInMessage=AheadLib_midiInMessage,@60")
#pragma comment(linker, "/EXPORT:midiInOpen=AheadLib_midiInOpen,@61")
#pragma comment(linker, "/EXPORT:midiInPrepareHeader=AheadLib_midiInPrepareHeader,@62")
#pragma comment(linker, "/EXPORT:midiInReset=AheadLib_midiInReset,@63")
#pragma comment(linker, "/EXPORT:midiInStart=AheadLib_midiInStart,@64")
#pragma comment(linker, "/EXPORT:midiInStop=AheadLib_midiInStop,@65")
#pragma comment(linker, "/EXPORT:midiInUnprepareHeader=AheadLib_midiInUnprepareHeader,@66")
#pragma comment(linker, "/EXPORT:midiOutCacheDrumPatches=AheadLib_midiOutCacheDrumPatches,@67")
#pragma comment(linker, "/EXPORT:midiOutCachePatches=AheadLib_midiOutCachePatches,@68")
#pragma comment(linker, "/EXPORT:midiOutClose=AheadLib_midiOutClose,@69")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsA=AheadLib_midiOutGetDevCapsA,@70")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsW=AheadLib_midiOutGetDevCapsW,@71")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextA=AheadLib_midiOutGetErrorTextA,@72")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextW=AheadLib_midiOutGetErrorTextW,@73")
#pragma comment(linker, "/EXPORT:midiOutGetID=AheadLib_midiOutGetID,@74")
#pragma comment(linker, "/EXPORT:midiOutGetNumDevs=AheadLib_midiOutGetNumDevs,@75")
#pragma comment(linker, "/EXPORT:midiOutGetVolume=AheadLib_midiOutGetVolume,@76")
#pragma comment(linker, "/EXPORT:midiOutLongMsg=AheadLib_midiOutLongMsg,@77")
#pragma comment(linker, "/EXPORT:midiOutMessage=AheadLib_midiOutMessage,@78")
#pragma comment(linker, "/EXPORT:midiOutOpen=AheadLib_midiOutOpen,@79")
#pragma comment(linker, "/EXPORT:midiOutPrepareHeader=AheadLib_midiOutPrepareHeader,@80")
#pragma comment(linker, "/EXPORT:midiOutReset=AheadLib_midiOutReset,@81")
#pragma comment(linker, "/EXPORT:midiOutSetVolume=AheadLib_midiOutSetVolume,@82")
#pragma comment(linker, "/EXPORT:midiOutShortMsg=AheadLib_midiOutShortMsg,@83")
#pragma comment(linker, "/EXPORT:midiOutUnprepareHeader=AheadLib_midiOutUnprepareHeader,@84")
#pragma comment(linker, "/EXPORT:midiStreamClose=AheadLib_midiStreamClose,@85")
#pragma comment(linker, "/EXPORT:midiStreamOpen=AheadLib_midiStreamOpen,@86")
#pragma comment(linker, "/EXPORT:midiStreamOut=AheadLib_midiStreamOut,@87")
#pragma comment(linker, "/EXPORT:midiStreamPause=AheadLib_midiStreamPause,@88")
#pragma comment(linker, "/EXPORT:midiStreamPosition=AheadLib_midiStreamPosition,@89")
#pragma comment(linker, "/EXPORT:midiStreamProperty=AheadLib_midiStreamProperty,@90")
#pragma comment(linker, "/EXPORT:midiStreamRestart=AheadLib_midiStreamRestart,@91")
#pragma comment(linker, "/EXPORT:midiStreamStop=AheadLib_midiStreamStop,@92")
#pragma comment(linker, "/EXPORT:mixerClose=AheadLib_mixerClose,@93")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsA=AheadLib_mixerGetControlDetailsA,@94")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsW=AheadLib_mixerGetControlDetailsW,@95")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsA=AheadLib_mixerGetDevCapsA,@96")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsW=AheadLib_mixerGetDevCapsW,@97")
#pragma comment(linker, "/EXPORT:mixerGetID=AheadLib_mixerGetID,@98")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsA=AheadLib_mixerGetLineControlsA,@99")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsW=AheadLib_mixerGetLineControlsW,@100")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoA=AheadLib_mixerGetLineInfoA,@101")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoW=AheadLib_mixerGetLineInfoW,@102")
#pragma comment(linker, "/EXPORT:mixerGetNumDevs=AheadLib_mixerGetNumDevs,@103")
#pragma comment(linker, "/EXPORT:mixerMessage=AheadLib_mixerMessage,@104")
#pragma comment(linker, "/EXPORT:mixerOpen=AheadLib_mixerOpen,@105")
#pragma comment(linker, "/EXPORT:mixerSetControlDetails=AheadLib_mixerSetControlDetails,@106")
#pragma comment(linker, "/EXPORT:mmDrvInstall=AheadLib_mmDrvInstall,@107")
#pragma comment(linker, "/EXPORT:mmGetCurrentTask=AheadLib_mmGetCurrentTask,@108")
#pragma comment(linker, "/EXPORT:mmTaskBlock=AheadLib_mmTaskBlock,@109")
#pragma comment(linker, "/EXPORT:mmTaskCreate=AheadLib_mmTaskCreate,@110")
#pragma comment(linker, "/EXPORT:mmTaskSignal=AheadLib_mmTaskSignal,@111")
#pragma comment(linker, "/EXPORT:mmTaskYield=AheadLib_mmTaskYield,@112")
#pragma comment(linker, "/EXPORT:mmioAdvance=AheadLib_mmioAdvance,@113")
#pragma comment(linker, "/EXPORT:mmioAscend=AheadLib_mmioAscend,@114")
#pragma comment(linker, "/EXPORT:mmioClose=AheadLib_mmioClose,@115")
#pragma comment(linker, "/EXPORT:mmioCreateChunk=AheadLib_mmioCreateChunk,@116")
#pragma comment(linker, "/EXPORT:mmioDescend=AheadLib_mmioDescend,@117")
#pragma comment(linker, "/EXPORT:mmioFlush=AheadLib_mmioFlush,@118")
#pragma comment(linker, "/EXPORT:mmioGetInfo=AheadLib_mmioGetInfo,@119")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcA=AheadLib_mmioInstallIOProcA,@120")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcW=AheadLib_mmioInstallIOProcW,@121")
#pragma comment(linker, "/EXPORT:mmioOpenA=AheadLib_mmioOpenA,@122")
#pragma comment(linker, "/EXPORT:mmioOpenW=AheadLib_mmioOpenW,@123")
#pragma comment(linker, "/EXPORT:mmioRead=AheadLib_mmioRead,@124")
#pragma comment(linker, "/EXPORT:mmioRenameA=AheadLib_mmioRenameA,@125")
#pragma comment(linker, "/EXPORT:mmioRenameW=AheadLib_mmioRenameW,@126")
#pragma comment(linker, "/EXPORT:mmioSeek=AheadLib_mmioSeek,@127")
#pragma comment(linker, "/EXPORT:mmioSendMessage=AheadLib_mmioSendMessage,@128")
#pragma comment(linker, "/EXPORT:mmioSetBuffer=AheadLib_mmioSetBuffer,@129")
#pragma comment(linker, "/EXPORT:mmioSetInfo=AheadLib_mmioSetInfo,@130")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCA=AheadLib_mmioStringToFOURCCA,@131")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCW=AheadLib_mmioStringToFOURCCW,@132")
#pragma comment(linker, "/EXPORT:mmioWrite=AheadLib_mmioWrite,@133")
#pragma comment(linker, "/EXPORT:mmsystemGetVersion=AheadLib_mmsystemGetVersion,@134")
#pragma comment(linker, "/EXPORT:sndPlaySoundA=AheadLib_sndPlaySoundA,@135")
#pragma comment(linker, "/EXPORT:sndPlaySoundW=AheadLib_sndPlaySoundW,@136")
#pragma comment(linker, "/EXPORT:timeBeginPeriod=AheadLib_timeBeginPeriod,@137")
#pragma comment(linker, "/EXPORT:timeEndPeriod=AheadLib_timeEndPeriod,@138")
#pragma comment(linker, "/EXPORT:timeGetDevCaps=AheadLib_timeGetDevCaps,@139")
#pragma comment(linker, "/EXPORT:timeGetSystemTime=AheadLib_timeGetSystemTime,@140")
#pragma comment(linker, "/EXPORT:timeGetTime=AheadLib_timeGetTime,@141")
#pragma comment(linker, "/EXPORT:timeKillEvent=AheadLib_timeKillEvent,@142")
#pragma comment(linker, "/EXPORT:timeSetEvent=AheadLib_timeSetEvent,@143")
#pragma comment(linker, "/EXPORT:waveInAddBuffer=AheadLib_waveInAddBuffer,@144")
#pragma comment(linker, "/EXPORT:waveInClose=AheadLib_waveInClose,@145")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsA=AheadLib_waveInGetDevCapsA,@146")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsW=AheadLib_waveInGetDevCapsW,@147")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextA=AheadLib_waveInGetErrorTextA,@148")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextW=AheadLib_waveInGetErrorTextW,@149")
#pragma comment(linker, "/EXPORT:waveInGetID=AheadLib_waveInGetID,@150")
#pragma comment(linker, "/EXPORT:waveInGetNumDevs=AheadLib_waveInGetNumDevs,@151")
#pragma comment(linker, "/EXPORT:waveInGetPosition=AheadLib_waveInGetPosition,@152")
#pragma comment(linker, "/EXPORT:waveInMessage=AheadLib_waveInMessage,@153")
#pragma comment(linker, "/EXPORT:waveInOpen=AheadLib_waveInOpen,@154")
#pragma comment(linker, "/EXPORT:waveInPrepareHeader=AheadLib_waveInPrepareHeader,@155")
#pragma comment(linker, "/EXPORT:waveInReset=AheadLib_waveInReset,@156")
#pragma comment(linker, "/EXPORT:waveInStart=AheadLib_waveInStart,@157")
#pragma comment(linker, "/EXPORT:waveInStop=AheadLib_waveInStop,@158")
#pragma comment(linker, "/EXPORT:waveInUnprepareHeader=AheadLib_waveInUnprepareHeader,@159")
#pragma comment(linker, "/EXPORT:waveOutBreakLoop=AheadLib_waveOutBreakLoop,@160")
#pragma comment(linker, "/EXPORT:waveOutClose=AheadLib_waveOutClose,@161")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsA=AheadLib_waveOutGetDevCapsA,@162")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsW=AheadLib_waveOutGetDevCapsW,@163")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextA=AheadLib_waveOutGetErrorTextA,@164")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextW=AheadLib_waveOutGetErrorTextW,@165")
#pragma comment(linker, "/EXPORT:waveOutGetID=AheadLib_waveOutGetID,@166")
#pragma comment(linker, "/EXPORT:waveOutGetNumDevs=AheadLib_waveOutGetNumDevs,@167")
#pragma comment(linker, "/EXPORT:waveOutGetPitch=AheadLib_waveOutGetPitch,@168")
#pragma comment(linker, "/EXPORT:waveOutGetPlaybackRate=AheadLib_waveOutGetPlaybackRate,@169")
#pragma comment(linker, "/EXPORT:waveOutGetPosition=AheadLib_waveOutGetPosition,@170")
#pragma comment(linker, "/EXPORT:waveOutGetVolume=AheadLib_waveOutGetVolume,@171")
#pragma comment(linker, "/EXPORT:waveOutMessage=AheadLib_waveOutMessage,@172")
#pragma comment(linker, "/EXPORT:waveOutOpen=AheadLib_waveOutOpen,@173")
#pragma comment(linker, "/EXPORT:waveOutPause=AheadLib_waveOutPause,@174")
#pragma comment(linker, "/EXPORT:waveOutPrepareHeader=AheadLib_waveOutPrepareHeader,@175")
#pragma comment(linker, "/EXPORT:waveOutReset=AheadLib_waveOutReset,@176")
#pragma comment(linker, "/EXPORT:waveOutRestart=AheadLib_waveOutRestart,@177")
#pragma comment(linker, "/EXPORT:waveOutSetPitch=AheadLib_waveOutSetPitch,@178")
#pragma comment(linker, "/EXPORT:waveOutSetPlaybackRate=AheadLib_waveOutSetPlaybackRate,@179")
#pragma comment(linker, "/EXPORT:waveOutSetVolume=AheadLib_waveOutSetVolume,@180")
#pragma comment(linker, "/EXPORT:waveOutUnprepareHeader=AheadLib_waveOutUnprepareHeader,@181")
#pragma comment(linker, "/EXPORT:waveOutWrite=AheadLib_waveOutWrite,@182")


extern "C"
{
	PVOID pfnAheadLib_Unnamed2;
	PVOID pfnAheadLib_mciExecute;
	PVOID pfnAheadLib_CloseDriver;
	PVOID pfnAheadLib_DefDriverProc;
	PVOID pfnAheadLib_DriverCallback;
	PVOID pfnAheadLib_DrvGetModuleHandle;
	PVOID pfnAheadLib_GetDriverModuleHandle;
	PVOID pfnAheadLib_OpenDriver;
	PVOID pfnAheadLib_PlaySound;
	PVOID pfnAheadLib_PlaySoundA;
	PVOID pfnAheadLib_PlaySoundW;
	PVOID pfnAheadLib_SendDriverMessage;
	PVOID pfnAheadLib_WOWAppExit;
	PVOID pfnAheadLib_auxGetDevCapsA;
	PVOID pfnAheadLib_auxGetDevCapsW;
	PVOID pfnAheadLib_auxGetNumDevs;
	PVOID pfnAheadLib_auxGetVolume;
	PVOID pfnAheadLib_auxOutMessage;
	PVOID pfnAheadLib_auxSetVolume;
	PVOID pfnAheadLib_joyConfigChanged;
	PVOID pfnAheadLib_joyGetDevCapsA;
	PVOID pfnAheadLib_joyGetDevCapsW;
	PVOID pfnAheadLib_joyGetNumDevs;
	PVOID pfnAheadLib_joyGetPos;
	PVOID pfnAheadLib_joyGetPosEx;
	PVOID pfnAheadLib_joyGetThreshold;
	PVOID pfnAheadLib_joyReleaseCapture;
	PVOID pfnAheadLib_joySetCapture;
	PVOID pfnAheadLib_joySetThreshold;
	PVOID pfnAheadLib_mciDriverNotify;
	PVOID pfnAheadLib_mciDriverYield;
	PVOID pfnAheadLib_mciFreeCommandResource;
	PVOID pfnAheadLib_mciGetCreatorTask;
	PVOID pfnAheadLib_mciGetDeviceIDA;
	PVOID pfnAheadLib_mciGetDeviceIDFromElementIDA;
	PVOID pfnAheadLib_mciGetDeviceIDFromElementIDW;
	PVOID pfnAheadLib_mciGetDeviceIDW;
	PVOID pfnAheadLib_mciGetDriverData;
	PVOID pfnAheadLib_mciGetErrorStringA;
	PVOID pfnAheadLib_mciGetErrorStringW;
	PVOID pfnAheadLib_mciGetYieldProc;
	PVOID pfnAheadLib_mciLoadCommandResource;
	PVOID pfnAheadLib_mciSendCommandA;
	PVOID pfnAheadLib_mciSendCommandW;
	PVOID pfnAheadLib_mciSendStringA;
	PVOID pfnAheadLib_mciSendStringW;
	PVOID pfnAheadLib_mciSetDriverData;
	PVOID pfnAheadLib_mciSetYieldProc;
	PVOID pfnAheadLib_midiConnect;
	PVOID pfnAheadLib_midiDisconnect;
	PVOID pfnAheadLib_midiInAddBuffer;
	PVOID pfnAheadLib_midiInClose;
	PVOID pfnAheadLib_midiInGetDevCapsA;
	PVOID pfnAheadLib_midiInGetDevCapsW;
	PVOID pfnAheadLib_midiInGetErrorTextA;
	PVOID pfnAheadLib_midiInGetErrorTextW;
	PVOID pfnAheadLib_midiInGetID;
	PVOID pfnAheadLib_midiInGetNumDevs;
	PVOID pfnAheadLib_midiInMessage;
	PVOID pfnAheadLib_midiInOpen;
	PVOID pfnAheadLib_midiInPrepareHeader;
	PVOID pfnAheadLib_midiInReset;
	PVOID pfnAheadLib_midiInStart;
	PVOID pfnAheadLib_midiInStop;
	PVOID pfnAheadLib_midiInUnprepareHeader;
	PVOID pfnAheadLib_midiOutCacheDrumPatches;
	PVOID pfnAheadLib_midiOutCachePatches;
	PVOID pfnAheadLib_midiOutClose;
	PVOID pfnAheadLib_midiOutGetDevCapsA;
	PVOID pfnAheadLib_midiOutGetDevCapsW;
	PVOID pfnAheadLib_midiOutGetErrorTextA;
	PVOID pfnAheadLib_midiOutGetErrorTextW;
	PVOID pfnAheadLib_midiOutGetID;
	PVOID pfnAheadLib_midiOutGetNumDevs;
	PVOID pfnAheadLib_midiOutGetVolume;
	PVOID pfnAheadLib_midiOutLongMsg;
	PVOID pfnAheadLib_midiOutMessage;
	PVOID pfnAheadLib_midiOutOpen;
	PVOID pfnAheadLib_midiOutPrepareHeader;
	PVOID pfnAheadLib_midiOutReset;
	PVOID pfnAheadLib_midiOutSetVolume;
	PVOID pfnAheadLib_midiOutShortMsg;
	PVOID pfnAheadLib_midiOutUnprepareHeader;
	PVOID pfnAheadLib_midiStreamClose;
	PVOID pfnAheadLib_midiStreamOpen;
	PVOID pfnAheadLib_midiStreamOut;
	PVOID pfnAheadLib_midiStreamPause;
	PVOID pfnAheadLib_midiStreamPosition;
	PVOID pfnAheadLib_midiStreamProperty;
	PVOID pfnAheadLib_midiStreamRestart;
	PVOID pfnAheadLib_midiStreamStop;
	PVOID pfnAheadLib_mixerClose;
	PVOID pfnAheadLib_mixerGetControlDetailsA;
	PVOID pfnAheadLib_mixerGetControlDetailsW;
	PVOID pfnAheadLib_mixerGetDevCapsA;
	PVOID pfnAheadLib_mixerGetDevCapsW;
	PVOID pfnAheadLib_mixerGetID;
	PVOID pfnAheadLib_mixerGetLineControlsA;
	PVOID pfnAheadLib_mixerGetLineControlsW;
	PVOID pfnAheadLib_mixerGetLineInfoA;
	PVOID pfnAheadLib_mixerGetLineInfoW;
	PVOID pfnAheadLib_mixerGetNumDevs;
	PVOID pfnAheadLib_mixerMessage;
	PVOID pfnAheadLib_mixerOpen;
	PVOID pfnAheadLib_mixerSetControlDetails;
	PVOID pfnAheadLib_mmDrvInstall;
	PVOID pfnAheadLib_mmGetCurrentTask;
	PVOID pfnAheadLib_mmTaskBlock;
	PVOID pfnAheadLib_mmTaskCreate;
	PVOID pfnAheadLib_mmTaskSignal;
	PVOID pfnAheadLib_mmTaskYield;
	PVOID pfnAheadLib_mmioAdvance;
	PVOID pfnAheadLib_mmioAscend;
	PVOID pfnAheadLib_mmioClose;
	PVOID pfnAheadLib_mmioCreateChunk;
	PVOID pfnAheadLib_mmioDescend;
	PVOID pfnAheadLib_mmioFlush;
	PVOID pfnAheadLib_mmioGetInfo;
	PVOID pfnAheadLib_mmioInstallIOProcA;
	PVOID pfnAheadLib_mmioInstallIOProcW;
	PVOID pfnAheadLib_mmioOpenA;
	PVOID pfnAheadLib_mmioOpenW;
	PVOID pfnAheadLib_mmioRead;
	PVOID pfnAheadLib_mmioRenameA;
	PVOID pfnAheadLib_mmioRenameW;
	PVOID pfnAheadLib_mmioSeek;
	PVOID pfnAheadLib_mmioSendMessage;
	PVOID pfnAheadLib_mmioSetBuffer;
	PVOID pfnAheadLib_mmioSetInfo;
	PVOID pfnAheadLib_mmioStringToFOURCCA;
	PVOID pfnAheadLib_mmioStringToFOURCCW;
	PVOID pfnAheadLib_mmioWrite;
	PVOID pfnAheadLib_mmsystemGetVersion;
	PVOID pfnAheadLib_sndPlaySoundA;
	PVOID pfnAheadLib_sndPlaySoundW;
	PVOID pfnAheadLib_timeBeginPeriod;
	PVOID pfnAheadLib_timeEndPeriod;
	PVOID pfnAheadLib_timeGetDevCaps;
	PVOID pfnAheadLib_timeGetSystemTime;
	PVOID pfnAheadLib_timeGetTime;
	PVOID pfnAheadLib_timeKillEvent;
	PVOID pfnAheadLib_timeSetEvent;
	PVOID pfnAheadLib_waveInAddBuffer;
	PVOID pfnAheadLib_waveInClose;
	PVOID pfnAheadLib_waveInGetDevCapsA;
	PVOID pfnAheadLib_waveInGetDevCapsW;
	PVOID pfnAheadLib_waveInGetErrorTextA;
	PVOID pfnAheadLib_waveInGetErrorTextW;
	PVOID pfnAheadLib_waveInGetID;
	PVOID pfnAheadLib_waveInGetNumDevs;
	PVOID pfnAheadLib_waveInGetPosition;
	PVOID pfnAheadLib_waveInMessage;
	PVOID pfnAheadLib_waveInOpen;
	PVOID pfnAheadLib_waveInPrepareHeader;
	PVOID pfnAheadLib_waveInReset;
	PVOID pfnAheadLib_waveInStart;
	PVOID pfnAheadLib_waveInStop;
	PVOID pfnAheadLib_waveInUnprepareHeader;
	PVOID pfnAheadLib_waveOutBreakLoop;
	PVOID pfnAheadLib_waveOutClose;
	PVOID pfnAheadLib_waveOutGetDevCapsA;
	PVOID pfnAheadLib_waveOutGetDevCapsW;
	PVOID pfnAheadLib_waveOutGetErrorTextA;
	PVOID pfnAheadLib_waveOutGetErrorTextW;
	PVOID pfnAheadLib_waveOutGetID;
	PVOID pfnAheadLib_waveOutGetNumDevs;
	PVOID pfnAheadLib_waveOutGetPitch;
	PVOID pfnAheadLib_waveOutGetPlaybackRate;
	PVOID pfnAheadLib_waveOutGetPosition;
	PVOID pfnAheadLib_waveOutGetVolume;
	PVOID pfnAheadLib_waveOutMessage;
	PVOID pfnAheadLib_waveOutOpen;
	PVOID pfnAheadLib_waveOutPause;
	PVOID pfnAheadLib_waveOutPrepareHeader;
	PVOID pfnAheadLib_waveOutReset;
	PVOID pfnAheadLib_waveOutRestart;
	PVOID pfnAheadLib_waveOutSetPitch;
	PVOID pfnAheadLib_waveOutSetPlaybackRate;
	PVOID pfnAheadLib_waveOutSetVolume;
	PVOID pfnAheadLib_waveOutUnprepareHeader;
	PVOID pfnAheadLib_waveOutWrite;
}


static
HMODULE g_OldModule = NULL;

VOID WINAPI Free()
{
	if (g_OldModule)
	{
		FreeLibrary(g_OldModule);
	}
}


BOOL WINAPI Load()
{
	TCHAR tzPath[MAX_PATH];
	TCHAR tzTemp[MAX_PATH * 2];

	GetSystemDirectory(tzPath, MAX_PATH);

	lstrcat(tzPath, TEXT("\\winmm.dll"));

	g_OldModule = LoadLibrary(tzPath);
	if (g_OldModule == NULL)
	{
		wsprintf(tzTemp, TEXT("%s not found"), tzPath);
		MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
		ExitProcess(-2);
	}

	return (g_OldModule != NULL);

}


FARPROC WINAPI GetAddress(PCSTR pszProcName)
{
	FARPROC fpAddress;
	CHAR szProcName[64];
	TCHAR tzTemp[MAX_PATH];

	fpAddress = GetProcAddress(g_OldModule, pszProcName);
	if (fpAddress == NULL)
	{
		if (HIWORD(pszProcName) == 0)
		{
			wsprintfA(szProcName, "#%d", pszProcName);
			pszProcName = szProcName;
		}

		wsprintf(tzTemp, TEXT("function %hs not found"), pszProcName);
		MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
		ExitProcess(-2);
	}
	return fpAddress;
}

BOOL WINAPI Init()
{
	pfnAheadLib_Unnamed2 = GetAddress(MAKEINTRESOURCEA(2));
	pfnAheadLib_mciExecute = GetAddress("mciExecute");
	pfnAheadLib_CloseDriver = GetAddress("CloseDriver");
	pfnAheadLib_DefDriverProc = GetAddress("DefDriverProc");
	pfnAheadLib_DriverCallback = GetAddress("DriverCallback");
	pfnAheadLib_DrvGetModuleHandle = GetAddress("DrvGetModuleHandle");
	pfnAheadLib_GetDriverModuleHandle = GetAddress("GetDriverModuleHandle");
	pfnAheadLib_OpenDriver = GetAddress("OpenDriver");
	pfnAheadLib_PlaySound = GetAddress("PlaySound");
	pfnAheadLib_PlaySoundA = GetAddress("PlaySoundA");
	pfnAheadLib_PlaySoundW = GetAddress("PlaySoundW");
	pfnAheadLib_SendDriverMessage = GetAddress("SendDriverMessage");
	pfnAheadLib_WOWAppExit = GetAddress("WOWAppExit");
	pfnAheadLib_auxGetDevCapsA = GetAddress("auxGetDevCapsA");
	pfnAheadLib_auxGetDevCapsW = GetAddress("auxGetDevCapsW");
	pfnAheadLib_auxGetNumDevs = GetAddress("auxGetNumDevs");
	pfnAheadLib_auxGetVolume = GetAddress("auxGetVolume");
	pfnAheadLib_auxOutMessage = GetAddress("auxOutMessage");
	pfnAheadLib_auxSetVolume = GetAddress("auxSetVolume");
	pfnAheadLib_joyConfigChanged = GetAddress("joyConfigChanged");
	pfnAheadLib_joyGetDevCapsA = GetAddress("joyGetDevCapsA");
	pfnAheadLib_joyGetDevCapsW = GetAddress("joyGetDevCapsW");
	pfnAheadLib_joyGetNumDevs = GetAddress("joyGetNumDevs");
	pfnAheadLib_joyGetPos = GetAddress("joyGetPos");
	pfnAheadLib_joyGetPosEx = GetAddress("joyGetPosEx");
	pfnAheadLib_joyGetThreshold = GetAddress("joyGetThreshold");
	pfnAheadLib_joyReleaseCapture = GetAddress("joyReleaseCapture");
	pfnAheadLib_joySetCapture = GetAddress("joySetCapture");
	pfnAheadLib_joySetThreshold = GetAddress("joySetThreshold");
	pfnAheadLib_mciDriverNotify = GetAddress("mciDriverNotify");
	pfnAheadLib_mciDriverYield = GetAddress("mciDriverYield");
	pfnAheadLib_mciFreeCommandResource = GetAddress("mciFreeCommandResource");
	pfnAheadLib_mciGetCreatorTask = GetAddress("mciGetCreatorTask");
	pfnAheadLib_mciGetDeviceIDA = GetAddress("mciGetDeviceIDA");
	pfnAheadLib_mciGetDeviceIDFromElementIDA = GetAddress("mciGetDeviceIDFromElementIDA");
	pfnAheadLib_mciGetDeviceIDFromElementIDW = GetAddress("mciGetDeviceIDFromElementIDW");
	pfnAheadLib_mciGetDeviceIDW = GetAddress("mciGetDeviceIDW");
	pfnAheadLib_mciGetDriverData = GetAddress("mciGetDriverData");
	pfnAheadLib_mciGetErrorStringA = GetAddress("mciGetErrorStringA");
	pfnAheadLib_mciGetErrorStringW = GetAddress("mciGetErrorStringW");
	pfnAheadLib_mciGetYieldProc = GetAddress("mciGetYieldProc");
	pfnAheadLib_mciLoadCommandResource = GetAddress("mciLoadCommandResource");
	pfnAheadLib_mciSendCommandA = GetAddress("mciSendCommandA");
	pfnAheadLib_mciSendCommandW = GetAddress("mciSendCommandW");
	pfnAheadLib_mciSendStringA = GetAddress("mciSendStringA");
	pfnAheadLib_mciSendStringW = GetAddress("mciSendStringW");
	pfnAheadLib_mciSetDriverData = GetAddress("mciSetDriverData");
	pfnAheadLib_mciSetYieldProc = GetAddress("mciSetYieldProc");
	pfnAheadLib_midiConnect = GetAddress("midiConnect");
	pfnAheadLib_midiDisconnect = GetAddress("midiDisconnect");
	pfnAheadLib_midiInAddBuffer = GetAddress("midiInAddBuffer");
	pfnAheadLib_midiInClose = GetAddress("midiInClose");
	pfnAheadLib_midiInGetDevCapsA = GetAddress("midiInGetDevCapsA");
	pfnAheadLib_midiInGetDevCapsW = GetAddress("midiInGetDevCapsW");
	pfnAheadLib_midiInGetErrorTextA = GetAddress("midiInGetErrorTextA");
	pfnAheadLib_midiInGetErrorTextW = GetAddress("midiInGetErrorTextW");
	pfnAheadLib_midiInGetID = GetAddress("midiInGetID");
	pfnAheadLib_midiInGetNumDevs = GetAddress("midiInGetNumDevs");
	pfnAheadLib_midiInMessage = GetAddress("midiInMessage");
	pfnAheadLib_midiInOpen = GetAddress("midiInOpen");
	pfnAheadLib_midiInPrepareHeader = GetAddress("midiInPrepareHeader");
	pfnAheadLib_midiInReset = GetAddress("midiInReset");
	pfnAheadLib_midiInStart = GetAddress("midiInStart");
	pfnAheadLib_midiInStop = GetAddress("midiInStop");
	pfnAheadLib_midiInUnprepareHeader = GetAddress("midiInUnprepareHeader");
	pfnAheadLib_midiOutCacheDrumPatches = GetAddress("midiOutCacheDrumPatches");
	pfnAheadLib_midiOutCachePatches = GetAddress("midiOutCachePatches");
	pfnAheadLib_midiOutClose = GetAddress("midiOutClose");
	pfnAheadLib_midiOutGetDevCapsA = GetAddress("midiOutGetDevCapsA");
	pfnAheadLib_midiOutGetDevCapsW = GetAddress("midiOutGetDevCapsW");
	pfnAheadLib_midiOutGetErrorTextA = GetAddress("midiOutGetErrorTextA");
	pfnAheadLib_midiOutGetErrorTextW = GetAddress("midiOutGetErrorTextW");
	pfnAheadLib_midiOutGetID = GetAddress("midiOutGetID");
	pfnAheadLib_midiOutGetNumDevs = GetAddress("midiOutGetNumDevs");
	pfnAheadLib_midiOutGetVolume = GetAddress("midiOutGetVolume");
	pfnAheadLib_midiOutLongMsg = GetAddress("midiOutLongMsg");
	pfnAheadLib_midiOutMessage = GetAddress("midiOutMessage");
	pfnAheadLib_midiOutOpen = GetAddress("midiOutOpen");
	pfnAheadLib_midiOutPrepareHeader = GetAddress("midiOutPrepareHeader");
	pfnAheadLib_midiOutReset = GetAddress("midiOutReset");
	pfnAheadLib_midiOutSetVolume = GetAddress("midiOutSetVolume");
	pfnAheadLib_midiOutShortMsg = GetAddress("midiOutShortMsg");
	pfnAheadLib_midiOutUnprepareHeader = GetAddress("midiOutUnprepareHeader");
	pfnAheadLib_midiStreamClose = GetAddress("midiStreamClose");
	pfnAheadLib_midiStreamOpen = GetAddress("midiStreamOpen");
	pfnAheadLib_midiStreamOut = GetAddress("midiStreamOut");
	pfnAheadLib_midiStreamPause = GetAddress("midiStreamPause");
	pfnAheadLib_midiStreamPosition = GetAddress("midiStreamPosition");
	pfnAheadLib_midiStreamProperty = GetAddress("midiStreamProperty");
	pfnAheadLib_midiStreamRestart = GetAddress("midiStreamRestart");
	pfnAheadLib_midiStreamStop = GetAddress("midiStreamStop");
	pfnAheadLib_mixerClose = GetAddress("mixerClose");
	pfnAheadLib_mixerGetControlDetailsA = GetAddress("mixerGetControlDetailsA");
	pfnAheadLib_mixerGetControlDetailsW = GetAddress("mixerGetControlDetailsW");
	pfnAheadLib_mixerGetDevCapsA = GetAddress("mixerGetDevCapsA");
	pfnAheadLib_mixerGetDevCapsW = GetAddress("mixerGetDevCapsW");
	pfnAheadLib_mixerGetID = GetAddress("mixerGetID");
	pfnAheadLib_mixerGetLineControlsA = GetAddress("mixerGetLineControlsA");
	pfnAheadLib_mixerGetLineControlsW = GetAddress("mixerGetLineControlsW");
	pfnAheadLib_mixerGetLineInfoA = GetAddress("mixerGetLineInfoA");
	pfnAheadLib_mixerGetLineInfoW = GetAddress("mixerGetLineInfoW");
	pfnAheadLib_mixerGetNumDevs = GetAddress("mixerGetNumDevs");
	pfnAheadLib_mixerMessage = GetAddress("mixerMessage");
	pfnAheadLib_mixerOpen = GetAddress("mixerOpen");
	pfnAheadLib_mixerSetControlDetails = GetAddress("mixerSetControlDetails");
	pfnAheadLib_mmDrvInstall = GetAddress("mmDrvInstall");
	pfnAheadLib_mmGetCurrentTask = GetAddress("mmGetCurrentTask");
	pfnAheadLib_mmTaskBlock = GetAddress("mmTaskBlock");
	pfnAheadLib_mmTaskCreate = GetAddress("mmTaskCreate");
	pfnAheadLib_mmTaskSignal = GetAddress("mmTaskSignal");
	pfnAheadLib_mmTaskYield = GetAddress("mmTaskYield");
	pfnAheadLib_mmioAdvance = GetAddress("mmioAdvance");
	pfnAheadLib_mmioAscend = GetAddress("mmioAscend");
	pfnAheadLib_mmioClose = GetAddress("mmioClose");
	pfnAheadLib_mmioCreateChunk = GetAddress("mmioCreateChunk");
	pfnAheadLib_mmioDescend = GetAddress("mmioDescend");
	pfnAheadLib_mmioFlush = GetAddress("mmioFlush");
	pfnAheadLib_mmioGetInfo = GetAddress("mmioGetInfo");
	pfnAheadLib_mmioInstallIOProcA = GetAddress("mmioInstallIOProcA");
	pfnAheadLib_mmioInstallIOProcW = GetAddress("mmioInstallIOProcW");
	pfnAheadLib_mmioOpenA = GetAddress("mmioOpenA");
	pfnAheadLib_mmioOpenW = GetAddress("mmioOpenW");
	pfnAheadLib_mmioRead = GetAddress("mmioRead");
	pfnAheadLib_mmioRenameA = GetAddress("mmioRenameA");
	pfnAheadLib_mmioRenameW = GetAddress("mmioRenameW");
	pfnAheadLib_mmioSeek = GetAddress("mmioSeek");
	pfnAheadLib_mmioSendMessage = GetAddress("mmioSendMessage");
	pfnAheadLib_mmioSetBuffer = GetAddress("mmioSetBuffer");
	pfnAheadLib_mmioSetInfo = GetAddress("mmioSetInfo");
	pfnAheadLib_mmioStringToFOURCCA = GetAddress("mmioStringToFOURCCA");
	pfnAheadLib_mmioStringToFOURCCW = GetAddress("mmioStringToFOURCCW");
	pfnAheadLib_mmioWrite = GetAddress("mmioWrite");
	pfnAheadLib_mmsystemGetVersion = GetAddress("mmsystemGetVersion");
	pfnAheadLib_sndPlaySoundA = GetAddress("sndPlaySoundA");
	pfnAheadLib_sndPlaySoundW = GetAddress("sndPlaySoundW");
	pfnAheadLib_timeBeginPeriod = GetAddress("timeBeginPeriod");
	pfnAheadLib_timeEndPeriod = GetAddress("timeEndPeriod");
	pfnAheadLib_timeGetDevCaps = GetAddress("timeGetDevCaps");
	pfnAheadLib_timeGetSystemTime = GetAddress("timeGetSystemTime");
	pfnAheadLib_timeGetTime = GetAddress("timeGetTime");
	pfnAheadLib_timeKillEvent = GetAddress("timeKillEvent");
	pfnAheadLib_timeSetEvent = GetAddress("timeSetEvent");
	pfnAheadLib_waveInAddBuffer = GetAddress("waveInAddBuffer");
	pfnAheadLib_waveInClose = GetAddress("waveInClose");
	pfnAheadLib_waveInGetDevCapsA = GetAddress("waveInGetDevCapsA");
	pfnAheadLib_waveInGetDevCapsW = GetAddress("waveInGetDevCapsW");
	pfnAheadLib_waveInGetErrorTextA = GetAddress("waveInGetErrorTextA");
	pfnAheadLib_waveInGetErrorTextW = GetAddress("waveInGetErrorTextW");
	pfnAheadLib_waveInGetID = GetAddress("waveInGetID");
	pfnAheadLib_waveInGetNumDevs = GetAddress("waveInGetNumDevs");
	pfnAheadLib_waveInGetPosition = GetAddress("waveInGetPosition");
	pfnAheadLib_waveInMessage = GetAddress("waveInMessage");
	pfnAheadLib_waveInOpen = GetAddress("waveInOpen");
	pfnAheadLib_waveInPrepareHeader = GetAddress("waveInPrepareHeader");
	pfnAheadLib_waveInReset = GetAddress("waveInReset");
	pfnAheadLib_waveInStart = GetAddress("waveInStart");
	pfnAheadLib_waveInStop = GetAddress("waveInStop");
	pfnAheadLib_waveInUnprepareHeader = GetAddress("waveInUnprepareHeader");
	pfnAheadLib_waveOutBreakLoop = GetAddress("waveOutBreakLoop");
	pfnAheadLib_waveOutClose = GetAddress("waveOutClose");
	pfnAheadLib_waveOutGetDevCapsA = GetAddress("waveOutGetDevCapsA");
	pfnAheadLib_waveOutGetDevCapsW = GetAddress("waveOutGetDevCapsW");
	pfnAheadLib_waveOutGetErrorTextA = GetAddress("waveOutGetErrorTextA");
	pfnAheadLib_waveOutGetErrorTextW = GetAddress("waveOutGetErrorTextW");
	pfnAheadLib_waveOutGetID = GetAddress("waveOutGetID");
	pfnAheadLib_waveOutGetNumDevs = GetAddress("waveOutGetNumDevs");
	pfnAheadLib_waveOutGetPitch = GetAddress("waveOutGetPitch");
	pfnAheadLib_waveOutGetPlaybackRate = GetAddress("waveOutGetPlaybackRate");
	pfnAheadLib_waveOutGetPosition = GetAddress("waveOutGetPosition");
	pfnAheadLib_waveOutGetVolume = GetAddress("waveOutGetVolume");
	pfnAheadLib_waveOutMessage = GetAddress("waveOutMessage");
	pfnAheadLib_waveOutOpen = GetAddress("waveOutOpen");
	pfnAheadLib_waveOutPause = GetAddress("waveOutPause");
	pfnAheadLib_waveOutPrepareHeader = GetAddress("waveOutPrepareHeader");
	pfnAheadLib_waveOutReset = GetAddress("waveOutReset");
	pfnAheadLib_waveOutRestart = GetAddress("waveOutRestart");
	pfnAheadLib_waveOutSetPitch = GetAddress("waveOutSetPitch");
	pfnAheadLib_waveOutSetPlaybackRate = GetAddress("waveOutSetPlaybackRate");
	pfnAheadLib_waveOutSetVolume = GetAddress("waveOutSetVolume");
	pfnAheadLib_waveOutUnprepareHeader = GetAddress("waveOutUnprepareHeader");
	pfnAheadLib_waveOutWrite = GetAddress("waveOutWrite");
	return TRUE;
}

DWORD WINAPI ThreadProc(LPVOID lpThreadParameter)
{
	HRESULT hr = 0;
	WCHAR ntdll_path[MAX_PATH] = L"";
	HMODULE ntdll_hMod = 0;
	NtQueryTimerResolution_t pfnNtQueryTimerResolution = NULL;
	NtSetTimerResolution_t pfnNtSetTimerResolution = NULL;
	ULONG minRes = 0, maxRes = 0, currRes = 0, desiredRes = 0;
	NTSTATUS ntstatus = 0;

	GetSystemDirectoryW(ntdll_path, MAX_PATH);
	lstrcatW(ntdll_path, L"\\ntdll.dll");
	ntdll_hMod = GetModuleHandleW(ntdll_path);
	if (!ntdll_hMod)
	{
		DWORD w32err = GetLastError();
		hr = HRESULT_FROM_WIN32(w32err);
		goto eof;
	}
	pfnNtQueryTimerResolution = (NtQueryTimerResolution_t)GetProcAddress(ntdll_hMod, "NtQueryTimerResolution");
	if (!pfnNtQueryTimerResolution)
	{
		hr = E_NOTIMPL;
		goto eof;
	}
	pfnNtSetTimerResolution = (NtSetTimerResolution_t)GetProcAddress(ntdll_hMod, "NtSetTimerResolution");
	if (!pfnNtSetTimerResolution)
	{
		hr = E_NOTIMPL;
		goto eof;
	}

	ntstatus = pfnNtQueryTimerResolution(&minRes, &maxRes, &currRes);
	if (ntstatus)
	{
		hr = E_FAIL;
		goto eof;
	}
	// in 100-ns units, 1000000ns = 1ms
	desiredRes = 10000;
	ntstatus = pfnNtSetTimerResolution(desiredRes, TRUE, &currRes);
	if (ntstatus)
	{
		hr = E_FAIL;
		goto eof;
	}
eof:
	return hr;
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);

		if (Load() && Init())
		{
			TCHAR szAppName[MAX_PATH] = TEXT("vmware-vmx.exe");
			TCHAR szCurName[MAX_PATH];

			GetModuleFileName(NULL, szCurName, MAX_PATH);
			PathStripPath(szCurName);

			if (StrCmpI(szCurName, szAppName) == 0)
			{
				// Go!
				HANDLE hThread = CreateThread(NULL, NULL, ThreadProc, NULL, NULL, NULL);
				if (hThread)
				{
					CloseHandle(hThread);
				}
			}
		}
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		Free();
	}

	return TRUE;
}
