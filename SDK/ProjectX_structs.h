﻿#pragma once

// Name: RL, Version: s4


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Constants
//---------------------------------------------------------------------------

#define CONST_ReservationType_Reconnect                          'Reconnect'
#define CONST_ReservationType_FriendJoin                         'FriendJoin'
#define CONST_ReservationType_JoinPrivateMatch                   'JoinPrivate'
#define CONST_MaxPrivateMatchPasswordLength                      16
#define CONST_MaxPrivateMatchNameLength                          16
#define CONST_InMatchmakingID                                    -2
#define CONST_NumFriendsPerRequest                               100
#define CONST_XpTitleID                                          'XP'
#define CONST_MaxPing                                            1.0f
#define CONST_LocalPlayersBroadcastDelay                         0.1f
#define CONST_ClosedReason_DuplicateLogin                        "DuplicateLogin"
#define CONST_QueueMax                                           100
#define CONST_MatchLog_X_HttpContentType                         "plain/text"
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ProjectX._Types_X.EJoinMatchType
enum class ProjectX_EJoinMatchType : uint8_t
{
	JMT_Public                     = 0,
	JMT_Private                    = 1,
	JMT_LanHost                    = 2,
	JMT_LanGuest                   = 3,
	JMT_MAX                        = 4,

};

// Enum ProjectX._Types_X.ESeverityType
enum class ProjectX_ESeverityType : uint8_t
{
	SeverityType_None              = 0,
	SeverityType_Low               = 1,
	SeverityType_Medium            = 2,
	SeverityType_High              = 3,
	SeverityType_MAX               = 4,

};

// Enum ProjectX._Types_X.EBanType
enum class ProjectX_EBanType : uint8_t
{
	BanType_None                   = 0,
	BanType_Auth                   = 1,
	BanType_Chat                   = 2,
	BanType_Parental               = 3,
	BanType_Club                   = 4,
	BanType_Trade                  = 5,
	BanType_QuitPenalty            = 6,
	BanType_MAX                    = 7,

};

// Enum ProjectX._Types_X.EReservationStatus
enum class ProjectX_EReservationStatus : uint8_t
{
	ReservationStatus_None         = 0,
	ReservationStatus_Reserved     = 1,
	ReservationStatus_Joining      = 2,
	ReservationStatus_InGame       = 3,
	ReservationStatus_MAX          = 4,

};

// Enum ProjectX._Types_X.EConsoleQualityMode
enum class ProjectX_EConsoleQualityMode : uint8_t
{
	ConsoleQualityMode_Performance = 0,
	ConsoleQualityMode_Quality     = 1,
	ConsoleQualityMode_MAX         = 2,

};

// Enum ProjectX.PerCon_X.EPerConStatus
enum class ProjectX_EPerConStatus : uint8_t
{
	PerConStatus_Disabled          = 0,
	PerConStatus_Enabled           = 1,
	PerConStatus_MAX               = 2,

};

// Enum ProjectX._Types_X.EDatabaseEnvironment
enum class ProjectX_EDatabaseEnvironment : uint8_t
{
	DBE_DevLocal                   = 0,
	DBE_Dev                        = 1,
	DBE_Test                       = 2,
	DBE_Production                 = 3,
	DBE_MAX                        = 4,

};

// Enum ProjectX._Types_X.EAxisSign
enum class ProjectX_EAxisSign : uint8_t
{
	AxisSign_None                  = 0,
	AxisSign_Positive              = 1,
	AxisSign_Negative              = 2,
	AxisSign_MAX                   = 3,

};

// Enum ProjectX._Types_X.EButtonPressType
enum class ProjectX_EButtonPressType : uint8_t
{
	BPT_Normal                     = 0,
	BPT_Tap                        = 1,
	BPT_Hold                       = 2,
	BPT_DoubleTap                  = 3,
	BPT_Toggle                     = 4,
	BPT_MAX                        = 5,

};

// Enum ProjectX._Types_X.ERemappable
enum class ProjectX_ERemappable : uint8_t
{
	Remappable_All                 = 0,
	Remappable_Key                 = 1,
	Remappable_Axis                = 2,
	Remappable_KeyTriggerAxis      = 3,
	Remappable_None                = 4,
	Remappable_MAX                 = 5,

};

// Enum ProjectX._Types_X.EPartyMatchmakingRestriction
enum class ProjectX_EPartyMatchmakingRestriction : uint8_t
{
	PMR_NotOriginalAppOwner        = 0,
	PMR_PendingLicenseAgreement    = 1,
	PMR_InMainMenu                 = 2,
	PMR_NotLoggedInPsyNet          = 3,
	PMR_MAX                        = 4,

};

// Enum ProjectX._Types_X.EOnlinePlayerPermission
enum class ProjectX_EOnlinePlayerPermission : uint8_t
{
	OPP_PrivateMatchAdmin          = 0,
	OPP_SuperPrivateMatchAdmin     = 1,
	OPP_MAX                        = 2,

};

// Enum ProjectX._Types_X.EOnlinePlayerRole
enum class ProjectX_EOnlinePlayerRole : uint8_t
{
	OPR_PrivateMatchAdmin          = 0,
	OPR_SuperPrivateMatchAdmin     = 1,
	OPR_MAX                        = 2,

};

// Enum ProjectX.FXActor_X.EFXComponentTarget
enum class ProjectX_EFXComponentTarget : uint8_t
{
	FXComponentTarget_All          = 0,
	FXComponentTarget_Local        = 1,
	FXComponentTarget_NonLocal     = 2,
	FXComponentTarget_MAX          = 3,

};

// Enum ProjectX.FXActor_X.EFXComponentState
enum class ProjectX_EFXComponentState : uint8_t
{
	FXComponentState_Detached      = 0,
	FXComponentState_Attached      = 1,
	FXComponentState_PendingDetach = 2,
	FXComponentState_MAX           = 3,

};

// Enum ProjectX.FXActor_X.EFXLocality
enum class ProjectX_EFXLocality : uint8_t
{
	FXLocality_Controller          = 0,
	FXLocality_AlwaysLocal         = 1,
	FXLocality_NeverLocal          = 2,
	FXLocality_MAX                 = 3,

};

// Enum ProjectX.FXActor_X.EAttachActorLocationUnlockFlags
enum class ProjectX_EAttachActorLocationUnlockFlags : uint8_t
{
	EAALUF_None                    = 0,
	EAALUF_X                       = 1,
	EAALUF_Y                       = 2,
	EAALUF_Z                       = 3,
	EAALUF_MAX                     = 4,

};

// Enum ProjectX.GFxDataCallback_X.EDataCallbackType
enum class ProjectX_EDataCallbackType : uint8_t
{
	DataCallbackType_All           = 0,
	DataCallbackType_Table         = 1,
	DataCallbackType_Row           = 2,
	DataCallbackType_Value         = 3,
	DataCallbackType_MAX           = 4,

};

// Enum ProjectX.MaterialEffect_X.EMaterialEffectStage
enum class ProjectX_EMaterialEffectStage : uint8_t
{
	EFFECT_INACTIVE                = 0,
	EFFECT_FADE_IN                 = 1,
	EFFECT_ACTIVE                  = 2,
	EFFECT_FADE_OUT                = 3,
	EFFECT_MAX                     = 4,

};

// Enum ProjectX.OnlinePlayerRegionRestrictions_X.ERegionRestriction
enum class ProjectX_ERegionRestriction : uint8_t
{
	RegionRestriction_Unknown      = 0,
	RegionRestriction_KeyCrate     = 1,
	RegionRestriction_Trade        = 2,
	RegionRestriction_KeyRocketPassTier = 3,
	RegionRestriction_MAX          = 4,

};

// Enum ProjectX.RegionPing_X.RegionPingResult
enum class ProjectX_ERegionPingResult : uint8_t
{
	PingResult_NotUsable           = 0,
	PingResult_UsingCache          = 1,
	PingResult_UsingSuccessfulPing = 2,
	PingResult_MAX                 = 3,

};

// Enum ProjectX.EpicLogin_X.ELoginMethod
enum class ProjectX_ELoginMethod : uint8_t
{
	LoginMethod_RefreshToken       = 0,
	LoginMethod_PlatformAuthTicket = 1,
	LoginMethod_MAX                = 2,

};

// Enum ProjectX.AnimNodeSeries_X.EAnimNodeSeriesChild
enum class ProjectX_EAnimNodeSeriesChild : uint8_t
{
	AnimNodeSeries_Idle            = 0,
	AnimNodeSeries_Intro           = 1,
	AnimNodeSeries_Loop            = 2,
	AnimNodeSeries_Outro           = 3,
	AnimNodeSeries_MAX             = 4,

};

// Enum ProjectX.BugReport_X.EFileTruncateType
enum class ProjectX_EFileTruncateType : uint8_t
{
	FileTruncate_None              = 0,
	FileTruncate_KeepStart         = 1,
	FileTruncate_KeepEnd           = 2,
	FileTruncate_MAX               = 3,

};

// Enum ProjectX.OnlineGameDLC_X.DLCOwnershipState
enum class ProjectX_EDLCOwnershipState : uint8_t
{
	DLCOwnershipState_Unknown      = 0,
	DLCOwnershipState_Owned        = 1,
	DLCOwnershipState_NotOwned     = 2,
	DLCOwnershipState_Error        = 3,
	DLCOwnershipState_MAX          = 4,

};

// Enum ProjectX.OnlineGameParty_X.PartyProcessingStatus
enum class ProjectX_EPartyProcessingStatus : uint8_t
{
	PPS_None                       = 0,
	PPS_Create                     = 1,
	PPS_Join                       = 2,
	PPS_MAX                        = 3,

};

// Enum ProjectX.WordFilterTypes_X.EWordFilterUsage
enum class ProjectX_EWordFilterUsage : uint8_t
{
	WordFilterUsage_PlayerName     = 0,
	WordFilterUsage_TrainingName   = 1,
	WordFilterUsage_LanServerName  = 2,
	WordFilterUsage_CustomTeamName = 3,
	WordFilterUsage_TourName       = 4,
	WordFilterUsage_TourTeamName   = 5,
	WordFilterUsage_ClubName       = 6,
	WordFilterUsage_ClubTag        = 7,
	WordFilterUsage_ClubMotD       = 8,
	WordFilterUsage_ClubTagPlayerName = 9,
	WordFilterUsage_MatchChat      = 10,
	WordFilterUsage_PartyChat      = 11,
	WordFilterUsage_MAX            = 12,

};

// Enum ProjectX.ReservationsPasswordMessage_X.EPasswordFailureReason
enum class ProjectX_EPasswordFailureReason : uint8_t
{
	PFR_Empty                      = 0,
	PFR_Mismatch                   = 1,
	PFR_MAX                        = 2,

};

// Enum ProjectX.RPC_X.ERPCPriority
enum class ProjectX_ERPCPriority : uint8_t
{
	RPC_Low                        = 0,
	RPC_Medium                     = 1,
	RPC_High                       = 2,
	RPC_MAX                        = 3,

};

// Enum ProjectX.ShakeComponent_X.EShakeReceiver
enum class ProjectX_EShakeReceiver : uint8_t
{
	ShakeReceiver_All              = 0,
	ShakeReceiver_Local            = 1,
	ShakeReceiver_NonLocal         = 2,
	ShakeReceiver_MAX              = 3,

};

// Enum ProjectX.TcpConnection.EWebSocketState
enum class ProjectX_EWebSocketState : uint8_t
{
	WebSocketState_NotRequired     = 0,
	WebSocketState_NeedsHandshake  = 1,
	WebSocketState_Connected       = 2,
	WebSocketState_MAX             = 3,

};

// Enum ProjectX.TcpConnection.ETcpConnectionState
enum class ProjectX_ETcpConnectionState : uint8_t
{
	TcpConnectionState_Invalid     = 0,
	TcpConnectionState_Connecting  = 1,
	TcpConnectionState_Connected   = 2,
	TcpConnectionState_Disconnected = 3,
	TcpConnectionState_MAX         = 4,

};

// Enum ProjectX.WebRequest_X.EWebRequestState
enum class ProjectX_EWebRequestState : uint8_t
{
	WebRequestState_PendingSend    = 0,
	WebRequestState_PendingResponse = 1,
	WebRequestState_Success        = 2,
	WebRequestState_Error          = 3,
	WebRequestState_MAX            = 4,

};

// Enum ProjectX.ClanforgeReservation_X.EReserveState
enum class ProjectX_EReserveState : uint8_t
{
	ReserveState_Unitialized       = 0,
	ReserveState_Unreserved        = 1,
	ReserveState_Reserved          = 2,
	ReserveState_MAX               = 3,

};

// Enum ProjectX.ClubUtil_X.EClubColorChange
enum class ProjectX_EClubColorChange : uint8_t
{
	ClubColorChange_None           = 0,
	ClubColorChange_SwapTeams      = 1,
	ClubColorChange_SwapPrimaryAccent0 = 2,
	ClubColorChange_SwapPrimaryAccent1 = 3,
	ClubColorChange_SwapPrimaryAccent = 4,
	ClubColorChange_WhiteVsBlack   = 5,
	ClubColorChange_Gray1          = 6,
	ClubColorChange_MAX            = 7,

};

// Enum ProjectX._NetworkNextTypes_X.ENetworkNextState
enum class ProjectX_ENetworkNextState : uint8_t
{
	NetworkNextState_Disabled      = 0,
	NetworkNextState_ForceDirect   = 1,
	NetworkNextState_UseDirect     = 2,
	NetworkNextState_UseRoute      = 3,
	NetworkNextState_MAX           = 4,

};

// Enum ProjectX.FakeData_X.FakeDataEnum
enum class ProjectX_EFakeDataEnum : uint8_t
{
	FakeData                       = 0,
	FakeData01                     = 1,
	FakeData02                     = 2,
	FakeData_Count                 = 3,
	FakeData_MAX                   = 4,

};

// Enum ProjectX.DynamicValue_X.EDynamicValueModType
enum class ProjectX_EDynamicValueModType : uint8_t
{
	ModType_Add                    = 0,
	ModType_Multiply               = 1,
	ModType_MultiplyAdd            = 2,
	ModType_Set                    = 3,
	ModType_MAX                    = 4,

};

// Enum ProjectX.EncodeObject_X.EObjectEncoding
enum class ProjectX_EObjectEncoding : uint8_t
{
	OPSE_UObject                   = 0,
	OPSE_Json                      = 1,
	OPSE_MAX                       = 2,

};

// Enum ProjectX.BlogTile_X.ELinkType
enum class ProjectX_ELinkType : uint8_t
{
	LinkType_None                  = 0,
	LinkType_RocketPass            = 1,
	LinkType_Event                 = 2,
	LinkType_MAX                   = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProjectX._Types_X.CheckReservationResponse
// 0x007C
struct FCheckReservationResponse
{
	struct FString                                     IP;                                                        // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0010(0x0010) (NeedCtorLink)
	int                                                Playlist;                                                  // 0x0020(0x0004)
	unsigned char                                      UnknownData_WXSF[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Region;                                                    // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     Host;                                                      // 0x0038(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x0048(0x0004)
	unsigned char                                      UnknownData_0ZUL[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReservationID;                                             // 0x0050(0x0010) (NeedCtorLink)
	struct FString                                     DSConnectToken;                                            // 0x0060(0x0010) (NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                                      // 0x0070(0x0008)
	unsigned long                                      IsServerKey : 1;                                           // 0x0078(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX._Types_X.ServerReservationData
// 0x0080
struct FServerReservationData
{
	struct FString                                     BeaconURL;                                                 // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0010(0x0010) (NeedCtorLink)
	int                                                Playlist;                                                  // 0x0020(0x0004)
	unsigned char                                      UnknownData_HC7G[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Region;                                                    // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     DSRToken;                                                  // 0x0048(0x0010) (NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                                      // 0x0058(0x0008)
	struct FString                                     JoinName;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     JoinPassword;                                              // 0x0070(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.ExplosionHitHandler_X.ContactInformation
// 0x001C
struct FContactInformation
{
	struct FVector                                     ContactLocation;                                           // 0x0000(0x000C) (Transient)
	struct FVector                                     ContactVelocity;                                           // 0x000C(0x000C) (Transient)
	float                                              ContactTime;                                               // 0x0018(0x0004) (Transient)

};

// ScriptStruct ProjectX.FXActor_X.FXActorEventCheck
// 0x000C
struct FFXActorEventCheck
{
	class UFXActorEvent_X*                             Event;                                                     // 0x0000(0x0008)
	unsigned long                                      bHasTicked : 1;                                            // 0x0008(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX.FXActor_X.FXEventSubscription
// 0x0038
struct FFXEventSubscription
{
	class UFXActorEvent_X*                             Event;                                                     // 0x0000(0x0008)
	struct FScriptDelegate                             OnPushed;                                                  // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_30DY[0xC];                                     // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             OnPopped;                                                  // 0x0020(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_E74V[0xC];                                     // 0x0020(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX.FXActor_X.AttachToParameterWithUnlockAxes
// 0x0009
struct FAttachToParameterWithUnlockAxes
{
	struct FName                                       Parameter;                                                 // 0x0000(0x0008) (Edit)
	TEnumAsByte<ProjectX_EAttachActorLocationUnlockFlags> IgnoredAxis;                                               // 0x0008(0x0001) (Edit)

};

// ScriptStruct ProjectX.Camera_X.CameraOrientation
// 0x002C
struct FCameraOrientation
{
	struct FVector                                     Focus;                                                     // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)
	float                                              Distance;                                                  // 0x0018(0x0004)
	float                                              FOV;                                                       // 0x001C(0x0004)
	struct FVector                                     CalculatedLocation;                                        // 0x0020(0x000C)

};

// ScriptStruct ProjectX.Camera_X.CameraKnockBase
// 0x0010
struct FCameraKnockBase
{
	float                                              BlendInTime;                                               // 0x0000(0x0004) (Edit)
	float                                              BlendOutTime;                                              // 0x0004(0x0004) (Edit)
	float                                              Falloff;                                                   // 0x0008(0x0004) (Edit)
	float                                              Time;                                                      // 0x000C(0x0004) (Transient)

};

// ScriptStruct ProjectX.Camera_X.LocationCameraKnock
// 0x000C (0x001C - 0x0010)
struct FLocationCameraKnock : public FCameraKnockBase
{
	struct FVector                                     Amount;                                                    // 0x0010(0x000C) (Edit)

};

// ScriptStruct ProjectX.Camera_X.RotationCameraKnock
// 0x000C (0x001C - 0x0010)
struct FRotationCameraKnock : public FCameraKnockBase
{
	struct FRotator                                    Amount;                                                    // 0x0010(0x000C) (Edit)

};

// ScriptStruct ProjectX.GameInfo_X.PauserData
// 0x000C
struct FPauserData
{
	class APlayerController*                           PC;                                                        // 0x0000(0x0008)
	int                                                PauseNum;                                                  // 0x0008(0x0004)

};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreColumn
// 0x000C
struct FGFxDataStoreColumn
{
	TEnumAsByte<GFxUI_EASType>                         Type;                                                      // 0x0000(0x0001)
	unsigned char                                      UnknownData_KQ6U[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008)

};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreRow
// 0x0018
struct FGFxDataStoreRow
{
	TArray<struct FASValue>                            Values;                                                    // 0x0000(0x0010) (NeedCtorLink)
	class UGFxDataRow_X*                               BoundObject;                                               // 0x0010(0x0008)

};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyRow
// 0x0018
struct FGFxDirtyRow
{
	int                                                RowNum;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownData_WQYG[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               DirtyValues;                                               // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyTable
// 0x0018
struct FGFxDirtyTable
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	TArray<struct FGFxDirtyRow>                        DirtyRows;                                                 // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.GFxEngine_X.DirtyObject
// 0x0014
struct FDirtyObject
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)
	class UProperty*                                   Property;                                                  // 0x0008(0x0008)
	int                                                Index;                                                     // 0x0010(0x0004)

};

// ScriptStruct ProjectX.GFxSoundPack_X.SoundPackSoundRef
// 0x0010
struct FSoundPackSoundRef
{
	class UAkSoundCue*                                 Sound;                                                     // 0x0000(0x0008) (Edit)
	struct FName                                       Name;                                                      // 0x0008(0x0008) (Edit)

};

// ScriptStruct ProjectX.LensFlareComponent_X.LensFlareFloatParamCurve
// 0x0038
struct FLensFlareFloatParamCurve
{
	struct FName                                       MaterialParamName;                                         // 0x0000(0x0008) (Edit)
	int                                                MaterialParamIndex;                                        // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData_GOYZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionFloat                       ValueOverTime;                                             // 0x0010(0x0028) (Edit, Component, NeedCtorLink)

};

// ScriptStruct ProjectX._NetworkNextTypes_X.NetworkNextStats
// 0x0018
struct FNetworkNextStats
{
	struct U_Types_X_FNetStats                         Direct;                                                    // 0x0000(0x000C)
	struct U_Types_X_FNetStats                         Next;                                                      // 0x000C(0x000C)

};

// ScriptStruct ProjectX.OnlineConfig_X.ModifierSubscription
// 0x0038
struct FModifierSubscription
{
	class UClass*                                      ObjClass;                                                  // 0x0000(0x0008)
	struct FScriptDelegate                             OnAdd;                                                     // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_18FV[0xC];                                     // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             OnRemove;                                                  // 0x0020(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MCSF[0xC];                                     // 0x0020(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX.LocalizationConfig_X.LocOverride
// 0x0040
struct FLocOverride
{
	struct FString                                     Section;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Key;                                                       // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Package;                                                   // 0x0030(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.RPC_GetLeaderboardRankForUsersBase_X.GetLeaderboardRankForUserData
// 0x0060
struct FGetLeaderboardRankForUserData
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0010(0x0048) (NeedCtorLink)
	int                                                Value;                                                     // 0x0058(0x0004)
	float                                              MMR;                                                       // 0x005C(0x0004)

};

// ScriptStruct ProjectX.RPC_GetBlockList_X.BlockedListRequestData
// 0x0058
struct FBlockedListRequestData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.PlayerInput_X.RawAxisValue
// 0x0010
struct FRawAxisValue
{
	float                                              Value;                                                     // 0x0000(0x0004)
	unsigned char                                      UnknownData_EADR[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LastFrameChanged[0x8];                                     // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PlayerInput_X.RawAxisValue.LastFrameChanged

};

// ScriptStruct ProjectX.PostProcessManager_X.PPEffectDefaults
// 0x000C
struct FPPEffectDefaults
{
	struct FName                                       EffectName;                                                // 0x0000(0x0008) (Edit, Const)
	unsigned long                                      bEnabled : 1;                                              // 0x0008(0x0001) BIT_FIELD (Edit, Const)

};

// ScriptStruct ProjectX.PostProcessManager_X.PPPersistentEffectDefaults
// 0x001C
struct FPPPersistentEffectDefaults
{
	struct FName                                       EffectName;                                                // 0x0000(0x0008) (Edit, Const)
	struct FName                                       MaterialEffectName;                                        // 0x0008(0x0008) (Edit, Const)
	struct FName                                       MaterialParamName;                                         // 0x0010(0x0008) (Edit, Const)
	float                                              DefaultValue;                                              // 0x0018(0x0004) (Edit, Const)

};

// ScriptStruct ProjectX.PostProcessManager_X.PPChainInfo
// 0x0010
struct FPPChainInfo
{
	struct FName                                       ChainName;                                                 // 0x0000(0x0008) (Edit)
	class UPostProcessChain*                           ChainReference;                                            // 0x0008(0x0008) (Edit)

};

// ScriptStruct ProjectX.PostProcessManager_X.PostProcessOverride
// 0x0184
struct FPostProcessOverride
{
	struct FPostProcessSettings                        Settings;                                                  // 0x0000(0x0168) (NeedCtorLink)
	class APostProcessVolume*                          Volume;                                                    // 0x0168(0x0008)
	struct FName                                       Id;                                                        // 0x0170(0x0008)
	float                                              BlendInTime;                                               // 0x0178(0x0004)
	float                                              BlendOutTime;                                              // 0x017C(0x0004)
	unsigned long                                      bEnabled : 1;                                              // 0x0180(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bDefaultEnabled : 1;                                       // 0x0180(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct ProjectX.PartyMessageQueue_X.PendingMessage
// 0x0020
struct FPendingMessage
{
	struct FUniqueLobbyId                              LobbyId;                                                   // 0x0000(0x0010)
	TArray<struct FString>                             Messages;                                                  // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.Parties_X.PsyNetPartyInfo
// 0x0070
struct FPsyNetPartyInfo
{
	struct FString                                     PartyID;                                                   // 0x0000(0x0010) (NeedCtorLink)
	unsigned char                                      CreatedAt[0x8];                                            // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.Parties_X.PsyNetPartyInfo.CreatedAt
	struct FUniqueNetId                                CreatedByUserId;                                           // 0x0018(0x0048) (NeedCtorLink)
	struct FString                                     JoinID;                                                    // 0x0060(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.Parties_X.PartyInvite
// 0x0078
struct FPartyInvite
{
	struct FUniqueNetId                                UserId;                                                    // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     Username;                                                  // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PartyID;                                                   // 0x0058(0x0010) (NeedCtorLink)
	unsigned char                                      InvitedAt[0x8];                                            // 0x0068(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.Parties_X.PartyInvite.InvitedAt
	unsigned char                                      AcceptedAt[0x8];                                           // 0x0070(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.Parties_X.PartyInvite.AcceptedAt

};

// ScriptStruct ProjectX.PsyNetChannel_X.PendingChannelService
// 0x001C
struct FPendingChannelService
{
	class UPsyNetClientService_X*                      Service;                                                   // 0x0000(0x0008)
	int                                                MessageId;                                                 // 0x0008(0x0004)
	unsigned char                                      UnknownData_7RH4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAsyncTask*                                  Task;                                                      // 0x0010(0x0008)
	float                                              ReceiveTime;                                               // 0x0018(0x0004)

};

// ScriptStruct ProjectX.FXActor_X.FXAttachment
// 0x010C
struct FFXAttachment
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	struct FName                                       SkeletalMeshAttachName;                                    // 0x0008(0x0008) (Edit)
	struct FName                                       SocketOrBoneName;                                          // 0x0010(0x0008) (Edit)
	struct FName                                       AttachToParameter;                                         // 0x0018(0x0008) (Edit, EditConst)
	float                                              AttachDelay;                                               // 0x0020(0x0004) (Edit)
	float                                              DetachDelay;                                               // 0x0024(0x0004) (Edit)
	float                                              LifeTime;                                                  // 0x0028(0x0004) (Edit)
	TEnumAsByte<ProjectX_EFXComponentTarget>           Target;                                                    // 0x002C(0x0001) (Edit)
	unsigned char                                      UnknownData_G7A9[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActorComponent*                             Component;                                                 // 0x0030(0x0008) (Edit, ExportObject, Component, EditInline)
	TArray<class UFXActorEvent_X*>                     AttachAny;                                                 // 0x0038(0x0010) (Edit, NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     DetachAny;                                                 // 0x0048(0x0010) (Edit, NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     AttachAll;                                                 // 0x0058(0x0010) (Edit, NeedCtorLink)
	TArray<class URuntimeParameterBase_X*>             RuntimeParameters;                                         // 0x0068(0x0010) (Edit, NeedCtorLink, EditInline)
	TArray<class UFXAttachmentTraitBase_X*>            Traits;                                                    // 0x0078(0x0010) (Edit, NeedCtorLink, EditInline)
	struct FAttachToParameterWithUnlockAxes            AttachToParameterActor;                                    // 0x0088(0x000C) (Edit)
	unsigned long                                      bCreateDuplicates : 1;                                     // 0x0094(0x0001) BIT_FIELD (Const)
	unsigned long                                      bWantsAttachment : 1;                                      // 0x0094(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bInitializedTraits : 1;                                    // 0x0094(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bExistingComponent : 1;                                    // 0x0094(0x0001) BIT_FIELD (EditorOnly)
	unsigned long                                      bExistingAttachment : 1;                                   // 0x0094(0x0001) BIT_FIELD (EditorOnly)
	float                                              AttachedTime;                                              // 0x0098(0x0004) (Transient)
	TEnumAsByte<ProjectX_EFXComponentState>            State;                                                     // 0x009C(0x0001) (Transient)
	unsigned char                                      UnknownData_L1M8[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WantsAttachmentChangeTime;                                 // 0x00A0(0x0004) (Transient)
	unsigned char                                      UnknownData_SVP1[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      AttachedToMesh;                                            // 0x00A8(0x0008) (ExportObject, Transient, Component, EditInline)
	struct FMatrix                                     RelativeTransform;                                         // 0x00B0(0x0040) (Transient)
	int                                                BoneIndex;                                                 // 0x00F0(0x0004) (Transient)
	unsigned char                                      UnknownData_4HEZ[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      AttachToActor;                                             // 0x00F8(0x0008) (Transient)
	struct FVector                                     OffsetToAttachActor;                                       // 0x0100(0x000C) (Transient)

};

// ScriptStruct ProjectX.ShakeComponent_X.ShakeReceiver
// 0x000C
struct FShakeReceiver
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)
	float                                              Scale;                                                     // 0x0008(0x0004)

};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedParam
// 0x0008
struct FAnimatedParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit)

};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedFloatParam
// 0x0018 (0x0020 - 0x0008)
struct FAnimatedFloatParam : public FAnimatedParam
{
	struct FInterpCurveFloat                           ValueOverTime;                                             // 0x0008(0x0018) (Edit, NeedCtorLink)

};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedLinearColorParam
// 0x0018 (0x0020 - 0x0008)
struct FAnimatedLinearColorParam : public FAnimatedParam
{
	struct FInterpCurveLinearColor                     ValueOverTime;                                             // 0x0008(0x0018) (Edit, NeedCtorLink)

};

// ScriptStruct ProjectX.ReservationBeacon_X.BeaconMessageHandler
// 0x0018
struct FBeaconMessageHandler
{
	class UClass*                                      MessageClass;                                              // 0x0000(0x0008)
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.BugReport_X.BugReportSystemData
// 0x0034
struct FBugReportSystemData
{
	struct FString                                     ComputerName;                                              // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     GameName;                                                  // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     NetMode;                                                   // 0x0020(0x0010) (NeedCtorLink)
	unsigned long                                      bClient : 1;                                               // 0x0030(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX.BugReport_X.BugReportPathData
// 0x0040
struct FBugReportPathData
{
	struct FString                                     OutputPath;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     LogName;                                                   // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     LogPath;                                                   // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     ScreenShotPath;                                            // 0x0030(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.BugReport_X.BugReportDescriptionData
// 0x0050
struct FBugReportDescriptionData
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ShortTitle;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     MetaTitle;                                                 // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Description;                                               // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     Email;                                                     // 0x0040(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.BugReport_X.FileUploadData
// 0x0039
struct FFileUploadData
{
	class UBugReport_X*                                BugReport;                                                 // 0x0000(0x0008)
	struct FString                                     BugID;                                                     // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     Folder;                                                    // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     FilePath;                                                  // 0x0028(0x0010) (NeedCtorLink)
	TEnumAsByte<ProjectX_EFileTruncateType>            TruncateType;                                              // 0x0038(0x0001)

};

// ScriptStruct ProjectX.Camera_X.VectorInterpRate
// 0x0018
struct FVectorInterpRate
{
	float                                              MaxDistance;                                               // 0x0000(0x0004)
	float                                              InterpRate;                                                // 0x0004(0x0004)
	float                                              ForwardScale;                                              // 0x0008(0x0004)
	float                                              BackwardScale;                                             // 0x000C(0x0004)
	float                                              SideScale;                                                 // 0x0010(0x0004)
	float                                              UpDownScale;                                               // 0x0014(0x0004)

};

// ScriptStruct ProjectX._Types_X.PlayerSeasonRewardProgress
// 0x0050
struct FPlayerSeasonRewardProgress
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	int                                                SeasonLevel;                                               // 0x0048(0x0004)
	int                                                SeasonLevelWins;                                           // 0x004C(0x0004)

};

// ScriptStruct ProjectX._Types_X.ClubColorSet
// 0x0008
struct FClubColorSet
{
	unsigned char                                      TeamColorID;                                               // 0x0000(0x0001)
	unsigned char                                      CustomColorID;                                             // 0x0001(0x0001)
	unsigned char                                      UnknownData_1CTR[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bTeamColorSet : 1;                                         // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bCustomColorSet : 1;                                       // 0x0004(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX._Types_X.CustomMatchTeamSettings
// 0x001C
struct FCustomMatchTeamSettings
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FClubColorSet                               Colors;                                                    // 0x0010(0x0008)
	int                                                GameScore;                                                 // 0x0018(0x0004)

};

// ScriptStruct ProjectX._Types_X.CustomMatchSettings
// 0x008C
struct U_Types_X_FCustomMatchSettings
{
	struct FString                                     GameTags;                                                  // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       MapName;                                                   // 0x0010(0x0008)
	unsigned char                                      GameMode;                                                  // 0x0018(0x0001)
	unsigned char                                      UnknownData_0ZSF[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPlayerCount;                                            // 0x001C(0x0004)
	struct FString                                     ServerName;                                                // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Password;                                                  // 0x0030(0x0010) (NeedCtorLink)
	unsigned long                                      bPublic : 1;                                               // 0x0040(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_JGS9[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomMatchTeamSettings                    TeamSettings[0x2];                                         // 0x0048(0x0040) (NeedCtorLink)
	unsigned long                                      bClubServer : 1;                                           // 0x0088(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX.ColorPalette_X.ColorPosition
// 0x0008
struct FColorPosition
{
	int                                                Row;                                                       // 0x0000(0x0004)
	int                                                Column;                                                    // 0x0004(0x0004)

};

// ScriptStruct ProjectX._Types_X.PlayerBinding
// 0x002C
struct FPlayerBinding
{
	struct FName                                       Action;                                                    // 0x0000(0x0008) (DataBinding)
	struct FName                                       Key;                                                       // 0x0008(0x0008) (DataBinding)
	TEnumAsByte<ProjectX_EAxisSign>                    AxisSign;                                                  // 0x0010(0x0001) (DataBinding)
	TEnumAsByte<ProjectX_EButtonPressType>             PressType;                                                 // 0x0011(0x0001) (DataBinding)
	unsigned char                                      UnknownData_HF8I[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x0014(0x0004) (DataBinding)
	unsigned long                                      bRequired : 1;                                             // 0x0018(0x0001) BIT_FIELD (DataBinding)
	TEnumAsByte<ProjectX_ERemappable>                  Remappable;                                                // 0x001C(0x0001)
	unsigned char                                      UnknownData_Y2CG[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PressedTime;                                               // 0x0020(0x0004) (Transient)
	float                                              ReleasedTime;                                              // 0x0024(0x0004) (Transient)
	unsigned long                                      bTapped : 1;                                               // 0x0028(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bToggled : 1;                                              // 0x0028(0x0001) BIT_FIELD (Transient)

};

// ScriptStruct ProjectX.EffectsMap_X.EffectsMapping
// 0x0010
struct FEffectsMapping
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                          // 0x0000(0x0008) (Edit)
	class UParticleSystem*                             Particle;                                                  // 0x0008(0x0008) (Edit)

};

// ScriptStruct ProjectX.EOS_GetAccountsResponse.EOSAccountInfo
// 0x0038
struct FEOSAccountInfo
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Created;                                                   // 0x0010(0x0010) (NeedCtorLink)
	unsigned long                                      Favorite : 1;                                              // 0x0020(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_BL3P[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NickName;                                                  // 0x0028(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.EOS_AccountSummaryResponse.PrivacySettings
// 0x0010
struct FPrivacySettings
{
	struct FString                                     ReceiveInvites;                                            // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.MetricsEvent
// 0x0070
struct FMetricsEvent
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	float                                              TimeSeconds;                                               // 0x0048(0x0004)
	int                                                Version;                                                   // 0x004C(0x0004)
	struct FString                                     EventName;                                                 // 0x0050(0x0010) (NeedCtorLink)
	struct FString                                     EventData;                                                 // 0x0060(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.SkillRating
// 0x0008
struct FSkillRating
{
	float                                              Mu;                                                        // 0x0000(0x0004)
	float                                              Sigma;                                                     // 0x0004(0x0004)

};

// ScriptStruct ProjectX._Types_X.TierSkillRating
// 0x0018 (0x0020 - 0x0008)
struct FTierSkillRating : public FSkillRating
{
	int                                                Tier;                                                      // 0x0008(0x0004)
	int                                                Division;                                                  // 0x000C(0x0004)
	int                                                MatchesPlayed;                                             // 0x0010(0x0004)
	int                                                PlacementMatchesPlayed;                                    // 0x0014(0x0004)
	int                                                WinStreak;                                                 // 0x0018(0x0004)
	float                                              MMR;                                                       // 0x001C(0x0004)

};

// ScriptStruct ProjectX._Types_X.PlaylistSkillRating
// 0x0004 (0x0024 - 0x0020)
struct FPlaylistSkillRating : public FTierSkillRating
{
	int                                                Playlist;                                                  // 0x0020(0x0004)

};

// ScriptStruct ProjectX._Types_X.PlayerSkillRating
// 0x004C (0x0070 - 0x0024)
struct FPlayerSkillRating : public FPlaylistSkillRating
{
	unsigned char                                      UnknownData_CW9T[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0028(0x0048) (NeedCtorLink)

};

// ScriptStruct ProjectX.AddReservationMessagePublic_X.OnlinePlayerMapPrefs
// 0x0068
struct FOnlinePlayerMapPrefs
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	TArray<struct FName>                               MapLikes;                                                  // 0x0048(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                               // 0x0058(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.OnlineGameSkill_X.SkillSyncRequest
// 0x0068
struct FSkillSyncRequest
{
	class URPC_X*                                      RPC;                                                       // 0x0000(0x0008)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0048) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_U9M2[0xC];                                     // 0x0050(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX.BugReport_X.BugReportUploadTask
// 0x00A0
struct FBugReportUploadTask
{
	struct FFileUploadData                             Data;                                                      // 0x0000(0x0040) (NeedCtorLink)
	struct FBugReportSystemData                        SystemData;                                                // 0x0040(0x0038) (NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                               // 0x0078(0x0008)
	struct FString                                     TaskName;                                                  // 0x0080(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Error;                                                     // 0x0090(0x0010) (AlwaysInit, NeedCtorLink)

};

// ScriptStruct ProjectX.CameraStateBlender_X.CameraTransition
// 0x004C
struct FCameraTransition
{
	class UCameraState_X*                              CameraState;                                               // 0x0000(0x0008)
	struct FViewTargetTransitionParams                 BlendParams;                                               // 0x0008(0x0010)
	float                                              RemainingTime;                                             // 0x0018(0x0004)
	struct FCameraOrientation                          SnapshotPOV;                                               // 0x001C(0x002C)
	unsigned long                                      bStarted : 1;                                              // 0x0048(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3
// 0x0028
struct FSteamJsonResponseGetPublisherAppOwnership3
{
	unsigned char                                      AppID[0x8];                                                // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3.AppID
	unsigned char                                      OwnerSteamID[0x8];                                         // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3.OwnerSteamID
	unsigned long                                      OwnsApp : 1;                                               // 0x0010(0x0001) BIT_FIELD
	unsigned long                                      Permanent : 1;                                             // 0x0010(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_4M1G[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TimeStamp;                                                 // 0x0018(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.Parties_X.PsyNetPartyMember
// 0x0080
struct FPsyNetPartyMember
{
	struct FString                                     PartyID;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                UserId;                                                    // 0x0010(0x0048) (NeedCtorLink)
	struct FString                                     Username;                                                  // 0x0058(0x0010) (NeedCtorLink)
	unsigned char                                      JoinedAt[0x8];                                             // 0x0068(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.Parties_X.PsyNetPartyMember.JoinedAt
	struct FString                                     Role;                                                      // 0x0070(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.PartyMessage_LocalPlayers_X.SimplePartyMember
// 0x0058
struct FSimplePartyMember
{
	struct FUniqueNetId                                MemberId;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     MemberName;                                                // 0x0048(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.OnlineGameParty_X.PlaylistRestrictionPlayer
// 0x004C
struct FPlaylistRestrictionPlayer
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	int                                                Tier;                                                      // 0x0048(0x0004)

};

// ScriptStruct ProjectX.OnlineGameReservations_AssignTeamsByParty_X.PartyByTeam
// 0x0050
struct FPartyByTeam
{
	struct FUniqueNetId                                PartyID;                                                   // 0x0000(0x0048) (NeedCtorLink)
	unsigned char                                      Team;                                                      // 0x0048(0x0001)
	unsigned char                                      UnknownData_2YEM[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Size;                                                      // 0x004C(0x0004)

};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedVectorParam
// 0x0018 (0x0020 - 0x0008)
struct FAnimatedVectorParam : public FAnimatedParam
{
	struct FInterpCurveVector                          ValueOverTime;                                             // 0x0008(0x0018) (Edit, NeedCtorLink)

};

// ScriptStruct ProjectX.LocalCache_X.CacheImportCallbackData
// 0x0020
struct FCacheImportCallbackData
{
	struct FPointer                                    Task;                                                      // 0x0000(0x0008) (Native)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FN0Q[0xC];                                     // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX.LocalCache_X.CacheExportCallbackData
// 0x0020
struct FCacheExportCallbackData
{
	struct FPointer                                    Task;                                                      // 0x0000(0x0008) (Native)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NHY9[0xC];                                     // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX._Types_X.RenderProfile
// 0x0028
struct FRenderProfile
{
	float                                              GameThreadTime;                                            // 0x0000(0x0004)
	float                                              RenderThreadTime;                                          // 0x0004(0x0004)
	float                                              GPUTime;                                                   // 0x0008(0x0004)
	float                                              FrameTime;                                                 // 0x000C(0x0004)
	float                                              FPS;                                                       // 0x0010(0x0004)
	float                                              AccumGameThreadTime;                                       // 0x0014(0x0004)
	float                                              AccumRenderThreadTime;                                     // 0x0018(0x0004)
	float                                              AccumGPUTime;                                              // 0x001C(0x0004)
	float                                              AccumFrameTime;                                            // 0x0020(0x0004)
	int                                                NumSamples;                                                // 0x0024(0x0004)

};

// ScriptStruct ProjectX._Types_X.NetStats
// 0x000C
struct U_Types_X_FNetStats
{
	float                                              PingMin;                                                   // 0x0000(0x0004)
	float                                              Jitter;                                                    // 0x0004(0x0004)
	float                                              LossPct;                                                   // 0x0008(0x0004)

};

// ScriptStruct ProjectX.ContentConfig_X.ContentPair
// 0x001C
struct FContentPair
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)
	struct FString                                     Content;                                                   // 0x0008(0x0010) (NeedCtorLink)
	struct FEncryptedKeyIndex                          Index;                                                     // 0x0018(0x0004) (Transient)

};

// ScriptStruct ProjectX._Types_X.CrossplayGroup
// 0x0010
struct FCrossplayGroup
{
	TArray<TEnumAsByte<Core_EOnlinePlatform>>          Platforms;                                                 // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.OnlineMessageComponent_X.OnlineMessageHandler
// 0x0018
struct FOnlineMessageHandler
{
	class UClass*                                      MessageClass;                                              // 0x0000(0x0008)
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.ParameterDispenser_X.NameParamPair
// 0x0010
struct FNameParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	struct FName                                       Value;                                                     // 0x0008(0x0008) (Edit)

};

// ScriptStruct ProjectX.ParameterDispenser_X.FloatParamPair
// 0x000C
struct FFloatParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit)

};

// ScriptStruct ProjectX.ParameterDispenser_X.ActorParamPair
// 0x0010
struct FActorParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	class AActor*                                      Value;                                                     // 0x0008(0x0008) (Edit)

};

// ScriptStruct ProjectX.PlayerInput_X.GamepadDeadzoneSettings
// 0x0010
struct FGamepadDeadzoneSettings
{
	TEnumAsByte<Engine_EInputPlatformType>             Type;                                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData_JUOQ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Key;                                                       // 0x0004(0x0008) (Edit)
	float                                              Deadzone;                                                  // 0x000C(0x0004) (Edit)

};

// ScriptStruct ProjectX.PlayerInput_X.KeyboardAxisBlendSettings
// 0x000C
struct FKeyboardAxisBlendSettings
{
	struct FName                                       Axis;                                                      // 0x0000(0x0008) (Edit)
	float                                              BlendTime;                                                 // 0x0008(0x0004) (Edit)

};

// ScriptStruct ProjectX._Types_X.BindingAction
// 0x0038
struct FBindingAction
{
	struct FName                                       Action;                                                    // 0x0000(0x0008) (DataBinding)
	struct FName                                       Category;                                                  // 0x0008(0x0008) (DataBinding)
	struct FName                                       Axis;                                                      // 0x0010(0x0008) (DataBinding)
	TEnumAsByte<ProjectX_EAxisSign>                    AxisSign;                                                  // 0x0018(0x0001) (DataBinding)
	unsigned char                                      UnknownData_B6CS[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Command;                                                   // 0x0020(0x0010) (NeedCtorLink)
	unsigned long                                      bDisableRemapping : 1;                                     // 0x0030(0x0001) BIT_FIELD
	int                                                Priority;                                                  // 0x0034(0x0004)

};

// ScriptStruct ProjectX.PsyNet_X.PsyNetKeys
// 0x0030
struct FPsyNetKeys
{
	struct FString                                     Environment;                                               // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     PsyNetAuth;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     SteamPublisher;                                            // 0x0020(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.PsyNetMessengerWebSocket_X.QueuedPsyNetMessage
// 0x0014
struct FQueuedPsyNetMessage
{
	class UPsyNetMessage_X*                            Message;                                                   // 0x0000(0x0008)
	class UAsyncTask*                                  Task;                                                      // 0x0008(0x0008)
	float                                              TimeoutTime;                                               // 0x0010(0x0004)

};

// ScriptStruct ProjectX.PsyNetServiceSubscriptions_X.ServiceSubscription
// 0x0020
struct FServiceSubscription
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZXSN[0xC];                                     // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX.RandomStream_X.RandomStream_Mirror
// 0x0004
struct FRandomStream_Mirror
{
	int                                                Seed;                                                      // 0x0000(0x0004) (Edit, Native)

};

// ScriptStruct ProjectX.RPCQueue_X.PendingRPC
// 0x0020
struct FPendingRPC
{
	class URPC_X*                                      RPC;                                                       // 0x0000(0x0008)
	int                                                UniqueId;                                                  // 0x0008(0x0004)
	float                                              CreationTime;                                              // 0x000C(0x0004)
	int                                                Failures;                                                  // 0x0010(0x0004)
	float                                              NextSendTime;                                              // 0x0014(0x0004)
	class UError*                                      PendingError;                                              // 0x0018(0x0008)

};

// ScriptStruct ProjectX.RPCQueue_X.RPCError
// 0x0020
struct FRPCError
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.RPCQueue_X.RPCResponse
// 0x0030
struct FRPCResponse
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownData_QKC9[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRPCError                                   Error;                                                     // 0x0008(0x0020) (NeedCtorLink)
	class URPC_X*                                      Result;                                                    // 0x0028(0x0008)

};

// ScriptStruct ProjectX._Types_X.ServerConnectionInfo
// 0x0040
struct FServerConnectionInfo
{
	struct FString                                     ServerAddress;                                             // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     BeaconAddress;                                             // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     PingAddress;                                               // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0030(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.PresetMutators_X.CategorySettingPair
// 0x0010
struct FCategorySettingPair
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	struct FName                                       Setting;                                                   // 0x0008(0x0008)

};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamPlayerDLCOwnershipState
// 0x0011
struct FSteamPlayerDLCOwnershipState
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	unsigned char                                      AppID[0x8];                                                // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamPlayerDLCOwnershipState.AppID
	TEnumAsByte<ProjectX_EDLCOwnershipState>           State;                                                     // 0x0010(0x0001) (Transient)

};

// ScriptStruct ProjectX.OnlineGameDLC_X.PlayerDLCInfo
// 0x0074
struct FPlayerDLCInfo
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	TArray<struct FSteamPlayerDLCOwnershipState>       DLCs;                                                      // 0x0048(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             ValidationReadyDelegate;                                   // 0x0058(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OAVF[0xC];                                     // 0x0058(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              TimeLastOwnershipRequest;                                  // 0x0070(0x0004) (Transient)

};

// ScriptStruct ProjectX.OnlineGameLeaderboards_X.LeaderboardData
// 0x0080
struct FLeaderboardData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink, DataBinding)
	struct FString                                     UnSanitizedPlayerName;                                     // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0058(0x0010) (NeedCtorLink, DataBinding)
	unsigned long                                      bPsyNetUser : 1;                                           // 0x0068(0x0001) BIT_FIELD (DataBinding)
	int                                                Rank;                                                      // 0x006C(0x0004) (DataBinding)
	int                                                Value;                                                     // 0x0070(0x0004) (DataBinding)
	float                                              MMR;                                                       // 0x0074(0x0004) (DataBinding)
	int                                                Division;                                                  // 0x0078(0x0004) (DataBinding)
	unsigned long                                      bIsPrimaryPlayer : 1;                                      // 0x007C(0x0001) BIT_FIELD (DataBinding)

};

// ScriptStruct ProjectX.OnlineGameLeaderboards_X.CachedLeaderboardData
// 0x0020
struct FCachedLeaderboardData
{
	struct FName                                       LeaderboardId;                                             // 0x0000(0x0008) (Transient)
	TArray<struct FLeaderboardData>                    DataList;                                                  // 0x0008(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      LastLeaderboardSyncTime[0x8];                              // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameLeaderboards_X.CachedLeaderboardData.LastLeaderboardSyncTime

};

// ScriptStruct ProjectX._Types_X.MigrationReservationData
// 0x00E0
struct FMigrationReservationData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                                   // 0x0058(0x0048) (NeedCtorLink)
	TEnumAsByte<ProjectX_EReservationStatus>           Status;                                                    // 0x00A0(0x0001)
	unsigned char                                      UnknownData_3YIT[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bDisableCrossPlay : 1;                                     // 0x00A4(0x0001) BIT_FIELD
	unsigned char                                      Team;                                                      // 0x00A8(0x0001)
	unsigned char                                      UnknownData_6T26[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSkillRating                                Skill;                                                     // 0x00AC(0x0008)
	unsigned char                                      UnknownData_G99M[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               MapLikes;                                                  // 0x00B8(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                               // 0x00C8(0x0010) (NeedCtorLink)
	class UNetworkEncryptionKey*                       SecurityKey;                                               // 0x00D8(0x0008)

};

// ScriptStruct ProjectX._Types_X.ReservationData
// 0x0108
struct FReservationData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                                   // 0x0058(0x0048) (NeedCtorLink)
	TEnumAsByte<ProjectX_EReservationStatus>           Status;                                                    // 0x00A0(0x0001)
	unsigned char                                      UnknownData_AXK1[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeoutTime;                                               // 0x00A4(0x0004)
	unsigned long                                      bDisableCrossPlay : 1;                                     // 0x00A8(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_L3D9[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerReplicationInfo*                      PRI;                                                       // 0x00B0(0x0008)
	unsigned char                                      Team;                                                      // 0x00B8(0x0001)
	unsigned char                                      UnknownData_VQQN[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAddReservationMessage_X*                    ReservationMessage;                                        // 0x00C0(0x0008)
	unsigned char                                      Connection[0x10];                                          // 0x00C8(0x0010) UNKNOWN PROPERTY: InterfaceProperty ProjectX._Types_X.ReservationData.Connection
	unsigned long                                      bIgnoreBeaconDisconnect : 1;                               // 0x00D8(0x0001) BIT_FIELD
	struct FSkillRating                                Skill;                                                     // 0x00DC(0x0008)
	unsigned char                                      UnknownData_KJQG[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               MapLikes;                                                  // 0x00E8(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                               // 0x00F8(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.OnlineGameReservations_X.PendingReservation
// 0x0018
struct FPendingReservation
{
	unsigned char                                      Connection[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty ProjectX.OnlineGameReservations_X.PendingReservation.Connection
	class UAddReservationMessage_X*                    Message;                                                   // 0x0010(0x0008)

};

// ScriptStruct ProjectX.OnlineGameReservations_X.TeamPairHistory
// 0x0094
struct FTeamPairHistory
{
	struct FUniqueNetId                                PartyA;                                                    // 0x0000(0x0048) (NeedCtorLink)
	struct FUniqueNetId                                PartyB;                                                    // 0x0048(0x0048) (NeedCtorLink)
	int                                                Count;                                                     // 0x0090(0x0004)

};

// ScriptStruct ProjectX._Types_X.ReservationPlayerData
// 0x00A0
struct FReservationPlayerData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink)
	float                                              SkillMu;                                                   // 0x0058(0x0004)
	float                                              SkillSigma;                                                // 0x005C(0x0004)
	int                                                Tier;                                                      // 0x0060(0x0004)
	unsigned long                                      bRemotePlayer : 1;                                         // 0x0064(0x0001) BIT_FIELD
	TArray<int>                                        Loadout;                                                   // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapLikes;                                                  // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                               // 0x0088(0x0010) (NeedCtorLink)
	unsigned char                                      ClubID[0x8];                                               // 0x0098(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX._Types_X.ReservationPlayerData.ClubID

};

// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatData
// 0x004C
struct FUploadStatData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	int                                                Value;                                                     // 0x0048(0x0004)

};

// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatDataSet
// 0x0018
struct FUploadStatDataSet
{
	struct FName                                       StatId;                                                    // 0x0000(0x0008)
	TArray<struct FUploadStatData>                     Data;                                                      // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._SharedHelpers.Orientation
// 0x0018
struct FOrientation
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)

};

// ScriptStruct ProjectX._Types_X.JoinMatchSettings
// 0x0020
struct FJoinMatchSettings
{
	TEnumAsByte<ProjectX_EJoinMatchType>               MatchType;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData_YC67[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlaylistId;                                                // 0x0004(0x0004)
	unsigned long                                      bFriendJoin : 1;                                           // 0x0008(0x0001) BIT_FIELD
	unsigned long                                      bMigration : 1;                                            // 0x0008(0x0001) BIT_FIELD
	unsigned long                                      bRankedReconnect : 1;                                      // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_2HDX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Password;                                                  // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.SkillMatchPlayer
// 0x005C
struct FSkillMatchPlayer
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	float                                              PctTimePlayed;                                             // 0x0048(0x0004)
	unsigned long                                      bQuitter : 1;                                              // 0x004C(0x0001) BIT_FIELD
	int                                                PartyID;                                                   // 0x0050(0x0004)
	int                                                Score;                                                     // 0x0054(0x0004)
	int                                                Team;                                                      // 0x0058(0x0004)

};

// ScriptStruct ProjectX._Types_X.PartyJoinMatchSettings
// 0x0068
struct FPartyJoinMatchSettings
{
	struct FString                                     ServerName;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     BeaconAddress;                                             // 0x0010(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0020(0x0004)
	unsigned long                                      bFriendJoin : 1;                                           // 0x0024(0x0001) BIT_FIELD
	struct FString                                     CustomPassword;                                            // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     JoinName;                                                  // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     JoinPassword;                                              // 0x0058(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.PlayerTitleData
// 0x0028
struct FPlayerTitleData
{
	struct FName                                       Id;                                                        // 0x0000(0x0008) (DataBinding)
	struct FString                                     Text;                                                      // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FName                                       Category;                                                  // 0x0018(0x0008)
	struct FColor                                      Color;                                                     // 0x0020(0x0004) (DataBinding)
	struct FColor                                      GlowColor;                                                 // 0x0024(0x0004) (DataBinding)

};

// ScriptStruct ProjectX._Types_X.ActiveServerData
// 0x00C0
struct FActiveServerData
{
	struct FServerReservationData                      Reservation;                                               // 0x0000(0x0080) (NeedCtorLink)
	struct FString                                     BeaconURL;                                                 // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     PingURL;                                                   // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     GameURL;                                                   // 0x00A0(0x0010) (NeedCtorLink)
	struct FString                                     JoinCredentials;                                           // 0x00B0(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.PartyMemberServer
// 0x0054
struct FPartyMemberServer
{
	struct FString                                     ServerName;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     BeaconAddress;                                             // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     CustomPassword;                                            // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     JoinName;                                                  // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     JoinPassword;                                              // 0x0040(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0050(0x0004)

};

// ScriptStruct ProjectX.BugReport_X.BugReportSubmitterData
// 0x0030
struct FBugReportSubmitterData
{
	class APlayerController*                           Submitter;                                                 // 0x0000(0x0008)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (NeedCtorLink)
	struct FVector                                     Location;                                                  // 0x0018(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C)

};

// ScriptStruct ProjectX.EOS_AccountSummaryResponse.AccountSettings
// 0x0010
struct FAccountSettings
{
	struct FPrivacySettings                            Privacy;                                                   // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.EOSMetrics_X.MetricEventJsonStruct
// 0x0010
struct FMetricEventJsonStruct
{
	TArray<class UEOSMetricEvent_X*>                   Events;                                                    // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.EpochTimerTick_X.EpochTimer
// 0x0020
struct FEpochTimer
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MO6E[0xC];                                     // 0x0000(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      EpochTime[0x8];                                            // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.EpochTimerTick_X.EpochTimer.EpochTime

};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreTable
// 0x0080
struct FGFxDataStoreTable
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	TArray<struct FGFxDataStoreColumn>                 Columns;                                                   // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FGFxDataStoreRow>                    Rows;                                                      // 0x0018(0x0010) (NeedCtorLink)
	unsigned long                                      bLevelTransitionPersistent : 1;                            // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_TG2E[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMap_Mirror                                 PrimaryKeyMap;                                             // 0x0030(0x0050) (Native)

};

// ScriptStruct ProjectX.FakeData_X.FakeData1
// 0x0035
struct FFakeData1
{
	struct FString                                     string1;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       name1;                                                     // 0x0010(0x0008)
	unsigned long                                      bool1 : 1;                                                 // 0x0018(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_59QM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      qword1[0x8];                                               // 0x001C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData1.qword1
	float                                              float1;                                                    // 0x0028(0x0004)
	unsigned char                                      byte1;                                                     // 0x002C(0x0001)
	unsigned char                                      UnknownData_BKTL[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                int1;                                                      // 0x0030(0x0004)
	TEnumAsByte<ProjectX_EFakeDataEnum>                enum1;                                                     // 0x0034(0x0001)

};

// ScriptStruct ProjectX.FakeData_X.FakeData2
// 0x0090
struct FFakeData2
{
	struct FFakeData1                                  struct1;                                                   // 0x0000(0x0038) (NeedCtorLink)
	struct FString                                     string1;                                                   // 0x0038(0x0010) (NeedCtorLink)
	struct FName                                       name1;                                                     // 0x0048(0x0008)
	unsigned long                                      bool1 : 1;                                                 // 0x0050(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_TEPD[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      qword1[0x8];                                               // 0x0054(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData2.qword1
	float                                              float1;                                                    // 0x0060(0x0004)
	unsigned char                                      byte1;                                                     // 0x0064(0x0001)
	unsigned char                                      UnknownData_Z2GF[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                int1;                                                      // 0x0068(0x0004)
	TEnumAsByte<ProjectX_EFakeDataEnum>                enum1;                                                     // 0x006C(0x0001)
	unsigned char                                      UnknownData_GUMK[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFakeData1>                          array1;                                                    // 0x0070(0x0010) (NeedCtorLink)
	TArray<struct FString>                             array2;                                                    // 0x0080(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.FakeData_X.FakeData3
// 0x0130
struct FFakeData3
{
	TArray<struct FFakeData2>                          array1;                                                    // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     string1;                                                   // 0x0010(0x0010) (NeedCtorLink)
	struct FFakeData1                                  struct1;                                                   // 0x0020(0x0038) (NeedCtorLink)
	struct FName                                       name1;                                                     // 0x0058(0x0008)
	TArray<struct FFakeData2>                          array2;                                                    // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FFakeData2>                          array3;                                                    // 0x0070(0x0010) (NeedCtorLink)
	unsigned long                                      bool1 : 1;                                                 // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_NDTM[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      qword1[0x8];                                               // 0x0084(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData3.qword1
	float                                              float1;                                                    // 0x0090(0x0004)
	unsigned char                                      byte1;                                                     // 0x0094(0x0001)
	unsigned char                                      UnknownData_9ZU8[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                int1;                                                      // 0x0098(0x0004)
	TEnumAsByte<ProjectX_EFakeDataEnum>                enum1;                                                     // 0x009C(0x0001)
	unsigned char                                      UnknownData_DQNC[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFakeData2                                  struct2;                                                   // 0x00A0(0x0090) (NeedCtorLink)

};

// ScriptStruct ProjectX.FakeData_X.FakeData4
// 0x011D
struct FFakeData4
{
	struct FFakeData2                                  struct2;                                                   // 0x0000(0x0090) (NeedCtorLink)
	TArray<struct FFakeData3>                          array1;                                                    // 0x0090(0x0010) (NeedCtorLink)
	struct FFakeData1                                  struct1;                                                   // 0x00A0(0x0038) (NeedCtorLink)
	TArray<struct FFakeData2>                          array2;                                                    // 0x00D8(0x0010) (NeedCtorLink)
	struct FString                                     string1;                                                   // 0x00E8(0x0010) (NeedCtorLink)
	struct FName                                       name1;                                                     // 0x00F8(0x0008)
	unsigned long                                      bool1 : 1;                                                 // 0x0100(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_68P1[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      qword1[0x8];                                               // 0x0104(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData4.qword1
	float                                              float1;                                                    // 0x0110(0x0004)
	unsigned char                                      byte1;                                                     // 0x0114(0x0001)
	unsigned char                                      UnknownData_RFQ4[0x3];                                     // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                int1;                                                      // 0x0118(0x0004)
	TEnumAsByte<ProjectX_EFakeDataEnum>                enum1;                                                     // 0x011C(0x0001)

};

// ScriptStruct ProjectX._Types_X.PartyMember
// 0x0178
struct FPartyMember
{
	struct FUniqueNetId                                PrimaryMemberId;                                           // 0x0000(0x0048) (NeedCtorLink)
	struct FUniqueNetId                                MemberId;                                                  // 0x0048(0x0048) (NeedCtorLink)
	struct FString                                     MemberName;                                                // 0x0090(0x0010) (NeedCtorLink)
	int                                                MatchmakeRestrictions;                                     // 0x00A0(0x0004)
	int                                                LocalControllerId;                                         // 0x00A4(0x0004)
	TEnumAsByte<Engine_ECrossPlatformChatState>        CrossChatState;                                            // 0x00A8(0x0001)
	unsigned char                                      UnknownData_F5GD[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bDisableCrossPlay : 1;                                     // 0x00AC(0x0001) BIT_FIELD
	struct FUniqueNetId                                TradingMemberId;                                           // 0x00B0(0x0048) (NeedCtorLink)
	struct FGuid                                       TradeId;                                                   // 0x00F8(0x0010)
	unsigned long                                      bReadyToLockTrade : 1;                                     // 0x0108(0x0001) BIT_FIELD
	unsigned long                                      bReadyToConfirmTrade : 1;                                  // 0x0108(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_5WXP[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPartyMemberServer                          Server;                                                    // 0x0110(0x0058) (NeedCtorLink)
	struct FUniqueLobbyId                              PlatformParty;                                             // 0x0168(0x0010)

};

// ScriptStruct ProjectX._Types_X.SkillMatchPartyRating
// 0x0004 (0x0024 - 0x0020)
struct FSkillMatchPartyRating : public FTierSkillRating
{
	int                                                PartyID;                                                   // 0x0020(0x0004)

};

// ScriptStruct ProjectX._Types_X.SkillMatchParty
// 0x0020
struct FSkillMatchParty
{
	int                                                PartyID;                                                   // 0x0000(0x0004)
	float                                              PctTimePlayed;                                             // 0x0004(0x0004)
	unsigned long                                      bQuitter : 1;                                              // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_T71I[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUniqueNetId>                        Players;                                                   // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.SkillMatchData
// 0x001C
struct FSkillMatchData
{
	unsigned char                                      ServerId[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX._Types_X.SkillMatchData.ServerId
	int                                                Playlist;                                                  // 0x0008(0x0004)
	int                                                WinningTeam;                                               // 0x000C(0x0004)
	int                                                Team0Score;                                                // 0x0010(0x0004)
	int                                                Team1Score;                                                // 0x0014(0x0004)
	unsigned long                                      bOverTime : 1;                                             // 0x0018(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX._Types_X.ReplicatedRBStateNoQuat
// 0x0038
struct FReplicatedRBStateNoQuat
{
	float                                              QuatX;                                                     // 0x0000(0x0004)
	float                                              QuatY;                                                     // 0x0004(0x0004)
	float                                              QuatZ;                                                     // 0x0008(0x0004)
	float                                              QuatW;                                                     // 0x000C(0x0004)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)
	struct FVector                                     LinearVelocity;                                            // 0x001C(0x000C)
	struct FVector                                     AngularVelocity;                                           // 0x0028(0x000C)
	unsigned long                                      bSleeping : 1;                                             // 0x0034(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX._Types_X.ReplicatedRBState
// 0x003C
struct FReplicatedRBState
{
	struct FQuat                                       Quaternion;                                                // 0x0000(0x0010)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)
	struct FVector                                     LinearVelocity;                                            // 0x001C(0x000C)
	struct FVector                                     AngularVelocity;                                           // 0x0028(0x000C)
	float                                              Time;                                                      // 0x0034(0x0004)
	unsigned long                                      bSleeping : 1;                                             // 0x0038(0x0001) BIT_FIELD
	unsigned long                                      bNewData : 1;                                              // 0x0038(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX._Types_X.PlaylistTierSkillRating
// 0x0004 (0x0024 - 0x0020)
struct FPlaylistTierSkillRating : public FTierSkillRating
{
	int                                                Playlist;                                                  // 0x0020(0x0004)

};

// ScriptStruct ProjectX._Types_X.UpdatedPlayerSkillRating
// 0x0010 (0x0080 - 0x0070)
struct FUpdatedPlayerSkillRating : public FPlayerSkillRating
{
	float                                              PrevMu;                                                    // 0x0070(0x0004)
	float                                              PrevSigma;                                                 // 0x0074(0x0004)
	int                                                PrevTier;                                                  // 0x0078(0x0004)
	int                                                PrevDivision;                                              // 0x007C(0x0004)

};

// ScriptStruct ProjectX._Types_X.CachedRegionPing
// 0x000C
struct FCachedRegionPing
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	float                                              Ping;                                                      // 0x0008(0x0004)

};

// ScriptStruct ProjectX._Types_X.PlayerTitleCategory
// 0x0028
struct FPlayerTitleCategory
{
	struct FName                                       Id;                                                        // 0x0000(0x0008)
	struct FString                                     Color;                                                     // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     GlowColor;                                                 // 0x0018(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.IntVector3
// 0x000C
struct FIntVector3
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit)
	int                                                Z;                                                         // 0x0008(0x0004) (Edit)

};

// ScriptStruct ProjectX._Types_X.DownloadedImage
// 0x0018
struct FDownloadedImage
{
	struct FString                                     URL;                                                       // 0x0000(0x0010) (NeedCtorLink)
	class UTexture2DDynamic*                           Texture;                                                   // 0x0010(0x0008)

};

// ScriptStruct ProjectX._Types_X.ClubMember
// 0x0058
struct FClubMember
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.PlayerPermissionsList
// 0x0058
struct FPlayerPermissionsList
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	TArray<TEnumAsByte<ProjectX_EOnlinePlayerPermission>> Permissions;                                               // 0x0048(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.EngineShare_X.DynamicallyLoadedPackage
// 0x0020
struct FDynamicallyLoadedPackage
{
	struct FString                                     Tag;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     PackageName;                                               // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.OnlineClubProvider_X.PlayerClubSyncResult
// 0x0050
struct FPlayerClubSyncResult
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	class UError*                                      Error;                                                     // 0x0048(0x0008)

};

// ScriptStruct ProjectX.WebCache_X.CachedDataRequest
// 0x0050
struct FCachedDataRequest
{
	struct FString                                     URL;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Path;                                                      // 0x0010(0x0010) (NeedCtorLink)
	class UStringMap*                                  Headers;                                                   // 0x0020(0x0008) (ExportObject, Component, EditInline)
	class UCachedWebData_X*                            CachedWebData;                                             // 0x0028(0x0008)
	unsigned long                                      bZipResponse : 1;                                          // 0x0030(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_118Q[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0XYG[0xC];                                     // 0x0034(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX.OnlineGameWordFilterProcessor_X.WordFilterRequest
// 0x0040
struct FWordFilterRequest
{
	class UWebRequest_X*                               Request;                                                   // 0x0000(0x0008)
	struct FString                                     Comment;                                                   // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     Sanitized;                                                 // 0x0018(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0028(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Z0FU[0xC];                                     // 0x0028(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX.RPC_GetGameServerPingList_X.GetGameServerPingListData
// 0x0048
struct FGetGameServerPingListData
{
	struct FString                                     Region;                                                    // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     IP;                                                        // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Host;                                                      // 0x0020(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x0030(0x0004)
	unsigned char                                      UnknownData_7S1U[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Address;                                                   // 0x0038(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.RPC_GetPopulation_X.GetPopulationData
// 0x0008
struct FGetPopulationData
{
	int                                                Playlist;                                                  // 0x0000(0x0004)
	int                                                PlayerCount;                                               // 0x0004(0x0004)

};

// ScriptStruct ProjectX.SystemMetrics_X.OSMetrics
// 0x0020
struct FOSMetrics
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Bits;                                                      // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.SystemMetrics_X.CpuMetrics
// 0x0040
struct FCpuMetrics
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Desc;                                                      // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Cores;                                                     // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Threads;                                                   // 0x0030(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.SystemMetrics_X.MemoryMetrics
// 0x0004
struct FMemoryMetrics
{
	float                                              Physical;                                                  // 0x0000(0x0004)

};

// ScriptStruct ProjectX.SystemMetrics_X.VideoCardMetrics
// 0x0014
struct FVideoCardMetrics
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (NeedCtorLink)
	int                                                RAM;                                                       // 0x0010(0x0004)

};

// ScriptStruct ProjectX.SystemMetrics_X.NetworkAdapterMetrics
// 0x0010
struct FNetworkAdapterMetrics
{
	TArray<struct FString>                             Types;                                                     // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardBaseData
// 0x0060
struct FGetLeaderboardBaseData
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0010(0x0048) (NeedCtorLink)
	int                                                Value;                                                     // 0x0058(0x0004)
	float                                              MMR;                                                       // 0x005C(0x0004)

};

// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardPlatformBaseData
// 0x0020
struct FGetLeaderboardPlatformBaseData
{
	struct FString                                     Platform;                                                  // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FGetLeaderboardBaseData>             Players;                                                   // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.MatchPlayerData_X.MatchSkillUpdate
// 0x0024
struct FMatchSkillUpdate
{
	unsigned long                                      bValid : 1;                                                // 0x0000(0x0001) BIT_FIELD
	float                                              Mu;                                                        // 0x0004(0x0004)
	float                                              Sigma;                                                     // 0x0008(0x0004)
	int                                                Tier;                                                      // 0x000C(0x0004)
	int                                                Division;                                                  // 0x0010(0x0004)
	float                                              PrevMu;                                                    // 0x0014(0x0004)
	float                                              PrevSigma;                                                 // 0x0018(0x0004)
	int                                                PrevTier;                                                  // 0x001C(0x0004)
	int                                                PrevDivision;                                              // 0x0020(0x0004)

};

// ScriptStruct ProjectX.ClientNetMetrics_X.PingStats
// 0x0010
struct FPingStats
{
	float                                              Min;                                                       // 0x0000(0x0004)
	float                                              Max;                                                       // 0x0004(0x0004)
	float                                              Average;                                                   // 0x0008(0x0004)
	float                                              Median;                                                    // 0x000C(0x0004)

};

// ScriptStruct ProjectX.ParameterDispenser_X.VectorParamPair
// 0x0014
struct FVectorParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	struct FVector                                     Value;                                                     // 0x0008(0x000C) (Edit)

};

// ScriptStruct ProjectX.ParameterDispenser_X.ColorParamPair
// 0x0018
struct FColorParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	struct FLinearColor                                Value;                                                     // 0x0008(0x0010) (Edit)

};

// ScriptStruct ProjectX.RenderProfiler_X.PrimitiveComponentProfile
// 0x0070
struct FPrimitiveComponentProfile
{
	struct FString                                     ContentName;                                               // 0x0000(0x0010) (NeedCtorLink)
	TArray<class UPrimitiveComponent*>                 Components;                                                // 0x0010(0x0010) (ExportObject, Component, NeedCtorLink, EditInline)
	struct FRenderProfile                              InclusiveProfile;                                          // 0x0020(0x0028)
	struct FRenderProfile                              ExclusiveProfile;                                          // 0x0048(0x0028)

};

// ScriptStruct ProjectX._Types_X.PsyNetPersonaData
// 0x0090
struct FPsyNetPersonaData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PresenceInfo;                                              // 0x0058(0x0010) (NeedCtorLink)
	struct FString                                     PresenceState;                                             // 0x0068(0x0010) (NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x0078(0x0018) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.BumpAngleCheckConfig
// 0x0014
struct FBumpAngleCheckConfig
{
	unsigned long                                      bEnabled : 1;                                              // 0x0000(0x0001) BIT_FIELD
	float                                              BumpAngleYaw;                                              // 0x0004(0x0004)
	float                                              BumpAnglePitch;                                            // 0x0008(0x0004)
	float                                              DemolishAngleYaw;                                          // 0x000C(0x0004)
	float                                              DemolishAnglePitch;                                        // 0x0010(0x0004)

};

// ScriptStruct ProjectX.PsyNetRequestQue_X.PsyNetRequest
// 0x0018
struct FPsyNetRequest
{
	struct FName                                       Id;                                                        // 0x0000(0x0008)
	class UTAsyncResult__PsyNetMessage_X*              Task;                                                      // 0x0008(0x0008)
	float                                              TimeoutTime;                                               // 0x0010(0x0004)
	float                                              SendTime;                                                  // 0x0014(0x0004)

};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamWebRequestData
// 0x0050
struct FSteamWebRequestData
{
	class UWebRequest_X*                               Request;                                                   // 0x0000(0x0008)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0048) (NeedCtorLink)

};

// ScriptStruct ProjectX.PsyNetService_DSReservation_X.PsyNetBeaconPartyReservation
// 0x0010
struct FPsyNetBeaconPartyReservation
{
	TArray<struct FUniqueNetId>                        Members;                                                   // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.PsyNetService_DSReservation_X.PsyNetBeaconPlayerReservation
// 0x0060
struct FPsyNetBeaconPlayerReservation
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                                      // 0x0048(0x0008)
	struct FString                                     DSConnectToken;                                            // 0x0050(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.PsyNetService_DSReservation_X.PsyNetBeaconReservation
// 0x0048
struct FPsyNetBeaconReservation
{
	struct FString                                     ReservationID;                                             // 0x0000(0x0010) (NeedCtorLink)
	int                                                Playlist;                                                  // 0x0010(0x0004)
	unsigned long                                      IsBackfill : 1;                                            // 0x0014(0x0001) BIT_FIELD
	unsigned long                                      IsBotMatch : 1;                                            // 0x0014(0x0001) BIT_FIELD
	TArray<struct FString>                             BotNames;                                                  // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FPsyNetBeaconPlayerReservation>      Players;                                                   // 0x0028(0x0010) (NeedCtorLink)
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                                   // 0x0038(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.WordFilterTypes_X.WordFilterPair
// 0x0078
struct FWordFilterPair
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Key;                                                       // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0020(0x0010) (NeedCtorLink)
	TEnumAsByte<ProjectX_EWordFilterUsage>             Usage;                                                     // 0x0030(0x0001)
	unsigned char                                      UnknownData_OKZL[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bPending : 1;                                              // 0x0034(0x0001) BIT_FIELD
	float                                              LastRequestTime;                                           // 0x0038(0x0004)
	unsigned char                                      UnknownData_AH4H[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UError*                                      Error;                                                     // 0x0040(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2VT0[0xC];                                     // 0x0048(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             ErrorCallback;                                             // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8EDJ[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX._Types_X.ServerResult
// 0x00B0
struct FServerResult
{
	struct FString                                     Address;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Settings;                                                  // 0x0020(0x0090) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.ReplicatedReservationData
// 0x0059
struct FReplicatedReservationData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink)
	TEnumAsByte<ProjectX_EReservationStatus>           Status;                                                    // 0x0058(0x0001)

};

// ScriptStruct ProjectX._Types_X.OnlineStatus
// 0x0059
struct FOnlineStatus
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PresenceInfo;                                              // 0x0048(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_EOnlineFriendState>             PresenceState;                                             // 0x0058(0x0001)

};

// ScriptStruct ProjectX._Types_X.MapPrefs
// 0x0020
struct U_Types_X_FMapPrefs
{
	TArray<struct FName>                               Likes;                                                     // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                                  // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.RegionSecret
// 0x0020
struct FRegionSecret
{
	struct FString                                     Region;                                                    // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Secret;                                                    // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.BumpAngleCurveCheckConfig
// 0x0068
struct FBumpAngleCurveCheckConfig
{
	unsigned long                                      bEnabled : 1;                                              // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_9HVK[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInterpCurveFloat                           BumpAngleCurveYaw;                                         // 0x0008(0x0018) (NeedCtorLink)
	struct FInterpCurveFloat                           BumpAngleCurvePitch;                                       // 0x0020(0x0018) (NeedCtorLink)
	struct FInterpCurveFloat                           DemolishAngleCurveYaw;                                     // 0x0038(0x0018) (NeedCtorLink)
	struct FInterpCurveFloat                           DemolishAngleCurvePitch;                                   // 0x0050(0x0018) (NeedCtorLink)

};

// ScriptStruct ProjectX._Types_X.CarInteractionConfig
// 0x0104
struct FCarInteractionConfig
{
	float                                              PushFactor;                                                // 0x0000(0x0004)
	unsigned char                                      UnknownData_N1FX[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInterpCurveFloat                           BumperPushFactorCurveGround;                               // 0x0008(0x0018) (NeedCtorLink)
	struct FInterpCurveFloat                           BumperPushFactorCurveAir;                                  // 0x0020(0x0018) (NeedCtorLink)
	struct FInterpCurveFloat                           ZPushFactorCurve;                                          // 0x0038(0x0018) (NeedCtorLink)
	float                                              BumpInterval;                                              // 0x0050(0x0004)
	struct FBumpAngleCheckConfig                       COMAngleCheck;                                             // 0x0054(0x0014)
	struct FBumpAngleCheckConfig                       VictimHitAngleCheck;                                       // 0x0068(0x0014)
	struct FBumpAngleCheckConfig                       AttackerHitAngleCheck;                                     // 0x007C(0x0014)
	struct FBumpAngleCurveCheckConfig                  VictimHitAngleCurveCheck;                                  // 0x0090(0x0068) (NeedCtorLink)
	unsigned long                                      bCheckImpactNormal : 1;                                    // 0x00F8(0x0001) BIT_FIELD
	float                                              ImpactNormalDotProductDemo;                                // 0x00FC(0x0004)
	float                                              ImpactNormalDotProductBump;                                // 0x0100(0x0004)

};

// ScriptStruct ProjectX._Types_X.SuperSonicConfig
// 0x000C
struct FSuperSonicConfig
{
	float                                              Speed;                                                     // 0x0000(0x0004)
	float                                              TurnoffSpeedBuffer;                                        // 0x0004(0x0004)
	float                                              TurnoffTime;                                               // 0x0008(0x0004)

};

// ScriptStruct ProjectX.RPC_GetPartyMemberSkill_X.PartyMemberSkill
// 0x0058
struct FPartyMemberSkill
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	TArray<struct FPlayerSkillRating>                  Skills;                                                    // 0x0048(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.CheatManager_X.TestStructEvent
// 0x0018
struct FTestStructEvent
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_H2J1[0xC];                                     // 0x0000(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct ProjectX.RPC_CheckReplacementDedicatedServer_X.CheckReplacementDedicatedServerData
// 0x002C
struct FCheckReplacementDedicatedServerData
{
	unsigned char                                      ServerId[0x8];                                             // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CheckReplacementDedicatedServer_X.CheckReplacementDedicatedServerData.ServerId
	struct FString                                     IP;                                                        // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     Host;                                                      // 0x0018(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x0028(0x0004)

};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership2
// 0x0010
struct FSteamJsonResponseGetPublisherAppOwnership2
{
	TArray<struct FSteamJsonResponseGetPublisherAppOwnership3> Apps;                                                      // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership
// 0x0010
struct FSteamJsonResponseGetPublisherAppOwnership
{
	struct FSteamJsonResponseGetPublisherAppOwnership2 AppOwnership;                                              // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.PartyMetrics_X.PartyMetricsData
// 0x000C
struct FPartyMetricsData
{
	int                                                LocalPlayers;                                              // 0x0000(0x0004)
	int                                                RemotePlayers;                                             // 0x0004(0x0004)
	unsigned long                                      bPartyLeader : 1;                                          // 0x0008(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX.PsyNetMetrics_X.ServiceErrorData
// 0x000C
struct FServiceErrorData
{
	struct FName                                       Type;                                                      // 0x0000(0x0008)
	int                                                Count;                                                     // 0x0008(0x0004)

};

// ScriptStruct ProjectX.PsyNetMetrics_X.ServiceMetricsData
// 0x0024
struct FServiceMetricsData
{
	struct FString                                     Service;                                                   // 0x0000(0x0010) (NeedCtorLink)
	int                                                Attempts;                                                  // 0x0010(0x0004)
	int                                                Failures;                                                  // 0x0014(0x0004)
	float                                              MinLatency;                                                // 0x0018(0x0004)
	float                                              MaxLatency;                                                // 0x001C(0x0004)
	float                                              AvgLatency;                                                // 0x0020(0x0004)

};

// ScriptStruct ProjectX.RPC_Test_X.RPCTestItem
// 0x0078
struct FRPCTestItem
{
	unsigned long                                      BoolItem : 1;                                              // 0x0000(0x0001) BIT_FIELD
	int                                                IntItem;                                                   // 0x0004(0x0004)
	float                                              FloatItem;                                                 // 0x0008(0x0004)
	unsigned char                                      UnknownData_8YET[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringItem;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PlayerItem;                                                // 0x0020(0x0048) (NeedCtorLink)
	TArray<struct FString>                             StringItems;                                               // 0x0068(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.RPC_Test_X.RPCTestParam
// 0x0088
struct FRPCTestParam
{
	struct FRPCTestItem                                TestItem;                                                  // 0x0000(0x0078) (NeedCtorLink)
	TArray<struct FRPCTestItem>                        TestItems;                                                 // 0x0078(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.RPC_GetGenericDataAll_X.GetGenericDataAllData
// 0x0018
struct FGetGenericDataAllData
{
	struct FName                                       DataKey;                                                   // 0x0000(0x0008)
	struct FString                                     DataValue;                                                 // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.RPC_GetPlayerPermissions_X.PlayerPermissionsReponse
// 0x0058
struct FPlayerPermissionsReponse
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	TArray<struct FName>                               Permissions;                                               // 0x0048(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.LocalClubData_X.PlayerClubPair
// 0x0050
struct FPlayerClubPair
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	unsigned char                                      ClubID[0x8];                                               // 0x0048(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LocalClubData_X.PlayerClubPair.ClubID

};

// ScriptStruct ProjectX.RPC_CustomGameServerGet_X.FindPrivateServerResult
// 0x00C4
struct FFindPrivateServerResult
{
	struct FString                                     IP;                                                        // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Settings;                                                  // 0x0020(0x0090) (NeedCtorLink)
	struct FString                                     Host;                                                      // 0x00B0(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x00C0(0x0004)

};

// ScriptStruct ProjectX.LocalCache_X.CacheIOTaskBase
// 0x0030
struct FCacheIOTaskBase
{
	class UObject*                                     CacheObject;                                               // 0x0000(0x0008)
	TArray<unsigned char>                              Data;                                                      // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Path;                                                      // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	class UErrorType*                                  Error;                                                     // 0x0028(0x0008)

};

// ScriptStruct ProjectX.LocalCache_X.CacheExportTask
// 0x0000 (0x0030 - 0x0030)
struct FCacheExportTask : public FCacheIOTaskBase
{

};

// ScriptStruct ProjectX.LocalCache_X.CacheImportTask
// 0x0000 (0x0030 - 0x0030)
struct FCacheImportTask : public FCacheIOTaskBase
{

};

// ScriptStruct ProjectX.PsyNetService_PersonaInfo_X.OnlinePersonaData
// 0x0090
struct FOnlinePersonaData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PresenceInfo;                                              // 0x0058(0x0010) (NeedCtorLink)
	struct FString                                     PresenceState;                                             // 0x0068(0x0010) (NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x0078(0x0018) (NeedCtorLink)

};

// ScriptStruct ProjectX.PsyNetService_FriendStatusUpdate_X.PsyNetOnlineStatus
// 0x0068
struct FPsyNetOnlineStatus
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     PresenceInfo;                                              // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PresenceState;                                             // 0x0058(0x0010) (NeedCtorLink)

};

// ScriptStruct ProjectX.SetPlayerStorageResult_X.SetPlayerStorageResultItem
// 0x0010
struct FSetPlayerStorageResultItem
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                Tick;                                                      // 0x0008(0x0004)
	unsigned long                                      bOutOfSync : 1;                                            // 0x000C(0x0001) BIT_FIELD

};

// ScriptStruct ProjectX.OnlinePlayerStorageQueue_X.PendingStorage
// 0x0014
struct FPendingStorage
{
	class UObject*                                     Data;                                                      // 0x0000(0x0008)
	class UClass*                                      DataClass;                                                 // 0x0008(0x0008)
	int                                                Tick;                                                      // 0x0010(0x0004)

};

// ScriptStruct ProjectX.RPC_PlayerStorageSet_X.SetPlayerStorageRequestItem
// 0x0021
struct FSetPlayerStorageRequestItem
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                Tick;                                                      // 0x0008(0x0004)
	int                                                Checksum;                                                  // 0x000C(0x0004)
	struct FString                                     Data;                                                      // 0x0010(0x0010) (NeedCtorLink)
	TEnumAsByte<ProjectX_EObjectEncoding>              Encoding;                                                  // 0x0020(0x0001)

};

// ScriptStruct ProjectX.OnlinePlayerStorageQueue_X.StorageMaxSize
// 0x000C
struct FStorageMaxSize
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                MaxSizeBytes;                                              // 0x0008(0x0004)

};

// ScriptStruct ProjectX.OnlinePlayerStorageManifest_X.StorageMetadata
// 0x000D
struct FStorageMetadata
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                Checksum;                                                  // 0x0008(0x0004)
	TEnumAsByte<ProjectX_EObjectEncoding>              Encoding;                                                  // 0x000C(0x0001)

};

// ScriptStruct ProjectX.OnlinePlayerStorageSync_X.OnlinePlayerStorageSyncResult
// 0x001D
struct FOnlinePlayerStorageSyncResult
{
	class UClass*                                      DataClass;                                                 // 0x0000(0x0008)
	class UObject*                                     RemoteData;                                                // 0x0008(0x0008)
	int                                                ServerTick;                                                // 0x0010(0x0004)
	int                                                Checksum;                                                  // 0x0014(0x0004)
	unsigned long                                      bChecksumMatch : 1;                                        // 0x0018(0x0001) BIT_FIELD
	TEnumAsByte<ProjectX_EObjectEncoding>              Encoding;                                                  // 0x001C(0x0001)

};

// ScriptStruct ProjectX.OnlinePlayerStorageSync_X.OnlinePlayerStorageSyncRequest
// 0x000D
struct FOnlinePlayerStorageSyncRequest
{
	class UObject*                                     DataObj;                                                   // 0x0000(0x0008)
	int                                                ClientTick;                                                // 0x0008(0x0004)
	TEnumAsByte<ProjectX_EObjectEncoding>              Encoding;                                                  // 0x000C(0x0001)

};

// ScriptStruct ProjectX.RPC_PlayerStorageGet_X.GetPlayerStorageRequestItem
// 0x0018
struct FGetPlayerStorageRequestItem
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                Tick;                                                      // 0x0008(0x0004)
	int                                                Checksum;                                                  // 0x000C(0x0004)
	class UObject*                                     LocalRef;                                                  // 0x0010(0x0008) (Transient)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
