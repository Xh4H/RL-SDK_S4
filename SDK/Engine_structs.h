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

#define CONST_MINFLOORZ                                          0.7
#define CONST_ACTORMAXSTEPHEIGHT                                 35.0
#define CONST_RBSTATE_LINVELSCALE                                100.0
#define CONST_RBSTATE_QUATBITS                                   18
#define CONST_RBSTATE_ANGVELSCALE                                10000.0
#define CONST_RB_None                                            0x00
#define CONST_RB_NeedsUpdate                                     0x01
#define CONST_RB_Sleeping                                        0x02
#define CONST_SDPG_NumBits                                       3
#define CONST_LATENT_MOVETOWARD                                  503
#define CONST_MAX_ACTIVE_CAMERA_ANIMS                            8
#define CONST_COVERLINK_DangerDist                               1536.f
#define CONST_COVERLINK_EdgeExposureDot                          0.85f
#define CONST_COVERLINK_EdgeCheckDot                             0.25f
#define CONST_COVERLINK_ExposureDot                              0.4f
#define CONST_NULLCHARACTER                                      127
#define CONST_MAX_INSTANCES_PER_CLASS                            5
#define CONST_MAX_BOOKMARK_NUMBER                                10
#define CONST_FSM_DEFAULTRECYCLETIME                             0.2
#define CONST_MAX_AIGROUP_NUMBER                                 10
#define CONST_RBSTATE_LOCATIONSCALE                              100.0
#define CONST_REP_RBLOCATION_ERROR_TOLERANCE_SQ                  16.0f
#define CONST_TRACEFLAG_ForceController                          16
#define CONST_TRACEFLAG_Blocking                                 8
#define CONST_TRACEFLAG_SkipMovers                               4
#define CONST_TRACEFLAG_PhysicsVolumes                           2
#define CONST_TRACEFLAG_Bullet                                   1
#define CONST_HeaderFlags_NoEventStrings                         1
#define CONST_GAMEEVENT_MATCH_STARTED                            0
#define CONST_GAMEEVENT_MATCH_ENDED                              1
#define CONST_GAMEEVENT_ROUND_STARTED                            2
#define CONST_GAMEEVENT_ROUND_ENDED                              3
#define CONST_GAMEEVENT_GAME_CLASS                               6
#define CONST_GAMEEVENT_GAME_OPTION_URL                          7
#define CONST_GAMEEVENT_GAME_MAPNAME                             8
#define CONST_GAMEEVENT_MEMORYUSAGE_POLL                         35
#define CONST_GAMEEVENT_FRAMERATE_POLL                           36
#define CONST_GAMEEVENT_NETWORKUSAGEIN_POLL                      37
#define CONST_GAMEEVENT_NETWORKUSAGEOUT_POLL                     38
#define CONST_GAMEEVENT_PING_POLL                                39
#define CONST_GAMEEVENT_RENDERTHREAD_POLL                        40
#define CONST_GAMEEVENT_GAMETHREAD_POLL                          41
#define CONST_GAMEEVENT_GPUFRAMETIME_POLL                        42
#define CONST_GAMEEVENT_FRAMETIME_POLL                           43
#define CONST_GAMEEVENT_TEAM_CREATED                             50
#define CONST_GAMEEVENT_TEAM_GAME_SCORE                          51
#define CONST_GAMEEVENT_TEAM_MATCH_WON                           4
#define CONST_GAMEEVENT_TEAM_ROUND_WON                           5
#define CONST_GAMEEVENT_TEAM_ROUND_STALEMATE                     52
#define CONST_GAMEEVENT_PLAYER_LOGIN                             100
#define CONST_GAMEEVENT_PLAYER_LOGOUT                            101
#define CONST_GAMEEVENT_PLAYER_SPAWN                             102
#define CONST_GAMEEVENT_PLAYER_MATCH_WON                         103
#define CONST_GAMEEVENT_PLAYER_KILL                              104
#define CONST_GAMEEVENT_PLAYER_LOCATION_POLL                     105
#define CONST_GAMEEVENT_PLAYER_TEAMCHANGE                        106
#define CONST_GAMEEVENT_PLAYER_KILL_STREAK                       107
#define CONST_GAMEEVENT_PLAYER_DEATH                             108
#define CONST_GAMEEVENT_PLAYER_ROUND_WON                         109
#define CONST_GAMEEVENT_PLAYER_ROUND_STALEMATE                   110
#define CONST_GAMEEVENT_WEAPON_DAMAGE                            150
#define CONST_GAMEEVENT_WEAPON_DAMAGE_MELEE                      151
#define CONST_GAMEEVENT_WEAPON_FIRED                             152
#define CONST_GAMEEVENT_PLAYER_KILL_NORMAL                       200
#define CONST_GAMEEVENT_GENERIC_PARAM_LIST_START                 300
#define CONST_GAMEEVENT_GENERIC_PARAM_LIST_END                   400
#define CONST_GAMEEVENT_GAME_SPECIFIC                            1000
#define CONST_GAMEEVENT_MAX_EVENTID                              0x0000FFFF
#define CONST_SCENEFILTER_None                                   0x00000000
#define CONST_SCENEFILTER_IncludeTransient                       0x00000001
#define CONST_SCENEFILTER_InputProcessorOnly                     0x00000002
#define CONST_SCENEFILTER_PausersOnly                            0x00000004
#define CONST_SCENEFILTER_PrimitiveUsersOnly                     0x00000008
#define CONST_SCENEFILTER_UsesPostProcessing                     0x00000010
#define CONST_SCENEFILTER_ReceivesFocus                          0x00000020
#define CONST_SCENEFILTER_Any                                    0xFFFFFFFF
#define CONST_MAXCLIENTUPDATEINTERVAL                            0.25
#define CONST_CLIENTADJUSTUPDATECOST                             180.0
#define CONST_MAXNEARZEROVELOCITYSQUARED                         9.0
#define CONST_MAXPOSITIONERRORSQUARED                            3.0
#define CONST_BLOCKEDPATHCOST                                    10000000
#define CONST_INFINITE_PATH_COST                                 10000000
#define CONST_GET_SAVE_SLOT_INVALID                              -1
#define CONST_GET_SAVE_SLOT_ERROR                                -2
#define CONST_COMMON_DATA_SAVE_SLOT_INDEX                        -1
#define CONST_SAVE_SYSTEM_VERSION_KEY                            "CloudSaveSystemVersion"
#define CONST_SAVE_DATA_BLOB_NAME_KEY                            "DataBlobName"
#define CONST_DATA_STORE_ID_KEY                                  "DataStoreID"
#define CONST_NUM_SAVE_SLOTS_KEY                                 "NumSaveSlots"
#define CONST_DEFAULT_SIZE_X                                     1024
#define CONST_DEFAULT_SIZE_Y                                     768
#define CONST_MAX_SUPPORTED_GAMEPADS                             4
#define CONST_MaxHistory                                         16
#define CONST_LINECHECK_GRANULARITY                              768.f
#define CONST_NUM_PATHFINDING_PARAMS                             9
#define CONST_NumBreadCrumbs                                     10
#define CONST_PROCBUILDING_VERSION                               1
#define CONST_ROOF_MINZ                                          0.7
#define CONST_EpochYear                                          1970
#define CONST_SecondsInMinute                                    60
#define CONST_SecondsInHour                                      3600
#define CONST_SecondsInDay                                       86400
#define CONST_SecondsInMonth                                     2629743
#define CONST_SecondsInYear                                      31556926
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Engine.Actor.EActorMetricsType
enum class Engine_EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3,

};

// Enum Engine.Actor.EMoveDir
enum class Engine_EMoveDir : uint8_t
{
	MD_Stationary                  = 0,
	MD_Forward                     = 1,
	MD_Backward                    = 2,
	MD_Left                        = 3,
	MD_Right                       = 4,
	MD_Up                          = 5,
	MD_Down                        = 6,
	MD_MAX                         = 7,

};

// Enum Engine.Actor.EPhysics
enum class Engine_EPhysics : uint8_t
{
	PHYS_None                      = 0,
	PHYS_Walking                   = 1,
	PHYS_Falling                   = 2,
	PHYS_Swimming                  = 3,
	PHYS_Flying                    = 4,
	PHYS_Rotating                  = 5,
	PHYS_Projectile                = 6,
	PHYS_Interpolating             = 7,
	PHYS_Spider                    = 8,
	PHYS_RigidBody                 = 9,
	PHYS_SoftBody                  = 10,
	PHYS_NavMeshWalking            = 11,
	PHYS_Unused                    = 12,
	PHYS_Custom                    = 13,
	PHYS_MAX                       = 14,

};

// Enum Engine.Actor.EForceMode
enum class Engine_EForceMode : uint8_t
{
	ForceMode_Force                = 0,
	ForceMode_Impulse              = 1,
	ForceMode_Velocity             = 2,
	ForceMode_SmoothImpulse        = 3,
	ForceMode_SmoothVelocity       = 4,
	ForceMode_Acceleration         = 5,
	ForceMode_MAX                  = 6,

};

// Enum Engine.Actor.ECollisionType
enum class Engine_ECollisionType : uint8_t
{
	COLLIDE_CustomDefault          = 0,
	COLLIDE_NoCollision            = 1,
	COLLIDE_BlockAll               = 2,
	COLLIDE_BlockWeapons           = 3,
	COLLIDE_TouchAll               = 4,
	COLLIDE_TouchWeapons           = 5,
	COLLIDE_BlockAllButWeapons     = 6,
	COLLIDE_TouchAllButWeapons     = 7,
	COLLIDE_BlockWeaponsKickable   = 8,
	COLLIDE_MAX                    = 9,

};

// Enum Engine.Actor.ETravelType
enum class Engine_ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3,

};

// Enum Engine.Actor.EDoubleClickDir
enum class Engine_EDoubleClickDir : uint8_t
{
	DCLICK_None                    = 0,
	DCLICK_Left                    = 1,
	DCLICK_Right                   = 2,
	DCLICK_Forward                 = 3,
	DCLICK_Back                    = 4,
	DCLICK_Active                  = 5,
	DCLICK_Done                    = 6,
	DCLICK_MAX                     = 7,

};

// Enum Engine.OnlineSubsystem.EOnlineFriendState
enum class Engine_EOnlineFriendState : uint8_t
{
	OFS_Offline                    = 0,
	OFS_Online                     = 1,
	OFS_Away                       = 2,
	OFS_Busy                       = 3,
	OFS_Unknown                    = 4,
	OFS_MAX                        = 5,

};

// Enum Engine.EngineTypes.EInputPlatformType
enum class Engine_EInputPlatformType : uint8_t
{
	IPT_PC                         = 0,
	IPT                            = 1,
	IPT_PS3                        = 2,
	IPT_PS4                        = 3,
	IPT_XBOX_ONE                   = 4,
	IPT_NNX                        = 5,
	IPT_NNX_SINGLE                 = 6,
	IPT_MAX                        = 7,

};

// Enum Engine.OnlineSubsystem.EFeaturePrivilege
enum class Engine_EFeaturePrivilege : uint8_t
{
	FP_OnlinePlay                  = 0,
	FP_CommunicationText           = 1,
	FP_CommunicationVideo          = 2,
	FP_CommunicationVoice          = 3,
	FP_ShareUserCreatedContent     = 4,
	FP_PurchaseContent             = 5,
	FP_ViewPlayerProfile           = 6,
	FP_ShowPresenceInformation     = 7,
	FP_RecordDVRClips              = 8,
	FP_CloudStorage                = 9,
	FP_PremiumContent              = 10,
	FP_PremiumVideoContent         = 11,
	FP_BrowseInternet              = 12,
	FP_SocialNetworkSharing        = 13,
	FP_KinectSharing               = 14,
	FP_FitnessUpload               = 15,
	FP_Crossplay                   = 16,
	FP_MAX                         = 17,

};

// Enum Engine.OnlineSubsystem.ELoginStatus
enum class Engine_ELoginStatus : uint8_t
{
	LS_NotLoggedIn                 = 0,
	LS_UsingLocalProfile           = 1,
	LS_LoggedIn                    = 2,
	LS_MAX                         = 3,

};

// Enum Engine.OnlineSubsystem.AvatarSize
enum class Engine_EAvatarSize : uint8_t
{
	AvatarSize_Small               = 0,
	AvatarSize_Medium              = 1,
	AvatarSize_Large               = 2,
	AvatarSize_MAX                 = 3,

};

// Enum Engine.OnlineSubsystem.EPinGrantResult
enum class Engine_EPinGrantResult : uint8_t
{
	PinGrantResult_Success         = 0,
	PinGrantResult_Expired         = 1,
	PinGrantResult_MAX             = 2,

};

// Enum Engine.OnlineSubsystem.EFeaturePrivilegeLevel
enum class Engine_EFeaturePrivilegeLevel : uint8_t
{
	FPL_Disabled                   = 0,
	FPL_Premium                    = 1,
	FPL_EnabledFriendsOnly         = 2,
	FPL_Enabled                    = 3,
	FPL_Offline                    = 4,
	FPL_MAX                        = 5,

};

// Enum Engine.OnlineSubsystem.EPS4ErrorDialog
enum class Engine_EPS4ErrorDialog : uint8_t
{
	PS4_ERROR_SIGNED_OUT           = 0,
	PS4_ERROR_SIGNED_MAX           = 1,

};

// Enum Engine.OnlineSubsystem.EPS4DisplayMode
enum class Engine_EPS4DisplayMode : uint8_t
{
	PS4DM_CATEGORY                 = 0,
	PS4DM_PRODUCT                  = 1,
	PS4DM_PRODUCT_CODE             = 2,
	PS4DM_CHECKOUT                 = 3,
	PS4DM_DOWNLOADLIST             = 4,
	PS4DM_PLUS                     = 5,
	PS4DM_MAX                      = 6,

};

// Enum Engine.OnlineSubsystem.ENATType
enum class Engine_ENATType : uint8_t
{
	NAT_Unknown                    = 0,
	NAT_Open                       = 1,
	NAT_Moderate                   = 2,
	NAT_Strict                     = 3,
	NAT_MAX                        = 4,

};

// Enum Engine.OnlineSubsystem.EOnlineServerConnectionStatus
enum class Engine_EOnlineServerConnectionStatus : uint8_t
{
	OSCS_NotConnected              = 0,
	OSCS_Connected                 = 1,
	OSCS_ConnectionDropped         = 2,
	OSCS_NoNetworkConnection       = 3,
	OSCS_ServiceUnavailable        = 4,
	OSCS_UpdateRequired            = 5,
	OSCS_ServersTooBusy            = 6,
	OSCS_DuplicateLoginDetected    = 7,
	OSCS_InvalidUser               = 8,
	OSCS_InvalidResponse           = 9,
	OSCS_TooYoung                  = 10,
	OSCS_EpicAccountRequired       = 11,
	OSCS_EpicAccountLinkingFailed  = 12,
	OSCS_MAX                       = 13,

};

// Enum Engine.OnlineSubsystem.ESessionMemberStatus
enum class Engine_ESessionMemberStatus : uint8_t
{
	DSMS_Reserved                  = 0,
	DSMS_Inactive                  = 1,
	DSMS_Ready                     = 2,
	DSMS_Active                    = 3,
	DSMS_MAX                       = 4,

};

// Enum Engine.OnlineSubsystem.EOnlineNewsType
enum class Engine_EOnlineNewsType : uint8_t
{
	ONT_Unknown                    = 0,
	ONT_GameNews                   = 1,
	ONT_ContentAnnouncements       = 2,
	ONT_Misc                       = 3,
	ONT_MAX                        = 4,

};

// Enum Engine.OnlineSubsystem.EInventoryItemState
enum class Engine_EInventoryItemState : uint8_t
{
	IIS_Unknown                    = 0,
	IIS_All                        = 1,
	IIS_Enabled                    = 2,
	IIS_Suspended                  = 3,
	IIS_Expired                    = 4,
	IIS_Canceled                   = 5,
	IIS_MAX                        = 6,

};

// Enum Engine.OnlineSubsystem.EMediaItemType
enum class Engine_EMediaItemType : uint8_t
{
	MIT_Unknown                    = 0,
	MIT_Game                       = 1,
	MIT_Application                = 2,
	MIT_GameContent                = 3,
	MIT_GameConsumable             = 4,
	MIT_Subscription               = 5,
	MIT_MAX                        = 6,

};

// Enum Engine.OnlineSubsystem.EOnlineEnumerationReadState
enum class Engine_EOnlineEnumerationReadState : uint8_t
{
	OERS_NotStarted                = 0,
	OERS_InProgress                = 1,
	OERS_Done                      = 2,
	OERS_Failed                    = 3,
	OERS_MAX                       = 4,

};

// Enum Engine.OnlineSubsystem.EOnlineGameState
enum class Engine_EOnlineGameState : uint8_t
{
	OGS_NoSession                  = 0,
	OGS_Pending                    = 1,
	OGS_Starting                   = 2,
	OGS_InProgress                 = 3,
	OGS_Ending                     = 4,
	OGS_Ended                      = 5,
	OGS_MAX                        = 6,

};

// Enum Engine.OnlineSubsystem.ECatalogSortOrder
enum class Engine_ECatalogSortOrder : uint8_t
{
	CSO_FreeAndPaidCountDaily      = 0,
	CSO_PaidCountAllTime           = 1,
	CSO_PaidCountDail              = 2,
	CSO_DigitalReleaseDate         = 3,
	CSO_ReleaseDate                = 4,
	CSO_UserRatings                = 5,
	CSO_MAX                        = 6,

};

// Enum Engine.OnlineSubsystem.EAchievementUnlockType
enum class Engine_EAchievementUnlockType : uint8_t
{
	AUT_Unknown                    = 0,
	AUT_All                        = 1,
	AUT_Persistent                 = 2,
	AUT_Challenge                  = 3,
	AUT_MAX                        = 4,

};

// Enum Engine.OnlineSubsystem.EAchievementMediaAssetType
enum class Engine_EAchievementMediaAssetType : uint8_t
{
	AMAT_Unknown                   = 0,
	AMAT_Icon                      = 1,
	AMAT_Art                       = 2,
	AMAT_MAX                       = 3,

};

// Enum Engine.OnlineSubsystem.EAchievementParticipationType
enum class Engine_EAchievementParticipationType : uint8_t
{
	APT_Unknown                    = 0,
	APT_Individual                 = 1,
	APT_Group                      = 2,
	APT_MAX                        = 3,

};

// Enum Engine.OnlineSubsystem.EAchievementProgressState
enum class Engine_EAchievementProgressState : uint8_t
{
	APS_Unknown                    = 0,
	APS_Achieved                   = 1,
	APS_NotStarted                 = 2,
	APS_InProgress                 = 3,
	APS_MAX                        = 4,

};

// Enum Engine.OnlineSubsystem.EAchievementRewardType
enum class Engine_EAchievementRewardType : uint8_t
{
	ART_Unknown                    = 0,
	ART_Gamerscore                 = 1,
	ART_InApp                      = 2,
	ART_Art                        = 3,
	ART_MAX                        = 4,

};

// Enum Engine.Settings.ESettingsDataType
enum class Engine_ESettingsDataType : uint8_t
{
	SDT_Empty                      = 0,
	SDT_Int32                      = 1,
	SDT_Int64                      = 2,
	SDT_Double                     = 3,
	SDT_String                     = 4,
	SDT_Float                      = 5,
	SDT_Blob                       = 6,
	SDT_DateTime                   = 7,
	SDT_MAX                        = 8,

};

// Enum Engine.Settings.EOnlineDataAdvertisementType
enum class Engine_EOnlineDataAdvertisementType : uint8_t
{
	ODAT_DontAdvertise             = 0,
	ODAT_OnlineService             = 1,
	ODAT_QoS                       = 2,
	ODAT_OnlineServiceAndQoS       = 3,
	ODAT_MAX                       = 4,

};

// Enum Engine.OnlineSubsystem.EOnlineFileType
enum class Engine_EOnlineFileType : uint8_t
{
	OFT_Unknown                    = 0,
	OFT_Binary                     = 1,
	OFT_Json                       = 2,
	OFT_MAX                        = 3,

};

// Enum Engine.OnlineSubsystem.EOnlineAccountCreateStatus
enum class Engine_EOnlineAccountCreateStatus : uint8_t
{
	OACS_CreateSuccessful          = 0,
	OACS_UnknownError              = 1,
	OACS_InvalidUserName           = 2,
	OACS_InvalidPassword           = 3,
	OACS_InvalidUniqueUserName     = 4,
	OACS_UniqueUserNameInUse       = 5,
	OACS_ServiceUnavailable        = 6,
	OACS_MAX                       = 7,

};

// Enum Engine.OnlineSubsystem.ELanBeaconState
enum class Engine_ELanBeaconState : uint8_t
{
	LANB_NotUsingLanBeacon         = 0,
	LANB_Hosting                   = 1,
	LANB_Searching                 = 2,
	LANB_MAX                       = 3,

};

// Enum Engine.OnlineSubsystem.EOnlineContentType
enum class Engine_EOnlineContentType : uint8_t
{
	OCT_Downloaded                 = 0,
	OCT_SaveGame                   = 1,
	OCT_MAX                        = 2,

};

// Enum Engine.OnlineSubsystem.EOnlineCreateGameSessionFlag
enum class Engine_EOnlineCreateGameSessionFlag : uint8_t
{
	OCGSF_New                      = 0,
	OCGSF_ReSubmit                 = 1,
	OCGSF_MAX                      = 2,

};

// Enum Engine.OnlineSubsystem.EOnlineAccountTier
enum class Engine_EOnlineAccountTier : uint8_t
{
	OAT_Unknown                    = 0,
	OAT_NewUser                    = 1,
	OAT_Silver                     = 2,
	OAT_Gold                       = 3,
	OAT_FamilyGold                 = 4,
	OAT_MAX                        = 5,

};

// Enum Engine.OnlineSubsystem.ENetworkNotificationPosition
enum class Engine_ENetworkNotificationPosition : uint8_t
{
	NNP_TopLeft                    = 0,
	NNP_TopCenter                  = 1,
	NNP_TopRight                   = 2,
	NNP_CenterLeft                 = 3,
	NNP_Center                     = 4,
	NNP_CenterRight                = 5,
	NNP_BottomLeft                 = 6,
	NNP_BottomCenter               = 7,
	NNP_BottomRight                = 8,
	NNP_MAX                        = 9,

};

// Enum Engine.OnlineSubsystem.EWordFilterCensorship
enum class Engine_EWordFilterCensorship : uint8_t
{
	WordFilterCensorship_Uncensored = 0,
	WordFilterCensorship_Censored  = 1,
	WordFilterCensorship_Evil      = 2,
	WordFilterCensorship_MAX       = 3,

};

// Enum Engine.OnlineSubsystem.ECommunicationMethod
enum class Engine_ECommunicationMethod : uint8_t
{
	COMM_Text                      = 0,
	COMM_Voice                     = 1,
	COMM_MAX                       = 2,

};

// Enum Engine.Settings.EPropertyValueMappingType
enum class Engine_EPropertyValueMappingType : uint8_t
{
	PVMT_RawValue                  = 0,
	PVMT_PredefinedValues          = 1,
	PVMT_Ranged                    = 2,
	PVMT_IdMapped                  = 3,
	PVMT_MAX                       = 4,

};

// Enum Engine.OnlineAuthInterface.EAuthStatus
enum class Engine_EAuthStatus : uint8_t
{
	AUS_NotStarted                 = 0,
	AUS_Pending                    = 1,
	AUS_Authenticated              = 2,
	AUS_Failed                     = 3,
	AUS_MAX                        = 4,

};

// Enum Engine.OnlineAuthInterface.EAuthTicketServiceRequester
enum class Engine_EAuthTicketServiceRequester : uint8_t
{
	AuthTicketServiceRequester_Psynet = 0,
	AuthTicketServiceRequester_EpicOnlineServices = 1,
	AuthTicketServiceRequester_MAX = 2,

};

// Enum Engine.PrimitiveComponent.GJKResult
enum class Engine_EGJKResult : uint8_t
{
	GJK_Intersect                  = 0,
	GJK_NoIntersection             = 1,
	GJK_Fail                       = 2,
	GJK_MAX                        = 3,

};

// Enum Engine.Scene.EDetailMode
enum class Engine_EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3,

};

// Enum Engine.Scene.ESceneDepthPriorityGroup
enum class Engine_ESceneDepthPriorityGroup : uint8_t
{
	SDPG_UnrealEdBackground        = 0,
	SDPG_World                     = 1,
	SDPG_Foreground                = 2,
	SDPG_UnrealEdForeground        = 3,
	SDPG_PostProcess               = 4,
	SDPG_MAX                       = 5,

};

// Enum Engine.PrimitiveComponent.ERadialImpulseFalloff
enum class Engine_ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2,

};

// Enum Engine.PrimitiveComponent.ERBCollisionChannel
enum class Engine_ERBCollisionChannel : uint8_t
{
	RBCC_Default                   = 0,
	RBCC_Nothing                   = 1,
	RBCC_Pawn                      = 2,
	RBCC_Vehicle                   = 3,
	RBCC_Water                     = 4,
	RBCC_GameplayPhysics           = 5,
	RBCC_EffectPhysics             = 6,
	RBCC_Ball                      = 7,
	RBCC_VehicleBlocker            = 8,
	RBCC_BallBlocker               = 9,
	RBCC_Untitled4                 = 10,
	RBCC_Cloth                     = 11,
	RBCC_FluidDrain                = 12,
	RBCC_SoftBody                  = 13,
	RBCC_FracturedMeshPart         = 14,
	RBCC_BlockingVolume            = 15,
	RBCC_DeadPawn                  = 16,
	RBCC_Clothing                  = 17,
	RBCC_ClothingCollision         = 18,
	RBCC_MAX                       = 19,

};

// Enum Engine.Camera.EViewTargetBlendFunction
enum class Engine_EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MidwayStep             = 5,
	VTBlend_MAX                    = 6,

};

// Enum Engine.DOFEffect.EFocusType
enum class Engine_EFocusType : uint8_t
{
	FOCUS_Distance                 = 0,
	FOCUS_Position                 = 1,
	FOCUS_MAX                      = 2,

};

// Enum Engine.Camera.ECameraAnimPlaySpace
enum class Engine_ECameraAnimPlaySpace : uint8_t
{
	CAPS_CameraLocal               = 0,
	CAPS_World                     = 1,
	CAPS_UserDefined               = 2,
	CAPS_MAX                       = 3,

};

// Enum Engine.SeqAct_ControlMovieTexture.EMovieControlType
enum class Engine_EMovieControlType : uint8_t
{
	MCT_Play                       = 0,
	MCT_Stop                       = 1,
	MCT_Pause                      = 2,
	MCT_MAX                        = 3,

};

// Enum Engine.OnlineGameSearch.EOnlineGameSearchComparisonType
enum class Engine_EOnlineGameSearchComparisonType : uint8_t
{
	OGSCT_Equals                   = 0,
	OGSCT_NotEquals                = 1,
	OGSCT_GreaterThan              = 2,
	OGSCT_GreaterThanEquals        = 3,
	OGSCT_LessThan                 = 4,
	OGSCT_LessThanEquals           = 5,
	OGSCT_MAX                      = 6,

};

// Enum Engine.OnlineGameSearch.EOnlineGameSearchEntryType
enum class Engine_EOnlineGameSearchEntryType : uint8_t
{
	OGSET_Property                 = 0,
	OGSET_LocalizedSetting         = 1,
	OGSET_ObjectProperty           = 2,
	OGSET_MAX                      = 3,

};

// Enum Engine.OnlineGameSearch.EOnlineGameSearchSortType
enum class Engine_EOnlineGameSearchSortType : uint8_t
{
	OGSSO_Ascending                = 0,
	OGSSO_Descending               = 1,
	OGSSO_MAX                      = 2,

};

// Enum Engine.PlayerController.EProgressMessageType
enum class Engine_EProgressMessageType : uint8_t
{
	PMT_Clear                      = 0,
	PMT_Information                = 1,
	PMT_AdminMessage               = 2,
	PMT_DownloadProgress           = 3,
	PMT_ConnectionFailure          = 4,
	PMT_PeerConnectionFailure      = 5,
	PMT_PeerHostMigrationFailure   = 6,
	PMT_SocketFailure              = 7,
	PMT_Reconnect                  = 8,
	PMT_AntiCheatKick              = 9,
	PMT_MAX                        = 10,

};

// Enum Engine.SkeletalMeshComponent.EPhysBodyOp
enum class Engine_EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_Disable                    = 2,
	PBO_MAX                        = 3,

};

// Enum Engine.SkeletalMeshComponent.EBoneVisibilityStatus
enum class Engine_EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3,

};

// Enum Engine.SkeletalMeshComponent.EFaceFXRegOp
enum class Engine_EFaceFXRegOp : uint8_t
{
	FXRO_Add                       = 0,
	FXRO_Multiply                  = 1,
	FXRO_Replace                   = 2,
	FXRO_MAX                       = 3,

};

// Enum Engine.SkeletalMeshComponent.EFaceFXBlendMode
enum class Engine_EFaceFXBlendMode : uint8_t
{
	FXBM_Overwrite                 = 0,
	FXBM_Additive                  = 1,
	FXBM_MAX                       = 2,

};

// Enum Engine.SkeletalMeshComponent.EInstanceWeightUsage
enum class Engine_EInstanceWeightUsage : uint8_t
{
	IWU_PartialSwap                = 0,
	IWU_FullSwap                   = 1,
	IWU_MAX                        = 2,

};

// Enum Engine.SkeletalMeshComponent.EAnimRotationOnly
enum class Engine_EAnimRotationOnly : uint8_t
{
	EARO_AnimSet                   = 0,
	EARO_ForceEnabled              = 1,
	EARO_ForceDisabled             = 2,
	EARO_MAX                       = 3,

};

// Enum Engine.SkeletalMeshComponent.ERootMotionRotationMode
enum class Engine_ERootMotionRotationMode : uint8_t
{
	RMRM_Ignore                    = 0,
	RMRM_RotateActor               = 1,
	RMRM_MAX                       = 2,

};

// Enum Engine.SkeletalMeshComponent.ERootMotionMode
enum class Engine_ERootMotionMode : uint8_t
{
	RMM_Translate                  = 0,
	RMM_Velocity                   = 1,
	RMM_Ignore                     = 2,
	RMM_Accel                      = 3,
	RMM_Relative                   = 4,
	RMM_MAX                        = 5,

};

// Enum Engine.SkeletalMeshComponent.EMaxDistanceScaleMode
enum class Engine_EMaxDistanceScaleMode : uint8_t
{
	MDSM_Multiply                  = 0,
	MDSM_Substract                 = 1,
	MDSM_MAX                       = 2,

};

// Enum Engine.CoverLink.ECoverDirection
enum class Engine_ECoverDirection : uint8_t
{
	CD_Default                     = 0,
	CD_Left                        = 1,
	CD_Right                       = 2,
	CD_Up                          = 3,
	CD_MAX                         = 4,

};

// Enum Engine.CoverLink.EFireLinkID
enum class Engine_EFireLinkID : uint8_t
{
	FLI_FireLink                   = 0,
	FLI_RejectedFireLink           = 1,
	FLI_MAX                        = 2,

};

// Enum Engine.StaticMeshComponent.ELightmapModificationFunction
enum class Engine_ELightmapModificationFunction : uint8_t
{
	MLMF_Modulate                  = 0,
	MLMF_ModulateAlpha             = 1,
	MLMF_MAX                       = 2,

};

// Enum Engine.DecalComponent.EFilterMode
enum class Engine_EFilterMode : uint8_t
{
	FM_None                        = 0,
	FM_Ignore                      = 1,
	FM_Affect                      = 2,
	FM_MAX                         = 3,

};

// Enum Engine.DecalComponent.EDecalTransform
enum class Engine_EDecalTransform : uint8_t
{
	DecalTransform_OwnerAbsolute   = 0,
	DecalTransform_OwnerRelative   = 1,
	DecalTransform_SpawnRelative   = 2,
	DecalTransform_MAX             = 3,

};

// Enum Engine.MaterialInterface.EMaterialUsage
enum class Engine_EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_FracturedMeshes       = 1,
	MATUSAGE_ParticleSprites       = 2,
	MATUSAGE_BeamTrails            = 3,
	MATUSAGE_ParticleSubUV         = 4,
	MATUSAGE_SpeedTree             = 5,
	MATUSAGE_StaticLighting        = 6,
	MATUSAGE_GammaCorrection       = 7,
	MATUSAGE_LensFlare             = 8,
	MATUSAGE_InstancedMeshParticles = 9,
	MATUSAGE_FluidSurface          = 10,
	MATUSAGE_Decals                = 11,
	MATUSAGE_MaterialEffect        = 12,
	MATUSAGE_MorphTargets          = 13,
	MATUSAGE_FogVolumes            = 14,
	MATUSAGE_RadialBlur            = 15,
	MATUSAGE_InstancedMeshes       = 16,
	MATUSAGE_SplineMesh            = 17,
	MATUSAGE_ScreenDoorFade        = 18,
	MATUSAGE_APEXMesh              = 19,
	MATUSAGE_Terrain               = 20,
	MATUSAGE_Landscape             = 21,
	MATUSAGE_MobileLandscape       = 22,
	MATUSAGE_Silhouettes           = 23,
	MATUSAGE_MAX                   = 24,

};

// Enum Engine.LightComponent.EShadowFilterQuality
enum class Engine_EShadowFilterQuality : uint8_t
{
	SFQ_Low                        = 0,
	SFQ_Medium                     = 1,
	SFQ_High                       = 2,
	SFQ_MAX                        = 3,

};

// Enum Engine.LightComponent.EShadowProjectionTechnique
enum class Engine_EShadowProjectionTechnique : uint8_t
{
	ShadowProjTech_Default         = 0,
	ShadowProjTech_PCF             = 1,
	ShadowProjTech_VSM             = 2,
	ShadowProjTech_BPCF_Low        = 3,
	ShadowProjTech_BPCF_Medium     = 4,
	ShadowProjTech_BPCF_High       = 5,
	ShadowProjTech_MAX             = 6,

};

// Enum Engine.LightComponent.ELightShadowMode
enum class Engine_ELightShadowMode : uint8_t
{
	LightShadow_Normal             = 0,
	LightShadow_Modulate           = 1,
	LightShadow_ModulateBetter     = 2,
	LightShadow_MAX                = 3,

};

// Enum Engine.LightComponent.ELightAffectsClassification
enum class Engine_ELightAffectsClassification : uint8_t
{
	LAC_USER_SELECTED              = 0,
	LAC_DYNAMIC_AFFECTING          = 1,
	LAC_STATIC_AFFECTING           = 2,
	LAC_DYNAMIC_AND_STATIC_AFFECTING = 3,
	LAC_MAX                        = 4,

};

// Enum Engine.DistributionFloatParameterBase.DistributionParamMode
enum class Engine_EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3,

};

// Enum Engine.DOFAndBloomEffect.EDOFQuality
enum class Engine_EDOFQuality : uint8_t
{
	DOFQuality_Low                 = 0,
	DOFQuality_Medium              = 1,
	DOFQuality_High                = 2,
	DOFQuality_MAX                 = 3,

};

// Enum Engine.DOFAndBloomEffect.EDOFType
enum class Engine_EDOFType : uint8_t
{
	DOFType_SimpleDOF              = 0,
	DOFType_ReferenceDOF           = 1,
	DOFType_BokehDOF               = 2,
	DOFType_MAX                    = 3,

};

// Enum Engine.ParticleSystemComponent.EParticleSysParamType
enum class Engine_EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_Mesh                      = 8,
	PSPT_MAX                       = 9,

};

// Enum Engine.ParticleSystemComponent.ParticleReplayState
enum class Engine_EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3,

};

// Enum Engine.ParticleSystemComponent.EParticleEventType
enum class Engine_EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_WorldAttractorCollision   = 4,
	EPET_Kismet                    = 5,
	EPET_MAX                       = 6,

};

// Enum Engine.Engine.EBasicLoadResult
enum class Engine_EBasicLoadResult : uint8_t
{
	BasicLoadResult_Pending        = 0,
	BasicLoadResult_Success        = 1,
	BasicLoadResult_FileNotFound   = 2,
	BasicLoadResult_WrongVersion   = 3,
	BasicLoadResult_FileCorrupt    = 4,
	BasicLoadResult_MountCorrupt   = 5,
	BasicLoadResult_UserNotSignedIn = 6,
	BasicLoadResult_Error          = 7,
	BasicLoadResult_MAX            = 8,

};

// Enum Engine.Engine.EImageFilterOptions
enum class Engine_EImageFilterOptions : uint8_t
{
	ImageFilter_NONE               = 0,
	ImageFilter_SEPIA              = 1,
	ImageFilter_GRAYSCALE          = 2,
	ImageFilter_SCENE_DEPTH        = 3,
	ImageFilter_GLOWY              = 4,
	ImageFilter_SUBPAR             = 5,
	ImageFilter_SOBEL              = 6,
	ImageFilter_SOBEL_STRIKER      = 7,
	ImageFilter_COMIC_BOOK         = 8,
	ImageFilter_TOON               = 9,
	ImageFilter_OUTLINES           = 10,
	ImageFilter_CHROMATIC          = 11,
	ImageFilter_NIGHT_VISION       = 12,
	ImageFilter_MAX_FILTERS        = 13,
	ImageFilter_MAX                = 14,

};

// Enum Engine.Engine.EReplayFXProperties
enum class Engine_EReplayFXProperties : uint8_t
{
	ReplayFX_Distance              = 0,
	ReplayFX_Kernel                = 1,
	ReplayFX_MaxFar                = 2,
	ReplayFX_MaxNear               = 3,
	ReplayFX_MAX                   = 4,

};

// Enum Engine.Engine.ETransitionType
enum class Engine_ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_MAX                         = 6,

};

// Enum Engine.FacebookIntegration.EFacebookIntegrationDelegate
enum class Engine_EFacebookIntegrationDelegate : uint8_t
{
	FID_AuthorizationComplete      = 0,
	FID_FacebookRequestComplete    = 1,
	FID_DialogComplete             = 2,
	FID_FriendsListComplete        = 3,
	FID_MAX                        = 4,

};

// Enum Engine.FileWriter.FWFileType
enum class Engine_EFWFileType : uint8_t
{
	FWFT_Log                       = 0,
	FWFT_Stats                     = 1,
	FWFT_HTML                      = 2,
	FWFT_User                      = 3,
	FWFT_Debug                     = 4,
	FWFT_MAX                       = 5,

};

// Enum Engine.FluidInfluenceComponent.EInfluenceType
enum class Engine_EInfluenceType : uint8_t
{
	Fluid_Flow                     = 0,
	Fluid_Raindrops                = 1,
	Fluid_Wave                     = 2,
	Fluid_Sphere                   = 3,
	Fluid_MAX                      = 4,

};

// Enum Engine.FontImportOptions.EFontImportCharacterSet
enum class Engine_EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3,

};

// Enum Engine.ForceFeedbackWaveform.EWaveformFunction
enum class Engine_EWaveformFunction : uint8_t
{
	WF_Constant                    = 0,
	WF_LinearIncreasing            = 1,
	WF_LinearDecreasing            = 2,
	WF_Sin0to90                    = 3,
	WF_Sin90to180                  = 4,
	WF_Sin0to180                   = 5,
	WF_Noise                       = 6,
	WF_MAX                         = 7,

};

// Enum Engine.WorldInfo.EHostMigrationProgress
enum class Engine_EHostMigrationProgress : uint8_t
{
	HostMigration_None             = 0,
	HostMigration_FindingNewHost   = 1,
	HostMigration_MigratingAsHost  = 2,
	HostMigration_MigratingAsClient = 3,
	HostMigration_ClientTravel     = 4,
	HostMigration_HostReadyToTravel = 5,
	HostMigration_Failed           = 6,
	HostMigration_MAX              = 7,

};

// Enum Engine.WorldInfo.EConsoleType
enum class Engine_EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Xbox360                = 1,
	CONSOLE_PS3                    = 2,
	CONSOLE_Mobile                 = 3,
	CONSOLE_IPhone                 = 4,
	CONSOLE_Android                = 5,
	CONSOLE_WiiU                   = 6,
	CONSOLE_Flash                  = 7,
	CONSOLE_Mobile_Retina          = 8,
	CONSOLE_PC                     = 9,
	CONSOLE_Kindle                 = 10,
	CONSOLE_PS4                    = 11,
	CONSOLE_Dingo                  = 12,
	CONSOLE_NNX                    = 13,
	CONSOLE_Lockhart               = 14,
	CONSOLE_Anaconda               = 15,
	CONSOLE_Prospero               = 16,
	CONSOLE_MAX                    = 17,

};

// Enum Engine.WorldInfo.EPreferredLightmapType
enum class Engine_EPreferredLightmapType : uint8_t
{
	EPLT_Default                   = 0,
	EPLT_Directional               = 1,
	EPLT_Simple                    = 2,
	EPLT_MAX                       = 3,

};

// Enum Engine.WorldInfo.EVisibilityAggressiveness
enum class Engine_EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3,

};

// Enum Engine.WorldInfo.ENetMode
enum class Engine_ENetMode : uint8_t
{
	NM_Standalone                  = 0,
	NM_DedicatedServer             = 1,
	NM_ListenServer                = 2,
	NM_Client                      = 3,
	NM_MAX                         = 4,

};

// Enum Engine.GameEngine.EFullyLoadPackageType
enum class Engine_EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5,

};

// Enum Engine.GameInfo.EStandbyType
enum class Engine_EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3,

};

// Enum Engine.LevelGridVolume.LevelGridCellShape
enum class Engine_ELevelGridCellShape : uint8_t
{
	LGCS_Box                       = 0,
	LGCS_Hex                       = 1,
	LGCS_MAX                       = 2,

};

// Enum Engine.LevelStreamingVolume.EStreamingVolumeUsage
enum class Engine_EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5,

};

// Enum Engine.MaterialExpressionAntialiasedTextureMask.ETextureColorChannel
enum class Engine_ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4,

};

// Enum Engine.MaterialExpressionCustom.ECustomMaterialOutputType
enum class Engine_ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4,

};

// Enum Engine.MaterialExpressionDepthOfFieldFunction.EDepthOfFieldFunctionValue
enum class Engine_EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_MAX                       = 3,

};

// Enum Engine.MaterialExpressionFunctionInput.EFunctionInputType
enum class Engine_EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MAX              = 7,

};

// Enum Engine.MaterialExpressionLandscapeLayerBlend.ELandscapeLayerBlendType
enum class Engine_ELandscapeLayerBlendType : uint8_t
{
	LB_AlphaBlend                  = 0,
	LB_HeightBlend                 = 1,
	LB_MAX                         = 2,

};

// Enum Engine.MaterialExpressionSceneTexture.ESceneTextureType
enum class Engine_ESceneTextureType : uint8_t
{
	SceneTex_Lighting              = 0,
	SceneTex_MAX                   = 1,

};

// Enum Engine.MaterialExpressionTerrainLayerCoords.ETerrainCoordMappingType
enum class Engine_ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,

};

// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransform
enum class Engine_EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_World                = 0,
	TRANSFORM_View                 = 1,
	TRANSFORM_Local                = 2,
	TRANSFORM_Tangent              = 3,
	TRANSFORM_MAX                  = 4,

};

// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransformSource
enum class Engine_EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_World          = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_Tangent        = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_MAX            = 4,

};

// Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransform
enum class Engine_EMaterialPositionTransform : uint8_t
{
	TRANSFORMPOS_World             = 0,
	TRANSFORMPOS_MAX               = 1,

};

// Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransformSource
enum class Engine_EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_PostProjection = 1,
	TRANSFORMPOSSOURCE_MAX         = 2,

};

// Enum Engine.MicroTransactionBase.EMicroTransactionDelegate
enum class Engine_EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2,

};

// Enum Engine.MicroTransactionBase.EMicroTransactionResult
enum class Engine_EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4,

};

// Enum Engine.Actor.ENetRole
enum class Engine_ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,

};

// Enum Engine.ParticleSystem.ParticleSystemLODMethod
enum class Engine_EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3,

};

// Enum Engine.GameplayEvents.EGameStatGroups
enum class Engine_EGameStatGroups : uint8_t
{
	GSG_EngineStats                = 0,
	GSG_Game                       = 1,
	GSG_Team                       = 2,
	GSG_Player                     = 3,
	GSG_Weapon                     = 4,
	GSG_Damage                     = 5,
	GSG_Projectile                 = 6,
	GSG_Pawn                       = 7,
	GSG_GameSpecific               = 8,
	GSG_Aggregate                  = 9,
	GSG_MAX                        = 10,

};

// Enum Engine.GameViewportClient.ESplitScreenType
enum class Engine_ESplitScreenType : uint8_t
{
	eSST_NONE                      = 0,
	eSST_2P_HORIZONTAL             = 1,
	eSST_2P_VERTICAL               = 2,
	eSST_3P_FAVOR_TOP              = 3,
	eSST_3P_FAVOR_BOTTOM           = 4,
	eSST_3P_FAVOR_SIDELEFT         = 5,
	eSST_3P_FAVOR_SIDERIGHT        = 6,
	eSST_4P                        = 7,
	eSST_MAX                       = 8,

};

// Enum Engine.GameViewportClient.ESafeZoneType
enum class Engine_ESafeZoneType : uint8_t
{
	eSZ_TOP                        = 0,
	eSZ_BOTTOM                     = 1,
	eSZ_LEFT                       = 2,
	eSZ_RIGHT                      = 3,
	eSZ_MAX                        = 4,

};

// Enum Engine.GameViewportClient.ESetMode
enum class Engine_ESetMode : uint8_t
{
	SetMode_Toggle                 = 0,
	SetMode_Enable                 = 1,
	SetMode_Disable                = 2,
	SetMode_MAX                    = 3,

};

// Enum Engine.InAppMessageBase.EInAppMessageInterfaceDelegate
enum class Engine_EInAppMessageInterfaceDelegate : uint8_t
{
	IAMD_InAppSMSUIComplete        = 0,
	IAMD_InAppEmailComplete        = 1,
	IAMD_MAX                       = 2,

};

// Enum Engine.InGameAdManager.EAdManagerDelegate
enum class Engine_EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2,

};

// Enum Engine.InstancedFoliageSettings.FoliageCullOption
enum class Engine_EFoliageCullOption : uint8_t
{
	FOLIAGECULL_Cull               = 0,
	FOLIAGECULL_ScaleZ             = 1,
	FOLIAGECULL_ScaleXYZ           = 2,
	FOLIAGECULL_TranslateZ         = 3,
	FOLIAGECULL_MAX                = 4,

};

// Enum Engine.Interface_NavMeshPathObstacle.EEdgeHandlingStatus
enum class Engine_EEdgeHandlingStatus : uint8_t
{
	EHS_AddedBothDirs              = 0,
	EHS_Added0to1                  = 1,
	EHS_Added1to0                  = 2,
	EHS_AddedNone                  = 3,
	EHS_MAX                        = 4,

};

// Enum Engine.InterpTrack.ETrackActiveCondition
enum class Engine_ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3,

};

// Enum Engine.InterpTrackHeadTracking.EHeadTrackingAction
enum class Engine_EHeadTrackingAction : uint8_t
{
	EHTA_DisableHeadTracking       = 0,
	EHTA_EnableHeadTracking        = 1,
	EHTA_MAX                       = 2,

};

// Enum Engine.InterpTrackToggle.ETrackToggleAction
enum class Engine_ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4,

};

// Enum Engine.InterpTrackVisibility.EVisibilityTrackCondition
enum class Engine_EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3,

};

// Enum Engine.InterpTrackVisibility.EVisibilityTrackAction
enum class Engine_EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3,

};

// Enum Engine.InterpTrackMove.EInterpTrackMoveRotMode
enum class Engine_EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3,

};

// Enum Engine.InterpTrackMove.EInterpTrackMoveFrame
enum class Engine_EInterpTrackMoveFrame : uint8_t
{
	IMF_World                      = 0,
	IMF_RelativeToInitial          = 1,
	IMF_MAX                        = 2,

};

// Enum Engine.InterpTrackMoveAxis.EInterpMoveAxis
enum class Engine_EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6,

};

// Enum Engine.Landscape.ELandscapeSetupErrors
enum class Engine_ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,

};

// Enum Engine.LandscapeGizmoActiveActor.ELandscapeGizmoType
enum class Engine_ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,

};

// Enum Engine.PlayerController.EInputMatchAction
enum class Engine_EInputMatchAction : uint8_t
{
	IMA_GreaterThan                = 0,
	IMA_LessThan                   = 1,
	IMA_MAX                        = 2,

};

// Enum Engine.PlayerController.EInputTypes
enum class Engine_EInputTypes : uint8_t
{
	IT_XAxis                       = 0,
	IT_YAxis                       = 1,
	IT_MAX                         = 2,

};

// Enum Engine.Pylon.ENavMeshEdgeType
enum class Engine_ENavMeshEdgeType : uint8_t
{
	NAVEDGE_Normal                 = 0,
	NAVEDGE_Mantle                 = 1,
	NAVEDGE_Coverslip              = 2,
	NAVEDGE_SwatTurn               = 3,
	NAVEDGE_DropDown               = 4,
	NAVEDGE_PathObject             = 5,
	NAVEDGE_BackRefDummy           = 6,
	NAVEDGE_Jump                   = 7,
	NAVEDGE_MAX                    = 8,

};

// Enum Engine.AkBank.EBankLoadStatus
enum class Engine_EBankLoadStatus : uint8_t
{
	BLS_Unloaded                   = 0,
	BLS_Pending                    = 1,
	BLS_Loaded                     = 2,
	BLS_TimedOut                   = 3,
	BLS_MAX                        = 4,

};

// Enum Engine.AmbientOcclusionEffect.EAmbientOcclusionQuality
enum class Engine_EAmbientOcclusionQuality : uint8_t
{
	AO_High                        = 0,
	AO_Medium                      = 1,
	AO_Low                         = 2,
	AO_MAX                         = 3,

};

// Enum Engine.Brush.ECsgOper
enum class Engine_ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_MAX                        = 5,

};

// Enum Engine.ReverbVolume.ReverbPreset
enum class Engine_EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,

};

// Enum Engine.EngineTypes.EPathFindingError
enum class Engine_EPathFindingError : uint8_t
{
	PATHERROR_STARTPOLYNOTFOUND    = 0,
	PATHERROR_GOALPOLYNOTFOUND     = 1,
	PATHERROR_ANCHORPYLONNOTFOUND  = 2,
	PATHERROR_NOPATHFOUND          = 3,
	PATHERROR_COMPUTEVALIDFINALDEST_FAIL = 4,
	PATHERROR_GETNEXTMOVELOCATION_FAIL = 5,
	PATHERROR_MOVETIMEOUT          = 6,
	PATHERROR_MAX                  = 7,

};

// Enum Engine.AudioDevice.EDebugState
enum class Engine_EDebugState : uint8_t
{
	DEBUGSTATE_None                = 0,
	DEBUGSTATE_IsolateDryAudio     = 1,
	DEBUGSTATE_IsolateReverb       = 2,
	DEBUGSTATE_TestLPF             = 3,
	DEBUGSTATE_TestStereoBleed     = 4,
	DEBUGSTATE_TestLFEBleed        = 5,
	DEBUGSTATE_DisableLPF          = 6,
	DEBUGSTATE_DisableRadio        = 7,
	DEBUGSTATE_MAX                 = 8,

};

// Enum Engine.AudioDevice.ESoundClassName
enum class Engine_ESoundClassName : uint8_t
{
	Master                         = 0,
	ESoundClassName_MAX            = 1,

};

// Enum Engine.AudioDevice.ETTSSpeaker
enum class Engine_ETTSSpeaker : uint8_t
{
	TTSSPEAKER_Paul                = 0,
	TTSSPEAKER_Harry               = 1,
	TTSSPEAKER_Frank               = 2,
	TTSSPEAKER_Dennis              = 3,
	TTSSPEAKER_Kit                 = 4,
	TTSSPEAKER_Betty               = 5,
	TTSSPEAKER_Ursula              = 6,
	TTSSPEAKER_Rita                = 7,
	TTSSPEAKER_Wendy               = 8,
	TTSSPEAKER_MAX                 = 9,

};

// Enum Engine.SoundNodeAttenuation.ESoundDistanceCalc
enum class Engine_ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4,

};

// Enum Engine.SoundNodeAttenuation.SoundDistanceModel
enum class Engine_ESoundDistanceModel : uint8_t
{
	ATTENUATION_Linear             = 0,
	ATTENUATION_Logarithmic        = 1,
	ATTENUATION_Inverse            = 2,
	ATTENUATION_LogReverse         = 3,
	ATTENUATION_NaturalSound       = 4,
	ATTENUATION_MAX                = 5,

};

// Enum Engine.PlatformInterfaceBase.EPlatformInterfaceDataType
enum class Engine_EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_QWord                     = 6,
	PIDT_MAX                       = 7,

};

// Enum Engine.AnimSequence.AnimationCompressionFormat
enum class Engine_EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7,

};

// Enum Engine.AnimSequence.AnimationKeyFormat
enum class Engine_EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3,

};

// Enum Engine.AnimNode.ESliderType
enum class Engine_ESliderType : uint8_t
{
	ST_1D                          = 0,
	ST_2D                          = 1,
	ST_MAX                         = 2,

};

// Enum Engine.AnimNode_MultiBlendPerBone.EWeightCheck
enum class Engine_EWeightCheck : uint8_t
{
	EWC_AnimNodeSlotNotPlaying     = 0,
	EWC_MAX                        = 1,

};

// Enum Engine.AnimNode_MultiBlendPerBone.EBlendType
enum class Engine_EBlendType : uint8_t
{
	EBT_ParentBoneSpace            = 0,
	EBT_MeshSpace                  = 1,
	EBT_MAX                        = 2,

};

// Enum Engine.AnimNodeAimOffset.EAnimAimDir
enum class Engine_EAnimAimDir : uint8_t
{
	ANIMAIM_LEFTUP                 = 0,
	ANIMAIM_CENTERUP               = 1,
	ANIMAIM_RIGHTUP                = 2,
	ANIMAIM_LEFTCENTER             = 3,
	ANIMAIM_CENTERCENTER           = 4,
	ANIMAIM_RIGHTCENTER            = 5,
	ANIMAIM_LEFTDOWN               = 6,
	ANIMAIM_CENTERDOWN             = 7,
	ANIMAIM_RIGHTDOWN              = 8,
	ANIMAIM_MAX                    = 9,

};

// Enum Engine.AnimNodeAimOffset.EAimID
enum class Engine_EAimID : uint8_t
{
	EAID_LeftUp                    = 0,
	EAID_LeftDown                  = 1,
	EAID_RightUp                   = 2,
	EAID_RightDown                 = 3,
	EAID_ZeroUp                    = 4,
	EAID_ZeroDown                  = 5,
	EAID_ZeroLeft                  = 6,
	EAID_ZeroRight                 = 7,
	EAID_CellLU                    = 8,
	EAID_CellCU                    = 9,
	EAID_CellRU                    = 10,
	EAID_CellLC                    = 11,
	EAID_CellCC                    = 12,
	EAID_CellRC                    = 13,
	EAID_CellLD                    = 14,
	EAID_CellCD                    = 15,
	EAID_CellRD                    = 16,
	EAID_MAX                       = 17,

};

// Enum Engine.AnimNodeBlendByBase.EBaseBlendType
enum class Engine_EBaseBlendType : uint8_t
{
	BBT_ByActorTag                 = 0,
	BBT_ByActorClass               = 1,
	BBT_MAX                        = 2,

};

// Enum Engine.AnimNodeSequence.ERootRotationOption
enum class Engine_ERootRotationOption : uint8_t
{
	RRO_Default                    = 0,
	RRO_Discard                    = 1,
	RRO_Extract                    = 2,
	RRO_MAX                        = 3,

};

// Enum Engine.AnimNodeSequence.ERootBoneAxis
enum class Engine_ERootBoneAxis : uint8_t
{
	RBA_Default                    = 0,
	RBA_Discard                    = 1,
	RBA_Translate                  = 2,
	RBA_MAX                        = 3,

};

// Enum Engine.EngineTypes.EBlendMode
enum class Engine_EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_ModulateAndAdd           = 5,
	BLEND_SoftMasked               = 6,
	BLEND_AlphaComposite           = 7,
	BLEND_DitheredTranslucent      = 8,
	BLEND_MAX                      = 9,

};

// Enum Engine.EngineTypes.EMaterialLightingModel
enum class Engine_EMaterialLightingModel : uint8_t
{
	MLM_Phong                      = 0,
	MLM_NonDirectional             = 1,
	MLM_Unlit                      = 2,
	MLM_SHPRT                      = 3,
	MLM_Custom                     = 4,
	MLM_Anisotropic                = 5,
	MLM_MAX                        = 6,

};

// Enum Engine.EngineTypes.EMaterialTessellationMode
enum class Engine_EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3,

};

// Enum Engine.EngineTypes.EMobileValueSource
enum class Engine_EMobileValueSource : uint8_t
{
	MVS_Constant                   = 0,
	MVS_VertexColorRed             = 1,
	MVS_VertexColorGreen           = 2,
	MVS_VertexColorBlue            = 3,
	MVS_VertexColorAlpha           = 4,
	MVS_BaseTextureRed             = 5,
	MVS_BaseTextureGreen           = 6,
	MVS_BaseTextureBlue            = 7,
	MVS_BaseTextureAlpha           = 8,
	MVS_MaskTextureRed             = 9,
	MVS_MaskTextureGreen           = 10,
	MVS_MaskTextureBlue            = 11,
	MVS_MaskTextureAlpha           = 12,
	MVS_NormalTextureAlpha         = 13,
	MVS_EmissiveTextureRed         = 14,
	MVS_EmissiveTextureGreen       = 15,
	MVS_EmissiveTextureBlue        = 16,
	MVS_EmissiveTextureAlpha       = 17,
	MVS_MAX                        = 18,

};

// Enum Engine.EngineTypes.EMobileTextureBlendFactorSource
enum class Engine_EMobileTextureBlendFactorSource : uint8_t
{
	MTBFS_VertexColor              = 0,
	MTBFS_MaskTexture              = 1,
	MTBFS_MAX                      = 2,

};

// Enum Engine.EngineTypes.EMobileTexCoordsSource
enum class Engine_EMobileTexCoordsSource : uint8_t
{
	MTCS_TexCoords0                = 0,
	MTCS_TexCoords1                = 1,
	MTCS_TexCoords2                = 2,
	MTCS_TexCoords3                = 3,
	MTCS_MAX                       = 4,

};

// Enum Engine.EngineTypes.EMobileAlphaValueSource
enum class Engine_EMobileAlphaValueSource : uint8_t
{
	MAVS_DiffuseTextureAlpha       = 0,
	MAVS_MaskTextureRed            = 1,
	MAVS_MaskTextureGreen          = 2,
	MAVS_MaskTextureBlue           = 3,
	MAVS_MAX                       = 4,

};

// Enum Engine.EngineTypes.EMobileColorMultiplySource
enum class Engine_EMobileColorMultiplySource : uint8_t
{
	MCMS_None                      = 0,
	MCMS_BaseTextureRed            = 1,
	MCMS_BaseTextureGreen          = 2,
	MCMS_BaseTextureBlue           = 3,
	MCMS_BaseTextureAlpha          = 4,
	MCMS_MaskTextureRed            = 5,
	MCMS_MaskTextureGreen          = 6,
	MCMS_MaskTextureBlue           = 7,
	MCMS_MaskTextureAlpha          = 8,
	MCMS_MAX                       = 9,

};

// Enum Engine.EngineTypes.EMobileEmissiveColorSource
enum class Engine_EMobileEmissiveColorSource : uint8_t
{
	MECS_EmissiveTexture           = 0,
	MECS_BaseTexture               = 1,
	MECS_Constant                  = 2,
	MECS_MAX                       = 3,

};

// Enum Engine.EngineTypes.EMobileEnvironmentBlendMode
enum class Engine_EMobileEnvironmentBlendMode : uint8_t
{
	MEBM_Add                       = 0,
	MEBM_Lerp                      = 1,
	MEBM_MAX                       = 2,

};

// Enum Engine.EngineTypes.EMobileSpecularMask
enum class Engine_EMobileSpecularMask : uint8_t
{
	MSM_Constant                   = 0,
	MSM_Luminance                  = 1,
	MSM_DiffuseRed                 = 2,
	MSM_DiffuseGreen               = 3,
	MSM_DiffuseBlue                = 4,
	MSM_DiffuseAlpha               = 5,
	MSM_MaskTextureRGB             = 6,
	MSM_MaskTextureRed             = 7,
	MSM_MaskTextureGreen           = 8,
	MSM_MaskTextureBlue            = 9,
	MSM_MaskTextureAlpha           = 10,
	MSM_MAX                        = 11,

};

// Enum Engine.EngineTypes.EMobileAmbientOcclusionSource
enum class Engine_EMobileAmbientOcclusionSource : uint8_t
{
	MAOS_Disabled                  = 0,
	MAOS_VertexColorRed            = 1,
	MAOS_VertexColorGreen          = 2,
	MAOS_VertexColorBlue           = 3,
	MAOS_VertexColorAlpha          = 4,
	MAOS_MAX                       = 5,

};

// Enum Engine.EngineTypes.ELightingBuildQuality
enum class Engine_ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_NoGlobalIllumination   = 4,
	Quality_MAX                    = 5,

};

// Enum Engine.Pawn.EPathSearchType
enum class Engine_EPathSearchType : uint8_t
{
	PST_Default                    = 0,
	PST_Breadth                    = 1,
	PST_NewBestPathTo              = 2,
	PST_Constraint                 = 3,
	PST_MAX                        = 4,

};

// Enum Engine.DynamicLightEnvironmentComponent.EDynamicLightEnvironmentBoundsMethod
enum class Engine_EDynamicLightEnvironmentBoundsMethod : uint8_t
{
	DLEB_OwnerComponents           = 0,
	DLEB_ManualOverride            = 1,
	DLEB_ActiveComponents          = 2,
	DLEB_MAX                       = 3,

};

// Enum Engine.ApexDestructibleAsset.EImpactDamageOverride
enum class Engine_EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3,

};

// Enum Engine.ApexDestructibleDamageParameters.EDamageParameterOverrideMode
enum class Engine_EDamageParameterOverrideMode : uint8_t
{
	DPOM_Absolute                  = 0,
	DPOM_Multiplier                = 1,
	DPOM_MAX                       = 2,

};

// Enum Engine.CameraShake.EInitialOscillatorOffset
enum class Engine_EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,

};

// Enum Engine.Canvas.ECanvasBlendMode
enum class Engine_ECanvasBlendMode : uint8_t
{
	BLEND_CANVAS_Opaque            = 0,
	BLEND_CANVAS_Masked            = 1,
	BLEND_CANVAS_Translucent       = 2,
	BLEND_CANVAS_Additive          = 3,
	BLEND_CANVAS_Modulate          = 4,
	BLEND_CANVAS_ModulateAndAdd    = 5,
	BLEND_CANVAS_SoftMasked        = 6,
	BLEND_CANVAS_AlphaComposite    = 7,
	BLEND_CANVAS_DitheredTranslucent = 8,
	BLEND_CANVAS_AlphaOnly         = 9,
	BLEND_CANVAS_MAX               = 10,

};

// Enum Engine.Texture.TextureCompressionSettings
enum class Engine_ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Displacementmap             = 2,
	TC_NormalmapAlpha              = 3,
	TC_Grayscale                   = 4,
	TC_HighDynamicRange            = 5,
	TC_OneBitAlpha                 = 6,
	TC_NormalmapUncompressed       = 7,
	TC_NormalmapBC5                = 8,
	TC_NormalmapSwizzle            = 9,
	TC_OneBitMonochrome            = 10,
	TC_SimpleLightmapModification  = 11,
	TC_VectorDisplacementmap       = 12,
	TC_MAX                         = 13,

};

// Enum Engine.Texture.EPixelFormat
enum class Engine_EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_A8R8G8B8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_FilteredShadowDepth         = 13,
	PF_R32F                        = 14,
	PF_G16R16                      = 15,
	PF_G16R16F                     = 16,
	PF_G16R16F_FILTER              = 17,
	PF_G32R32F                     = 18,
	PF_A2B10G10R10                 = 19,
	PF_A2R10G10B10                 = 20,
	PF_A16B16G16R16                = 21,
	PF_D24                         = 22,
	PF_R16F                        = 23,
	PF_R16F_FILTER                 = 24,
	PF_BC5                         = 25,
	PF_V8U8                        = 26,
	PF_A1                          = 27,
	PF_FloatR11G11B10              = 28,
	PF_A4R4G4B4                    = 29,
	PF_R5G6B5                      = 30,
	PF_G8R8                        = 31,
	PF_R32_UINT                    = 32,
	PF_ASTC_4x4                    = 33,
	PF_ASTC_6x6                    = 34,
	PF_ASTC_8x8                    = 35,
	PF_ASTC_10x10                  = 36,
	PF_ASTC_12x12                  = 37,
	PF_COUNT                       = 38,
	PF_MAX_VALUE                   = 39,

};

// Enum Engine.Texture.TextureFilter
enum class Engine_ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Linear                      = 1,
	TF_MAX                         = 2,

};

// Enum Engine.Texture.TextureAddress
enum class Engine_ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3,

};

// Enum Engine.Texture.TextureGroup
enum class Engine_ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_ImageBasedReflection = 26,
	TEXTUREGROUP_Bokeh             = 27,
	TEXTUREGROUP_MAX               = 28,

};

// Enum Engine.Texture.TextureMipGenSettings
enum class Engine_ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20,

};

// Enum Engine.Texture.ETextureMipCount
enum class Engine_ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3,

};

// Enum Engine.CloudSaveSystem.SaveDataVersionSupport
enum class Engine_ESaveDataVersionSupport : uint8_t
{
	SaveDataVersionSupportLessThenEqual = 0,
	SaveDataVersionSupportEqual    = 1,
	SaveDataVersionSupportAny      = 2,
	SaveDataVersionSupport_MAX     = 3,

};

// Enum Engine.CloudSaveSystem.SaveSlotOperationEnum
enum class Engine_ESaveSlotOperationEnum : uint8_t
{
	SSO_SET                        = 0,
	SSO_GET                        = 1,
	SSO_DELETE                     = 2,
	SSO_MAX                        = 3,

};

// Enum Engine.CloudStorageBase.ECloudStorageDelegate
enum class Engine_ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7,

};

// Enum Engine.Interaction.ETouchType
enum class Engine_ETouchType : uint8_t
{
	Touch_Began                    = 0,
	Touch_Moved                    = 1,
	Touch_Stationary               = 2,
	Touch_Ended                    = 3,
	Touch_Cancelled                = 4,
	Touch_MAX                      = 5,

};

// Enum Engine.CoverGroup.ECoverGroupFillAction
enum class Engine_ECoverGroupFillAction : uint8_t
{
	CGFA_Overwrite                 = 0,
	CGFA_Add                       = 1,
	CGFA_Remove                    = 2,
	CGFA_Clear                     = 3,
	CGFA_Cylinder                  = 4,
	CGFA_MAX                       = 5,

};

// Enum Engine.CoverLink.ECoverLocationDescription
enum class Engine_ECoverLocationDescription : uint8_t
{
	CoverDesc_None                 = 0,
	CoverDesc_InWindow             = 1,
	CoverDesc_InDoorway            = 2,
	CoverDesc_BehindCar            = 3,
	CoverDesc_BehindTruck          = 4,
	CoverDesc_OnTruck              = 5,
	CoverDesc_BehindBarrier        = 6,
	CoverDesc_BehindColumn         = 7,
	CoverDesc_BehindCrate          = 8,
	CoverDesc_BehindWall           = 9,
	CoverDesc_BehindStatue         = 10,
	CoverDesc_BehindSandbags       = 11,
	CoverDesc_MAX                  = 12,

};

// Enum Engine.CoverLink.ECoverType
enum class Engine_ECoverType : uint8_t
{
	CT_None                        = 0,
	CT_Standing                    = 1,
	CT_MidLevel                    = 2,
	CT_MAX                         = 3,

};

// Enum Engine.CoverLink.ECoverAction
enum class Engine_ECoverAction : uint8_t
{
	CA_Default                     = 0,
	CA_BlindLeft                   = 1,
	CA_BlindRight                  = 2,
	CA_LeanLeft                    = 3,
	CA_LeanRight                   = 4,
	CA_PopUp                       = 5,
	CA_BlindUp                     = 6,
	CA_PeekLeft                    = 7,
	CA_PeekRight                   = 8,
	CA_PeekUp                      = 9,
	CA_MAX                         = 10,

};

// Enum Engine.NxForceFieldGeneric.FFG_ForceFieldCoordinates
enum class Engine_EFFG_ForceFieldCoordinates : uint8_t
{
	FFG_CARTESIAN                  = 0,
	FFG_SPHERICAL                  = 1,
	FFG_CYLINDRICAL                = 2,
	FFG_TOROIDAL                   = 3,
	FFG_MAX                        = 4,

};

// Enum Engine.NxGenericForceFieldBrush.FFB_ForceFieldCoordinates
enum class Engine_EFFB_ForceFieldCoordinates : uint8_t
{
	FFB_CARTESIAN                  = 0,
	FFB_SPHERICAL                  = 1,
	FFB_CYLINDRICAL                = 2,
	FFB_TOROIDAL                   = 3,
	FFB_MAX                        = 4,

};

// Enum Engine.OnlineLobbySettings.ELobbyKickReason
enum class Engine_ELobbyKickReason : uint8_t
{
	LKR_Unknown                    = 0,
	LKR_Kicked                     = 1,
	LKR_Full                       = 2,
	LKR_InGame                     = 3,
	LKR_LeaveAction                = 4,
	LKR_OwnerDisappeared           = 5,
	LKR_ConnectionError            = 6,
	LKR_SignedOut                  = 7,
	LKR_CrossplayDisabled          = 8,
	LKR_LeaderPartyUp              = 9,
	LKR_NotInTourParty             = 10,
	LKR_TourCheckingIn             = 11,
	LKR_MAX                        = 12,

};

// Enum Engine.OnlineLobbySettings.ELobbyVisibility
enum class Engine_ELobbyVisibility : uint8_t
{
	LV_Public                      = 0,
	LV_Friends                     = 1,
	LV_Private                     = 2,
	LV_Invisible                   = 3,
	LV_MAX                         = 4,

};

// Enum Engine.OnlineLobbySettings.ELobbyDistance
enum class Engine_ELobbyDistance : uint8_t
{
	LD_Best                        = 0,
	LD_Close                       = 1,
	LD_Far                         = 2,
	LD_Any                         = 3,
	LD_MAX                         = 4,

};

// Enum Engine.OnlinePlayerStorage.EOnlineProfilePropertyOwner
enum class Engine_EOnlineProfilePropertyOwner : uint8_t
{
	OPPO_None                      = 0,
	OPPO_OnlineService             = 1,
	OPPO_Game                      = 2,
	OPPO_MAX                       = 3,

};

// Enum Engine.OnlinePlayerStorage.EOnlinePlayerStorageAsyncState
enum class Engine_EOnlinePlayerStorageAsyncState : uint8_t
{
	OPAS_NotStarted                = 0,
	OPAS_Read                      = 1,
	OPAS_Write                     = 2,
	OPAS_Finished                  = 3,
	OPAS_MAX                       = 4,

};

// Enum Engine.OnlineProfileSettings.EProfileSettingID
enum class Engine_EProfileSettingID : uint8_t
{
	PSI_Unknown                    = 0,
	PSI_ControllerVibration        = 1,
	PSI_YInversion                 = 2,
	PSI_GamerCred                  = 3,
	PSI_GamerRep                   = 4,
	PSI_VoiceMuted                 = 5,
	PSI_VoiceThruSpeakers          = 6,
	PSI_VoiceVolume                = 7,
	PSI_GamerPictureKey            = 8,
	PSI_GamerMotto                 = 9,
	PSI_GamerTitlesPlayed          = 10,
	PSI_GamerAchievementsEarned    = 11,
	PSI_GameDifficulty             = 12,
	PSI_ControllerSensitivity      = 13,
	PSI_PreferredColor1            = 14,
	PSI_PreferredColor2            = 15,
	PSI_AutoAim                    = 16,
	PSI_AutoCenter                 = 17,
	PSI_MovementControl            = 18,
	PSI_RaceTransmission           = 19,
	PSI_RaceCameraLocation         = 20,
	PSI_RaceBrakeControl           = 21,
	PSI_RaceAcceleratorControl     = 22,
	PSI_GameCredEarned             = 23,
	PSI_GameAchievementsEarned     = 24,
	PSI_EndLiveIds                 = 25,
	PSI_ProfileVersionNum          = 26,
	PSI_ProfileSaveCount           = 27,
	PSI_MAX                        = 28,

};

// Enum Engine.OnlineProfileSettings.EProfileDifficultyOptions
enum class Engine_EProfileDifficultyOptions : uint8_t
{
	PDO_Normal                     = 0,
	PDO_Easy                       = 1,
	PDO_Hard                       = 2,
	PDO_MAX                        = 3,

};

// Enum Engine.OnlineProfileSettings.EProfileControllerSensitivityOptions
enum class Engine_EProfileControllerSensitivityOptions : uint8_t
{
	PCSO_Medium                    = 0,
	PCSO_Low                       = 1,
	PCSO_High                      = 2,
	PCSO_MAX                       = 3,

};

// Enum Engine.OnlineProfileSettings.EProfilePreferredColorOptions
enum class Engine_EProfilePreferredColorOptions : uint8_t
{
	PPCO_None                      = 0,
	PPCO_Black                     = 1,
	PPCO_White                     = 2,
	PPCO_Yellow                    = 3,
	PPCO_Orange                    = 4,
	PPCO_Pink                      = 5,
	PPCO_Red                       = 6,
	PPCO_Purple                    = 7,
	PPCO_Blue                      = 8,
	PPCO_Green                     = 9,
	PPCO_Brown                     = 10,
	PPCO_Silver                    = 11,
	PPCO_MAX                       = 12,

};

// Enum Engine.OnlineProfileSettings.EProfileAutoAimOptions
enum class Engine_EProfileAutoAimOptions : uint8_t
{
	PAAO_Off                       = 0,
	PAAO_On                        = 1,
	PAAO_MAX                       = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileAutoCenterOptions
enum class Engine_EProfileAutoCenterOptions : uint8_t
{
	PACO_Off                       = 0,
	PACO_On                        = 1,
	PACO_MAX                       = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileMovementControlOptions
enum class Engine_EProfileMovementControlOptions : uint8_t
{
	PMCO_L_Thumbstick              = 0,
	PMCO_R_Thumbstick              = 1,
	PMCO_MAX                       = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileRaceTransmissionOptions
enum class Engine_EProfileRaceTransmissionOptions : uint8_t
{
	PRTO_Auto                      = 0,
	PRTO_Manual                    = 1,
	PRTO_MAX                       = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileRaceCameraLocationOptions
enum class Engine_EProfileRaceCameraLocationOptions : uint8_t
{
	PRCLO_Behind                   = 0,
	PRCLO_Front                    = 1,
	PRCLO_Inside                   = 2,
	PRCLO_MAX                      = 3,

};

// Enum Engine.OnlineProfileSettings.EProfileRaceBrakeControlOptions
enum class Engine_EProfileRaceBrakeControlOptions : uint8_t
{
	PRBCO_Trigger                  = 0,
	PRBCO_Button                   = 1,
	PRBCO_MAX                      = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileRaceAcceleratorControlOptions
enum class Engine_EProfileRaceAcceleratorControlOptions : uint8_t
{
	PRACO_Trigger                  = 0,
	PRACO_Button                   = 1,
	PRACO_MAX                      = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileYInversionOptions
enum class Engine_EProfileYInversionOptions : uint8_t
{
	PYIO_Off                       = 0,
	PYIO_On                        = 1,
	PYIO_MAX                       = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileXInversionOptions
enum class Engine_EProfileXInversionOptions : uint8_t
{
	PXIO_Off                       = 0,
	PXIO_On                        = 1,
	PXIO_MAX                       = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileOmniDirEvadeOptions
enum class Engine_EProfileOmniDirEvadeOptions : uint8_t
{
	PODI_Off                       = 0,
	PODI_On                        = 1,
	PODI_MAX                       = 2,

};

// Enum Engine.OnlineProfileSettings.EProfileControllerVibrationToggleOptions
enum class Engine_EProfileControllerVibrationToggleOptions : uint8_t
{
	PCVTO_Off                      = 0,
	PCVTO_IgnoreThis               = 1,
	PCVTO_IgnoreThis2              = 2,
	PCVTO_On                       = 3,
	PCVTO_MAX                      = 4,

};

// Enum Engine.OnlineProfileSettings.EProfileVoiceThruSpeakersOptions
enum class Engine_EProfileVoiceThruSpeakersOptions : uint8_t
{
	PVTSO_Off                      = 0,
	PVTSO_On                       = 1,
	PVTSO_Both                     = 2,
	PVTSO_MAX                      = 3,

};

// Enum Engine.SeqAct_SetMesh.EMeshType
enum class Engine_EMeshType : uint8_t
{
	MeshType_StaticMesh            = 0,
	MeshType_SkeletalMesh          = 1,
	MeshType_MAX                   = 2,

};

// Enum Engine.ParticleEmitter.EEmitterRenderMode
enum class Engine_EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_None                       = 3,
	ERM_MAX                        = 4,

};

// Enum Engine.ParticleEmitter.EParticleSubUVInterpMethod
enum class Engine_EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5,

};

// Enum Engine.ParticleEmitter.EParticleBurstMethod
enum class Engine_EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2,

};

// Enum Engine.ParticleModule.EModuleType
enum class Engine_EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_MAX                       = 7,

};

// Enum Engine.ParticleModule.EParticleSourceSelectionMethod
enum class Engine_EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2,

};

// Enum Engine.ParticleModuleAttractorBoneSocket.EBoneSocketAttractorFalloffType
enum class Engine_EBoneSocketAttractorFalloffType : uint8_t
{
	BSFOFF_Constant                = 0,
	BSFOFF_Linear                  = 1,
	BSFOFF_Exponent                = 2,
	BSFOFF_MAX                     = 3,

};

// Enum Engine.ParticleModuleAttractorBoneSocket.ELocationBoneSocketDestSelectionMethod
enum class Engine_ELocationBoneSocketDestSelectionMethod : uint8_t
{
	BONESOCKETDESTSEL_Sequential   = 0,
	BONESOCKETDESTSEL_Random       = 1,
	BONESOCKETDESTSEL_RandomExhaustive = 2,
	BONESOCKETDESTSEL_BlendAll     = 3,
	BONESOCKETDESTSEL_MAX          = 4,

};

// Enum Engine.ParticleModuleAttractorBoneSocket.ELocationBoneSocketDestination
enum class Engine_ELocationBoneSocketDestination : uint8_t
{
	BONESOCKETDEST_Bones           = 0,
	BONESOCKETDEST_Sockets         = 1,
	BONESOCKETDEST_MAX             = 2,

};

// Enum Engine.ParticleModuleAttractorParticle.EAttractorParticleSelectionMethod
enum class Engine_EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2,

};

// Enum Engine.ParticleModuleAttractorSkelVertSurface.EVertSurfaceAttractorFalloffType
enum class Engine_EVertSurfaceAttractorFalloffType : uint8_t
{
	VSFOFF_Constant                = 0,
	VSFOFF_Linear                  = 1,
	VSFOFF_Exponent                = 2,
	VSFOFF_MAX                     = 3,

};

// Enum Engine.ParticleModuleAttractorSkelVertSurface.EAttractorSkelVertSurfaceDestination
enum class Engine_EAttractorSkelVertSurfaceDestination : uint8_t
{
	VERTSURFACEDEST_Vert           = 0,
	VERTSURFACEDEST_Surface        = 1,
	VERTSURFACEDEST_MAX            = 2,

};

// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetMethod
enum class Engine_EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB25TM_SkelMeshActor          = 5,
	Beam2SourceTargetMethod_MAX    = 6,

};

// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetTangentMethod
enum class Engine_EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4,

};

// Enum Engine.ParticleModuleBeamModifier.BeamModifierType
enum class Engine_EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2,

};

// Enum Engine.ParticleModuleCameraOffset.EParticleCameraOffsetUpdateMethod
enum class Engine_EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3,

};

// Enum Engine.ParticleModuleCollisionBase.EParticleCollisionComplete
enum class Engine_EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6,

};

// Enum Engine.ParticleModuleCollision.ParticleAttractorActionType
enum class Engine_EParticleAttractorActionType : uint8_t
{
	PAAT_None                      = 0,
	PAAT_Destroy                   = 1,
	PAAT_Freeze                    = 2,
	PAAT_Event                     = 3,
	PAAT_MAX                       = 4,

};

// Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSource
enum class Engine_ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2,

};

// Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSelectionMethod
enum class Engine_ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_RandomExhaustive = 2,
	BONESOCKETSEL_MAX              = 3,

};

// Enum Engine.ParticleModuleLocationEmitter.ELocationEmitterSelectionMethod
enum class Engine_ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2,

};

// Enum Engine.ParticleModuleLocationPrimitiveCylinder.CylinderHeightAxis
enum class Engine_ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3,

};

// Enum Engine.ParticleModuleLocationSkelVertSurface.ELocationSkelVertSurfaceSource
enum class Engine_ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2,

};

// Enum Engine.ParticleModuleLocationStaticVertSurface.ELocationStaticVertSurfaceSource
enum class Engine_ELocationStaticVertSurfaceSource : uint8_t
{
	VERTSTATICSURFACESOURCE_Vert   = 0,
	VERTSTATICSURFACESOURCE_Surface = 1,
	VERTSTATICSURFACESOURCE_MAX    = 2,

};

// Enum Engine.ParticleModuleOrbit.EOrbitChainMode
enum class Engine_EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3,

};

// Enum Engine.ParticleModuleOrientationAxisLock.EParticleAxisLock
enum class Engine_EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10,

};

// Enum Engine.ParticleModuleParameterDynamic.EEmitterDynamicParameterValue
enum class Engine_EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_VelocityX                 = 1,
	EDPV_VelocityY                 = 2,
	EDPV_VelocityZ                 = 3,
	EDPV_VelocityMag               = 4,
	EDPV_MAX                       = 5,

};

// Enum Engine.ParticleModulePhysicsVolumes.EParticleLevelInfluenceType
enum class Engine_EParticleLevelInfluenceType : uint8_t
{
	LIT_Never                      = 0,
	LIT_OutsidePhysicsVolumes      = 1,
	LIT_Always                     = 2,
	LIT_MAX                        = 3,

};

// Enum Engine.ParticleSpriteEmitter.EParticleScreenAlignment
enum class Engine_EParticleScreenAlignment : uint8_t
{
	PSA_Square                     = 0,
	PSA_Rectangle                  = 1,
	PSA_Velocity                   = 2,
	PSA_TypeSpecific               = 3,
	PSA_MAX                        = 4,

};

// Enum Engine.ParticleModuleRequired.EEmitterNormalsMode
enum class Engine_EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3,

};

// Enum Engine.ParticleModuleRequired.EParticleSortMode
enum class Engine_EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5,

};

// Enum Engine.ParticleModuleTrailSource.ETrail2SourceMethod
enum class Engine_ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3,

};

// Enum Engine.ParticleModuleTrailSpawn.ETrail2SpawnMethod
enum class Engine_ETrail2SpawnMethod : uint8_t
{
	PET2SM_Emitter                 = 0,
	PET2SM_Velocity                = 1,
	PET2SM_Distance                = 2,
	PET2SM_MAX                     = 3,

};

// Enum Engine.ParticleModuleTrailTaper.ETrailTaperMethod
enum class Engine_ETrailTaperMethod : uint8_t
{
	PETTM_None                     = 0,
	PETTM_Full                     = 1,
	PETTM_Partial                  = 2,
	PETTM_MAX                      = 3,

};

// Enum Engine.ParticleModuleTypeDataBeam.EBeamMethod
enum class Engine_EBeamMethod : uint8_t
{
	PEBM_Distance                  = 0,
	PEBM_EndPoints                 = 1,
	PEBM_EndPoints_Interpolated    = 2,
	PEBM_UserSet_EndPoints         = 3,
	PEBM_UserSet_EndPoints_Interpolated = 4,
	PEBM_MAX                       = 5,

};

// Enum Engine.ParticleModuleTypeDataBeam.EBeamEndPointMethod
enum class Engine_EBeamEndPointMethod : uint8_t
{
	PEBEPM_Calculated              = 0,
	PEBEPM_Distribution            = 1,
	PEBEPM_Distribution_Constant   = 2,
	PEBEPM_MAX                     = 3,

};

// Enum Engine.ParticleModuleTypeDataBeam2.EBeam2Method
enum class Engine_EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3,

};

// Enum Engine.ParticleModuleTypeDataBeam2.EBeamTaperMethod
enum class Engine_EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3,

};

// Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingOptions
enum class Engine_EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13,

};

// Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingUpAxis
enum class Engine_EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5,

};

// Enum Engine.ParticleModuleTypeDataMesh.EMeshScreenAlignment
enum class Engine_EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3,

};

// Enum Engine.ParticleModuleTypeDataMeshPhysX.EPhysXMeshRotationMethod
enum class Engine_EPhysXMeshRotationMethod : uint8_t
{
	PMRM_Disabled                  = 0,
	PMRM_Spherical                 = 1,
	PMRM_Box                       = 2,
	PMRM_LongBox                   = 3,
	PMRM_FlatBox                   = 4,
	PMRM_Velocity                  = 5,
	PMRM_MAX                       = 6,

};

// Enum Engine.ParticleModuleTypeDataRibbon.ETrailsRenderAxisOption
enum class Engine_ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_SourceSideIsUp          = 3,
	Trails_MAX                     = 4,

};

// Enum Engine.ParticleSystem.EParticleSystemOcclusionBoundsMethod
enum class Engine_EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3,

};

// Enum Engine.ParticleSystem.EParticleSystemUpdateMode
enum class Engine_EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2,

};

// Enum Engine.ProcBuildingRuleset.EProcBuildingAxis
enum class Engine_EProcBuildingAxis : uint8_t
{
	EPBAxis_X                      = 0,
	EPBAxis_Z                      = 1,
	EPBAxis_MAX                    = 2,

};

// Enum Engine.ProcBuilding.EScopeEdge
enum class Engine_EScopeEdge : uint8_t
{
	EPSA_Top                       = 0,
	EPSA_Bottom                    = 1,
	EPSA_Left                      = 2,
	EPSA_Right                     = 3,
	EPSA_None                      = 4,
	EPSA_MAX                       = 5,

};

// Enum Engine.ProcBuilding.EBuildingStatsBrowserColumns
enum class Engine_EBuildingStatsBrowserColumns : uint8_t
{
	BSBC_Name                      = 0,
	BSBC_Ruleset                   = 1,
	BSBC_NumStaticMeshComps        = 2,
	BSBC_NumInstancedStaticMeshComps = 3,
	BSBC_NumInstancedTris          = 4,
	BSBC_LightmapMemBytes          = 5,
	BSBC_ShadowmapMemBytes         = 6,
	BSBC_LODDiffuseMemBytes        = 7,
	BSBC_LODLightingMemBytes       = 8,
	BSBC_MAX                       = 9,

};

// Enum Engine.ProcBuilding.EPBCornerType
enum class Engine_EPBCornerType : uint8_t
{
	EPBC_Default                   = 0,
	EPBC_Chamfer                   = 1,
	EPBC_Round                     = 2,
	EPBC_MAX                       = 3,

};

// Enum Engine.PBRuleNodeEdgeAngle.EProcBuildingEdge
enum class Engine_EProcBuildingEdge : uint8_t
{
	EPBE_Top                       = 0,
	EPBE_Bottom                    = 1,
	EPBE_Left                      = 2,
	EPBE_Right                     = 3,
	EPBE_MAX                       = 4,

};

// Enum Engine.PhysicalMaterial.EPhysEffectType
enum class Engine_EPhysEffectType : uint8_t
{
	EPMET_Impact                   = 0,
	EPMET_Slide                    = 1,
	EPMET_MAX                      = 2,

};

// Enum Engine.PhysXParticleSystem.ESimulationMethod
enum class Engine_ESimulationMethod : uint8_t
{
	ESM_SPH                        = 0,
	ESM_NO_PARTICLE_INTERACTION    = 1,
	ESM_MIXED_MODE                 = 2,
	ESM_MAX                        = 3,

};

// Enum Engine.PhysXParticleSystem.EPacketSizeMultiplier
enum class Engine_EPacketSizeMultiplier : uint8_t
{
	EPSM                           = 0,
	EPSM01                         = 1,
	EPSM02                         = 2,
	EPSM03                         = 3,
	EPSM04                         = 4,
	EPSM05                         = 5,
	EPSM_MAX                       = 6,

};

// Enum Engine.SceneCaptureComponent.ESceneCaptureViewMode
enum class Engine_ESceneCaptureViewMode : uint8_t
{
	SceneCapView_Lit               = 0,
	SceneCapView_Unlit             = 1,
	SceneCapView_LitNoShadows      = 2,
	SceneCapView_Wire              = 3,
	SceneCapView_MAX               = 4,

};

// Enum Engine.SceneCaptureComponent.ESceneCapturePostMethod
enum class Engine_ESceneCapturePostMethod : uint8_t
{
	SceneCapPost_None              = 0,
	SceneCapPost_Desat             = 1,
	SceneCapPost_MAX               = 2,

};

// Enum Engine.RB_BodySetup.ESleepFamily
enum class Engine_ESleepFamily : uint8_t
{
	SF_Normal                      = 0,
	SF_Sensitive                   = 1,
	SF_MAX                         = 2,

};

// Enum Engine.RB_RadialForceActor.ERadialForceType
enum class Engine_ERadialForceType : uint8_t
{
	RFT_Force                      = 0,
	RFT_Impulse                    = 1,
	RFT_MAX                        = 2,

};

// Enum Engine.Route.ERouteDirection
enum class Engine_ERouteDirection : uint8_t
{
	ERD_Forward                    = 0,
	ERD_Reverse                    = 1,
	ERD_MAX                        = 2,

};

// Enum Engine.Route.ERouteFillAction
enum class Engine_ERouteFillAction : uint8_t
{
	RFA_Overwrite                  = 0,
	RFA_Add                        = 1,
	RFA_Remove                     = 2,
	RFA_Clear                      = 3,
	RFA_MAX                        = 4,

};

// Enum Engine.Route.ERouteType
enum class Engine_ERouteType : uint8_t
{
	ERT_Linear                     = 0,
	ERT_Loop                       = 1,
	ERT_Circle                     = 2,
	ERT_MAX                        = 3,

};

// Enum Engine.SeqAct_ActorFactory.EPointSelection
enum class Engine_EPointSelection : uint8_t
{
	PS_Normal                      = 0,
	PS_Random                      = 1,
	PS_Reverse                     = 2,
	PS_MAX                         = 3,

};

// Enum Engine.WorldAttractor.EWorldAttractorFalloffType
enum class Engine_EWorldAttractorFalloffType : uint8_t
{
	FOFF_Constant                  = 0,
	FOFF_Linear                    = 1,
	FOFF_Exponent                  = 2,
	FOFF_MAX                       = 3,

};

// Enum Engine.SeqEvent_ParticleEvent.EParticleEventOutputType
enum class Engine_EParticleEventOutputType : uint8_t
{
	ePARTICLEOUT_Spawn             = 0,
	ePARTICLEOUT_Death             = 1,
	ePARTICLEOUT_Collision         = 2,
	ePARTICLEOUT_AttractorCollision = 3,
	ePARTICLEOUT_Kismet            = 4,
	ePARTICLEOUT_MAX               = 5,

};

// Enum Engine.SkelControlBase.EBoneControlSpace
enum class Engine_EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ActorSpace                 = 1,
	BCS_ComponentSpace             = 2,
	BCS_ParentBoneSpace            = 3,
	BCS_BoneSpace                  = 4,
	BCS_OtherBoneSpace             = 5,
	BCS_BaseMeshSpace              = 6,
	BCS_MAX                        = 7,

};

// Enum Engine.SkelControlSpline.ESplineControlRotMode
enum class Engine_ESplineControlRotMode : uint8_t
{
	SCR_NoChange                   = 0,
	SCR_AlongSpline                = 1,
	SCR_Interpolate                = 2,
	SCR_MAX                        = 3,

};

// Enum Engine.SkeletalMesh.SoftBodyBoneType
enum class Engine_ESoftBodyBoneType : uint8_t
{
	SOFTBODYBONE_Fixed             = 0,
	SOFTBODYBONE_BreakableAttachment = 1,
	SOFTBODYBONE_TwoWayAttachment  = 2,
	SOFTBODYBONE_MAX               = 3,

};

// Enum Engine.SkeletalMesh.ClothBoneType
enum class Engine_EClothBoneType : uint8_t
{
	CLOTHBONE_Fixed                = 0,
	CLOTHBONE_BreakableAttachment  = 1,
	CLOTHBONE_TearLine             = 2,
	CLOTHBONE_MAX                  = 3,

};

// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationNormalMode
enum class Engine_ESkeletalMeshOptimizationNormalMode : uint8_t
{
	SMONM_Recalculate              = 0,
	SMONM_RecalculateSoft          = 1,
	SMONM_RecalculateHard          = 2,
	SMONM_MAX                      = 3,

};

// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationImportance
enum class Engine_ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6,

};

// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationType
enum class Engine_ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_MAX                       = 2,

};

// Enum Engine.SkeletalMesh.TriangleSortOption
enum class Engine_ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6,

};

// Enum Engine.SkeletalMesh.BoneBreakOption
enum class Engine_EBoneBreakOption : uint8_t
{
	BONEBREAK_SoftPreferred        = 0,
	BONEBREAK_AutoDetect           = 1,
	BONEBREAK_RigidPreferred       = 2,
	BONEBREAK_MAX                  = 3,

};

// Enum Engine.SkeletalMesh.TriangleSortAxis
enum class Engine_ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3,

};

// Enum Engine.SkeletalMesh.ClothMovementScaleGen
enum class Engine_EClothMovementScaleGen : uint8_t
{
	ECMDM_DistToFixedVert          = 0,
	ECMDM_VertexBoneWeight         = 1,
	ECMDM_Empty                    = 2,
	ECMDM_MAX                      = 3,

};

// Enum Engine.SoundNodeWave.EDecompressionType
enum class Engine_EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Dingo                    = 7,
	DTYPE_MAX                      = 8,

};

// Enum Engine.SpeedTreeComponent.ESpeedTreeMeshType
enum class Engine_ESpeedTreeMeshType : uint8_t
{
	STMT_MinMinusOne               = 0,
	STMT_Branches1                 = 1,
	STMT_Branches2                 = 2,
	STMT_Fronds                    = 3,
	STMT_LeafCards                 = 4,
	STMT_LeafMeshes                = 5,
	STMT_Billboards                = 6,
	STMT_Max                       = 7,

};

// Enum Engine.TerrainMaterial.ETerrainMappingType
enum class Engine_ETerrainMappingType : uint8_t
{
	TMT_Auto                       = 0,
	TMT_XY                         = 1,
	TMT_XZ                         = 2,
	TMT_YZ                         = 3,
	TMT_MAX                        = 4,

};

// Enum Engine.TextureFlipBook.TextureFlipBookMethod
enum class Engine_ETextureFlipBookMethod : uint8_t
{
	TFBM_UL_ROW                    = 0,
	TFBM_UL_COL                    = 1,
	TFBM_UR_ROW                    = 2,
	TFBM_UR_COL                    = 3,
	TFBM_LL_ROW                    = 4,
	TFBM_LL_COL                    = 5,
	TFBM_LR_ROW                    = 6,
	TFBM_LR_COL                    = 7,
	TFBM_RANDOM                    = 8,
	TFBM_MAX                       = 9,

};

// Enum Engine.TextureMovie.EMovieStreamSource
enum class Engine_EMovieStreamSource : uint8_t
{
	MovieStream_File               = 0,
	MovieStream_Memory             = 1,
	MovieStream_MAX                = 2,

};

// Enum Engine.TwitterIntegrationBase.ETwitterRequestMethod
enum class Engine_ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3,

};

// Enum Engine.TwitterIntegrationBase.ETwitterIntegrationDelegate
enum class Engine_ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3,

};

// Enum Engine.UberPostProcessEffect.EPostProcessAAType
enum class Engine_EPostProcessAAType : uint8_t
{
	PostProcessAA_Off              = 0,
	PostProcessAA_FXAA0            = 1,
	PostProcessAA_FXAA1            = 2,
	PostProcessAA_FXAA2            = 3,
	PostProcessAA_FXAA3            = 4,
	PostProcessAA_FXAA4            = 5,
	PostProcessAA_FXAA5            = 6,
	PostProcessAA_MLAA             = 7,
	PostProcessAA_SMAA             = 8,
	PostProcessAA_MAX              = 9,

};

// Enum Engine.UberPostProcessEffect.ETonemapperType
enum class Engine_ETonemapperType : uint8_t
{
	Tonemapper_Off                 = 0,
	Tonemapper_Filmic              = 1,
	Tonemapper_Customizable        = 2,
	Tonemapper_MAX                 = 3,

};

// Enum Engine.UIDataProvider_MenuItem.EMenuOptionType
enum class Engine_EMenuOptionType : uint8_t
{
	MENUOT_ComboReadOnly           = 0,
	MENUOT_ComboNumeric            = 1,
	MENUOT_CheckBox                = 2,
	MENUOT_Slider                  = 3,
	MENUOT_Spinner                 = 4,
	MENUOT_EditBox                 = 5,
	MENUOT_CollectionCheckBox      = 6,
	MENUOT_CollapsingList          = 7,
	MENUOT_MAX                     = 8,

};

// Enum Engine.UIDataStore_OnlineStats.EStatsFetchType
enum class Engine_EStatsFetchType : uint8_t
{
	SFT_Player                     = 0,
	SFT_CenteredOnPlayer           = 1,
	SFT_Friends                    = 2,
	SFT_TopRankings                = 3,
	SFT_MAX                        = 4,

};

// Enum Engine.MaterialExpressionPitchTekTextureSample.EPitchTekTextureType
enum class Engine_EPitchTekTextureType : uint8_t
{
	PitchTek_ColorTexture          = 0,
	PitchTek_DataTexture           = 1,
	PitchTek_MAX                   = 2,

};

// Enum Engine.DateTime.ETimeZone
enum class Engine_ETimeZone : uint8_t
{
	TZ_UTC                         = 0,
	TZ_Local                       = 1,
	TZ_MAX                         = 2,

};

// Enum Engine.MaterialExpressionGameParameter.EGameShaderParameterType
enum class Engine_EGameShaderParameterType : uint8_t
{
	GSPT_Team0_ColorPrimary        = 0,
	GSPT_Team0_ColorSecondary      = 1,
	GSPT_Team1_ColorPrimary        = 2,
	GSPT_Team1_ColorSecondary      = 3,
	GSPT_Team0_ColorPrimaryFullBrightness = 4,
	GSPT_Team0_ColorSecondaryFullBrightness = 5,
	GSPT_Team1_ColorPrimaryFullBrightness = 6,
	GSPT_Team1_ColorSecondaryFullBrightness = 7,
	GSPT_MAX                       = 8,

};

// Enum Engine.PitchTekSettings.EPitchTekTargetSize
enum class Engine_EPitchTekTargetSize : uint8_t
{
	PTTS                           = 0,
	PTTS01                         = 1,
	PTTS02                         = 2,
	PTTS_MAX                       = 3,

};

// Enum Engine.PlatformAccountSettings.ECrossPlatformChatState
enum class Engine_ECrossPlatformChatState : uint8_t
{
	PCCS_Everybody                 = 0,
	PCCS_InGameFriends             = 1,
	PCCS_Block                     = 2,
	PCCS_MAX                       = 3,

};

// Enum Engine.MaterialExpressionGameObjectParameter.EGameObjectShaderParameterType
enum class Engine_EGameObjectShaderParameterType : uint8_t
{
	GOSPT_BallPositionAndSize      = 0,
	GOSPT_BallVelocity             = 1,
	GOSPT_BallSpeed                = 2,
	GOSPT_BallMaxSpeed             = 3,
	GOSPT_IsSuperSonic             = 4,
	GOSPT_IsBoosting               = 5,
	GOSPT_IsMakingContactWithBall  = 6,
	GOSPT_IsCarOnGround            = 7,
	GOSPT_ObjectDistanceToBall     = 8,
	GOSPT_ObjectSpeed              = 9,
	GOSPT_ObjectVelocity           = 10,
	GOSPT_SuperSonicSpeed          = 11,
	GOSPT_CarMaxSpeed              = 12,
	GOSPT_MAX                      = 13,

};

// Enum Engine.MaterialExpressionMusicAnalysisParameter.EMusicAnalysisShaderParameterType
enum class Engine_EMusicAnalysisShaderParameterType : uint8_t
{
	MAPT_Music_Band                = 0,
	MAPT_Music_Band01              = 1,
	MAPT_Music_Band02              = 2,
	MAPT_Music_Band03              = 3,
	MAPT_Music_Band04              = 4,
	MAPT_Music_Band05              = 5,
	MAPT_Music_Band06              = 6,
	MAPT_Music_Band07              = 7,
	MAPT_Music_Band08              = 8,
	MAPT_Music_Band09              = 9,
	MAPT_Music_LowFreq_Envelope    = 10,
	MAPT_Music_HighFreq_Envelope   = 11,
	MAPT_Music_Band_Smoothed       = 12,
	MAPT_Music_Band_Smoothed01     = 13,
	MAPT_Music_Band_Smoothed02     = 14,
	MAPT_Music_Band_Smoothed03     = 15,
	MAPT_Music_Band_Smoothed04     = 16,
	MAPT_Music_Band_Smoothed05     = 17,
	MAPT_Music_Band_Smoothed06     = 18,
	MAPT_Music_Band_Smoothed07     = 19,
	MAPT_Music_Band_Smoothed08     = 20,
	MAPT_Music_Band_Smoothed09     = 21,
	MAPT_Music_LowFreq_Envelope_Smoothed = 22,
	MAPT_Music_HighFreq_Envelope_Smoothed = 23,
	MAPT_Music_MAX                 = 24,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.ORS.TimerOptions
// 0x0004
struct FTimerOptions
{
	unsigned long                                      bLooping : 1;                                              // 0x0000(0x0001) BIT_FIELD

};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x0048
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                           // 0x0000(0x000C)
	struct FVector                                     ContactNormal;                                             // 0x000C(0x000C)
	float                                              ContactPenetration;                                        // 0x0018(0x0004)
	struct FVector                                     ContactVelocity[0x2];                                      // 0x001C(0x0018)
	unsigned char                                      UnknownData_J8UA[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                         // 0x0038(0x0010)

};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x0028
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                                  // 0x0000(0x0008) (AlwaysInit)
	class UPhysicalMaterial*                           PhysMaterial;                                              // 0x0008(0x0008) (AlwaysInit)
	int                                                Item;                                                      // 0x0010(0x0004) (AlwaysInit)
	int                                                LevelIndex;                                                // 0x0014(0x0004) (AlwaysInit)
	struct FName                                       BoneName;                                                  // 0x0018(0x0008) (AlwaysInit)
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0020(0x0008) (ExportObject, Component, AlwaysInit, EditInline)

};

// ScriptStruct Engine.Actor.TimerData
// 0x0024
struct FTimerData
{
	unsigned long                                      bLoop : 1;                                                 // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bPaused : 1;                                               // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bStateTimer : 1;                                           // 0x0000(0x0001) BIT_FIELD
	struct FName                                       FuncName;                                                  // 0x0004(0x0008)
	float                                              Rate;                                                      // 0x000C(0x0004)
	float                                              Count;                                                     // 0x0010(0x0004)
	float                                              TimerTimeDilation;                                         // 0x0014(0x0004)
	class UObject*                                     TimerObj;                                                  // 0x0018(0x0008)
	int                                                StateGeneration;                                           // 0x0020(0x0004)

};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                              // 0x0000(0x0004)
	unsigned long                                      bEnableChanceOfPhysicsChunkOverride : 1;                   // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bLimitExplosionChunkSize : 1;                              // 0x0004(0x0001) BIT_FIELD
	float                                              MaxExplosionChunkSize;                                     // 0x0008(0x0004)
	unsigned long                                      bLimitDamageChunkSize : 1;                                 // 0x000C(0x0001) BIT_FIELD
	float                                              MaxDamageChunkSize;                                        // 0x0010(0x0004)
	int                                                MaxNumFacturedChunksToSpawnInAFrame;                       // 0x0014(0x0004)
	float                                              FractureExplosionVelScale;                                 // 0x0018(0x0004)

};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x0030
struct FMusicTrackStruct
{
	class USoundCue*                                   TheSoundCue;                                               // 0x0000(0x0008) (Edit)
	unsigned long                                      bAutoPlay : 1;                                             // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPersistentAcrossLevels : 1;                               // 0x0008(0x0001) BIT_FIELD (Edit)
	float                                              FadeInTime;                                                // 0x000C(0x0004) (Edit)
	float                                              FadeInVolumeLevel;                                         // 0x0010(0x0004) (Edit)
	float                                              FadeOutTime;                                               // 0x0014(0x0004) (Edit)
	float                                              FadeOutVolumeLevel;                                        // 0x0018(0x0004) (Edit)
	unsigned char                                      UnknownData_1EFG[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MP3Filename;                                               // 0x0020(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                      // 0x0000(0x0004)
	int                                                Index;                                                     // 0x0004(0x0004)
	int                                                SelectionIndex;                                            // 0x0008(0x0004)

};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x0024
struct FLUTBlender
{
	TArray<class UTexture*>                            LUTTextures;                                               // 0x0000(0x0010) (NeedCtorLink)
	TArray<float>                                      LUTWeights;                                                // 0x0010(0x0010) (NeedCtorLink)
	unsigned long                                      bHasChanged : 1;                                           // 0x0020(0x0001) BIT_FIELD (Const, Native, Transient)

};

// ScriptStruct Engine.PostProcessVolume.MobilePostProcessSettings
// 0x0034
struct FMobilePostProcessSettings
{
	unsigned long                                      bOverride_Mobile_BlurAmount : 1;                           // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Mobile_TransitionTime : 1;                       // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Mobile_Bloom_Scale : 1;                          // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Mobile_Bloom_Threshold : 1;                      // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Mobile_Bloom_Tint : 1;                           // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Mobile_DOF_Distance : 1;                         // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Mobile_DOF_MinRange : 1;                         // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Mobile_DOF_MaxRange : 1;                         // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Mobile_DOF_FarBlurFactor : 1;                    // 0x0000(0x0001) BIT_FIELD
	float                                              Mobile_BlurAmount;                                         // 0x0004(0x0004) (Edit, Interp)
	float                                              Mobile_TransitionTime;                                     // 0x0008(0x0004) (Edit)
	float                                              Mobile_Bloom_Scale;                                        // 0x000C(0x0004) (Edit, Interp)
	float                                              Mobile_Bloom_Threshold;                                    // 0x0010(0x0004) (Edit, Interp)
	struct FLinearColor                                Mobile_Bloom_Tint;                                         // 0x0014(0x0010) (Edit, Interp)
	float                                              Mobile_DOF_Distance;                                       // 0x0024(0x0004) (Edit, Interp)
	float                                              Mobile_DOF_MinRange;                                       // 0x0028(0x0004) (Edit, Interp)
	float                                              Mobile_DOF_MaxRange;                                       // 0x002C(0x0004) (Edit, Interp)
	float                                              Mobile_DOF_FarBlurFactor;                                  // 0x0030(0x0004) (Edit, Interp)

};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned long                                      bIsWorldInfo : 1;                                          // 0x0000(0x0001) BIT_FIELD
	float                                              ExteriorVolume;                                            // 0x0004(0x0004) (Edit)
	float                                              ExteriorTime;                                              // 0x0008(0x0004) (Edit)
	float                                              ExteriorLPF;                                               // 0x000C(0x0004) (Edit)
	float                                              ExteriorLPFTime;                                           // 0x0010(0x0004) (Edit)
	float                                              InteriorVolume;                                            // 0x0014(0x0004) (Edit)
	float                                              InteriorTime;                                              // 0x0018(0x0004) (Edit)
	float                                              InteriorLPF;                                               // 0x001C(0x0004) (Edit)
	float                                              InteriorLPFTime;                                           // 0x0020(0x0004) (Edit)

};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x0010
struct FReverbSettings
{
	unsigned long                                      bApplyReverb : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit)
	TEnumAsByte<Engine_EReverbPreset>                  ReverbType;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData_N9U5[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Volume;                                                    // 0x0008(0x0004) (Edit)
	float                                              FadeTime;                                                  // 0x000C(0x0004) (Edit)

};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0028
struct FNetViewer
{
	class APlayerController*                           InViewer;                                                  // 0x0000(0x0008)
	class AActor*                                      Viewer;                                                    // 0x0008(0x0008)
	struct FVector                                     ViewLocation;                                              // 0x0010(0x000C)
	struct FVector                                     ViewDir;                                                   // 0x001C(0x000C)

};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	unsigned long                                      bUseHardware : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bFixedTimeStep : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit)
	float                                              TimeStep;                                                  // 0x0004(0x0004) (Edit)
	int                                                MaxSubSteps;                                               // 0x0008(0x0004) (Edit)

};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	unsigned long                                      RigidBody : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Fluid : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cloth : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      SoftBody : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x0014
struct FApexModuleDestructibleSettings
{
	int                                                MaxChunkIslandCount;                                       // 0x0000(0x0004) (Edit)
	int                                                MaxShapeCount;                                             // 0x0004(0x0004) (Edit)
	int                                                MaxRrbActorCount;                                          // 0x0008(0x0004)
	float                                              MaxChunkSeparationLOD;                                     // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverrideMaxChunkSeparationLOD : 1;                        // 0x0010(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	unsigned long                                      bDisableLod : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	int                                                ParticlesLodMin;                                           // 0x0004(0x0004) (Edit)
	int                                                ParticlesLodMax;                                           // 0x0008(0x0004) (Edit)
	int                                                PacketsPerPhysXParticleSystemMax;                          // 0x000C(0x0004) (Edit)
	unsigned long                                      bApplyCylindricalPacketCulling : 1;                        // 0x0010(0x0001) BIT_FIELD (Edit)
	float                                              SpawnLodVsFifoBias;                                        // 0x0014(0x0004) (Edit)

};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0024
struct FScreenMessageString
{
	unsigned char                                      Key[0x8];                                                  // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.WorldInfo.ScreenMessageString.Key
	struct FString                                     ScreenMessage;                                             // 0x0008(0x0010) (Transient, AlwaysInit, NeedCtorLink)
	struct FColor                                      DisplayColor;                                              // 0x0018(0x0004) (Transient, AlwaysInit)
	float                                              TimeToDisplay;                                             // 0x001C(0x0004) (Transient, AlwaysInit)
	float                                              CurrentTimeDisplayed;                                      // 0x0020(0x0004) (Transient, AlwaysInit)

};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x0058
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                  // 0x0000(0x0004) (Edit)
	int                                                NumIndirectLightingBounces;                                // 0x0004(0x0004) (Edit)
	struct FColor                                      EnvironmentColor;                                          // 0x0008(0x0004) (Edit)
	float                                              EnvironmentIntensity;                                      // 0x000C(0x0004) (Edit)
	unsigned long                                      bEnableAdvancedEnvironmentColor : 1;                       // 0x0010(0x0001) BIT_FIELD (Edit)
	struct FColor                                      EnvironmentSunColor;                                       // 0x0014(0x0004) (Edit)
	float                                              EnvironmentSunIntensity;                                   // 0x0018(0x0004) (Edit)
	float                                              EnvironmentLightTerminatorAngle;                           // 0x001C(0x0004) (Edit)
	struct FVector                                     EnvironmentLightDirection;                                 // 0x0020(0x000C) (Edit)
	float                                              EmissiveBoost;                                             // 0x002C(0x0004) (Edit)
	float                                              DiffuseBoost;                                              // 0x0030(0x0004) (Edit)
	float                                              SpecularBoost;                                             // 0x0034(0x0004)
	float                                              IndirectNormalInfluenceBoost;                              // 0x0038(0x0004) (Edit)
	unsigned long                                      bUseAmbientOcclusion : 1;                                  // 0x003C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bEnableImageReflectionShadowing : 1;                       // 0x003C(0x0001) BIT_FIELD (Edit)
	float                                              DirectIlluminationOcclusionFraction;                       // 0x0040(0x0004) (Edit)
	float                                              IndirectIlluminationOcclusionFraction;                     // 0x0044(0x0004) (Edit)
	float                                              OcclusionExponent;                                         // 0x0048(0x0004) (Edit)
	float                                              FullyOccludedSamplesFraction;                              // 0x004C(0x0004) (Edit)
	float                                              MaxOcclusionDistance;                                      // 0x0050(0x0004) (Edit)
	unsigned long                                      bVisualizeMaterialDiffuse : 1;                             // 0x0054(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bVisualizeAmbientOcclusion : 1;                            // 0x0054(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bCompressShadowmap : 1;                                    // 0x0054(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// 0x0024
struct FHostMigrationState
{
	TEnumAsByte<Engine_EHostMigrationProgress>         HostMigrationProgress;                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData_1FM7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HostMigrationElapsedTime;                                  // 0x0004(0x0004)
	float                                              HostMigrationTravelCountdown;                              // 0x0008(0x0004)
	unsigned char                                      UnknownData_R1L2[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HostMigrationTravelURL;                                    // 0x0010(0x0010) (NeedCtorLink)
	unsigned long                                      bHostMigrationEnabled : 1;                                 // 0x0020(0x0001) BIT_FIELD

};

// ScriptStruct Engine.OnlineSubsystem.UniqueLobbyId
// 0x0009
struct FUniqueLobbyId
{
	unsigned char                                      Uid[0x8];                                                  // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.UniqueLobbyId.Uid
	TEnumAsByte<Core_EOnlinePlatform>                  Platform;                                                  // 0x0008(0x0001)

};

// ScriptStruct Engine.OnlineSubsystem.SteamDLCInfo
// 0x0010
struct FSteamDLCInfo
{
	unsigned char                                      AppID[0x8];                                                // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.SteamDLCInfo.AppID
	struct FName                                       Value;                                                     // 0x0008(0x0008)

};

// ScriptStruct Engine.OnlineSubsystem.PS4DLCInfo
// 0x0018
struct FPS4DLCInfo
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       Value;                                                     // 0x0010(0x0008)

};

// ScriptStruct Engine.OnlineSubsystem.XboxOneDLCInfo
// 0x001C
struct FXboxOneDLCInfo
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       Value;                                                     // 0x0010(0x0008)
	unsigned long                                      bDiscUnlock : 1;                                           // 0x0018(0x0001) BIT_FIELD

};

// ScriptStruct Engine.OnlineSubsystem.SwitchDLCInfo
// 0x0018
struct FSwitchDLCInfo
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       Value;                                                     // 0x0010(0x0008)

};

// ScriptStruct Engine.OnlineSubsystem.EpicDLCInfo
// 0x0018
struct FEpicDLCInfo
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       Value;                                                     // 0x0010(0x0008)

};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                             // 0x0000(0x0008)
	class UObject*                                     InterfaceObject;                                           // 0x0008(0x0008)

};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                             // 0x0000(0x0008)
	struct FString                                     InterfaceClassName;                                        // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0048
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                               // 0x0000(0x0048) (Const, NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C (0x0054 - 0x0048)
struct FOnlineArbitrationRegistrant : public FOnlineRegistrant
{
	unsigned char                                      MachineId[0x8];                                            // 0x0048(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.OnlineArbitrationRegistrant.MachineId
	int                                                Trustworthiness;                                           // 0x0050(0x0004) (Const)

};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x007C
struct FKConvexElem
{
	TArray<struct FVector>                             VertexData;                                                // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FPlane>                              PermutedVertexData;                                        // 0x0010(0x0010) (NeedCtorLink)
	TArray<int>                                        FaceTriData;                                               // 0x0020(0x0010) (NeedCtorLink)
	TArray<struct FVector>                             EdgeDirections;                                            // 0x0030(0x0010) (NeedCtorLink)
	TArray<struct FVector>                             FaceNormalDirections;                                      // 0x0040(0x0010) (NeedCtorLink)
	TArray<struct FPlane>                              FacePlaneData;                                             // 0x0050(0x0010) (NeedCtorLink)
	struct FBox                                        ElemBox;                                                   // 0x0060(0x001C)

};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                             // 0x0000(0x0001) BIT_FIELD

};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned long                                      bEnableGlow : 1;                                           // 0x0000(0x0001) BIT_FIELD
	struct FLinearColor                                GlowColor;                                                 // 0x0004(0x0010)
	struct FVector2D                                   GlowOuterRadius;                                           // 0x0014(0x0008)
	struct FVector2D                                   GlowInnerRadius;                                           // 0x001C(0x0008)

};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned long                                      bClipText : 1;                                             // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bEnableShadow : 1;                                         // 0x0000(0x0001) BIT_FIELD
	struct FDepthFieldGlowInfo                         GlowInfo;                                                  // 0x0004(0x0024)

};

// ScriptStruct Engine.Actor.ActorReference
// 0x0018
struct FActorReference
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (Edit)
	struct FGuid                                       Guid;                                                      // 0x0008(0x0010) (Edit, Const, EditConst)

};

// ScriptStruct Engine.Pylon.PolyReference
// 0x0028
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                               // 0x0000(0x0018)
	int                                                PolyId;                                                    // 0x0018(0x0004)
	unsigned char                                      UnknownData_P5BA[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    CachedPoly;                                                // 0x0020(0x0008) (Native)

};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                      // 0x0000(0x0008) (Edit)
	struct FVector                                     Position;                                                  // 0x0008(0x000C) (Edit)
	struct FVector                                     CachedBaseLocation;                                        // 0x0014(0x000C)
	struct FRotator                                    CachedBaseRotation;                                        // 0x0020(0x000C)
	struct FVector                                     CachedTransPosition;                                       // 0x002C(0x000C)

};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// 0x0064
struct FSlotMoveRef
{
	struct FPolyReference                              Poly;                                                      // 0x0000(0x0028) (Edit)
	struct FBasedPosition                              Dest;                                                      // 0x0028(0x0038) (Edit)
	int                                                Direction;                                                 // 0x0060(0x0004) (Edit)

};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x0010
struct FSMMaterialSetterDatum
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData_PLV0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          TheMaterial;                                               // 0x0008(0x0008) (Edit)

};

// ScriptStruct Engine.PostProcessVolume.MobileColorGradingParams
// 0x003C
struct FMobileColorGradingParams
{
	float                                              TransitionTime;                                            // 0x0000(0x0004) (Edit)
	float                                              Blend;                                                     // 0x0004(0x0004) (Edit)
	float                                              Desaturation;                                              // 0x0008(0x0004) (Edit)
	struct FLinearColor                                HighLights;                                                // 0x000C(0x0010) (Edit)
	struct FLinearColor                                MidTones;                                                  // 0x001C(0x0010) (Edit)
	struct FLinearColor                                Shadows;                                                   // 0x002C(0x0010) (Edit)

};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x0168
struct FPostProcessSettings
{
	unsigned long                                      bOverride_EnableBloom : 1;                                 // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_EnableDOF : 1;                                   // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_EnableMotionBlur : 1;                            // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_EnableSceneEffect : 1;                           // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_AllowAmbientOcclusion : 1;                       // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_OverrideRimShaderColor : 1;                      // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Bloom_Scale : 1;                                 // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Bloom_Threshold : 1;                             // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Bloom_Tint : 1;                                  // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Bloom_ScreenBlendThreshold : 1;                  // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Bloom_InterpolationDuration : 1;                 // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_FalloffExponent : 1;                         // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_BlurKernelSize : 1;                          // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_BlurBloomKernelSize : 1;                     // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_MaxNearBlurAmount : 1;                       // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_MinBlurAmount : 1;                           // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_MaxFarBlurAmount : 1;                        // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_FocusType : 1;                               // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_FocusInnerRadius : 1;                        // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_FocusDistance : 1;                           // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_FocusPosition : 1;                           // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_InterpolationDuration : 1;                   // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_DOF_BokehTexture : 1;                            // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_MotionBlur_MaxVelocity : 1;                      // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_MotionBlur_Amount : 1;                           // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_MotionBlur_FullMotionBlur : 1;                   // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_MotionBlur_CameraRotationThreshold : 1;          // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_MotionBlur_CameraTranslationThreshold : 1;       // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_MotionBlur_InterpolationDuration : 1;            // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_Desaturation : 1;                          // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_Colorize : 1;                              // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_TonemapperScale : 1;                       // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_ImageGrainScale : 1;                       // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_HighLights : 1;                            // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_MidTones : 1;                              // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_Shadows : 1;                               // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_InterpolationDuration : 1;                 // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bOverride_Scene_ColorGradingLUT : 1;                       // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bOverride_RimShader_Color : 1;                             // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bOverride_RimShader_InterpolationDuration : 1;             // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bOverride_MobileColorGrading : 1;                          // 0x0004(0x0001) BIT_FIELD
	unsigned long                                      bEnableBloom : 1;                                          // 0x0004(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bEnableDOF : 1;                                            // 0x0004(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bEnableMotionBlur : 1;                                     // 0x0004(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bEnableSceneEffect : 1;                                    // 0x0004(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowAmbientOcclusion : 1;                                // 0x0004(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bOverrideRimShaderColor : 1;                               // 0x0004(0x0001) BIT_FIELD (Edit)
	float                                              Bloom_Scale;                                               // 0x0008(0x0004) (Edit, Interp)
	float                                              Bloom_Threshold;                                           // 0x000C(0x0004) (Edit, Interp)
	struct FColor                                      Bloom_Tint;                                                // 0x0010(0x0004) (Edit, Interp)
	float                                              Bloom_ScreenBlendThreshold;                                // 0x0014(0x0004) (Edit, Interp)
	float                                              Bloom_InterpolationDuration;                               // 0x0018(0x0004) (Edit)
	float                                              DOF_BlurBloomKernelSize;                                   // 0x001C(0x0004) (Edit, Interp)
	float                                              DOF_FalloffExponent;                                       // 0x0020(0x0004) (Edit, Interp)
	float                                              DOF_BlurKernelSize;                                        // 0x0024(0x0004) (Edit, Interp)
	float                                              DOF_MaxNearBlurAmount;                                     // 0x0028(0x0004) (Edit, Interp)
	float                                              DOF_MinBlurAmount;                                         // 0x002C(0x0004) (Edit, Interp)
	float                                              DOF_MaxFarBlurAmount;                                      // 0x0030(0x0004) (Edit, Interp)
	TEnumAsByte<Engine_EFocusType>                     DOF_FocusType;                                             // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData_K39X[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DOF_FocusInnerRadius;                                      // 0x0038(0x0004) (Edit, Interp)
	float                                              DOF_FocusDistance;                                         // 0x003C(0x0004) (Edit, Interp)
	struct FVector                                     DOF_FocusPosition;                                         // 0x0040(0x000C) (Edit, Interp)
	float                                              DOF_InterpolationDuration;                                 // 0x004C(0x0004) (Edit)
	class UTexture2D*                                  DOF_BokehTexture;                                          // 0x0050(0x0008) (Edit)
	float                                              MotionBlur_MaxVelocity;                                    // 0x0058(0x0004) (Edit, Interp)
	float                                              MotionBlur_Amount;                                         // 0x005C(0x0004) (Edit, Interp)
	unsigned long                                      MotionBlur_FullMotionBlur : 1;                             // 0x0060(0x0001) BIT_FIELD (Edit)
	float                                              MotionBlur_CameraRotationThreshold;                        // 0x0064(0x0004) (Edit, Interp)
	float                                              MotionBlur_CameraTranslationThreshold;                     // 0x0068(0x0004) (Edit, Interp)
	float                                              MotionBlur_InterpolationDuration;                          // 0x006C(0x0004) (Edit)
	float                                              Scene_Desaturation;                                        // 0x0070(0x0004) (Edit, Interp)
	struct FVector                                     Scene_Colorize;                                            // 0x0074(0x000C) (Edit, Interp)
	float                                              Scene_TonemapperScale;                                     // 0x0080(0x0004) (Edit, Interp)
	float                                              Scene_ImageGrainScale;                                     // 0x0084(0x0004) (Edit, Interp)
	struct FVector                                     Scene_HighLights;                                          // 0x0088(0x000C) (Edit, Interp)
	struct FVector                                     Scene_MidTones;                                            // 0x0094(0x000C) (Edit, Interp)
	struct FVector                                     Scene_Shadows;                                             // 0x00A0(0x000C) (Edit, Interp)
	float                                              Scene_InterpolationDuration;                               // 0x00AC(0x0004) (Edit)
	struct FLinearColor                                RimShader_Color;                                           // 0x00B0(0x0010) (Edit)
	float                                              RimShader_InterpolationDuration;                           // 0x00C0(0x0004) (Edit)
	unsigned char                                      UnknownData_2EBS[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    ColorGrading_LookupTable;                                  // 0x00C8(0x0008) (Edit)
	struct FLUTBlender                                 ColorGradingLUT;                                           // 0x00D0(0x0028) (Const, Transient, NeedCtorLink)
	struct FMobileColorGradingParams                   MobileColorGrading;                                        // 0x00F8(0x003C) (Edit)
	struct FMobilePostProcessSettings                  MobilePostProcess;                                         // 0x0134(0x0034) (Edit, Interp)

};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x0198
struct FPostProcessSettingsOverride
{
	struct FPostProcessSettings                        Settings;                                                  // 0x0000(0x0168) (NeedCtorLink)
	unsigned long                                      bBlendingIn : 1;                                           // 0x0168(0x0001) BIT_FIELD
	unsigned long                                      bBlendingOut : 1;                                          // 0x0168(0x0001) BIT_FIELD
	float                                              CurrentBlendInTime;                                        // 0x016C(0x0004)
	float                                              CurrentBlendOutTime;                                       // 0x0170(0x0004)
	float                                              BlendInDuration;                                           // 0x0174(0x0004)
	float                                              BlendOutDuration;                                          // 0x0178(0x0004)
	float                                              BlendStartTime;                                            // 0x017C(0x0004)
	struct FInterpCurveFloat                           TimeAlphaCurve;                                            // 0x0180(0x0018) (NeedCtorLink)

};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// 0x0010
struct FShowFlags_Mirror
{
	unsigned char                                      flags0[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.GameViewportClient.ShowFlags_Mirror.flags0
	unsigned char                                      flags1[0x8];                                               // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.GameViewportClient.ShowFlags_Mirror.flags1

};

// ScriptStruct Engine.GameViewportClient.ExportShowFlags_Mirror
// 0x0000 (0x0010 - 0x0010)
struct FExportShowFlags_Mirror : public FShowFlags_Mirror
{

};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                               // 0x0000(0x0004)
	float                                              MaxPercentY;                                               // 0x0004(0x0004)
	float                                              RecommendedPercentX;                                       // 0x0008(0x0004)
	float                                              RecommendedPercentY;                                       // 0x000C(0x0004)

};

// ScriptStruct Engine.GameViewportClient.GamepadInfo
// 0x0008
struct FGamepadInfo
{
	TEnumAsByte<Core_EInputAPI>                        InputAPI;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData_SJ2M[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bConnected : 1;                                            // 0x0004(0x0001) BIT_FIELD

};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                                     // 0x0000(0x0004)
	float                                              SizeY;                                                     // 0x0004(0x0004)
	float                                              OriginX;                                                   // 0x0008(0x0004)
	float                                              OriginY;                                                   // 0x000C(0x0004)

};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0014
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                       // 0x0000(0x0008)
	struct FName                                       PropertyName;                                              // 0x0008(0x0008)
	unsigned long                                      bSpecialProperty : 1;                                      // 0x0010(0x0001) BIT_FIELD

};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x0028
struct FRecognisableWord
{
	int                                                Id;                                                        // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData_YEWB[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReferenceWord;                                             // 0x0008(0x0010) (Edit, NeedCtorLink)
	struct FString                                     PhoneticWord;                                              // 0x0018(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0060
struct FRecogVocabulary
{
	TArray<struct FRecognisableWord>                   WhoDictionary;                                             // 0x0000(0x0010) (Edit, NeedCtorLink)
	TArray<struct FRecognisableWord>                   WhatDictionary;                                            // 0x0010(0x0010) (Edit, NeedCtorLink)
	TArray<struct FRecognisableWord>                   WhereDictionary;                                           // 0x0020(0x0010) (Edit, NeedCtorLink)
	struct FString                                     VocabName;                                                 // 0x0030(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              VocabData;                                                 // 0x0040(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              WorkingVocabData;                                          // 0x0050(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0018
struct FRecogUserData
{
	int                                                ActiveVocabularies;                                        // 0x0000(0x0004)
	unsigned char                                      UnknownData_93M8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              UserData;                                                  // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x0018
struct FStaticMeshLODElement
{
	unsigned char                                      UnknownData_9IDS[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bEnableCollision : 1;                                      // 0x0010(0x0001) BIT_FIELD (Edit, Native)
	unsigned long                                      UnknownData_S8AL : 31;                                     // 0x0010(0x0001) BIT_FIELD (PADDING)
	unsigned long                                      bEnableShadowCasting : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit, Native)
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData_Z6E7[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x001C
struct FLightmassMaterialInterfaceSettings
{
	unsigned long                                      bCastShadowAsMasked : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit)
	float                                              EmissiveBoost;                                             // 0x0004(0x0004) (Edit)
	float                                              DiffuseBoost;                                              // 0x0008(0x0004) (Edit)
	float                                              SpecularBoost;                                             // 0x000C(0x0004)
	float                                              ExportResolutionScale;                                     // 0x0010(0x0004) (Edit)
	float                                              DistanceFieldPenumbraScale;                                // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverrideCastShadowAsMasked : 1;                           // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bOverrideEmissiveBoost : 1;                                // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bOverrideDiffuseBoost : 1;                                 // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bOverrideSpecularBoost : 1;                                // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bOverrideExportResolutionScale : 1;                        // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bOverrideDistanceFieldPenumbraScale : 1;                   // 0x0018(0x0001) BIT_FIELD

};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x0010
struct FKCachedConvexDataElement
{
	TArray<unsigned char>                              ConvexElementData;                                         // 0x0000(0x0010) (Native)

};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x0018
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                                   // 0x0000(0x0008) (Const, Native)
	struct FPointer                                    Next;                                                      // 0x0008(0x0008) (Const, Native)
	struct FPointer                                    PrevLink;                                                  // 0x0010(0x0008) (Const, Native)

};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                              // 0x0000(0x0008)
	struct FName                                       AdjacentAxisInputKey;                                      // 0x0008(0x0008)
	unsigned long                                      bEmulateButtonPress : 1;                                   // 0x0010(0x0001) BIT_FIELD
	struct FName                                       InputKeyToEmulate[0x2];                                    // 0x0014(0x0010)

};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit)
	float                                              ParameterValue;                                            // 0x0008(0x0004) (Edit)
	float                                              InterpTime;                                                // 0x000C(0x0004) (Edit)
	float                                              WarmupTime;                                                // 0x0010(0x0004) (Edit)

};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C)

};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                              // 0x0000(0x0004)
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                                           // 0x0004(0x0018)
	struct FTrailSocketSamplePoint                     ControlPointSample;                                        // 0x001C(0x0018)
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                                          // 0x0034(0x0018)

};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                              // 0x0000(0x0004)
	struct FVector                                     FirstEdgeSample;                                           // 0x0004(0x000C)
	struct FVector                                     ControlPointSample;                                        // 0x0010(0x000C)
	struct FVector                                     SecondEdgeSample;                                          // 0x001C(0x000C)

};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x000C
struct FCurveKey
{
	struct FName                                       CurveName;                                                 // 0x0000(0x0008)
	float                                              Weight;                                                    // 0x0008(0x0004)

};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x0020
struct FAnimBlendChild
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	class UAnimNode*                                   Anim;                                                      // 0x0008(0x0008) (ExportObject, NeedCtorLink, EditInline)
	float                                              Weight;                                                    // 0x0010(0x0004)
	float                                              BlendWeight;                                               // 0x0014(0x0004) (Const, Transient)
	unsigned long                                      bMirrorSkeleton : 1;                                       // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bIsAdditive : 1;                                           // 0x0018(0x0001) BIT_FIELD
	int                                                DrawY;                                                     // 0x001C(0x0004) (EditorOnly)

};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x000C
struct FBranchInfo
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit)
	float                                              PerBoneWeightIncrease;                                     // 0x0008(0x0004) (Edit)

};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x0020
struct FWeightNodeRule
{
	struct FName                                       NodeName;                                                  // 0x0000(0x0008) (Edit)
	class UAnimNodeBlendBase*                          CachedNode;                                                // 0x0008(0x0008)
	class UAnimNodeSlot*                               CachedSlotNode;                                            // 0x0010(0x0008)
	TEnumAsByte<Engine_EWeightCheck>                   WeightCheck;                                               // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData_077O[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ChildIndex;                                                // 0x001C(0x0004) (Edit)

};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x0040
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                                 // 0x0000(0x0020) (Edit)
	struct FWeightNodeRule                             SecondNode;                                                // 0x0020(0x0020) (Edit)

};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x0054
struct FPerBoneMaskInfo
{
	TArray<struct FBranchInfo>                         BranchList;                                                // 0x0000(0x0010) (Edit, NeedCtorLink)
	float                                              DesiredWeight;                                             // 0x0010(0x0004) (Edit)
	float                                              BlendTimeToGo;                                             // 0x0014(0x0004) (Edit)
	TArray<struct FWeightRule>                         WeightRuleList;                                            // 0x0018(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bWeightBasedOnNodeRules : 1;                               // 0x0028(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDisableForNonLocalHumanPlayers : 1;                       // 0x0028(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPendingBlend : 1;                                         // 0x0028(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_5HJK[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      PerBoneWeights;                                            // 0x0030(0x0010) (Transient, NeedCtorLink)
	TArray<unsigned char>                              TransformReqBone;                                          // 0x0040(0x0010) (Transient, NeedCtorLink)
	int                                                TransformReqBoneIndex;                                     // 0x0050(0x0004) (Transient)

};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                                // 0x0000(0x0010) (Edit)
	struct FVector                                     Translation;                                               // 0x0010(0x000C) (Edit)

};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData_U1S4[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAimTransform                               LU;                                                        // 0x0010(0x0020) (Edit)
	struct FAimTransform                               LC;                                                        // 0x0030(0x0020) (Edit)
	struct FAimTransform                               LD;                                                        // 0x0050(0x0020) (Edit)
	struct FAimTransform                               CU;                                                        // 0x0070(0x0020) (Edit)
	struct FAimTransform                               CC;                                                        // 0x0090(0x0020) (Edit)
	struct FAimTransform                               CD;                                                        // 0x00B0(0x0020) (Edit)
	struct FAimTransform                               RU;                                                        // 0x00D0(0x0020) (Edit)
	struct FAimTransform                               RC;                                                        // 0x00F0(0x0020) (Edit)
	struct FAimTransform                               RD;                                                        // 0x0110(0x0020) (Edit)

};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x0070
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                               // 0x0000(0x0008) (Edit, Const, EditConst)
	struct FVector2D                                   HorizontalRange;                                           // 0x0008(0x0008) (Edit)
	struct FVector2D                                   VerticalRange;                                             // 0x0010(0x0008) (Edit)
	TArray<struct FAimComponent>                       AimComponents;                                             // 0x0018(0x0010) (NeedCtorLink)
	struct FName                                       AnimName_LU;                                               // 0x0028(0x0008) (Edit)
	struct FName                                       AnimName_LC;                                               // 0x0030(0x0008) (Edit)
	struct FName                                       AnimName_LD;                                               // 0x0038(0x0008) (Edit)
	struct FName                                       AnimName_CU;                                               // 0x0040(0x0008) (Edit)
	struct FName                                       AnimName_CC;                                               // 0x0048(0x0008) (Edit)
	struct FName                                       AnimName_CD;                                               // 0x0050(0x0008) (Edit)
	struct FName                                       AnimName_RU;                                               // 0x0058(0x0008) (Edit)
	struct FName                                       AnimName_RC;                                               // 0x0060(0x0008) (Edit)
	struct FName                                       AnimName_RD;                                               // 0x0068(0x0008) (Edit)

};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                                    // 0x0000(0x0004) (Edit)
	unsigned char                                      LoopCountMin;                                              // 0x0004(0x0001) (Edit)
	unsigned char                                      LoopCountMax;                                              // 0x0005(0x0001) (Edit)
	unsigned char                                      UnknownData_ECDP[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendInTime;                                               // 0x0008(0x0004) (Edit)
	struct FVector2D                                   PlayRateRange;                                             // 0x000C(0x0008) (Edit)
	unsigned long                                      bStillFrame : 1;                                           // 0x0014(0x0001) BIT_FIELD (Edit)
	unsigned char                                      LoopCount;                                                 // 0x0018(0x0001) (Transient)
	unsigned char                                      UnknownData_UXFK[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastPosition;                                              // 0x001C(0x0004) (Transient)

};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0038
struct FChildBoneBlendInfo
{
	TArray<float>                                      TargetPerBoneWeight;                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       InitTargetStartBone;                                       // 0x0010(0x0008) (Edit)
	float                                              InitPerBoneIncrease;                                       // 0x0018(0x0004) (Edit)
	struct FName                                       OldStartBone;                                              // 0x001C(0x0008) (Const)
	float                                              OldBoneIncrease;                                           // 0x0024(0x0004) (Const)
	TArray<unsigned char>                              TargetRequiredBones;                                       // 0x0028(0x0010) (Transient, NeedCtorLink)

};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0028
struct FSynchGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                                  // 0x0000(0x0010) (NeedCtorLink)
	class UAnimNodeSequence*                           MasterNode;                                                // 0x0010(0x0008) (Transient)
	struct FName                                       GroupName;                                                 // 0x0018(0x0008) (Edit)
	unsigned long                                      bFireSlaveNotifies : 1;                                    // 0x0020(0x0001) BIT_FIELD (Edit)
	float                                              RateScale;                                                 // 0x0024(0x0004) (Edit)

};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0030
struct FAnimGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                                  // 0x0000(0x0010) (Const, Transient, NeedCtorLink)
	class UAnimNodeSequence*                           SynchMaster;                                               // 0x0010(0x0008) (Const, Transient)
	class UAnimNodeSequence*                           NotifyMaster;                                              // 0x0018(0x0008) (Const, Transient)
	struct FName                                       GroupName;                                                 // 0x0020(0x0008) (Edit, Const)
	float                                              RateScale;                                                 // 0x0028(0x0004) (Edit, Const)
	float                                              SynchPctPosition;                                          // 0x002C(0x0004) (Const)

};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0014
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)
	class USkelControlBase*                            ControlHead;                                               // 0x0008(0x0008) (ExportObject, NeedCtorLink, EditInline)
	int                                                DrawY;                                                     // 0x0010(0x0004) (EditorOnly)

};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x0020
struct FPreviewSkelMeshStruct
{
	struct FName                                       DisplayName;                                               // 0x0000(0x0008) (Edit)
	class USkeletalMesh*                               PreviewSkelMesh;                                           // 0x0008(0x0008) (Edit)
	TArray<class UMorphTargetSet*>                     PreviewMorphSets;                                          // 0x0010(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x0020
struct FPreviewSocketStruct
{
	struct FName                                       DisplayName;                                               // 0x0000(0x0008) (Edit)
	struct FName                                       SocketName;                                                // 0x0008(0x0008) (Edit)
	class USkeletalMesh*                               PreviewSkelMesh;                                           // 0x0010(0x0008) (Edit)
	class UStaticMesh*                                 PreviewStaticMesh;                                         // 0x0018(0x0008) (Edit)

};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0018
struct FPreviewAnimSetsStruct
{
	struct FName                                       DisplayName;                                               // 0x0000(0x0008) (Edit)
	TArray<class UAnimSet*>                            PreviewAnimSets;                                           // 0x0008(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0014
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                               // 0x0000(0x0008) (Const)
	class UAnimSequence*                               AnimSeq;                                                   // 0x0008(0x0008) (Const, Transient)
	int                                                AnimLinkupIndex;                                           // 0x0010(0x0004) (Const, Transient)

};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x0024
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008) (Edit)
	struct FAnimInfo                                   AnimInfo;                                                  // 0x0008(0x0018)
	float                                              Weight;                                                    // 0x0020(0x0004) (Transient)

};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x001C
struct FMorphNodeConn
{
	TArray<class UMorphNodeBase*>                      ChildNodes;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       ConnName;                                                  // 0x0010(0x0008)
	int                                                DrawY;                                                     // 0x0018(0x0004)

};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                                     // 0x0000(0x0004) (Edit)
	float                                              TargetWeight;                                              // 0x0004(0x0004) (Edit)

};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x000C
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                                     // 0x0000(0x0008) (ExportObject, Component, EditInline)
	float                                              LifetimeRemaining;                                         // 0x0008(0x0004)

};

// ScriptStruct Engine.Material.MaterialInput
// 0x0038
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                                // 0x0000(0x0008)
	int                                                OutputIndex;                                               // 0x0008(0x0004)
	unsigned char                                      UnknownData_IJNN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InputName;                                                 // 0x0010(0x0010) (NeedCtorLink)
	int                                                Mask;                                                      // 0x0020(0x0004)
	int                                                MaskR;                                                     // 0x0024(0x0004)
	int                                                MaskG;                                                     // 0x0028(0x0004)
	int                                                MaskB;                                                     // 0x002C(0x0004)
	int                                                MaskA;                                                     // 0x0030(0x0004)
	int                                                GCC64_Padding;                                             // 0x0034(0x0004)

};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD
	struct FColor                                      Constant;                                                  // 0x003C(0x0004)

};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0020
struct FFloatMaterialParamMICData
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                                      // 0x0000(0x0010) (Const, NeedCtorLink)
	TArray<float>                                      MICResetFloats;                                            // 0x0010(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.MaterialInstance.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit)
	struct FLinearColor                                ParameterValue;                                            // 0x0008(0x0010) (Edit)
	struct FGuid                                       ExpressionGUID;                                            // 0x0018(0x0010)

};

// ScriptStruct Engine.MaterialInstance.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit)
	class UTexture*                                    ParameterValue;                                            // 0x0008(0x0008) (Edit)
	struct FGuid                                       ExpressionGUID;                                            // 0x0010(0x0010)

};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                            // 0x0000(0x0010)
	float                                              StartTime;                                                 // 0x0010(0x0004)
	struct FName                                       ParameterName;                                             // 0x0014(0x0008) (Edit)
	unsigned long                                      bLoop : 1;                                                 // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAutoActivate : 1;                                         // 0x001C(0x0001) BIT_FIELD (Edit)
	float                                              CycleTime;                                                 // 0x0020(0x0004) (Edit)
	unsigned long                                      bNormalizeTime : 1;                                        // 0x0024(0x0001) BIT_FIELD (Edit)
	float                                              OffsetTime;                                                // 0x0028(0x0004) (Edit)
	unsigned long                                      bOffsetFromEnd : 1;                                        // 0x002C(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0020 (0x0050 - 0x0030)
struct FScalarParameterValueOverTime : public FParameterValueOverTime
{
	float                                              ParameterValue;                                            // 0x0030(0x0004) (Edit)
	unsigned char                                      UnknownData_YJ3R[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInterpCurveFloat                           ParameterValueCurve;                                       // 0x0038(0x0018) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0028 (0x0058 - 0x0030)
struct FVectorParameterValueOverTime : public FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                            // 0x0030(0x0010) (Edit)
	struct FInterpCurveVector                          ParameterValueCurve;                                       // 0x0040(0x0018) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int                                                Type;                                                      // 0x0000(0x0004)
	struct FName                                       EventName;                                                 // 0x0004(0x0008)
	float                                              EmitterTime;                                               // 0x000C(0x0004)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)
	struct FVector                                     Direction;                                                 // 0x001C(0x000C)
	struct FVector                                     Velocity;                                                  // 0x0028(0x000C)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000 (0x0034 - 0x0034)
struct FParticleEventSpawnData : public FParticleEventData
{

};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// 0x0008
struct FSwitchRange
{
	int                                                Min;                                                       // 0x0000(0x0004) (Edit)
	int                                                Max;                                                       // 0x0004(0x0004) (Edit)

};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// 0x0020
struct FDynamicResourceProviderDefinition
{
	struct FName                                       ProviderTag;                                               // 0x0000(0x0008) (Config)
	struct FString                                     ProviderClassName;                                         // 0x0008(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ProviderClass;                                             // 0x0018(0x0008) (Transient)

};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                              // 0x0000(0x0008)
	unsigned char                                      ModifierKeyFlags;                                          // 0x0008(0x0001)

};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x0020
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                              // 0x0000(0x000C) (Config)
	unsigned char                                      UnknownData_BW7R[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ButtonFontMarkupString;                                    // 0x0010(0x0010) (Config, NeedCtorLink)

};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x00E8
struct FUIDataStoreInputAlias
{
	struct FName                                       AliasName;                                                 // 0x0000(0x0008) (Config)
	struct FUIInputKeyData                             PlatformInputKeys[0x7];                                    // 0x0008(0x00E0) (Config, NeedCtorLink)

};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x0020
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                                 // 0x0000(0x0008)
	struct FName                                       Set;                                                       // 0x0008(0x0008)
	struct FString                                     MappedText;                                                // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                              // 0x0000(0x0004) (Edit)
	float                                              MinValue;                                                  // 0x0004(0x0004) (Edit)
	float                                              MaxValue;                                                  // 0x0008(0x0004) (Edit)
	float                                              NudgeValue;                                                // 0x000C(0x0004) (Edit)
	unsigned long                                      bIntRange : 1;                                             // 0x0010(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x0010
struct FLensFlareElementMaterials
{
	TArray<class UMaterialInterface*>                  ElementMaterials;                                          // 0x0000(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.OnlineLobbySettings.LobbyMetaData
// 0x0020
struct FLobbyMetaData
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.OnlineLobbySettings.BasicLobbyInfo
// 0x0020
struct FBasicLobbyInfo
{
	struct FUniqueLobbyId                              LobbyUID;                                                  // 0x0000(0x0010)
	TArray<struct FLobbyMetaData>                      LobbySettings;                                             // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineLobbySettings.LobbyMember
// 0x0068
struct FLobbyMember
{
	struct FUniqueNetId                                PlayerUID;                                                 // 0x0000(0x0048) (NeedCtorLink)
	TArray<struct FLobbyMetaData>                      PlayerSettings;                                            // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     OnlineName;                                                // 0x0058(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineLobbySettings.ActiveLobbyInfo
// 0x0010 (0x0030 - 0x0020)
struct FActiveLobbyInfo : public FBasicLobbyInfo
{
	TArray<struct FLobbyMember>                        Members;                                                   // 0x0020(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x0058
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                               // 0x0000(0x0048) (NeedCtorLink)
	TArray<struct FUniqueNetId>                        PartyMembers;                                              // 0x0048(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	class UObject*                                     CurveObject;                                               // 0x0010(0x0008) (AlwaysInit)

};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                                // 0x0000(0x0008) (Edit)
	float                                              TargetPercentage;                                          // 0x0008(0x0004) (Edit)

};

// ScriptStruct Engine.ProcBuilding.PBMemUsageInfo
// 0x002C
struct FPBMemUsageInfo
{
	class AProcBuilding*                               Building;                                                  // 0x0000(0x0008)
	class UProcBuildingRuleset*                        Ruleset;                                                   // 0x0008(0x0008)
	int                                                NumStaticMeshComponent;                                    // 0x0010(0x0004)
	int                                                NumInstancedStaticMeshComponents;                          // 0x0014(0x0004)
	int                                                NumInstancedTris;                                          // 0x0018(0x0004)
	int                                                LightmapMemBytes;                                          // 0x001C(0x0004)
	int                                                ShadowmapMemBytes;                                         // 0x0020(0x0004)
	int                                                LODDiffuseMemBytes;                                        // 0x0024(0x0004)
	int                                                LODLightingMemBytes;                                       // 0x0028(0x0004)

};

// ScriptStruct Engine.WorldAttractor.WorldAttractorData
// 0x0020
struct FWorldAttractorData
{
	unsigned long                                      bEnabled : 1;                                              // 0x0000(0x0001) BIT_FIELD
	struct FVector                                     Location;                                                  // 0x0004(0x000C)
	TEnumAsByte<Engine_EWorldAttractorFalloffType>     FalloffType;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData_WVPY[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FalloffExponent;                                           // 0x0014(0x0004)
	float                                              Range;                                                     // 0x0018(0x0004)
	float                                              Strength;                                                  // 0x001C(0x0004)

};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit)
	struct FName                                       SourceBoneName;                                            // 0x0008(0x0008) (Edit)
	TEnumAsByte<Core_EAxis>                            BoneFlipAxis;                                              // 0x0010(0x0001) (Edit)

};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	int                                                NodePosX;                                                  // 0x0000(0x0004) (Const, Native)
	int                                                NodePosY;                                                  // 0x0004(0x0004) (Const, Native)

};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{

};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x0010
struct FLevelStreamingData
{
	unsigned long                                      bShouldBeLoaded : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bShouldBeVisible : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bShouldBlockOnLoad : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_Z2OC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelStreaming*                             Level;                                                     // 0x0008(0x0008) (Edit)

};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                              // 0x0000(0x0010) (NeedCtorLink)
	struct FVector                                     TotalNormalForceVector;                                    // 0x0010(0x000C)
	struct FVector                                     TotalFrictionForceVector;                                  // 0x001C(0x000C)

};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                                 // 0x0000(0x0004)
	struct FTPOV                                       POV;                                                       // 0x0004(0x001C)

};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0060
struct FImpactInfo
{
	class AActor*                                      HitActor;                                                  // 0x0000(0x0008) (AlwaysInit)
	struct FVector                                     HitLocation;                                               // 0x0008(0x000C) (AlwaysInit)
	struct FVector                                     HitNormal;                                                 // 0x0014(0x000C) (AlwaysInit)
	struct FVector                                     RayDir;                                                    // 0x0020(0x000C) (AlwaysInit)
	struct FVector                                     StartTrace;                                                // 0x002C(0x000C) (AlwaysInit)
	struct FTraceHitInfo                               HitInfo;                                                   // 0x0038(0x0028) (Component, AlwaysInit)

};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                        // 0x0000(0x0004) (Config, GlobalConfig)
	struct FColor                                      Out;                                                       // 0x0004(0x0004) (Config, GlobalConfig)

};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x0024
struct FStatColorMapping
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010) (Config, GlobalConfig, NeedCtorLink)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                  // 0x0010(0x0010) (Config, GlobalConfig, NeedCtorLink)
	unsigned long                                      DisableBlend : 1;                                          // 0x0020(0x0001) BIT_FIELD (Config, GlobalConfig)

};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x0010
struct FStaticMeshLODInfo
{
	TArray<struct FStaticMeshLODElement>               Elements;                                                  // 0x0000(0x0010) (Edit, EditFixedSize, Native)

};

// ScriptStruct Engine.ParticleModuleAttractorBoneSocket.AttractLocationBoneSocketInfo
// 0x0014
struct FAttractLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                            // 0x0000(0x0008) (Edit)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit)

};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                            // 0x0000(0x0008) (Edit)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit)

};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x0038
struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (Const)
	class UShadowMap1D*                                BranchShadowMap;                                           // 0x0010(0x0008) (Const)
	class UShadowMap1D*                                FrondShadowMap;                                            // 0x0018(0x0008) (Const)
	class UShadowMap1D*                                LeafMeshShadowMap;                                         // 0x0020(0x0008) (Const)
	class UShadowMap1D*                                LeafCardShadowMap;                                         // 0x0028(0x0008) (Const)
	class UShadowMap1D*                                BillboardShadowMap;                                        // 0x0030(0x0008) (Const)

};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x01C8
struct FLensFlareElement
{
	struct FName                                       ElementName;                                               // 0x0000(0x0008) (Edit)
	float                                              RayDistance;                                               // 0x0008(0x0004) (Edit)
	unsigned long                                      bIsEnabled : 1;                                            // 0x000C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bUseSourceDistance : 1;                                    // 0x000C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bNormalizeRadialDistance : 1;                              // 0x000C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bModulateColorBySource : 1;                                // 0x000C(0x0001) BIT_FIELD (Edit)
	struct FVector                                     Size;                                                      // 0x0010(0x000C) (Edit)
	unsigned char                                      UnknownData_DXKA[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  LFMaterials;                                               // 0x0020(0x0010) (Edit, NeedCtorLink)
	struct FRawDistributionFloat                       LFMaterialIndex;                                           // 0x0030(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       Scaling;                                                   // 0x0058(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      AxisScaling;                                               // 0x0080(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       Rotation;                                                  // 0x00A8(0x0028) (Edit, Component, NeedCtorLink)
	unsigned long                                      bOrientTowardsSource : 1;                                  // 0x00D0(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_A8JU[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionVector                      Color;                                                     // 0x00D8(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       Alpha;                                                     // 0x0100(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      Offset;                                                    // 0x0128(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Scale;                                             // 0x0150(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Color;                                             // 0x0178(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       DistMap_Alpha;                                             // 0x01A0(0x0028) (Edit, Component, NeedCtorLink)

};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0020
struct FSourceTexture2DRegion
{
	int                                                OffsetX;                                                   // 0x0000(0x0004)
	int                                                OffsetY;                                                   // 0x0004(0x0004)
	int                                                SizeX;                                                     // 0x0008(0x0004)
	int                                                SizeY;                                                     // 0x000C(0x0004)
	int                                                DestOffsetX;                                               // 0x0010(0x0004)
	int                                                DestOffsetY;                                               // 0x0014(0x0004)
	class UTexture2D*                                  Texture2D;                                                 // 0x0018(0x0008)

};

// ScriptStruct Engine.Texture2DDynamic.ImageLayout
// 0x0018
struct FImageLayout
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010) (NeedCtorLink)
	int                                                SizeX;                                                     // 0x0010(0x0004)
	int                                                SizeY;                                                     // 0x0014(0x0004)

};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x0002
struct FManualCoverTypeInfo
{
	unsigned char                                      SlotIndex;                                                 // 0x0000(0x0001)
	TEnumAsByte<Engine_ECoverType>                     ManualCoverType;                                           // 0x0001(0x0001)

};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x0048
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                                      // 0x0000(0x0008)
	TArray<unsigned char>                              SlotsEnabled;                                              // 0x0008(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              SlotsDisabled;                                             // 0x0018(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              SlotsAdjusted;                                             // 0x0028(0x0010) (NeedCtorLink)
	TArray<struct FManualCoverTypeInfo>                SlotsCoverTypeChanged;                                     // 0x0038(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.AudioDevice.AudioClassInfo
// 0x0010
struct FAudioClassInfo
{
	int                                                NumResident;                                               // 0x0000(0x0004) (Const)
	int                                                SizeResident;                                              // 0x0004(0x0004) (Const)
	int                                                NumRealTime;                                               // 0x0008(0x0004) (Const)
	int                                                SizeRealTime;                                              // 0x000C(0x0004) (Const)

};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int                                                NodePosX;                                                  // 0x0000(0x0004) (Const, Native)
	int                                                NodePosY;                                                  // 0x0004(0x0004) (Const, Native)

};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                                // 0x0000(0x0010) (NeedCtorLink)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (NeedCtorLink)
	float                                              Mins[0x3];                                                 // 0x0020(0x000C)
	float                                              Ranges[0x3];                                               // 0x002C(0x000C)

};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	unsigned long                                      bDebugMode : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bStatsEnabled : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bGatherBSPSurfacesAcrossComponents : 1;                    // 0x0000(0x0001) BIT_FIELD (Edit)
	float                                              CoplanarTolerance;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bUseDeterministicLighting : 1;                             // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bUseImmediateImport : 1;                                   // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bImmediateProcessMappings : 1;                             // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSortMappings : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDumpBinaryFiles : 1;                                      // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDebugMaterials : 1;                                       // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPadMappings : 1;                                          // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDebugPaddings : 1;                                        // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bOnlyCalcDebugTexelMappings : 1;                           // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bUseRandomColors : 1;                                      // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bColorBordersGreen : 1;                                    // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bColorByExecutionTime : 1;                                 // 0x0008(0x0001) BIT_FIELD (Edit)
	float                                              ExecutionTimeDivisor;                                      // 0x000C(0x0004) (Edit)
	unsigned long                                      bInitialized : 1;                                          // 0x0010(0x0001) BIT_FIELD

};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned long                                      bDistributionEnabled : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bForceContentExport : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bInitialized : 1;                                          // 0x0000(0x0001) BIT_FIELD

};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x0060
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                                      // 0x0000(0x0058) (Native)
	int                                                SizeX;                                                     // 0x0058(0x0004) (Native)
	int                                                SizeY;                                                     // 0x005C(0x0004) (Native)

};

// ScriptStruct Engine.Canvas.MobileDistanceFieldParams
// 0x0054
struct FMobileDistanceFieldParams
{
	float                                              Gamma;                                                     // 0x0000(0x0004)
	float                                              AlphaRefVal;                                               // 0x0004(0x0004)
	float                                              SmoothWidth;                                               // 0x0008(0x0004)
	unsigned long                                      EnableShadow : 1;                                          // 0x000C(0x0001) BIT_FIELD
	struct FVector2D                                   ShadowDirection;                                           // 0x0010(0x0008)
	struct FLinearColor                                ShadowColor;                                               // 0x0018(0x0010)
	float                                              ShadowSmoothWidth;                                         // 0x0028(0x0004)
	struct FDepthFieldGlowInfo                         GlowInfo;                                                  // 0x002C(0x0024) (Native)
	int                                                BlendMode;                                                 // 0x0050(0x0004)

};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x002C
struct FTextSizingParameters
{
	float                                              DrawX;                                                     // 0x0000(0x0004) (AlwaysInit)
	float                                              DrawY;                                                     // 0x0004(0x0004) (AlwaysInit)
	float                                              DrawXL;                                                    // 0x0008(0x0004) (AlwaysInit)
	float                                              DrawYL;                                                    // 0x000C(0x0004) (AlwaysInit)
	struct FVector2D                                   Scaling;                                                   // 0x0010(0x0008) (AlwaysInit)
	class UFont*                                       DrawFont;                                                  // 0x0018(0x0008) (AlwaysInit)
	struct FVector2D                                   SpacingAdjust;                                             // 0x0020(0x0008) (AlwaysInit)
	float                                              ViewportHeight;                                            // 0x0028(0x0004) (AlwaysInit)

};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                                     // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FVector2D                                   LineExtent;                                                // 0x0010(0x0008) (AlwaysInit)

};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                                         // 0x0000(0x0004) (Edit)
	float                                              V;                                                         // 0x0004(0x0004) (Edit)
	float                                              UL;                                                        // 0x0008(0x0004) (Edit)
	float                                              VL;                                                        // 0x000C(0x0004) (Edit)

};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x000C
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                                  // 0x0000(0x0008)
	int                                                InputLinkIdx;                                              // 0x0008(0x0004)

};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x0030
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                              // 0x0000(0x0008) (Edit)
	TEnumAsByte<Core_EInputEvent>                      InputKeyState;                                             // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData_UYAD[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSeqOpOutputInputLink>               TriggeredOps;                                              // 0x0010(0x0010) (NeedCtorLink)
	TArray<class USequenceOp*>                         ActionsToExecute;                                          // 0x0020(0x0010) (NeedCtorLink, Deprecated)

};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int                                                PlayerIndex;                                               // 0x0000(0x0004) (Const, Transient, AlwaysInit)
	int                                                ControllerId;                                              // 0x0004(0x0004) (Const, Transient, AlwaysInit)
	struct FName                                       InputKeyName;                                              // 0x0008(0x0008) (Const, Transient, AlwaysInit)
	TEnumAsByte<Core_EInputEvent>                      EventType;                                                 // 0x0010(0x0001) (Const, Transient, AlwaysInit)
	unsigned char                                      UnknownData_SAWW[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InputDelta;                                                // 0x0014(0x0004) (Const, Transient, AlwaysInit)
	float                                              DeltaTime;                                                 // 0x0018(0x0004) (Const, Transient, AlwaysInit)
	unsigned long                                      bAltPressed : 1;                                           // 0x001C(0x0001) BIT_FIELD (Const, Transient, AlwaysInit)
	unsigned long                                      bCtrlPressed : 1;                                          // 0x001C(0x0001) BIT_FIELD (Const, Transient, AlwaysInit)
	unsigned long                                      bShiftPressed : 1;                                         // 0x001C(0x0001) BIT_FIELD (Const, Transient, AlwaysInit)

};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008 (0x0028 - 0x0020)
struct FSubscribedInputEventParameters : public FInputEventParameters
{
	struct FName                                       InputAliasName;                                            // 0x0020(0x0008) (Const, Transient, AlwaysInit)

};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x0020
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                                      // 0x0000(0x0008) (Native)
	struct FVector                                     P1;                                                        // 0x0008(0x000C)
	struct FVector                                     P2;                                                        // 0x0014(0x000C)

};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)

};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                                  // 0x0000(0x0018) (Edit, EditInline)

};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0038
struct FOverrideSkill
{
	int                                                LeaderboardId;                                             // 0x0000(0x0004)
	unsigned char                                      UnknownData_PHD0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUniqueNetId>                        Players;                                                   // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FDouble>                             Mus;                                                       // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                                    // 0x0028(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x000E
struct FOnlineGameSearchParameter
{
	int                                                EntryId;                                                   // 0x0000(0x0004)
	struct FName                                       ObjectPropertyName;                                        // 0x0004(0x0008)
	TEnumAsByte<Engine_EOnlineGameSearchEntryType>     EntryType;                                                 // 0x000C(0x0001)
	TEnumAsByte<Engine_EOnlineGameSearchComparisonType> ComparisonType;                                            // 0x000D(0x0001)

};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x0010
struct FOnlineGameSearchORClause
{
	TArray<struct FOnlineGameSearchParameter>          OrParams;                                                  // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                  // 0x0000(0x0008)
	struct FVector                                     SrcActorOffset;                                            // 0x0008(0x000C)
	struct FVector                                     SrcActorDesiredOffset;                                     // 0x0014(0x000C)
	struct FString                                     DebugText;                                                 // 0x0020(0x0010) (NeedCtorLink)
	float                                              TimeRemaining;                                             // 0x0030(0x0004) (Transient)
	float                                              Duration;                                                  // 0x0034(0x0004)
	struct FColor                                      TextColor;                                                 // 0x0038(0x0004)
	unsigned long                                      bAbsoluteLocation : 1;                                     // 0x003C(0x0001) BIT_FIELD
	unsigned long                                      bKeepAttachedToActor : 1;                                  // 0x003C(0x0001) BIT_FIELD
	struct FVector                                     OrigActorLocation;                                         // 0x0040(0x000C)
	unsigned char                                      UnknownData_T63E[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Font;                                                      // 0x0050(0x0008)
	struct FVector2D                                   TextScale;                                                 // 0x0058(0x0008)

};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x0010
struct FSkelMeshActorControlTarget
{
	struct FName                                       ControlName;                                               // 0x0000(0x0008) (Edit)
	class AActor*                                      TargetActor;                                               // 0x0008(0x0008) (Edit)

};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x0010
struct FSkelMaterialSetterDatum
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData_QL6P[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          TheMaterial;                                               // 0x0008(0x0008) (Edit)

};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (AlwaysInit)
	TArray<float>                                      ChannelWeights;                                            // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0020
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                   // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FQuat>                               RotKeys;                                                   // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD
	float                                              Constant;                                                  // 0x003C(0x0004)

};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C (0x0044 - 0x0038)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD
	float                                              ConstantX;                                                 // 0x003C(0x0004)
	float                                              ConstantY;                                                 // 0x0040(0x0004)

};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                   // 0x0000(0x0010)
	class UMaterialFunction*                           Function;                                                  // 0x0010(0x0008)

};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0020
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                                   // 0x0000(0x0008) (Native)
	struct FPointer                                    LightMap;                                                  // 0x0008(0x0008) (Native)
	class UTexture2D*                                  LightmapTexture;                                           // 0x0010(0x0008)
	class UShadowMap2D*                                ShadowmapTexture;                                          // 0x0018(0x0008)

};

// ScriptStruct Engine.ProcBuilding.PBMaterialParam
// 0x0018
struct FPBMaterialParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (Edit)

};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                              // 0x0000(0x000C) (Edit, EditInline)
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                                      // 0x000C(0x000C) (Edit, EditInline)
	struct FPhysXSimulationProperties                  CompartmentFluid;                                          // 0x0018(0x000C) (Edit, EditInline)
	struct FPhysXSimulationProperties                  CompartmentCloth;                                          // 0x0024(0x000C) (Edit, EditInline)
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                                       // 0x0030(0x000C) (Edit, EditInline)

};

// ScriptStruct Engine.AkBank.BankLoadState
// 0x000C
struct FBankLoadState
{
	TEnumAsByte<Engine_EBankLoadStatus>                Status;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData_AU4J[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AsyncLoadBegin;                                            // 0x0004(0x0004)
	float                                              AsyncLoadTimeout;                                          // 0x0008(0x0004)

};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)
	struct FPackedNormal                               Normal;                                                    // 0x000C(0x0004)
	struct FColor                                      Color;                                                     // 0x0010(0x0004)

};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0040
struct FStaticMeshComponentLODInfo
{
	TArray<class UShadowMap2D*>                        ShadowMaps;                                                // 0x0000(0x0010) (Const, NeedCtorLink)
	TArray<class UObject*>                             ShadowVertexBuffers;                                       // 0x0010(0x0010) (Const, NeedCtorLink)
	struct FPointer                                    LightMap;                                                  // 0x0020(0x0008) (Const, Native)
	struct FPointer                                    OverrideVertexColors;                                      // 0x0028(0x0008) (Const, Native)
	TArray<struct FPaintedVertex>                      PaintedVertices;                                           // 0x0030(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0068
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                                      // 0x0000(0x0008)
	class UStaticMesh*                                 LeanLeft;                                                  // 0x0008(0x0008)
	class UStaticMesh*                                 LeanRight;                                                 // 0x0010(0x0008)
	class UStaticMesh*                                 LeanLeftPref;                                              // 0x0018(0x0008)
	class UStaticMesh*                                 LeanRightPref;                                             // 0x0020(0x0008)
	class UStaticMesh*                                 Climb;                                                     // 0x0028(0x0008)
	class UStaticMesh*                                 Mantle;                                                    // 0x0030(0x0008)
	class UStaticMesh*                                 SlipLeft;                                                  // 0x0038(0x0008)
	class UStaticMesh*                                 SlipRight;                                                 // 0x0040(0x0008)
	class UStaticMesh*                                 SwatLeft;                                                  // 0x0048(0x0008)
	class UStaticMesh*                                 SwatRight;                                                 // 0x0050(0x0008)
	class UStaticMesh*                                 PopUp;                                                     // 0x0058(0x0008)
	class UStaticMesh*                                 PlayerOnly;                                                // 0x0060(0x0008)

};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x0034
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                                 // 0x0000(0x0008) (Native)
	unsigned long                                      bCanMantle : 1;                                            // 0x0008(0x0001) BIT_FIELD
	unsigned long                                      bNeedsMantleValidityTest : 1;                              // 0x0008(0x0001) BIT_FIELD
	unsigned long                                      bAbleToSearch : 1;                                         // 0x0008(0x0001) BIT_FIELD
	struct FVector                                     SearchExtent;                                              // 0x000C(0x000C)
	float                                              SearchLaneMultiplier;                                      // 0x0018(0x0004)
	struct FVector                                     SearchStart;                                               // 0x001C(0x000C)
	float                                              MaxDropHeight;                                             // 0x0028(0x0004)
	float                                              MinWalkableZ;                                              // 0x002C(0x0004)
	float                                              MaxHoverDistance;                                          // 0x0030(0x0004)

};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0010
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                                 // 0x0000(0x0008) (Const, ExportObject, Component, EditInline)
	struct FPointer                                    RenderData;                                                // 0x0008(0x0008) (Const, Native)

};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD
	struct FVector                                     Constant;                                                  // 0x003C(0x000C)

};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	unsigned long                                      Value : 1;                                                 // 0x0004(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                      // 0x0000(0x0004)
	float                                              TransitionTime;                                            // 0x0004(0x0004)
	struct FName                                       TargetCamGroup;                                            // 0x0008(0x0008) (Edit)
	int                                                ShotNumber;                                                // 0x0010(0x0004)

};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	struct FName                                       EventName;                                                 // 0x0004(0x0008) (Edit)

};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x0028
struct FFaceFXTrackKey
{
	float                                              StartTime;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData_5BVL[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FaceFXGroupName;                                           // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     FaceFXSeqName;                                             // 0x0018(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0010
struct FFaceFXSoundCueKey
{
	class USoundCue*                                   FaceFXSoundCue;                                            // 0x0000(0x0008) (Const)
	class UAkEvent*                                    FaceFXAkEvent;                                             // 0x0008(0x0008) (Const)

};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                 // 0x0000(0x0004)
	struct FName                                       AnimSeqName;                                               // 0x0004(0x0008)
	float                                              AnimStartOffset;                                           // 0x000C(0x0004)
	float                                              AnimEndOffset;                                             // 0x0010(0x0004)
	float                                              AnimPlayRate;                                              // 0x0014(0x0004)
	unsigned long                                      bLooping : 1;                                              // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bReverse : 1;                                              // 0x0018(0x0001) BIT_FIELD

};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x000C
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                 // 0x0000(0x0008) (ExportObject, Component, EditInline)
	int                                                MaterialIndex;                                             // 0x0008(0x0004)

};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x0008
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                                    // 0x0000(0x0008)

};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x0028
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                            // 0x0000(0x0008) (Edit)
	TArray<struct FPrimitiveMaterialRef>               AffectedMaterialRefs;                                      // 0x0008(0x0010) (Component, NeedCtorLink, EditHide)
	TArray<struct FPostProcessMaterialRef>             AffectedPPChainMaterialRefs;                               // 0x0018(0x0010) (NeedCtorLink, EditHide)

};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008)
	float                                              Time;                                                      // 0x0008(0x0004)

};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x0038
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                                // 0x0000(0x0008)
	int                                                OutputIndex;                                               // 0x0008(0x0004)
	unsigned char                                      UnknownData_5XQR[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InputName;                                                 // 0x0010(0x0010) (NeedCtorLink)
	int                                                Mask;                                                      // 0x0020(0x0004)
	int                                                MaskR;                                                     // 0x0024(0x0004)
	int                                                MaskG;                                                     // 0x0028(0x0004)
	int                                                MaskB;                                                     // 0x002C(0x0004)
	int                                                MaskA;                                                     // 0x0030(0x0004)
	int                                                GCC64_Padding;                                             // 0x0034(0x0004)

};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0048
struct FCustomInput
{
	struct FString                                     InputName;                                                 // 0x0000(0x0010) (Edit, NeedCtorLink)
	struct FExpressionInput                            Input;                                                     // 0x0010(0x0038) (NeedCtorLink, EditHide)

};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x0024
struct FExpressionOutput
{
	struct FString                                     OutputName;                                                // 0x0000(0x0010) (NeedCtorLink)
	int                                                Mask;                                                      // 0x0010(0x0004)
	int                                                MaskR;                                                     // 0x0014(0x0004)
	int                                                MaskG;                                                     // 0x0018(0x0004)
	int                                                MaskB;                                                     // 0x001C(0x0004)
	int                                                MaskA;                                                     // 0x0020(0x0004)

};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                          // 0x0000(0x0008) (Transient)
	struct FGuid                                       ExpressionOutputId;                                        // 0x0008(0x0010)
	struct FExpressionOutput                           Output;                                                    // 0x0018(0x0028) (NeedCtorLink)

};

// ScriptStruct Engine.MaterialInstance.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit)
	float                                              ParameterValue;                                            // 0x0008(0x0004) (Edit)
	struct FGuid                                       ExpressionGUID;                                            // 0x000C(0x0010)

};

// ScriptStruct Engine.MaterialInstance.FontParameterValue
// 0x0024
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit)
	class UFont*                                       FontValue;                                                 // 0x0008(0x0008) (Edit)
	int                                                FontPage;                                                  // 0x0010(0x0004) (Edit)
	struct FGuid                                       ExpressionGUID;                                            // 0x0014(0x0010)

};

// ScriptStruct Engine.MaterialInstanceTimeVarying.LinearColorParameterValueOverTime
// 0x0028 (0x0058 - 0x0030)
struct FLinearColorParameterValueOverTime : public FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                            // 0x0030(0x0010) (Edit)
	struct FInterpCurveLinearColor                     ParameterValueCurve;                                       // 0x0040(0x0018) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0048
struct FParticleSysParam
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	TEnumAsByte<Engine_EParticleSysParamType>          ParamType;                                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData_HLU6[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scalar;                                                    // 0x000C(0x0004) (Edit)
	float                                              Scalar_Low;                                                // 0x0010(0x0004) (Edit)
	struct FVector                                     Vector;                                                    // 0x0014(0x000C) (Edit)
	struct FVector                                     Vector_Low;                                                // 0x0020(0x000C) (Edit)
	struct FColor                                      Color;                                                     // 0x002C(0x0004) (Edit)
	class AActor*                                      Actor;                                                     // 0x0030(0x0008) (Edit)
	class UMaterialInterface*                          Material;                                                  // 0x0038(0x0008) (Edit)
	class UStaticMesh*                                 Mesh;                                                      // 0x0040(0x0008) (Edit)

};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	unsigned long                                      bOpaque : 1;                                               // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bTranslucent : 1;                                          // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bDistortion : 1;                                           // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bOneLayerDistortionRelevance : 1;                          // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bLit : 1;                                                  // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bUsesSceneColor : 1;                                       // 0x0000(0x0001) BIT_FIELD

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004 (0x0038 - 0x0034)
struct FParticleEventDeathData : public FParticleEventData
{
	float                                              ParticleTime;                                              // 0x0034(0x0004)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020 (0x0054 - 0x0034)
struct FParticleEventCollideData : public FParticleEventData
{
	float                                              ParticleTime;                                              // 0x0034(0x0004)
	struct FVector                                     Normal;                                                    // 0x0038(0x000C)
	float                                              Time;                                                      // 0x0044(0x0004)
	int                                                Item;                                                      // 0x0048(0x0004)
	struct FName                                       BoneName;                                                  // 0x004C(0x0008)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventAttractorCollideData
// 0x0000 (0x0054 - 0x0054)
struct FParticleEventAttractorCollideData : public FParticleEventCollideData
{

};

// ScriptStruct Engine.DistributionVectorConstantCurveParticleParameter.CurveParameterPoint
// 0x0031
struct FCurveParameterPoint
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit)
	float                                              InVal;                                                     // 0x0008(0x0004) (Edit)
	struct FVector                                     OutVal;                                                    // 0x000C(0x000C) (Edit)
	struct FVector                                     LeaveTangent;                                              // 0x0018(0x000C) (Edit)
	struct FVector                                     ArriveTangent;                                             // 0x0024(0x000C) (Edit)
	TEnumAsByte<Core_EInterpCurveMode>                 InterpMode;                                                // 0x0030(0x0001) (Edit)

};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x0010
struct FDamageParameters
{
	TEnumAsByte<Engine_EDamageParameterOverrideMode>   OverrideMode;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData_VMME[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseDamage;                                                // 0x0004(0x0004) (Edit)
	float                                              Radius;                                                    // 0x0008(0x0004) (Edit)
	float                                              Momentum;                                                  // 0x000C(0x0004) (Edit)

};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)
	float                                              TimeStamp;                                                 // 0x000C(0x0004)

};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x0010
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                                     // 0x0000(0x0008) (Const)
	struct FName                                       LevelName;                                                 // 0x0008(0x0008) (Edit, Const)

};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0004
struct FTextureGroupContainer
{
	unsigned long                                      TEXTUREGROUP_World : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_WorldNormalMap : 1;                           // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_WorldSpecular : 1;                            // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Character : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_CharacterNormalMap : 1;                       // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_CharacterSpecular : 1;                        // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Weapon : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_WeaponNormalMap : 1;                          // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_WeaponSpecular : 1;                           // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Vehicle : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_VehicleNormalMap : 1;                         // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_VehicleSpecular : 1;                          // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Cinematic : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Effects : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_EffectsNotFiltered : 1;                       // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Skybox : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_UI : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Lightmap : 1;                                 // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_RenderTarget : 1;                             // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_MobileFlattened : 1;                          // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_ProcBuilding_Face : 1;                        // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_ProcBuilding_LightMap : 1;                    // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Shadowmap : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_ColorLookupTable : 1;                         // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Terrain_Heightmap : 1;                        // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Terrain_Weightmap : 1;                        // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_ImageBasedReflection : 1;                     // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      TEXTUREGROUP_Bokeh : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, Const)

};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x0028
struct FGameResourceDataProvider
{
	struct FName                                       ProviderTag;                                               // 0x0000(0x0008) (Config)
	struct FString                                     ProviderClassName;                                         // 0x0008(0x0010) (Config, NeedCtorLink)
	unsigned long                                      bExpandProviders : 1;                                      // 0x0018(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownData_CN1F[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProviderClass;                                             // 0x0020(0x0008) (Transient)

};

// ScriptStruct Engine.UIDataStore_Registry.RegistryKeyValuePair
// 0x0020
struct FRegistryKeyValuePair
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// 0x0030
struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;                                           // 0x0000(0x0008)
	class UClass*                                      DefaultGameSettingsClass;                                  // 0x0008(0x0008)
	class UClass*                                      SearchResultsProviderClass;                                // 0x0010(0x0008)
	class UUIDataProvider_Settings*                    DesiredSettingsProvider;                                   // 0x0018(0x0008)
	class UOnlineGameSearch*                           Search;                                                    // 0x0020(0x0008)
	struct FName                                       SearchName;                                                // 0x0028(0x0008)

};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x0018
struct FPlayerNickMetaData
{
	struct FName                                       PlayerNickName;                                            // 0x0000(0x0008) (Const)
	struct FString                                     PlayerNickColumnName;                                      // 0x0008(0x0010) (Const, Localized, NeedCtorLink)

};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x0018
struct FRankMetaData
{
	struct FName                                       RankName;                                                  // 0x0000(0x0008) (Const)
	struct FString                                     RankColumnName;                                            // 0x0008(0x0010) (Const, Localized, NeedCtorLink)

};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// 0x0020
struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;                                         // 0x0000(0x0008)
	class UUIDataProvider_Settings*                    Provider;                                                  // 0x0008(0x0008)
	class UOnlineGameSettings*                         GameSettings;                                              // 0x0010(0x0008)
	struct FName                                       SettingsName;                                              // 0x0018(0x0008)

};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0044
struct FListener
{
	class APortalVolume*                               PortalVolume;                                              // 0x0000(0x0008) (Const)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)
	struct FVector                                     Up;                                                        // 0x0014(0x000C)
	struct FVector                                     Right;                                                     // 0x0020(0x000C)
	struct FVector                                     Front;                                                     // 0x002C(0x000C)
	struct FVector                                     Velocity;                                                  // 0x0038(0x000C)

};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x0020
struct FSoundClassProperties
{
	float                                              Volume;                                                    // 0x0000(0x0004) (Edit)
	float                                              Pitch;                                                     // 0x0004(0x0004) (Edit)
	float                                              StereoBleed;                                               // 0x0008(0x0004) (Edit)
	float                                              LFEBleed;                                                  // 0x000C(0x0004) (Edit)
	float                                              VoiceCenterChannelVolume;                                  // 0x0010(0x0004) (Edit)
	float                                              RadioFilterVolume;                                         // 0x0014(0x0004) (Edit)
	float                                              RadioFilterVolumeThreshold;                                // 0x0018(0x0004) (Edit)
	unsigned long                                      bApplyEffects : 1;                                         // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAlwaysPlay : 1;                                           // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIsUISound : 1;                                            // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIsMusic : 1;                                              // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bReverb : 1;                                               // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bCenterChannelOnly : 1;                                    // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bApplyAmbientVolumes : 1;                                  // 0x001C(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	struct FDouble                                     RootTime;                                                  // 0x0000(0x0008) (Native, Transient)
	float                                              HFFrequency;                                               // 0x0008(0x0004) (Edit)
	float                                              HFGain;                                                    // 0x000C(0x0004) (Edit)
	float                                              MFCutoffFrequency;                                         // 0x0010(0x0004) (Edit)
	float                                              MFBandwidth;                                               // 0x0014(0x0004) (Edit)
	float                                              MFGain;                                                    // 0x0018(0x0004) (Edit)
	float                                              LFFrequency;                                               // 0x001C(0x0004) (Edit)
	float                                              LFGain;                                                    // 0x0020(0x0004) (Edit)

};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x001C
struct FSoundClassAdjuster
{
	TEnumAsByte<Engine_ESoundClassName>                SoundClassName;                                            // 0x0000(0x0001) (Edit, Transient)
	unsigned char                                      UnknownData_Y71Z[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SoundClass;                                                // 0x0004(0x0008) (Edit, EditConst)
	float                                              VolumeAdjuster;                                            // 0x000C(0x0004) (Edit)
	float                                              PitchAdjuster;                                             // 0x0010(0x0004) (Edit)
	unsigned long                                      bApplyToChildren : 1;                                      // 0x0014(0x0001) BIT_FIELD (Edit)
	float                                              VoiceCenterChannelVolumeAdjuster;                          // 0x0018(0x0004) (Edit)

};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	struct FName                                       Desc;                                                      // 0x0000(0x0008)
	float                                              Radius;                                                    // 0x0008(0x0004)
	float                                              Height;                                                    // 0x000C(0x0004)
	float                                              CrouchHeight;                                              // 0x0010(0x0004)
	unsigned char                                      PathColor;                                                 // 0x0014(0x0001)

};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                                     // 0x0000(0x0004) (Edit)
	float                                              IndirectLightingSaturation;                                // 0x0004(0x0004) (Edit)
	float                                              ShadowExponent;                                            // 0x0008(0x0004) (Edit)

};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                          // 0x000C(0x0004) (Edit)

};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceRadius;                                         // 0x000C(0x0004) (Edit)

};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	struct FName                                       Bones[0x2];                                                // 0x0000(0x0010)

};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x000C
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                                    // 0x0000(0x0008)
	float                                              Weight;                                                    // 0x0008(0x0004)

};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x001C
struct FSkelMeshComponentLODInfo
{
	TArray<unsigned long>                              HiddenMaterials;                                           // 0x0000(0x0010) (Const, NeedCtorLink)
	unsigned long                                      bNeedsInstanceWeightUpdate : 1;                            // 0x0010(0x0001) BIT_FIELD (Const)
	unsigned long                                      bAlwaysUseInstanceWeights : 1;                             // 0x0010(0x0001) BIT_FIELD (Const)
	TEnumAsByte<Engine_EInstanceWeightUsage>           InstanceWeightUsage;                                       // 0x0014(0x0001) (Const, Transient)
	unsigned char                                      UnknownData_ZUQU[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InstanceWeightIdx;                                         // 0x0018(0x0004) (Const, Transient)

};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// 0x0010
struct FApexClothingLodInfo
{
	TArray<int>                                        ClothingSectionInfo;                                       // 0x0000(0x0010) (Edit, EditFixedSize, NeedCtorLink)

};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// 0x0018
struct FApexClothingAssetInfo
{
	TArray<struct FApexClothingLodInfo>                ClothingLodInfo;                                           // 0x0000(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	struct FName                                       ClothingAssetName;                                         // 0x0010(0x0008)

};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                               // 0x0000(0x0004) (Edit)
	TEnumAsByte<Core_EAxis>                            BoneFlipAxis;                                              // 0x0004(0x0001) (Edit)

};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	TEnumAsByte<Engine_ETriangleSortOption>            TriangleSorting;                                           // 0x0000(0x0001) (Edit)
	TEnumAsByte<Engine_ETriangleSortAxis>              CustomLeftRightAxis;                                       // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData_24UP[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomLeftRightBoneName;                                   // 0x0004(0x0008) (Edit)

};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x004C
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                             // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                             // 0x0004(0x0004) (Edit)
	TArray<int>                                        LODMaterialMap;                                            // 0x0008(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	TArray<unsigned long>                              bEnableShadowCasting;                                      // 0x0018(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	TArray<TEnumAsByte<Engine_ETriangleSortOption>>    TriangleSorting;                                           // 0x0028(0x0010) (NeedCtorLink, Deprecated)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                      // 0x0038(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	unsigned long                                      bDisableCompressions : 1;                                  // 0x0048(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bHasBeenSimplified : 1;                                    // 0x0048(0x0001) BIT_FIELD

};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODDistanceInfo
// 0x0008
struct FSkeletalMeshLODDistanceInfo
{
	float                                              DisplayFactor;                                             // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                             // 0x0004(0x0004) (Edit)

};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// 0x0028
struct FSkeletalMeshOptimizationSettings
{
	float                                              MaxDeviationPercentage;                                    // 0x0000(0x0004)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> SilhouetteImportance;                                      // 0x0004(0x0001)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> TextureImportance;                                         // 0x0005(0x0001)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> ShadingImportance;                                         // 0x0006(0x0001)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> SkinningImportance;                                        // 0x0007(0x0001)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationNormalMode> NormalMode;                                                // 0x0008(0x0001) (Deprecated)
	unsigned char                                      UnknownData_8UYQ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BoneReductionRatio;                                        // 0x000C(0x0004)
	int                                                MaxBonesPerVertex;                                         // 0x0010(0x0004)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationType>  ReductionMethod;                                           // 0x0014(0x0001)
	unsigned char                                      UnknownData_XT8D[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NumOfTrianglesPercentage;                                  // 0x0018(0x0004)
	float                                              WeldingThreshold;                                          // 0x001C(0x0004)
	unsigned long                                      bRecalcNormals : 1;                                        // 0x0020(0x0001) BIT_FIELD
	float                                              NormalsThreshold;                                          // 0x0024(0x0004)

};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x0020
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit)
	TEnumAsByte<Engine_EClothBoneType>                 BoneType;                                                  // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData_W04H[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AttachedVertexIndices;                                     // 0x0010(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x0020
struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit)
	TEnumAsByte<Engine_ESoftBodyBoneType>              BoneType;                                                  // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData_R0QV[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AttachedVertexIndices;                                     // 0x0010(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0010
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                                           // 0x0000(0x0008) (Edit, ExportObject, Component, EditInline)
	class ASplineActor*                                ConnectTo;                                                 // 0x0008(0x0008) (Edit)

};

// ScriptStruct Engine.ProcBuilding.PBFaceUVInfo
// 0x0010
struct FPBFaceUVInfo
{
	struct FVector2D                                   Offset;                                                    // 0x0000(0x0008)
	struct FVector2D                                   Size;                                                      // 0x0008(0x0008)

};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0038
struct FNamedSession
{
	struct FName                                       SessionName;                                               // 0x0000(0x0008)
	struct FPointer                                    SessionInfo;                                               // 0x0008(0x0008) (Const, Native, Transient)
	class UOnlineGameSettings*                         GameSettings;                                              // 0x0010(0x0008)
	TArray<struct FOnlineRegistrant>                   Registrants;                                               // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FOnlineArbitrationRegistrant>        ArbitrationRegistrants;                                    // 0x0028(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0060
struct FOnlineContent
{
	TEnumAsByte<Engine_EOnlineContentType>             ContentType;                                               // 0x0000(0x0001)
	unsigned char                                      UserIndex;                                                 // 0x0001(0x0001)
	unsigned char                                      UnknownData_QZXZ[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bIsCorrupt : 1;                                            // 0x0004(0x0001) BIT_FIELD
	int                                                DeviceID;                                                  // 0x0008(0x0004)
	int                                                LicenseMask;                                               // 0x000C(0x0004)
	struct FString                                     FriendlyName;                                              // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Filename;                                                  // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     ContentPath;                                               // 0x0030(0x0010) (NeedCtorLink)
	TArray<struct FString>                             ContentPackages;                                           // 0x0040(0x0010) (NeedCtorLink)
	TArray<struct FString>                             ContentFiles;                                              // 0x0050(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	struct FName                                       NetDriverName;                                             // 0x0000(0x0008)
	struct FPointer                                    NetDriver;                                                 // 0x0008(0x0008) (Const, Native)

};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x0010
struct FKCachedConvexData
{
	TArray<struct FKCachedConvexDataElement>           CachedConvexElements;                                      // 0x0000(0x0010) (Native)

};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	unsigned long                                      bLit : 1;                                                  // 0x0000(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                         // 0x0000(0x0010) (Transient, NeedCtorLink)

};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                          // 0x0000(0x0008) (AlwaysInit)
	struct FDouble                                     NextRepeatTime;                                            // 0x0008(0x0008) (AlwaysInit)

};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004 (0x0014 - 0x0010)
struct FUIAxisEmulationData : public FUIKeyRepeatData
{
	unsigned long                                      bEnabled : 1;                                              // 0x0010(0x0001) BIT_FIELD (AlwaysInit)

};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x000C
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                                      // 0x0000(0x0008)
	int                                                ExtraCost;                                                 // 0x0008(0x0004)

};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                 // 0x0000(0x0040)
	struct FVector2D                                   LightmapUVBias;                                            // 0x0040(0x0008)
	struct FVector2D                                   ShadowmapUVBias;                                           // 0x0048(0x0008)

};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                  // 0x0000(0x000C)
	struct FVector                                     StartTangent;                                              // 0x000C(0x000C)
	struct FVector2D                                   StartScale;                                                // 0x0018(0x0008)
	float                                              StartRoll;                                                 // 0x0020(0x0004)
	struct FVector2D                                   StartOffset;                                               // 0x0024(0x0008)
	struct FVector                                     EndPos;                                                    // 0x002C(0x000C)
	struct FVector                                     EndTangent;                                                // 0x0038(0x000C)
	struct FVector2D                                   EndScale;                                                  // 0x0044(0x0008)
	float                                              EndRoll;                                                   // 0x004C(0x0004)
	struct FVector2D                                   EndOffset;                                                 // 0x0050(0x0008)

};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// 0x0010
struct FClothingLodInfo
{
	TArray<int>                                        LODMaterialMap;                                            // 0x0000(0x0010) (Edit, Const, EditFixedSize, AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// 0x0014
struct FNxDestructibleDamageParameters
{
	float                                              DamageThreshold;                                           // 0x0000(0x0004) (Edit)
	float                                              DamageSpread;                                              // 0x0004(0x0004) (Edit)
	float                                              ImpactDamage;                                              // 0x0008(0x0004) (Edit)
	float                                              ImpactResistance;                                          // 0x000C(0x0004) (Edit)
	int                                                DefaultImpactDamageDepth;                                  // 0x0010(0x0004) (Edit)

};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// 0x0018
struct FNxDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                 // 0x0000(0x0004) (Edit)
	float                                              ImpactVelocityThreshold;                                   // 0x0004(0x0004) (Edit)
	float                                              MaxChunkSpeed;                                             // 0x0008(0x0004) (Edit)
	float                                              MassScaleExponent;                                         // 0x000C(0x0004) (Edit)
	float                                              MassScale;                                                 // 0x0010(0x0004) (Edit)
	float                                              FractureImpulseScale;                                      // 0x0014(0x0004) (Edit)

};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x0004
struct FNxDestructibleParametersFlag
{
	unsigned long                                      ACCUMULATE_DAMAGE : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      ASSET_DEFINED_SUPPORT : 1;                                 // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      WORLD_SUPPORT : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      DEBRIS_TIMEOUT : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      DEBRIS_MAX_SEPARATION : 1;                                 // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      CRUMBLE_SMALLEST_CHUNKS : 1;                               // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      ACCURATE_RAYCASTS : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      USE_VALID_BOUNDS : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      FORM_EXTENDED_STRUCTURES : 1;                              // 0x0000(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x0005
struct FNxDestructibleDepthParameters
{
	unsigned long                                      TAKE_IMPACT_DAMAGE : 1;                                    // 0x0000(0x0001) BIT_FIELD (Deprecated)
	unsigned long                                      IGNORE_POSE_UPDATES : 1;                                   // 0x0000(0x0001) BIT_FIELD (Deprecated)
	unsigned long                                      IGNORE_RAYCAST_CALLBACKS : 1;                              // 0x0000(0x0001) BIT_FIELD (Deprecated)
	unsigned long                                      IGNORE_CONTACT_CALLBACKS : 1;                              // 0x0000(0x0001) BIT_FIELD (Deprecated)
	unsigned long                                      USER_FLAG_1 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Deprecated)
	unsigned long                                      USER_FLAG_2 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Deprecated)
	unsigned long                                      USER_FLAG_3 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Deprecated)
	unsigned long                                      USER_FLAG_4 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Deprecated)
	TEnumAsByte<Engine_EImpactDamageOverride>          ImpactDamageOverride;                                      // 0x0004(0x0001) (Edit)

};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0020
struct FVectorMaterialParamMICData
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                                      // 0x0000(0x0010) (Const, NeedCtorLink)
	TArray<struct FVector>                             MICResetVectors;                                           // 0x0010(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit)
	unsigned long                                      bGetSeedFromInstance : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bInstanceSeedIsIndex : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bResetSeedOnEmitterLooping : 1;                            // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_CJKE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        RandomSeeds;                                               // 0x0010(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0040
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, EditConst)
	unsigned long                                      bUseEmitterTime : 1;                                       // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSpawnTimeOnly : 1;                                        // 0x0008(0x0001) BIT_FIELD (Edit)
	TEnumAsByte<Engine_EEmitterDynamicParameterValue>  ValueMethod;                                               // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData_IIQV[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bScaleVelocityByParamValue : 1;                            // 0x0010(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData_OJYT[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionFloat                       ParamValue;                                                // 0x0018(0x0028) (Edit, Component, NeedCtorLink)

};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                                     // 0x0000(0x0004) (Edit)
	int                                                CountLow;                                                  // 0x0004(0x0004) (Edit)
	float                                              Time;                                                      // 0x0008(0x0004) (Edit)

};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                             // 0x0000(0x0004) (Edit)
	float                                              WeightForSpawnLod;                                         // 0x0004(0x0004) (Edit)
	float                                              SpawnLodRateVsLifeBias;                                    // 0x0008(0x0004) (Edit)
	float                                              RelativeFadeoutTime;                                       // 0x000C(0x0004) (Edit)

};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	int                                                EmitterType;                                               // 0x0000(0x0004) (Const, Native)
	int                                                OriginalEmitterIndex;                                      // 0x0004(0x0004) (Const, Native)
	struct FPointer                                    FrameState;                                                // 0x0008(0x0008) (Const, Native)

};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	TArray<struct FParticleEmitterReplayFrame>         Emitters;                                                  // 0x0000(0x0010) (Const, Native)

};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)
	unsigned char                                      UnknownData_N8BS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Quaternion;                                                // 0x0010(0x0010)
	struct FVector                                     LinVel;                                                    // 0x0020(0x000C)
	struct FVector                                     AngVel;                                                    // 0x002C(0x000C)
	unsigned char                                      bNewData;                                                  // 0x0038(0x0001)

};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x0068
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                       // 0x0000(0x0004) (Edit)
	float                                              FadeInDistanceEnd;                                         // 0x0004(0x0004) (Edit)
	float                                              FadeOutDistanceStart;                                      // 0x0008(0x0004) (Edit)
	float                                              FadeOutDistanceEnd;                                        // 0x000C(0x0004) (Edit)
	float                                              Volume;                                                    // 0x0010(0x0004) (Edit)
	unsigned char                                      UnknownData_DOXR[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionFloat                       FadeInDistance;                                            // 0x0018(0x0028) (Component, NeedCtorLink, Deprecated)
	struct FRawDistributionFloat                       FadeOutDistance;                                           // 0x0040(0x0028) (Component, NeedCtorLink, Deprecated)

};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x0014
struct FSubtitleCue
{
	struct FString                                     Text;                                                      // 0x0000(0x0010) (Edit, Const, Localized, NeedCtorLink)
	float                                              Time;                                                      // 0x0010(0x0004) (Edit, Const, Localized)

};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x0024
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                               // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FSubtitleCue>                        Subtitles;                                                 // 0x0010(0x0010) (NeedCtorLink)
	unsigned long                                      bMature : 1;                                               // 0x0020(0x0001) BIT_FIELD
	unsigned long                                      bManualWordWrap : 1;                                       // 0x0020(0x0001) BIT_FIELD
	unsigned long                                      bSingleLine : 1;                                           // 0x0020(0x0001) BIT_FIELD

};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// 0x0030
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0008)
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                              // 0x0008(0x0008) (EditorOnly)
	class ALandscapeProxy*                             Owner;                                                     // 0x0010(0x0008) (EditorOnly)
	int                                                DebugColorChannel;                                         // 0x0018(0x0004) (Transient, EditorOnly)
	unsigned long                                      bSelected : 1;                                             // 0x001C(0x0001) BIT_FIELD (Transient, EditorOnly)
	struct FString                                     SourceFilePath;                                            // 0x0020(0x0010) (NeedCtorLink, EditorOnly)

};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// 0x0038
struct FLandscapeLayerInfo
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008) (Edit)
	float                                              Hardness;                                                  // 0x0008(0x0004) (Edit)
	unsigned long                                      bNoWeightBlend : 1;                                        // 0x000C(0x0001) BIT_FIELD (EditorOnly)
	class UPhysicalMaterial*                           PhysMaterial;                                              // 0x0010(0x0008) (Edit)
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                              // 0x0018(0x0008) (EditorOnly)
	unsigned long                                      bSelected : 1;                                             // 0x0020(0x0001) BIT_FIELD (Transient, EditorOnly)
	int                                                DebugColorChannel;                                         // 0x0024(0x0004) (Transient, EditorOnly)
	struct FString                                     LayerSourceFile;                                           // 0x0028(0x0010) (Transient, NeedCtorLink, EditorOnly)

};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{

};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{

};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0038
struct FTerrainLayer
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, NeedCtorLink)
	class UTerrainLayerSetup*                          Setup;                                                     // 0x0010(0x0008) (Edit)
	int                                                AlphaMapIndex;                                             // 0x0018(0x0004)
	unsigned long                                      Highlighted : 1;                                           // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      WireframeHighlighted : 1;                                  // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Hidden : 1;                                                // 0x001C(0x0001) BIT_FIELD (Edit)
	struct FColor                                      HighlightColor;                                            // 0x0020(0x0004) (Edit)
	struct FColor                                      WireframeColor;                                            // 0x0024(0x0004) (Edit)
	int                                                MinX;                                                      // 0x0028(0x0004)
	int                                                MinY;                                                      // 0x002C(0x0004)
	int                                                MaxX;                                                      // 0x0030(0x0004)
	int                                                MaxY;                                                      // 0x0034(0x0004)

};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0018
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                                 // 0x0000(0x0008) (ExportObject, Component, EditInline)
	float                                              X;                                                         // 0x0008(0x0004)
	float                                              Y;                                                         // 0x000C(0x0004)
	float                                              Scale;                                                     // 0x0010(0x0004)
	int                                                Yaw;                                                       // 0x0014(0x0004)

};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{

};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int                                                X;                                                         // 0x0000(0x0004)
	int                                                Y;                                                         // 0x0004(0x0004)
	int                                                Weight;                                                    // 0x0008(0x0004)

};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x000A
struct FWeightmapLayerAllocationInfo
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008)
	unsigned char                                      WeightmapTextureIndex;                                     // 0x0008(0x0001)
	unsigned char                                      WeightmapTextureChannel;                                   // 0x0009(0x0001)

};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0008
struct FLightMapRef
{
	struct FPointer                                    Reference;                                                 // 0x0000(0x0008) (Const, Native)

};

// ScriptStruct Engine.TerrainComponent.TerrainPatchBounds
// 0x000C
struct FTerrainPatchBounds
{
	float                                              MinHeight;                                                 // 0x0000(0x0004)
	float                                              MaxHeight;                                                 // 0x0004(0x0004)
	float                                              MaxDisplacement;                                           // 0x0008(0x0004)

};

// ScriptStruct Engine.TerrainComponent.TerrainMaterialMask
// 0x000C
struct FTerrainMaterialMask
{
	unsigned char                                      BitMask[0x8];                                              // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.TerrainComponent.TerrainMaterialMask.BitMask
	int                                                NumBits;                                                   // 0x0008(0x0004)

};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x0010
struct FTerrainBVTree
{
	TArray<int>                                        Nodes;                                                     // 0x0000(0x0010) (Const, Native)

};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	unsigned long                                      Enabled : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit)
	float                                              Base;                                                      // 0x0004(0x0004) (Edit)
	float                                              NoiseScale;                                                // 0x0008(0x0004) (Edit)
	float                                              NoiseAmount;                                               // 0x000C(0x0004) (Edit)

};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0058
struct FTerrainFilteredMaterial
{
	unsigned long                                      UseNoise : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit)
	float                                              NoiseScale;                                                // 0x0004(0x0004) (Edit)
	float                                              NoisePercent;                                              // 0x0008(0x0004) (Edit)
	struct FFilterLimit                                MinHeight;                                                 // 0x000C(0x0010) (Edit)
	struct FFilterLimit                                MaxHeight;                                                 // 0x001C(0x0010) (Edit)
	struct FFilterLimit                                MinSlope;                                                  // 0x002C(0x0010) (Edit)
	struct FFilterLimit                                MaxSlope;                                                  // 0x003C(0x0010) (Edit)
	float                                              Alpha;                                                     // 0x004C(0x0004) (Edit)
	class UTerrainMaterial*                            Material;                                                  // 0x0050(0x0008) (Edit)

};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0018
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                               // 0x0000(0x0008) (Const, Transient, AlwaysInit)
	TArray<class UUIDataStore*>                        DataStores;                                                // 0x0008(0x0010) (Const, Transient, AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0020
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Desc;                                                      // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x0009
struct FFOscillator
{
	float                                              Amplitude;                                                 // 0x0000(0x0004) (Edit)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit)
	TEnumAsByte<Engine_EInitialOscillatorOffset>       InitialOffset;                                             // 0x0008(0x0001) (Edit)

};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                         // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Y;                                                         // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Z;                                                         // 0x0018(0x000C) (Edit)

};

// ScriptStruct Engine.AnalyticEventsBase.EventStringParam
// 0x0020
struct FEventStringParam
{
	struct FString                                     ParamName;                                                 // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ParamValue;                                                // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.FacebookIntegration.FacebookFriend
// 0x0020
struct FFacebookFriend
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Id;                                                        // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (AlwaysInit)
	int                                                NumChannels;                                               // 0x0008(0x0004) (AlwaysInit)

};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0020
struct FKeyValuePair
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x0038
struct FPlayerResponseLine
{
	int                                                PlayerNum;                                                 // 0x0000(0x0004) (Edit, AlwaysInit)
	int                                                PlayerID;                                                  // 0x0004(0x0004) (Edit, AlwaysInit)
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	int                                                Ping;                                                      // 0x0018(0x0004) (Edit, AlwaysInit)
	int                                                Score;                                                     // 0x001C(0x0004) (Edit, AlwaysInit)
	int                                                StatsID;                                                   // 0x0020(0x0004) (Edit, AlwaysInit)
	unsigned char                                      UnknownData_HT00[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKeyValuePair>                       PlayerInfo;                                                // 0x0028(0x0010) (Edit, AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0080
struct FServerResponseLine
{
	int                                                ServerId;                                                  // 0x0000(0x0004) (Edit, AlwaysInit)
	unsigned char                                      UnknownData_35DW[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IP;                                                        // 0x0008(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	int                                                Port;                                                      // 0x0018(0x0004) (Edit, AlwaysInit)
	int                                                QueryPort;                                                 // 0x001C(0x0004) (Edit, AlwaysInit)
	struct FString                                     ServerName;                                                // 0x0020(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     MapName;                                                   // 0x0030(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     GameType;                                                  // 0x0040(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	int                                                CurrentPlayers;                                            // 0x0050(0x0004) (Edit, AlwaysInit)
	int                                                MaxPlayers;                                                // 0x0054(0x0004) (Edit, AlwaysInit)
	int                                                Ping;                                                      // 0x0058(0x0004) (Edit, AlwaysInit)
	unsigned char                                      UnknownData_8I0F[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKeyValuePair>                       ServerInfo;                                                // 0x0060(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FPlayerResponseLine>                 PlayerInfo;                                                // 0x0070(0x0010) (Edit, AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.OnlineProfile
// 0x0078
struct FOnlineProfile
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_EOnlineAccountTier>             AccountTier;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData_7PXW[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Gamerscore;                                                // 0x0014(0x0004)
	struct FString                                     ApplicationDisplayName;                                    // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     GameDisplayName;                                           // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     DisplayPictureURL;                                         // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     ApplicationDisplayPictureResizeURL;                        // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PublicGamerPictureURL;                                     // 0x0058(0x0010) (NeedCtorLink)
	struct FString                                     GameDisplayPictureResizeURL;                               // 0x0068(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x004C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                                  // 0x0000(0x0048) (NeedCtorLink)
	unsigned long                                      bIsFriend : 1;                                             // 0x0048(0x0001) BIT_FIELD

};

// ScriptStruct Engine.OnlineSubsystem.FriendHistoryKey
// 0x0020
struct FFriendHistoryKey
{
	TArray<unsigned char>                              Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.DownloadedWorkshopData
// 0x00D0
struct FDownloadedWorkshopData
{
	unsigned char                                      ItemID[0x8];                                               // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.DownloadedWorkshopData.ItemID
	struct FString                                     Title;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     AuthorName;                                                // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	struct FUniqueNetId                                AuthorNetID;                                               // 0x0028(0x0048) (NeedCtorLink)
	class UTexture2DDynamic*                           Preview;                                                   // 0x0070(0x0008) (DataBinding)
	class UTexture*                                    Avatar;                                                    // 0x0078(0x0008) (DataBinding)
	struct FString                                     Description;                                               // 0x0080(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     PreviewURL;                                                // 0x0090(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     ItemPath;                                                  // 0x00A0(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Filename;                                                  // 0x00B0(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     FullPath;                                                  // 0x00C0(0x0010) (NeedCtorLink, DataBinding)

};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0090
struct FCommunityContentFile
{
	int                                                ContentId;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData_9PXW[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RemoteContentPath;                                         // 0x0008(0x0010) (NeedCtorLink)
	int                                                FileId;                                                    // 0x0018(0x0004)
	int                                                ContentType;                                               // 0x001C(0x0004)
	int                                                FileSize;                                                  // 0x0020(0x0004)
	unsigned char                                      UnknownData_A8VV[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetId                                Owner;                                                     // 0x0028(0x0048) (NeedCtorLink)
	int                                                DownloadCount;                                             // 0x0070(0x0004)
	float                                              AverageRating;                                             // 0x0074(0x0004)
	int                                                RatingCount;                                               // 0x0078(0x0004)
	int                                                LastRatingGiven;                                           // 0x007C(0x0004)
	struct FString                                     LocalFilePath;                                             // 0x0080(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.Settings.SettingsData
// 0x0010
struct FSettingsData
{
	TEnumAsByte<Engine_ESettingsDataType>              Type;                                                      // 0x0000(0x0001) (Const)
	unsigned char                                      UnknownData_2NYG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Value1;                                                    // 0x0004(0x0004) (Const)
	struct FPointer                                    Value2;                                                    // 0x0008(0x0008) (Const, Native, Transient)

};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0019
struct FSettingsProperty
{
	int                                                PropertyId;                                                // 0x0000(0x0004)
	unsigned char                                      UnknownData_XVCZ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSettingsData                               Data;                                                      // 0x0008(0x0010)
	TEnumAsByte<Engine_EOnlineDataAdvertisementType>   AdvertisementType;                                         // 0x0018(0x0001)

};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0038
struct FCommunityContentMetadata
{
	int                                                ContentType;                                               // 0x0000(0x0004)
	unsigned char                                      UnknownData_6X4N[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSettingsProperty>                   MetadataItems;                                             // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     RemotePath;                                                // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     DisplayName;                                               // 0x0028(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.EmsFile
// 0x0034
struct FEmsFile
{
	struct FString                                     Hash;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     DLName;                                                    // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Filename;                                                  // 0x0020(0x0010) (NeedCtorLink)
	int                                                FileSize;                                                  // 0x0030(0x0004)

};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageFlags
// 0x0004
struct FSocialPostImageFlags
{
	unsigned long                                      bIsUserGeneratedImage : 1;                                 // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bIsGameGeneratedImage : 1;                                 // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bIsAchievementImage : 1;                                   // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      bIsMediaImage : 1;                                         // 0x0000(0x0001) BIT_FIELD

};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageInfo
// 0x0048
struct FSocialPostImageInfo
{
	struct FSocialPostImageFlags                       Flags;                                                     // 0x0000(0x0004)
	unsigned char                                      UnknownData_30Y6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MessageText;                                               // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     TitleText;                                                 // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     PictureCaption;                                            // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     PictureDescription;                                        // 0x0038(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.SocialPostLinkInfo
// 0x0020 (0x0068 - 0x0048)
struct FSocialPostLinkInfo : public FSocialPostImageInfo
{
	struct FString                                     TitleURL;                                                  // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PictureURL;                                                // 0x0058(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.SocialPostPrivileges
// 0x0004
struct FSocialPostPrivileges
{
	unsigned long                                      bCanPostImage : 1;                                         // 0x0000(0x0001) BIT_FIELD (Const)
	unsigned long                                      bCanPostLink : 1;                                          // 0x0000(0x0001) BIT_FIELD (Const)

};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x001C
struct FSpeechRecognizedWord
{
	int                                                WordId;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownData_4AJ6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WordText;                                                  // 0x0008(0x0010) (NeedCtorLink)
	float                                              Confidence;                                                // 0x0018(0x0004)

};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004 (0x0064 - 0x0060)
struct FOnlineCrossTitleContent : public FOnlineContent
{
	int                                                TitleId;                                                   // 0x0060(0x0004)

};

// ScriptStruct Engine.OnlineLobbySettings.LobbyFilter
// 0x0028
struct FLobbyFilter
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_EOnlineGameSearchComparisonType> Operator;                                                  // 0x0020(0x0001)
	unsigned char                                      UnknownData_3K63[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bNumeric : 1;                                              // 0x0024(0x0001) BIT_FIELD

};

// ScriptStruct Engine.OnlineLobbySettings.LobbySortFilter
// 0x0014
struct FLobbySortFilter
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	int                                                TargetValue;                                               // 0x0010(0x0004)

};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceInventoryItem
// 0x0068
struct FMarketplaceInventoryItem
{
	struct FString                                     ProductID;                                                 // 0x0000(0x0010) (Const, NeedCtorLink)
	TEnumAsByte<Engine_EMediaItemType>                 MediaItemType;                                             // 0x0010(0x0001) (Const)
	TEnumAsByte<Engine_EInventoryItemState>            ItemState;                                                 // 0x0011(0x0001) (Const)
	unsigned char                                      UnknownData_UGB7[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ConsumableBalance;                                         // 0x0014(0x0004) (Const)
	int                                                TitleId;                                                   // 0x0018(0x0004) (Const)
	unsigned char                                      UnknownData_OE5X[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             ContainerIds;                                              // 0x0020(0x0010) (Const, NeedCtorLink)
	unsigned char                                      StartDate[0x8];                                            // 0x0030(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.MarketplaceInventoryItem.StartDate
	unsigned char                                      EndDate[0x8];                                              // 0x0038(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.MarketplaceInventoryItem.EndDate
	unsigned char                                      RightsObtainedDate[0x8];                                   // 0x0040(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.MarketplaceInventoryItem.RightsObtainedDate
	struct FString                                     URL;                                                       // 0x0048(0x0010) (Const, NeedCtorLink)
	struct FString                                     ConsumableUrl;                                             // 0x0058(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductImage
// 0x0048
struct FMarketplaceProductImage
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (Const, NeedCtorLink)
	int                                                Height;                                                    // 0x0010(0x0004) (Const)
	int                                                Width;                                                     // 0x0014(0x0004) (Const)
	struct FString                                     Purpose;                                                   // 0x0018(0x0010) (Const, NeedCtorLink)
	TArray<struct FString>                             Purposes;                                                  // 0x0028(0x0010) (Const, NeedCtorLink)
	struct FString                                     ResizeURL;                                                 // 0x0038(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductAvailability
// 0x00A0
struct FMarketplaceProductAvailability
{
	TArray<struct FString>                             AcceptablePaymentInstrumentTypes;                          // 0x0000(0x0010) (Const, NeedCtorLink)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Const, NeedCtorLink)
	struct FString                                     ContentId;                                                 // 0x0020(0x0010) (Const, NeedCtorLink)
	struct FString                                     CurrencyCode;                                              // 0x0030(0x0010) (Const, NeedCtorLink)
	struct FString                                     DisplayListPrice;                                          // 0x0040(0x0010) (Const, NeedCtorLink)
	struct FString                                     DisplayPrice;                                              // 0x0050(0x0010) (Const, NeedCtorLink)
	struct FString                                     DistributionType;                                          // 0x0060(0x0010) (Const, NeedCtorLink)
	unsigned long                                      bIsPurchasable : 1;                                        // 0x0070(0x0001) BIT_FIELD (Const)
	float                                              ListPrice;                                                 // 0x0074(0x0004) (Const)
	float                                              Price;                                                     // 0x0078(0x0004) (Const)
	unsigned char                                      UnknownData_POOX[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PromotionalText;                                           // 0x0080(0x0010) (Const, NeedCtorLink)
	struct FString                                     SignedOffer;                                               // 0x0090(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductDetails
// 0x0090
struct FMarketplaceProductDetails
{
	struct FString                                     StandardId;                                                // 0x0000(0x0010) (Const, NeedCtorLink)
	TEnumAsByte<Engine_EMediaItemType>                 MediaItemType;                                             // 0x0010(0x0001) (Const)
	unsigned char                                      UnknownData_I066[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ProductName;                                               // 0x0018(0x0010) (Const, NeedCtorLink)
	struct FString                                     ProductID;                                                 // 0x0028(0x0010) (Const, NeedCtorLink)
	unsigned char                                      ReleaseDate[0x8];                                          // 0x0038(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.MarketplaceProductDetails.ReleaseDate
	struct FString                                     SandboxId;                                                 // 0x0040(0x0010) (Const, NeedCtorLink)
	int                                                TitleId;                                                   // 0x0050(0x0004) (Const)
	unsigned char                                      UnknownData_H9DL[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMarketplaceProductImage>            Images;                                                    // 0x0058(0x0010) (Const, NeedCtorLink)
	TEnumAsByte<Engine_EOnlineEnumerationReadState>    DetailsReadState;                                          // 0x0068(0x0001)
	unsigned char                                      UnknownData_U3A3[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMarketplaceProductAvailability>     Availabilities;                                            // 0x0070(0x0010) (Const, NeedCtorLink)
	struct FString                                     ProductDescription;                                        // 0x0080(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.WordFilterResult
// 0x0038
struct FWordFilterResult
{
	TEnumAsByte<Engine_EWordFilterCensorship>          Censorship;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData_YACV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Original;                                                  // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     Sanitized;                                                 // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     ErrorMessage;                                              // 0x0028(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.SessionMemberInfo
// 0x0049
struct FSessionMemberInfo
{
	struct FUniqueNetId                                PlayerNetId;                                               // 0x0000(0x0048) (NeedCtorLink)
	TEnumAsByte<Engine_ESessionMemberStatus>           MemberStatus;                                              // 0x0048(0x0001)

};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x0028
struct FTitleFile
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_EOnlineEnumerationReadState>    AsyncState;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData_RZJJ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Data;                                                      // 0x0018(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0050
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                                  // 0x0000(0x0048) (NeedCtorLink)
	float                                              LastNotificationTime;                                      // 0x0048(0x0004)
	unsigned long                                      bWasTalking : 1;                                           // 0x004C(0x0001) BIT_FIELD
	unsigned long                                      bIsTalking : 1;                                            // 0x004C(0x0001) BIT_FIELD
	unsigned long                                      bIsRegistered : 1;                                         // 0x004C(0x0001) BIT_FIELD

};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x004C
struct FLocalTalker
{
	struct FUniqueNetId                                TalkerId;                                                  // 0x0000(0x0048) (NeedCtorLink)
	unsigned long                                      bHasVoice : 1;                                             // 0x0048(0x0001) BIT_FIELD
	unsigned long                                      bHasNetworkedVoice : 1;                                    // 0x0048(0x0001) BIT_FIELD
	unsigned long                                      bIsRecognizingSpeech : 1;                                  // 0x0048(0x0001) BIT_FIELD
	unsigned long                                      bWasTalking : 1;                                           // 0x0048(0x0001) BIT_FIELD
	unsigned long                                      bIsTalking : 1;                                            // 0x0048(0x0001) BIT_FIELD
	unsigned long                                      bIsRegistered : 1;                                         // 0x0048(0x0001) BIT_FIELD

};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0038
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                                      // 0x0000(0x0008)
	int                                                LtSlotIdx;                                                 // 0x0008(0x0004)
	int                                                RtSlotIdx;                                                 // 0x000C(0x0004)
	float                                              LtToRtPct;                                                 // 0x0010(0x0004)
	struct FVector                                     Location;                                                  // 0x0014(0x000C)
	struct FVector                                     Normal;                                                    // 0x0020(0x000C)
	struct FVector                                     Tangent;                                                   // 0x002C(0x000C)

};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	TEnumAsByte<Engine_ECoverType>                     SrcType;                                                   // 0x0000(0x0001)
	TEnumAsByte<Engine_ECoverAction>                   SrcAction;                                                 // 0x0001(0x0001)
	TEnumAsByte<Engine_ECoverType>                     DestType;                                                  // 0x0002(0x0001)
	TEnumAsByte<Engine_ECoverAction>                   DestAction;                                                // 0x0003(0x0001)

};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0004 (0x001C - 0x0018)
struct FCoverReference : public FActorReference
{
	int                                                SlotIdx;                                                   // 0x0018(0x0004) (Edit)

};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x0021
struct FExposedLink
{
	struct FCoverReference                             TargetActor;                                               // 0x0000(0x0020) (Edit, Const, EditConst)
	unsigned char                                      ExposedScale;                                              // 0x0020(0x0001) (Edit)

};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C)
	float                                              Radius;                                                    // 0x0018(0x0004)
	int                                                Priority;                                                  // 0x001C(0x0004)

};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x0030
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int                                                ListIdx;                                                   // 0x0000(0x0004)
	unsigned char                                      UnknownData_QLPJ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMeshPathGoalEvaluator*                   List[0x5];                                                 // 0x0008(0x0028)

};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x0030
struct FNavMeshPathConstraintCacheDatum
{
	int                                                ListIdx;                                                   // 0x0000(0x0004)
	unsigned char                                      UnknownData_EOFQ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMeshPathConstraint*                      List[0x5];                                                 // 0x0008(0x0028)

};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// 0x0030
struct FLandscapeAddCollision
{
	struct FVector                                     Corners[0x4];                                              // 0x0000(0x0030) (EditorOnly)

};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0018
struct FLensFlareElementCurvePair
{
	struct FString                                     CurveName;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	class UObject*                                     CurveObject;                                               // 0x0010(0x0008) (AlwaysInit)

};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{

};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int                                                X;                                                         // 0x0000(0x0004)
	int                                                Y;                                                         // 0x0004(0x0004)
	int                                                Z;                                                         // 0x0008(0x0004)

};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// 0x0050
struct FCurrentPlayerMet
{
	int                                                TeamNum;                                                   // 0x0000(0x0004)
	int                                                Skill;                                                     // 0x0004(0x0004)
	struct FUniqueNetId                                NetId;                                                     // 0x0008(0x0048) (NeedCtorLink)

};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)
	struct FString                                     Comment;                                                   // 0x0018(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.GameEngine.URL
// 0x005C
struct FURL
{
	struct FString                                     Protocol;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Host;                                                      // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                Port;                                                      // 0x0020(0x0004) (AlwaysInit)
	unsigned char                                      UnknownData_E8Y2[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Map;                                                       // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             Op;                                                        // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Portal;                                                    // 0x0048(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                Valid;                                                     // 0x0058(0x0004) (AlwaysInit)

};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                               // 0x0000(0x0008)
	unsigned long                                      bShouldBeLoaded : 1;                                       // 0x0008(0x0001) BIT_FIELD
	unsigned long                                      bShouldBeVisible : 1;                                      // 0x0008(0x0001) BIT_FIELD

};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<Engine_EFullyLoadPackageType>          FullyLoadType;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData_AOAT[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Tag;                                                       // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FName>                               PackagesToLoad;                                            // 0x0018(0x0010) (NeedCtorLink)
	TArray<class UObject*>                             LoadedObjects;                                             // 0x0028(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x0020
struct FAnimTag
{
	struct FString                                     Tag;                                                       // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FString>                             Contains;                                                  // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                      // 0x0000(0x0004) (Edit)
	float                                              CullDistance;                                              // 0x0004(0x0004) (Edit)

};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                                        // 0x0000(0x0040) (Edit, EditConst)
	float                                              Radius;                                                    // 0x0040(0x0004) (Edit, EditConst)
	unsigned long                                      bNoRBCollision : 1;                                        // 0x0044(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPerPolyShape : 1;                                         // 0x0044(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                                        // 0x0000(0x0040) (Edit, EditConst)
	float                                              X;                                                         // 0x0040(0x0004) (Edit, EditConst)
	float                                              Y;                                                         // 0x0044(0x0004) (Edit, EditConst)
	float                                              Z;                                                         // 0x0048(0x0004) (Edit, EditConst)
	unsigned long                                      bNoRBCollision : 1;                                        // 0x004C(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPerPolyShape : 1;                                         // 0x004C(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                                        // 0x0000(0x0040) (Edit, EditConst)
	float                                              Radius;                                                    // 0x0040(0x0004) (Edit, EditConst)
	float                                              Length;                                                    // 0x0044(0x0004) (Edit, EditConst)
	unsigned long                                      bNoRBCollision : 1;                                        // 0x0048(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPerPolyShape : 1;                                         // 0x0048(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x004C
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                               // 0x0000(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FKBoxElem>                           BoxElems;                                                  // 0x0010(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FKSphylElem>                         SphylElems;                                                // 0x0020(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FKConvexElem>                        ConvexElems;                                               // 0x0030(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	struct FPointer                                    RenderInfo;                                                // 0x0040(0x0008) (Native, NoImport, NonTransactional)
	unsigned long                                      bSkipCloseAndParallelChecks : 1;                           // 0x0048(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSimpleCollisionPlane : 1;                                 // 0x0048(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x002C
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008) (ExportObject, Component, EditInline)
	class AActor*                                      Base;                                                      // 0x0008(0x0008)
	struct FVector                                     RelativeLocation;                                          // 0x0010(0x000C)
	struct FRotator                                    RelativeRotation;                                          // 0x001C(0x000C)
	unsigned long                                      bInheritBaseScale : 1;                                     // 0x0028(0x0001) BIT_FIELD

};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                   // 0x0000(0x0008) (Edit)
	float                                              U;                                                         // 0x0008(0x0004) (Edit)
	float                                              V;                                                         // 0x000C(0x0004) (Edit)
	float                                              UL;                                                        // 0x0010(0x0004) (Edit)
	float                                              VL;                                                        // 0x0014(0x0004) (Edit)

};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                    // 0x0000(0x0008) (Edit)
	struct FVector2D                                   V0_UV;                                                     // 0x0008(0x0008) (Edit)
	struct FVector2D                                   V1_Pos;                                                    // 0x0010(0x0008) (Edit)
	struct FVector2D                                   V1_UV;                                                     // 0x0018(0x0008) (Edit)
	struct FVector2D                                   V2_Pos;                                                    // 0x0020(0x0008) (Edit)
	struct FVector2D                                   V2_UV;                                                     // 0x0028(0x0008) (Edit)

};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0020
struct FConsoleMessage
{
	struct FString                                     Text;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FColor                                      TextColor;                                                 // 0x0010(0x0004)
	float                                              MessageLife;                                               // 0x0014(0x0004)
	class APlayerReplicationInfo*                      PRI;                                                       // 0x0018(0x0008)

};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0040
struct FKismetDrawTextInfo
{
	struct FString                                     MessageText;                                               // 0x0000(0x0010) (Edit, NeedCtorLink)
	struct FString                                     AppendedText;                                              // 0x0010(0x0010) (NeedCtorLink)
	class UFont*                                       MessageFont;                                               // 0x0020(0x0008) (Edit)
	struct FVector2D                                   MessageFontScale;                                          // 0x0028(0x0008) (Edit)
	struct FVector2D                                   MessageOffset;                                             // 0x0030(0x0008) (Edit)
	struct FColor                                      MessageColor;                                              // 0x0038(0x0004) (Edit)
	float                                              MessageEndTime;                                            // 0x003C(0x0004)

};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// 0x0018
struct FDynamicLinkInfo
{
	struct FVector                                     LastTargetLocation;                                        // 0x0000(0x000C)
	struct FVector                                     LastSrcLocation;                                           // 0x000C(0x000C)

};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0018
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit)
	float                                              FloatParam;                                                // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData_HYE0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundNodeWave*                              WaveParam;                                                 // 0x0010(0x0008) (Edit)

};

// ScriptStruct Engine.SplineAudioComponent.InterpPointOnSpline
// 0x0014
struct FInterpPointOnSpline
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (Edit)
	float                                              InVal;                                                     // 0x000C(0x0004) (Edit)
	float                                              Length;                                                    // 0x0010(0x0004) (Edit)

};

// ScriptStruct Engine.MultiCueSplineAudioComponent.MultiCueSplineSoundSlot
// 0x0034
struct FMultiCueSplineSoundSlot
{
	class USoundCue*                                   SoundCue;                                                  // 0x0000(0x0008) (Edit)
	float                                              PitchScale;                                                // 0x0008(0x0004) (Edit)
	float                                              VolumeScale;                                               // 0x000C(0x0004) (Edit)
	int                                                StartPoint;                                                // 0x0010(0x0004) (Edit)
	int                                                EndPoint;                                                  // 0x0014(0x0004) (Edit)
	struct FDouble                                     LastUpdateTime;                                            // 0x0018(0x0008) (Const, Native)
	float                                              SourceInteriorVolume;                                      // 0x0020(0x0004) (Const, Native)
	float                                              SourceInteriorLPF;                                         // 0x0024(0x0004) (Const, Native)
	float                                              CurrentInteriorVolume;                                     // 0x0028(0x0004) (Const, Native)
	float                                              CurrentInteriorLPF;                                        // 0x002C(0x0004) (Const, Native)
	unsigned long                                      bPlaying : 1;                                              // 0x0030(0x0001) BIT_FIELD

};

// ScriptStruct Engine.SimpleSplineAudioComponent.SplineSoundSlot
// 0x0038
struct FSplineSoundSlot
{
	class USoundNodeWave*                              Wave;                                                      // 0x0000(0x0008) (Edit)
	float                                              PitchScale;                                                // 0x0008(0x0004) (Edit)
	float                                              VolumeScale;                                               // 0x000C(0x0004) (Edit)
	int                                                StartPoint;                                                // 0x0010(0x0004) (Edit)
	int                                                EndPoint;                                                  // 0x0014(0x0004) (Edit)
	float                                              Weight;                                                    // 0x0018(0x0004) (Edit)
	unsigned char                                      UnknownData_MHVI[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDouble                                     LastUpdateTime;                                            // 0x0020(0x0008) (Const, Native)
	float                                              SourceInteriorVolume;                                      // 0x0028(0x0004) (Const, Native)
	float                                              SourceInteriorLPF;                                         // 0x002C(0x0004) (Const, Native)
	float                                              CurrentInteriorVolume;                                     // 0x0030(0x0004) (Const, Native)
	float                                              CurrentInteriorLPF;                                        // 0x0034(0x0004) (Const, Native)

};

// ScriptStruct Engine.GroupComponent_ORS.ComponentTemplate
// 0x0020
struct FComponentTemplate
{
	struct FScriptDelegate                             Condition;                                                 // 0x0000(0x000C) ELEMENT_SIZE_MISMATCH (Edit, NeedCtorLink)
	unsigned char                                      UnknownData_WTU1[0xC];                                     // 0x0000(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UObject*                                     Object;                                                    // 0x0018(0x0008) (Edit)

};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	unsigned long                                      bInitialized : 1;                                          // 0x0000(0x0001) BIT_FIELD
	unsigned long                                      BSP : 1;                                                   // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Static : 1;                                                // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Dynamic : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      CompositeDynamic : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Skybox : 1;                                                // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Unnamed_2 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Unnamed_3 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Unnamed_4 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Unnamed_5 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Unnamed_6 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Unnamed_7 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_2 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_3 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_4 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_5 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_6 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_7 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_8 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_9 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_10 : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Cinematic_11 : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Gameplay_2 : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Gameplay_3 : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Gameplay_4 : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Gameplay_5 : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      Crowd : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      Nothing : 1;                                               // 0x0000(0x0001) BIT_FIELD (Const)
	unsigned long                                      Pawn : 1;                                                  // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      Vehicle : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      Water : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      GameplayPhysics : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      EffectPhysics : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      Ball : 1;                                                  // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      VehicleBlocker : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      BallBlocker : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      Untitled4 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      Cloth : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      FluidDrain : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      SoftBody : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      FracturedMeshPart : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      BlockingVolume : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      DeadPawn : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      Clothing : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, Const)
	unsigned long                                      ClothingCollision : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, Const)

};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x0010
struct FKCachedConvexData_Mirror
{
	TArray<int>                                        CachedConvexElements;                                      // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0010
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                                    // 0x0000(0x0008)
	class AActor*                                      Destination;                                               // 0x0008(0x0008)

};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int                                                Id;                                                        // 0x0000(0x0004)
	int                                                ValueIndex;                                                // 0x0004(0x0004)
	TEnumAsByte<Engine_EOnlineDataAdvertisementType>   AdvertisementType;                                         // 0x0008(0x0001)

};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int                                                Id;                                                        // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (Const, Localized)

};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int                                                Id;                                                        // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (Const, Localized)
	unsigned long                                      bIsWildcard : 1;                                           // 0x000C(0x0001) BIT_FIELD (Const)

};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x0054
struct FSettingsPropertyPropertyMetaData
{
	int                                                Id;                                                        // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (Const)
	unsigned char                                      UnknownData_N7Z1[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ColumnHeaderText;                                          // 0x0010(0x0010) (Const, Localized, NeedCtorLink)
	TEnumAsByte<Engine_EPropertyValueMappingType>      MappingType;                                               // 0x0020(0x0001) (Const)
	unsigned char                                      UnknownData_PZBP[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FIdToStringMapping>                  ValueMappings;                                             // 0x0028(0x0010) (Const, NeedCtorLink)
	TArray<struct FSettingsData>                       PredefinedValues;                                          // 0x0038(0x0010) (Const, NeedCtorLink)
	float                                              MinVal;                                                    // 0x0048(0x0004) (Const)
	float                                              MaxVal;                                                    // 0x004C(0x0004) (Const)
	float                                              RangeIncrement;                                            // 0x0050(0x0004) (Const)

};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0018
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                                        // 0x0000(0x0008)
	struct FString                                     ObjectPropertyValue;                                       // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int                                                EntryId;                                                   // 0x0000(0x0004)
	struct FName                                       ObjectPropertyName;                                        // 0x0004(0x0008)
	TEnumAsByte<Engine_EOnlineGameSearchEntryType>     EntryType;                                                 // 0x000C(0x0001)
	TEnumAsByte<Engine_EOnlineGameSearchSortType>      SortType;                                                  // 0x000D(0x0001)

};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0050
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	int                                                TeamID;                                                    // 0x0048(0x0004)
	int                                                Score;                                                     // 0x004C(0x0004)

};

// ScriptStruct Engine.Camera.TViewTarget
// 0x0038
struct FTViewTarget
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008) (Edit)
	class AController*                                 Controller;                                                // 0x0008(0x0008) (Edit)
	struct FTPOV                                       POV;                                                       // 0x0010(0x001C) (Edit)
	float                                              AspectRatio;                                               // 0x002C(0x0004) (Edit)
	class APlayerReplicationInfo*                      PRI;                                                       // 0x0030(0x0008) (Edit)

};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x0004
struct FRenderingPerformanceOverrides
{
	unsigned long                                      bAllowAmbientOcclusion : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowDominantWholeSceneDynamicShadows : 1;                // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowMotionBlurSkinning : 1;                              // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowTemporalAA : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowLightShafts : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                 // 0x0000(0x0004) (Edit)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       BlendFunction;                                             // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData_62GV[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendExp;                                                  // 0x0008(0x0004) (Edit)
	unsigned long                                      bLockOutgoing : 1;                                         // 0x000C(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0035
struct FClientAdjustment
{
	float                                              TimeStamp;                                                 // 0x0000(0x0004)
	TEnumAsByte<Engine_EPhysics>                       newPhysics;                                                // 0x0004(0x0001)
	unsigned char                                      UnknownData_JNXF[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     NewLoc;                                                    // 0x0008(0x000C)
	struct FVector                                     NewVel;                                                    // 0x0014(0x000C)
	class AActor*                                      NewBase;                                                   // 0x0020(0x0008)
	struct FVector                                     NewFloor;                                                  // 0x0028(0x000C)
	unsigned char                                      bAckGoodMove;                                              // 0x0034(0x0001)

};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// 0x0050
struct FConnectedPeerInfo
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (NeedCtorLink)
	TEnumAsByte<Engine_ENATType>                       NatType;                                                   // 0x0048(0x0001)
	unsigned char                                      UnknownData_5VKM[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bLostConnectionToHost : 1;                                 // 0x004C(0x0001) BIT_FIELD

};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	TEnumAsByte<Engine_EInputTypes>                    Type;                                                      // 0x0000(0x0001)
	unsigned char                                      UnknownData_KJYF[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x0004(0x0004)
	float                                              TimeDelta;                                                 // 0x0008(0x0004)
	TEnumAsByte<Engine_EInputMatchAction>              Action;                                                    // 0x000C(0x0001)

};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0050
struct FInputMatchRequest
{
	TArray<struct FInputEntry>                         Inputs;                                                    // 0x0000(0x0010) (NeedCtorLink)
	class AActor*                                      MatchActor;                                                // 0x0010(0x0008)
	struct FName                                       MatchFuncName;                                             // 0x0018(0x0008)
	struct FScriptDelegate                             MatchDelegate;                                             // 0x0020(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JJAI[0xC];                                     // 0x0020(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       FailedFuncName;                                            // 0x0038(0x0008)
	struct FName                                       RequestName;                                               // 0x0040(0x0008)
	int                                                MatchIdx;                                                  // 0x0048(0x0004) (Transient)
	float                                              LastMatchTime;                                             // 0x004C(0x0004) (Transient)

};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// 0x0040
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                  // 0x0000(0x0008)
	TEnumAsByte<Engine_EPlatformInterfaceDataType>     Type;                                                      // 0x0008(0x0001)
	unsigned char                                      UnknownData_B98U[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntValue;                                                  // 0x000C(0x0004)
	float                                              FloatValue;                                                // 0x0010(0x0004)
	unsigned char                                      UnknownData_TKLV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringValue;                                               // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     StringValue2;                                              // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	class UObject*                                     ObjectValue;                                               // 0x0038(0x0008)

};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.AppNotificationsBase.NotificationMessageInfo
// 0x0020
struct FNotificationMessageInfo
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.CloudSaveSystem.SaveSlotOperation
// 0x0005
struct FSaveSlotOperation
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)
	TEnumAsByte<Engine_ESaveSlotOperationEnum>         SlotOperation;                                             // 0x0004(0x0001)

};

// ScriptStruct Engine.CloudSaveSystem.SetSaveDataCallbackStruct
// 0x0020
struct FSetSaveDataCallbackStruct
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData_NVXV[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_DZQP[0xC];                                     // 0x0004(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Engine.CloudSaveSystem.GetSaveDataCallbackStruct
// 0x0020
struct FGetSaveDataCallbackStruct
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData_BUUF[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_H6EN[0xC];                                     // 0x0004(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Engine.ControllerLayoutStack.ControllerLayout
// 0x000C
struct FControllerLayout
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	int                                                Priority;                                                  // 0x0008(0x0004)

};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                                     // 0x0000(0x0004)
	float                                              KeyOut;                                                    // 0x0004(0x0004)
	unsigned long                                      TangentsValid : 1;                                         // 0x0008(0x0001) BIT_FIELD
	float                                              TangentIn;                                                 // 0x000C(0x0004)
	float                                              TangentOut;                                                // 0x0010(0x0004)
	TEnumAsByte<Core_EInterpCurveMode>                 IntepMode;                                                 // 0x0014(0x0001)

};

// ScriptStruct Engine.DateTime.DateTimeStruct
// 0x001D
struct FDateTimeStruct
{
	int                                                Year;                                                      // 0x0000(0x0004) (DataBinding)
	int                                                Month;                                                     // 0x0004(0x0004) (DataBinding)
	int                                                Day;                                                       // 0x0008(0x0004) (DataBinding)
	int                                                WeekDay;                                                   // 0x000C(0x0004) (DataBinding)
	int                                                Hour;                                                      // 0x0010(0x0004) (DataBinding)
	int                                                Minute;                                                    // 0x0014(0x0004) (DataBinding)
	int                                                Second;                                                    // 0x0018(0x0004) (DataBinding)
	TEnumAsByte<Engine_ETimeZone>                      TimeZone;                                                  // 0x001C(0x0001) (DataBinding)

};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                    // 0x0000(0x0004) (Edit)
	int                                                StartV;                                                    // 0x0004(0x0004) (Edit)
	int                                                USize;                                                     // 0x0008(0x0004) (Edit)
	int                                                VSize;                                                     // 0x000C(0x0004) (Edit)
	unsigned char                                      TextureIndex;                                              // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData_4K32[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VerticalOffset;                                            // 0x0014(0x0004) (Edit)

};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x00AC
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                  // 0x0000(0x0010) (Edit, NeedCtorLink)
	float                                              Height;                                                    // 0x0010(0x0004) (Edit)
	unsigned long                                      bEnableAntialiasing : 1;                                   // 0x0014(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bEnableBold : 1;                                           // 0x0014(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bEnableItalic : 1;                                         // 0x0014(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bEnableUnderline : 1;                                      // 0x0014(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAlphaOnly : 1;                                            // 0x0014(0x0001) BIT_FIELD (Edit)
	TEnumAsByte<Engine_EFontImportCharacterSet>        CharacterSet;                                              // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData_105V[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Chars;                                                     // 0x0020(0x0010) (Edit, NeedCtorLink)
	struct FString                                     UnicodeRange;                                              // 0x0030(0x0010) (Edit, NeedCtorLink)
	struct FString                                     CharsFilePath;                                             // 0x0040(0x0010) (Edit, NeedCtorLink)
	struct FString                                     CharsFileWildcard;                                         // 0x0050(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bCreatePrintableOnly : 1;                                  // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIncludeASCIIRange : 1;                                    // 0x0060(0x0001) BIT_FIELD (Edit)
	struct FLinearColor                                ForegroundColor;                                           // 0x0064(0x0010) (Edit)
	unsigned long                                      bEnableDropShadow : 1;                                     // 0x0074(0x0001) BIT_FIELD (Edit)
	int                                                TexturePageWidth;                                          // 0x0078(0x0004) (Edit)
	int                                                TexturePageMaxHeight;                                      // 0x007C(0x0004) (Edit)
	int                                                XPadding;                                                  // 0x0080(0x0004) (Edit)
	int                                                YPadding;                                                  // 0x0084(0x0004) (Edit)
	int                                                ExtendBoxTop;                                              // 0x0088(0x0004) (Edit)
	int                                                ExtendBoxBottom;                                           // 0x008C(0x0004) (Edit)
	int                                                ExtendBoxRight;                                            // 0x0090(0x0004) (Edit)
	int                                                ExtendBoxLeft;                                             // 0x0094(0x0004) (Edit)
	unsigned long                                      bEnableLegacyMode : 1;                                     // 0x0098(0x0001) BIT_FIELD (Edit)
	int                                                Kerning;                                                   // 0x009C(0x0004) (Edit)
	unsigned long                                      bUseDistanceFieldAlpha : 1;                                // 0x00A0(0x0001) BIT_FIELD (Edit)
	int                                                DistanceFieldScaleFactor;                                  // 0x00A4(0x0004) (Edit)
	float                                              DistanceFieldScanRadiusScale;                              // 0x00A8(0x0004) (Edit)

};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x000C
struct FWaveformSample
{
	unsigned char                                      LeftAmplitude;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      RightAmplitude;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      LeftTriggerAmplitude;                                      // 0x0002(0x0001) (Edit)
	unsigned char                                      RightTriggerAmplitude;                                     // 0x0003(0x0001) (Edit)
	TEnumAsByte<Engine_EWaveformFunction>              LeftFunction;                                              // 0x0004(0x0001) (Edit)
	TEnumAsByte<Engine_EWaveformFunction>              RightFunction;                                             // 0x0005(0x0001) (Edit)
	TEnumAsByte<Engine_EWaveformFunction>              LeftTriggerFunction;                                       // 0x0006(0x0001) (Edit)
	TEnumAsByte<Engine_EWaveformFunction>              RightTriggerFunction;                                      // 0x0007(0x0001) (Edit)
	float                                              Duration;                                                  // 0x0008(0x0004) (Edit)

};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// 0x0034
struct FGameplayEventsHeader
{
	int                                                EngineVersion;                                             // 0x0000(0x0004) (Const)
	int                                                StatsWriterVersion;                                        // 0x0004(0x0004) (Const)
	int                                                StreamOffset;                                              // 0x0008(0x0004) (Const)
	int                                                AggregateOffset;                                           // 0x000C(0x0004) (Const)
	int                                                FooterOffset;                                              // 0x0010(0x0004) (Const)
	int                                                TotalStreamSize;                                           // 0x0014(0x0004) (Const)
	int                                                FileSize;                                                  // 0x0018(0x0004) (Const)
	unsigned char                                      UnknownData_0X4U[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FilterClass;                                               // 0x0020(0x0010) (NeedCtorLink)
	int                                                Flags;                                                     // 0x0030(0x0004)

};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// 0x00CC
struct FGameSessionInformation
{
	int                                                AppTitleID;                                                // 0x0000(0x0004)
	int                                                PlatformType;                                              // 0x0004(0x0004)
	struct FString                                     Language;                                                  // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     GameplaySessionTimestamp;                                  // 0x0018(0x0010) (Const, NeedCtorLink)
	float                                              GameplaySessionStartTime;                                  // 0x0028(0x0004) (Const)
	float                                              GameplaySessionEndTime;                                    // 0x002C(0x0004) (Const)
	unsigned long                                      bGameplaySessionInProgress : 1;                            // 0x0030(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData_NZ8X[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameplaySessionID;                                         // 0x0038(0x0010) (Const, NeedCtorLink)
	struct FString                                     GameClassName;                                             // 0x0048(0x0010) (Const, NeedCtorLink)
	struct FString                                     MapName;                                                   // 0x0058(0x0010) (Const, NeedCtorLink)
	struct FString                                     MapURL;                                                    // 0x0068(0x0010) (Const, NeedCtorLink)
	int                                                SessionInstance;                                           // 0x0078(0x0004) (Const)
	int                                                GameTypeId;                                                // 0x007C(0x0004) (Const)
	struct FUniqueNetId                                OwningNetId;                                               // 0x0080(0x0048) (Const, NeedCtorLink)
	int                                                PlaylistId;                                                // 0x00C8(0x0004)

};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// 0x0064
struct FPlayerInformation
{
	struct FName                                       ControllerName;                                            // 0x0000(0x0008)
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                                  // 0x0018(0x0048) (NeedCtorLink)
	unsigned long                                      bIsBot : 1;                                                // 0x0060(0x0001) BIT_FIELD

};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// 0x0020
struct FTeamInformation
{
	int                                                TeamIndex;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData_A1VF[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TeamName;                                                  // 0x0008(0x0010) (NeedCtorLink)
	struct FColor                                      TeamColor;                                                 // 0x0018(0x0004)
	int                                                MaxSize;                                                   // 0x001C(0x0004)

};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// 0x0008
struct FGameStatGroup
{
	TEnumAsByte<Engine_EGameStatGroups>                Group;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData_Q5DN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Level;                                                     // 0x0004(0x0004)

};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// 0x0018
struct FGameplayEventMetaData
{
	int                                                EventID;                                                   // 0x0000(0x0004) (Const)
	struct FName                                       EventName;                                                 // 0x0004(0x0008) (Const)
	struct FGameStatGroup                              StatGroup;                                                 // 0x000C(0x0008) (Const)
	int                                                EventDataType;                                             // 0x0014(0x0004) (Const)

};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// 0x0008
struct FWeaponClassEventData
{
	struct FName                                       WeaponClassName;                                           // 0x0000(0x0008)

};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// 0x0008
struct FDamageClassEventData
{
	struct FName                                       DamageClassName;                                           // 0x0000(0x0008)

};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// 0x0008
struct FProjectileClassEventData
{
	struct FName                                       ProjectileClassName;                                       // 0x0000(0x0008)

};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// 0x0008
struct FPawnClassEventData
{
	struct FName                                       PawnClassName;                                             // 0x0000(0x0008)

};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x0035
struct FIniLocFileEntry
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     DLName;                                                    // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     HashCode;                                                  // 0x0020(0x0010) (NeedCtorLink)
	unsigned long                                      bIsUnicode : 1;                                            // 0x0030(0x0001) BIT_FIELD
	TEnumAsByte<Engine_EOnlineEnumerationReadState>    ReadState;                                                 // 0x0034(0x0001)

};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                               // 0x0000(0x0008)
	struct FColor                                      CurveColor;                                                // 0x0008(0x0004)
	unsigned char                                      UnknownData_4Z90[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurveName;                                                 // 0x0010(0x0010) (NeedCtorLink)
	int                                                bHideCurve;                                                // 0x0020(0x0004)
	int                                                bColorCurve;                                               // 0x0024(0x0004)
	int                                                bFloatingPointColorCurve;                                  // 0x0028(0x0004)
	int                                                bClamp;                                                    // 0x002C(0x0004)
	float                                              ClampLow;                                                  // 0x0030(0x0004)
	float                                              ClampHigh;                                                 // 0x0034(0x0004)

};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                   // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FCurveEdEntry>                       Curves;                                                    // 0x0010(0x0010) (NeedCtorLink)
	float                                              ViewStartInput;                                            // 0x0020(0x0004)
	float                                              ViewEndInput;                                              // 0x0024(0x0004)
	float                                              ViewStartOutput;                                           // 0x0028(0x0004)
	float                                              ViewEndOutput;                                             // 0x002C(0x0004)

};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x0024
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                 // 0x0000(0x0010) (NeedCtorLink)
	TArray<int>                                        TrackIndices;                                              // 0x0010(0x0010) (NeedCtorLink)
	unsigned long                                      bIsCollapsed : 1;                                          // 0x0020(0x0001) BIT_FIELD
	unsigned long                                      bIsSelected : 1;                                           // 0x0020(0x0001) BIT_FIELD (Transient)

};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x001C
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                            // 0x0000(0x0008)
	struct FString                                     SubTrackName;                                              // 0x0008(0x0010) (NeedCtorLink)
	int                                                GroupIndex;                                                // 0x0018(0x0004)

};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	unsigned long                                      bUseTwoSidedLighting : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bShadowIndirectOnly : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bUseEmissiveForStaticLighting : 1;                         // 0x0000(0x0001) BIT_FIELD (Edit)
	float                                              EmissiveLightFalloffExponent;                              // 0x0004(0x0004) (Edit)
	float                                              EmissiveLightExplicitInfluenceRadius;                      // 0x0008(0x0004) (Edit)
	float                                              EmissiveBoost;                                             // 0x000C(0x0004) (Edit)
	float                                              DiffuseBoost;                                              // 0x0010(0x0004) (Edit)
	float                                              SpecularBoost;                                             // 0x0014(0x0004)
	float                                              FullyOccludedSamplesFraction;                              // 0x0018(0x0004) (Edit)

};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0018
struct FOnlineStatsColumn
{
	int                                                ColumnNo;                                                  // 0x0000(0x0004)
	unsigned char                                      UnknownData_N8TM[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSettingsData                               StatValue;                                                 // 0x0008(0x0010)

};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x0088
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0048) (Const, NeedCtorLink)
	struct FSettingsData                               Rank;                                                      // 0x0048(0x0010) (Const)
	struct FString                                     NickName;                                                  // 0x0058(0x0010) (Const, NeedCtorLink)
	TArray<struct FOnlineStatsColumn>                  Columns;                                                   // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FSettingsData>                       StatValues;                                                // 0x0078(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                          // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// 0x0024
struct FDeferredPartToSpawn
{
	int                                                ChunkIndex;                                                // 0x0000(0x0004)
	struct FVector                                     InitialVel;                                                // 0x0004(0x000C)
	struct FVector                                     InitialAngVel;                                             // 0x0010(0x000C)
	float                                              RelativeScale;                                             // 0x001C(0x0004)
	unsigned long                                      bExplosion : 1;                                            // 0x0020(0x0001) BIT_FIELD

};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x0018
struct FPhysEffectInfo
{
	float                                              Threshold;                                                 // 0x0000(0x0004) (Edit)
	float                                              ReFireDelay;                                               // 0x0004(0x0004) (Edit)
	class UParticleSystem*                             Effect;                                                    // 0x0008(0x0008) (Edit)
	class USoundCue*                                   Sound;                                                     // 0x0010(0x0008) (Edit)

};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x0014
struct FFragmentGroup
{
	TArray<int>                                        FragmentIndices;                                           // 0x0000(0x0010) (NeedCtorLink)
	unsigned long                                      bGroupIsRooted : 1;                                        // 0x0010(0x0001) BIT_FIELD

};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// 0x002C
struct FNxDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                         // 0x0000(0x0004) (Edit)
	float                                              DebrisLifetimeMax;                                         // 0x0004(0x0004) (Edit)
	float                                              DebrisMaxSeparationMin;                                    // 0x0008(0x0004) (Edit)
	float                                              DebrisMaxSeparationMax;                                    // 0x000C(0x0004) (Edit)
	struct FBox                                        ValidBounds;                                               // 0x0010(0x001C) (Edit)

};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x00F0
struct FNxDestructibleParameters
{
	struct FNxDestructibleDamageParameters             DamageParameters;                                          // 0x0000(0x0014) (Edit)
	struct FNxDestructibleDebrisParameters             DebrisParameters;                                          // 0x0014(0x002C) (Edit)
	struct FNxDestructibleAdvancedParameters           AdvancedParameters;                                        // 0x0040(0x0018) (Edit)
	float                                              DamageThreshold;                                           // 0x0058(0x0004) (Deprecated)
	float                                              DamageToRadius;                                            // 0x005C(0x0004) (Deprecated)
	float                                              DamageCap;                                                 // 0x0060(0x0004) (Deprecated)
	float                                              ForceToDamage;                                             // 0x0064(0x0004) (Deprecated)
	float                                              ImpactVelocityThreshold;                                   // 0x0068(0x0004) (Deprecated)
	float                                              MaterialStrength;                                          // 0x006C(0x0004) (Deprecated)
	float                                              DamageToPercentDeformation;                                // 0x0070(0x0004) (Deprecated)
	float                                              DeformationPercentLimit;                                   // 0x0074(0x0004) (Deprecated)
	unsigned long                                      bFormExtendedStructures : 1;                               // 0x0078(0x0001) BIT_FIELD (Deprecated)
	int                                                SupportDepth;                                              // 0x007C(0x0004) (Edit)
	int                                                MinimumFractureDepth;                                      // 0x0080(0x0004) (Edit)
	int                                                DebrisDepth;                                               // 0x0084(0x0004) (Edit)
	int                                                EssentialDepth;                                            // 0x0088(0x0004) (Edit)
	float                                              DebrisLifetimeMin;                                         // 0x008C(0x0004) (Deprecated)
	float                                              DebrisLifetimeMax;                                         // 0x0090(0x0004) (Deprecated)
	float                                              DebrisMaxSeparationMin;                                    // 0x0094(0x0004) (Deprecated)
	float                                              DebrisMaxSeparationMax;                                    // 0x0098(0x0004) (Deprecated)
	struct FBox                                        ValidBounds;                                               // 0x009C(0x001C) (Deprecated)
	float                                              MaxChunkSpeed;                                             // 0x00B8(0x0004) (Deprecated)
	float                                              MassScaleExponent;                                         // 0x00BC(0x0004) (Deprecated)
	struct FNxDestructibleParametersFlag               Flags;                                                     // 0x00C0(0x0004) (Edit)
	float                                              GrbVolumeLimit;                                            // 0x00C4(0x0004) (Deprecated)
	float                                              GrbParticleSpacing;                                        // 0x00C8(0x0004) (Deprecated)
	float                                              FractureImpulseScale;                                      // 0x00CC(0x0004) (Deprecated)
	TArray<struct FNxDestructibleDepthParameters>      DepthParameters;                                           // 0x00D0(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	int                                                DynamicChunksDominanceGroup;                               // 0x00E0(0x0004) (Edit)
	unsigned long                                      UseDynamicChunksGroupsMask : 1;                            // 0x00E4(0x0001) BIT_FIELD (Edit)
	TEnumAsByte<Engine_ERBCollisionChannel>            DynamicChunksChannel;                                      // 0x00E8(0x0001) (Edit, Const)
	unsigned char                                      UnknownData_K2QL[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRBCollisionChannelContainer                DynamicChunksCollideWithChannels;                          // 0x00EC(0x0004) (Edit, Const)

};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// 0x0040
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                 // 0x0000(0x0008) (Edit)
	TArray<class UAnimSet*>                            PreviewAnimSets;                                           // 0x0008(0x0010) (Edit, NeedCtorLink)
	struct FName                                       AnimSeqName;                                               // 0x0018(0x0008) (Edit)
	struct FVector                                     Location;                                                  // 0x0020(0x000C) (EditConst)
	struct FRotator                                    Rotation;                                                  // 0x002C(0x000C) (EditConst)
	class APawn*                                       PawnInst;                                                  // 0x0038(0x0008) (Transient)

};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x0050
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                                  // 0x0000(0x0050) (Const, Native, Transient)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010 (0x0044 - 0x0034)
struct FParticleEventKismetData : public FParticleEventData
{
	unsigned long                                      UsePSysCompLocation : 1;                                   // 0x0034(0x0001) BIT_FIELD
	struct FVector                                     Normal;                                                    // 0x0038(0x000C)

};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned long                                      bModify : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bScale : 1;                                                // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bLock : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.ParticleModuleCollision.ParticleAttractorCollisionAction
// 0x0018
struct FParticleAttractorCollisionAction
{
	TEnumAsByte<Engine_EParticleAttractorActionType>   Type;                                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData_5RCQ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventName;                                                 // 0x0008(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x0030
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<Engine_EParticleEventType>             Type;                                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData_OXED[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Frequency;                                                 // 0x0004(0x0004) (Edit)
	int                                                LowFreq;                                                   // 0x0008(0x0004) (Edit)
	int                                                ParticleFrequency;                                         // 0x000C(0x0004) (Edit)
	unsigned long                                      FirstTimeOnly : 1;                                         // 0x0010(0x0001) BIT_FIELD (Edit)
	unsigned long                                      LastTimeOnly : 1;                                          // 0x0010(0x0001) BIT_FIELD (Edit)
	unsigned long                                      UseReflectedImpactVector : 1;                              // 0x0010(0x0001) BIT_FIELD (Edit)
	struct FName                                       CustomName;                                                // 0x0014(0x0008) (Edit)
	unsigned char                                      UnknownData_9MXJ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                          // 0x0020(0x0010) (Edit, NeedCtorLink, EditInline)

};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned long                                      bProcessDuringSpawn : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bProcessDuringUpdate : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bUseEmitterTime : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.RB_BodyInstance.BulletBodyData
// 0x0010
struct FBulletBodyData
{
	int                                                SceneIndex;                                                // 0x0000(0x0004)
	unsigned char                                      UnknownData_KCN8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    Body;                                                      // 0x0008(0x0008)

};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	unsigned char                                      bLimited;                                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData_2I3Z[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LimitSize;                                                 // 0x0004(0x0004) (Edit)

};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x0030
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                                   // 0x0000(0x0008) (Edit, EditInline)
	float                                              MinScale;                                                  // 0x0008(0x0004) (Edit)
	float                                              MaxScale;                                                  // 0x000C(0x0004) (Edit)
	float                                              Density;                                                   // 0x0010(0x0004) (Edit)
	float                                              SlopeRotationBlend;                                        // 0x0014(0x0004) (Edit)
	int                                                RandSeed;                                                  // 0x0018(0x0004) (Edit)
	unsigned char                                      UnknownData_8T73[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTerrainDecorationInstance>          Instances;                                                 // 0x0020(0x0010) (Component, NeedCtorLink)

};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x0024
struct FTerrainDecoLayer
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, NeedCtorLink)
	TArray<struct FTerrainDecoration>                  Decorations;                                               // 0x0010(0x0010) (Edit, Component, NeedCtorLink)
	int                                                AlphaMapIndex;                                             // 0x0020(0x0004)

};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x0010
struct FCachedTerrainMaterialArray
{
	TArray<struct FPointer>                            CachedMaterials;                                           // 0x0000(0x0010) (Const, Native)

};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData_XOL2[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AutoCompleteListIndices;                                   // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FPointer>                            ChildNodes;                                                // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.Input.KeyBind
// 0x001C
struct FKeyBind
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	struct FString                                     Command;                                                   // 0x0008(0x0010) (NeedCtorLink)
	unsigned long                                      Control : 1;                                               // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      Shift : 1;                                                 // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      Alt : 1;                                                   // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bIgnoreCtrl : 1;                                           // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bIgnoreShift : 1;                                          // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bIgnoreAlt : 1;                                            // 0x0018(0x0001) BIT_FIELD

};

// ScriptStruct Engine.Input.TouchTracker
// 0x0018
struct FTouchTracker
{
	int                                                Handle;                                                    // 0x0000(0x0004)
	int                                                TouchpadIndex;                                             // 0x0004(0x0004)
	struct FVector2D                                   Location;                                                  // 0x0008(0x0008)
	TEnumAsByte<Core_EInputEvent>                      EventType;                                                 // 0x0010(0x0001)
	unsigned char                                      UnknownData_UCKQ[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bTrapInput : 1;                                            // 0x0014(0x0001) BIT_FIELD

};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x0010
struct FSoundEventMapping
{
	struct FName                                       SoundEventName;                                            // 0x0000(0x0008) (Edit)
	class USoundCue*                                   SoundToPlay;                                               // 0x0008(0x0008) (Edit)

};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x0070
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                                           // 0x0000(0x0048) (NeedCtorLink)
	struct FString                                     SendingPlayerNick;                                         // 0x0048(0x0010) (NeedCtorLink)
	unsigned long                                      bIsFriendInvite : 1;                                       // 0x0058(0x0001) BIT_FIELD
	unsigned long                                      bIsGameInvite : 1;                                         // 0x0058(0x0001) BIT_FIELD
	unsigned long                                      bWasAccepted : 1;                                          // 0x0058(0x0001) BIT_FIELD
	unsigned long                                      bWasDenied : 1;                                            // 0x0058(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_X5UN[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0060(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.OnlineUser
// 0x0078
struct FOnlineUser
{
	struct FUniqueNetId                                UniqueId;                                                  // 0x0000(0x0048) (Const, NeedCtorLink)
	struct FString                                     NickName;                                                  // 0x0048(0x0010) (Const, NeedCtorLink)
	TArray<struct FString>                             AttrName;                                                  // 0x0058(0x0010) (NeedCtorLink)
	TArray<struct FString>                             AttrValue;                                                 // 0x0068(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.PsyTag
// 0x0014
struct FPsyTag
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink)
	int                                                Code;                                                      // 0x0010(0x0004)

};

// ScriptStruct Engine.ProcBuilding.PBMeshCompInfo
// 0x000C
struct FPBMeshCompInfo
{
	class UStaticMeshComponent*                        MeshComp;                                                  // 0x0000(0x0008) (ExportObject, Component, EditInline)
	int                                                TopLevelScopeIndex;                                        // 0x0008(0x0004)

};

// ScriptStruct Engine.ProcBuilding.PBFracMeshCompInfo
// 0x000C
struct FPBFracMeshCompInfo
{
	class UFracturedStaticMeshComponent*               FracMeshComp;                                              // 0x0000(0x0008) (ExportObject, Component, EditInline)
	int                                                TopLevelScopeIndex;                                        // 0x0008(0x0004)

};

// ScriptStruct Engine.ProcBuilding.PBScope2D
// 0x0048
struct FPBScope2D
{
	struct FMatrix                                     ScopeFrame;                                                // 0x0000(0x0040)
	float                                              DimX;                                                      // 0x0040(0x0004)
	float                                              DimZ;                                                      // 0x0044(0x0004)

};

// ScriptStruct Engine.ProcBuilding.PBScopeProcessInfo
// 0x001C
struct FPBScopeProcessInfo
{
	class AProcBuilding*                               OwningBuilding;                                            // 0x0000(0x0008)
	class UProcBuildingRuleset*                        Ruleset;                                                   // 0x0008(0x0008)
	struct FName                                       RulesetVariation;                                          // 0x0010(0x0008)
	unsigned long                                      bGenerateLODPoly : 1;                                      // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bPartOfNonRect : 1;                                        // 0x0018(0x0001) BIT_FIELD

};

// ScriptStruct Engine.ProcBuilding.PBEdgeInfo
// 0x002C
struct FPBEdgeInfo
{
	struct FVector                                     EdgeEnd;                                                   // 0x0000(0x000C)
	struct FVector                                     EdgeStart;                                                 // 0x000C(0x000C)
	int                                                ScopeAIndex;                                               // 0x0018(0x0004)
	TEnumAsByte<Engine_EScopeEdge>                     ScopeAEdge;                                                // 0x001C(0x0001)
	unsigned char                                      UnknownData_K3XQ[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScopeBIndex;                                               // 0x0020(0x0004)
	TEnumAsByte<Engine_EScopeEdge>                     ScopeBEdge;                                                // 0x0024(0x0001)
	unsigned char                                      UnknownData_VPQL[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EdgeAngle;                                                 // 0x0028(0x0004)

};

// ScriptStruct Engine.PBRuleNodeBase.PBRuleLink
// 0x0014
struct FPBRuleLink
{
	class UPBRuleNodeBase*                             NextRule;                                                  // 0x0000(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	struct FName                                       LinkName;                                                  // 0x0008(0x0008) (Edit)
	int                                                DrawY;                                                     // 0x0010(0x0004) (EditorOnly)

};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMatOverrides
// 0x0010
struct FBuildingMatOverrides
{
	TArray<class UMaterialInterface*>                  MaterialOptions;                                           // 0x0000(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMeshInfo
// 0x0050
struct FBuildingMeshInfo
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008) (Edit)
	float                                              DimX;                                                      // 0x0008(0x0004) (Edit)
	float                                              DimZ;                                                      // 0x000C(0x0004) (Edit)
	float                                              Chance;                                                    // 0x0010(0x0004) (Edit)
	unsigned char                                      UnknownData_ECJV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDistributionVector*                         Translation;                                               // 0x0018(0x0008) (Edit, ExportObject, Component, EditInline)
	class UDistributionVector*                         Rotation;                                                  // 0x0020(0x0008) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bMeshScaleTranslation : 1;                                 // 0x0028(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bOverrideMeshLightMapRes : 1;                              // 0x0028(0x0001) BIT_FIELD (Edit)
	int                                                OverriddenMeshLightMapRes;                                 // 0x002C(0x0004) (Edit)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                         // 0x0030(0x0010) (NeedCtorLink)
	TArray<struct FBuildingMatOverrides>               SectionOverrides;                                          // 0x0040(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.PBRuleNodeSplit.RBSplitInfo
// 0x0014
struct FRBSplitInfo
{
	unsigned long                                      bFixSize : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit)
	float                                              FixedSize;                                                 // 0x0004(0x0004) (Edit)
	float                                              ExpandRatio;                                               // 0x0008(0x0004) (Edit)
	struct FName                                       SplitName;                                                 // 0x000C(0x0008) (Edit)

};

// ScriptStruct Engine.ProcBuildingRuleset.PBParamSwatch
// 0x0018
struct FPBParamSwatch
{
	struct FName                                       SwatchName;                                                // 0x0000(0x0008) (Edit)
	TArray<struct FPBMaterialParam>                    Params;                                                    // 0x0008(0x0010) (Edit, NeedCtorLink)

};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                     // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Yaw;                                                       // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Roll;                                                      // 0x0018(0x000C) (Edit)

};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0048
struct FGameTypePrefix
{
	struct FString                                     Prefix;                                                    // 0x0000(0x0010) (NeedCtorLink)
	unsigned long                                      bUsesCommonPackage : 1;                                    // 0x0010(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_NVKP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameType;                                                  // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FString>                             AdditionalGameTypes;                                       // 0x0028(0x0010) (NeedCtorLink)
	TArray<struct FString>                             ForcedObjects;                                             // 0x0038(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	struct FString                                     ShortName;                                                 // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     GameClassName;                                             // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0039
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                               // 0x0000(0x001C)
	struct FVector                                     BoxCenter;                                                 // 0x001C(0x000C)
	struct FPointer                                    OctreeNode;                                                // 0x0028(0x0008) (Const, Native, Transient)
	class UObject*                                     Owner;                                                     // 0x0030(0x0008) (Const, NoExport)
	unsigned char                                      OwnerType;                                                 // 0x0038(0x0001) (Const, NoExport)

};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x0014
struct FDebugNavCost
{
	struct FString                                     Desc;                                                      // 0x0000(0x0010) (NeedCtorLink)
	int                                                Cost;                                                      // 0x0010(0x0004)

};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x000C
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                                      // 0x0000(0x0008) (Edit, EditConst)
	int                                                SlotIdx;                                                   // 0x0008(0x0004) (Edit, EditConst)

};

// ScriptStruct Engine.CoverLink.FireLink
// 0x0018
struct FFireLink
{
	TArray<unsigned char>                              Interactions;                                              // 0x0000(0x0010) (NeedCtorLink)
	int                                                PackedProperties_CoverPairRefAndDynamicInfo;               // 0x0010(0x0004) (Const)
	unsigned long                                      bFallbackLink : 1;                                         // 0x0014(0x0001) BIT_FIELD
	unsigned long                                      bDynamicIndexInited : 1;                                   // 0x0014(0x0001) BIT_FIELD

};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x0094
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                                 // 0x0000(0x0008)
	float                                              SlotValidAfterTime;                                        // 0x0008(0x0004) (Transient)
	TEnumAsByte<Engine_ECoverType>                     ForceCoverType;                                            // 0x000C(0x0001) (Edit)
	TEnumAsByte<Engine_ECoverType>                     CoverType;                                                 // 0x000D(0x0001) (Edit, EditConst)
	TEnumAsByte<Engine_ECoverLocationDescription>      LocationDescription;                                       // 0x000E(0x0001) (Edit)
	unsigned char                                      UnknownData_U9DV[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocationOffset;                                            // 0x0010(0x000C)
	struct FRotator                                    RotationOffset;                                            // 0x001C(0x000C)
	TArray<TEnumAsByte<Engine_ECoverAction>>           Actions;                                                   // 0x0028(0x0010) (NeedCtorLink)
	TArray<struct FFireLink>                           FireLinks;                                                 // 0x0038(0x0010) (Edit, EditConst, NeedCtorLink)
	TArray<struct FFireLink>                           RejectedFireLinks;                                         // 0x0048(0x0010) (Edit, Transient, EditConst, NeedCtorLink)
	TArray<int>                                        ExposedCoverPackedProperties;                              // 0x0058(0x0010) (NeedCtorLink)
	int                                                TurnTargetPackedProperties;                                // 0x0068(0x0004)
	unsigned char                                      UnknownData_YZFQ[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSlotMoveRef>                        SlipRefs;                                                  // 0x0070(0x0010) (NeedCtorLink)
	TArray<struct FCoverInfo>                          OverlapClaimsList;                                         // 0x0080(0x0010) (Edit, EditConst, NeedCtorLink)
	unsigned long                                      bLeanLeft : 1;                                             // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bLeanRight : 1;                                            // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bForceCanPopUp : 1;                                        // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bCanPopUp : 1;                                             // 0x0090(0x0001) BIT_FIELD (Edit, EditConst)
	unsigned long                                      bCanMantle : 1;                                            // 0x0090(0x0001) BIT_FIELD (Edit, EditConst)
	unsigned long                                      bCanClimbUp : 1;                                           // 0x0090(0x0001) BIT_FIELD (Edit, EditConst)
	unsigned long                                      bForceCanCoverSlip_Left : 1;                               // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bForceCanCoverSlip_Right : 1;                              // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bCanCoverSlip_Left : 1;                                    // 0x0090(0x0001) BIT_FIELD (Edit, EditConst)
	unsigned long                                      bCanCoverSlip_Right : 1;                                   // 0x0090(0x0001) BIT_FIELD (Edit, EditConst)
	unsigned long                                      bCanSwatTurn_Left : 1;                                     // 0x0090(0x0001) BIT_FIELD (Edit, EditConst)
	unsigned long                                      bCanSwatTurn_Right : 1;                                    // 0x0090(0x0001) BIT_FIELD (Edit, EditConst)
	unsigned long                                      bEnabled : 1;                                              // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowPopup : 1;                                           // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowMantle : 1;                                          // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowCoverSlip : 1;                                       // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowClimbUp : 1;                                         // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bAllowSwatTurn : 1;                                        // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bForceNoGroundAdjust : 1;                                  // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPlayerOnly : 1;                                           // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bPreferLeanOverPopup : 1;                                  // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDestructible : 1;                                         // 0x0090(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bSelected : 1;                                             // 0x0090(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bFailedToFindSurface : 1;                                  // 0x0090(0x0001) BIT_FIELD (Edit, Transient, EditConst)

};

// ScriptStruct Engine.StaticMeshActor.PreCombinedStaticMeshActor
// 0x0048
struct FPreCombinedStaticMeshActor
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C)
	struct FVector                                     PrePivot;                                                  // 0x0020(0x000C)
	float                                              DrawScale;                                                 // 0x002C(0x0004)
	struct FVector                                     DrawScale3D;                                               // 0x0030(0x000C)
	struct FVector                                     ComponentScale3D;                                          // 0x003C(0x000C)

};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x0030
struct FLocalizedStringSettingMetaData
{
	int                                                Id;                                                        // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (Const)
	unsigned char                                      UnknownData_XIP9[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ColumnHeaderText;                                          // 0x0010(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FStringIdToStringMapping>            ValueMappings;                                             // 0x0020(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0020
struct FOnlineGameSearchQuery
{
	TArray<struct FOnlineGameSearchORClause>           OrClauses;                                                 // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FOnlineGameSearchSortClause>         SortClauses;                                               // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0010
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                              // 0x0000(0x0008) (Const)
	struct FPointer                                    PlatformData;                                              // 0x0008(0x0008) (Const, Native)

};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// 0x0048
struct FPlatformInterfaceDelegateResult
{
	unsigned long                                      bSuccessful : 1;                                           // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_XHX5[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlatformInterfaceData                      Data;                                                      // 0x0008(0x0040) (NeedCtorLink)

};

// ScriptStruct Engine.AppNotificationsBase.NotificationInfo
// 0x0030
struct FNotificationInfo
{
	unsigned long                                      bIsLocal : 1;                                              // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_7BD8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MessageBody;                                               // 0x0008(0x0010) (NeedCtorLink)
	int                                                BadgeNumber;                                               // 0x0018(0x0004)
	unsigned char                                      UnknownData_PEJX[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNotificationMessageInfo>            MessageInfo;                                               // 0x0020(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.AppNotificationsBase.LaunchNotificationInfo
// 0x0038
struct FLaunchNotificationInfo
{
	unsigned long                                      bWasLaunchedViaNotification : 1;                           // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_ZQA6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNotificationInfo                           Notification;                                              // 0x0008(0x0030) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineAuthInterface.BaseAuthSession
// 0x0060
struct FBaseAuthSession
{
	struct FIpAddr                                     EndPointIP;                                                // 0x0000(0x0014) (Const)
	int                                                EndPointPort;                                              // 0x0014(0x0004) (Const)
	struct FUniqueNetId                                EndPointUID;                                               // 0x0018(0x0048) (Const, NeedCtorLink)

};

// ScriptStruct Engine.OnlineAuthInterface.LocalAuthSession
// 0x0004 (0x0064 - 0x0060)
struct FLocalAuthSession : public FBaseAuthSession
{
	int                                                SessionUID;                                                // 0x0060(0x0004) (Const)

};

// ScriptStruct Engine.OnlineAuthInterface.AuthSession
// 0x0008 (0x0068 - 0x0060)
struct FAuthSession : public FBaseAuthSession
{
	TEnumAsByte<Engine_EAuthStatus>                    AuthStatus;                                                // 0x0060(0x0001) (Const)
	unsigned char                                      UnknownData_OBDZ[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AuthTicketUID;                                             // 0x0064(0x0004) (Const)

};

// ScriptStruct Engine.LinkedAccountDetails.LinkedAccountData
// 0x00A8
struct FLinkedAccountData
{
	unsigned long                                      bSuccess : 1;                                              // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_WCFG[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetId                                OriginalId;                                                // 0x0008(0x0048) (NeedCtorLink)
	struct FUniqueNetId                                LinkedId;                                                  // 0x0050(0x0048) (NeedCtorLink)
	struct FString                                     LinkedDisplayName;                                         // 0x0098(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x0028
struct FOnlineProfileSetting
{
	TEnumAsByte<Engine_EOnlineProfilePropertyOwner>    Owner;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData_FNPJ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSettingsProperty                           ProfileSetting;                                            // 0x0008(0x0020)

};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x0018
struct FDamagePair
{
	struct FName                                       DamageCauserName;                                          // 0x0000(0x0008) (Edit)
	struct FDamageParameters                           Params;                                                    // 0x0008(0x0010) (Edit)

};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x003C
struct FSeqOpInputLink
{
	struct FString                                     LinkDesc;                                                  // 0x0000(0x0010) (NeedCtorLink)
	unsigned long                                      bHasImpulse : 1;                                           // 0x0010(0x0001) BIT_FIELD
	int                                                QueuedActivations;                                         // 0x0014(0x0004)
	unsigned long                                      bDisabled : 1;                                             // 0x0018(0x0001) BIT_FIELD
	unsigned long                                      bDisabledPIE : 1;                                          // 0x0018(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_I2JT[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USequenceOp*                                 LinkedOp;                                                  // 0x0020(0x0008)
	int                                                DrawY;                                                     // 0x0028(0x0004)
	unsigned long                                      bHidden : 1;                                               // 0x002C(0x0001) BIT_FIELD
	float                                              ActivateDelay;                                             // 0x0030(0x0004)
	unsigned long                                      bMoving : 1;                                               // 0x0034(0x0001) BIT_FIELD (Transient, EditorOnly)
	unsigned long                                      bClampedMax : 1;                                           // 0x0034(0x0001) BIT_FIELD (EditorOnly)
	unsigned long                                      bClampedMin : 1;                                           // 0x0034(0x0001) BIT_FIELD (EditorOnly)
	int                                                OverrideDelta;                                             // 0x0038(0x0004) (EditorOnly)

};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0048
struct FSeqOpOutputLink
{
	TArray<struct FSeqOpOutputInputLink>               Links;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     LinkDesc;                                                  // 0x0010(0x0010) (NeedCtorLink)
	unsigned long                                      bHasImpulse : 1;                                           // 0x0020(0x0001) BIT_FIELD
	unsigned long                                      bDisabled : 1;                                             // 0x0020(0x0001) BIT_FIELD
	unsigned long                                      bDisabledPIE : 1;                                          // 0x0020(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_V0KO[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USequenceOp*                                 LinkedOp;                                                  // 0x0028(0x0008)
	float                                              ActivateDelay;                                             // 0x0030(0x0004)
	int                                                DrawY;                                                     // 0x0034(0x0004)
	unsigned long                                      bHidden : 1;                                               // 0x0038(0x0001) BIT_FIELD
	unsigned long                                      bMoving : 1;                                               // 0x0038(0x0001) BIT_FIELD (Transient, EditorOnly)
	unsigned long                                      bClampedMax : 1;                                           // 0x0038(0x0001) BIT_FIELD (EditorOnly)
	unsigned long                                      bClampedMin : 1;                                           // 0x0038(0x0001) BIT_FIELD (EditorOnly)
	int                                                OverrideDelta;                                             // 0x003C(0x0004) (EditorOnly)
	float                                              PIEActivationTime;                                         // 0x0040(0x0004) (Transient, EditorOnly)
	unsigned long                                      bIsActivated : 1;                                          // 0x0044(0x0001) BIT_FIELD (Transient, NoImport, NonTransactional, EditorOnly)

};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0058
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                              // 0x0000(0x0008)
	TArray<class USequenceVariable*>                   LinkedVariables;                                           // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     LinkDesc;                                                  // 0x0018(0x0010) (NeedCtorLink)
	struct FName                                       LinkVar;                                                   // 0x0028(0x0008)
	struct FName                                       PropertyName;                                              // 0x0030(0x0008)
	unsigned long                                      bWriteable : 1;                                            // 0x0038(0x0001) BIT_FIELD
	unsigned long                                      bSequenceNeverReadsOnlyWritesToThisVar : 1;                // 0x0038(0x0001) BIT_FIELD
	unsigned long                                      bModifiesLinkedObject : 1;                                 // 0x0038(0x0001) BIT_FIELD
	unsigned long                                      bHidden : 1;                                               // 0x0038(0x0001) BIT_FIELD
	int                                                MinVars;                                                   // 0x003C(0x0004)
	int                                                MaxVars;                                                   // 0x0040(0x0004)
	int                                                DrawX;                                                     // 0x0044(0x0004)
	class UProperty*                                   CachedProperty;                                            // 0x0048(0x0008) (Const, Transient)
	unsigned long                                      bAllowAnyType : 1;                                         // 0x0050(0x0001) BIT_FIELD
	unsigned long                                      bMoving : 1;                                               // 0x0050(0x0001) BIT_FIELD (Transient, EditorOnly)
	unsigned long                                      bClampedMax : 1;                                           // 0x0050(0x0001) BIT_FIELD (EditorOnly)
	unsigned long                                      bClampedMin : 1;                                           // 0x0050(0x0001) BIT_FIELD (EditorOnly)
	int                                                OverrideDelta;                                             // 0x0054(0x0004) (EditorOnly)

};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0034
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                              // 0x0000(0x0008)
	TArray<class USequenceEvent*>                      LinkedEvents;                                              // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     LinkDesc;                                                  // 0x0018(0x0010) (NeedCtorLink)
	int                                                DrawX;                                                     // 0x0028(0x0004)
	unsigned long                                      bHidden : 1;                                               // 0x002C(0x0001) BIT_FIELD
	unsigned long                                      bMoving : 1;                                               // 0x002C(0x0001) BIT_FIELD (Transient, EditorOnly)
	unsigned long                                      bClampedMax : 1;                                           // 0x002C(0x0001) BIT_FIELD (EditorOnly)
	unsigned long                                      bClampedMin : 1;                                           // 0x002C(0x0001) BIT_FIELD (EditorOnly)
	int                                                OverrideDelta;                                             // 0x0030(0x0004) (EditorOnly)

};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0018
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                               // 0x0000(0x0008)
	class USequenceOp*                                 Op;                                                        // 0x0008(0x0008)
	int                                                InputIdx;                                                  // 0x0010(0x0004)
	float                                              RemainingDelay;                                            // 0x0014(0x0004)

};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x002C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                            // 0x0000(0x0008)
	class AActor*                                      InOriginator;                                              // 0x0008(0x0008)
	class AActor*                                      InInstigator;                                              // 0x0010(0x0008)
	TArray<int>                                        ActivateIndices;                                           // 0x0018(0x0010) (NeedCtorLink)
	unsigned long                                      bPushTop : 1;                                              // 0x0028(0x0001) BIT_FIELD

};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                                 // 0x0000(0x0008) (Edit)
	unsigned char                                      bFallThru;                                                 // 0x0008(0x0001) (Edit)

};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x000C
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                               // 0x0000(0x0008) (Edit)
	unsigned long                                      bFallThru : 1;                                             // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bDefaultValue : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0014
struct FAnimSetBakeAndPruneStatus
{
	struct FString                                     AnimSetName;                                               // 0x0000(0x0010) (Edit, EditConst, NeedCtorLink)
	unsigned long                                      bReferencedButUnused : 1;                                  // 0x0010(0x0001) BIT_FIELD (Edit, EditConst)
	unsigned long                                      bSkipBakeAndPrune : 1;                                     // 0x0010(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bSkipCooking : 1;                                          // 0x0010(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
// 0x0014
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                                      // 0x0000(0x0008) (Edit)
	float                                              PitchScale;                                                // 0x0008(0x0004) (Edit)
	float                                              VolumeScale;                                               // 0x000C(0x0004) (Edit)
	float                                              Weight;                                                    // 0x0010(0x0004) (Edit)

};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x00B8 (0x0130 - 0x0078)
struct FOnlineFriend : public FOnlineUser
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0078(0x0048) (NeedCtorLink)
	unsigned char                                      SessionId[0x8];                                            // 0x00C0(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.OnlineFriend.SessionId
	TEnumAsByte<Core_EOnlinePlatform>                  PlatformOverride;                                          // 0x00C8(0x0001)
	unsigned char                                      UnknownData_28B0[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerName;                                                // 0x00D0(0x0010) (NeedCtorLink)
	struct FString                                     SecondaryPlayerName;                                       // 0x00E0(0x0010) (NeedCtorLink)
	TEnumAsByte<Core_EOnlinePlatform>                  SecondaryPlatform;                                         // 0x00F0(0x0001)
	unsigned char                                      UnknownData_J89D[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PresenceInfo;                                              // 0x00F8(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_EOnlineFriendState>             FriendState;                                               // 0x0108(0x0001)
	unsigned char                                      UnknownData_90II[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      bIsOnline : 1;                                             // 0x010C(0x0001) BIT_FIELD
	unsigned long                                      bIsPlaying : 1;                                            // 0x010C(0x0001) BIT_FIELD
	unsigned long                                      bIsPlayingThisGame : 1;                                    // 0x010C(0x0001) BIT_FIELD
	unsigned long                                      bIsJoinable : 1;                                           // 0x010C(0x0001) BIT_FIELD
	unsigned long                                      bHasVoiceSupport : 1;                                      // 0x010C(0x0001) BIT_FIELD
	unsigned long                                      bHaveInvited : 1;                                          // 0x010C(0x0001) BIT_FIELD
	unsigned long                                      bHasInvitedYou : 1;                                        // 0x010C(0x0001) BIT_FIELD
	int                                                GroupId;                                                   // 0x0110(0x0004) (Const)
	unsigned char                                      UnknownData_19NJ[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPsyTag                                     PsyTag;                                                    // 0x0118(0x0018) (NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x0080
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                                  // 0x0000(0x0048) (Const, NeedCtorLink)
	struct FString                                     NickName;                                                  // 0x0048(0x0010) (Const, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                              // 0x0058(0x0001) (Const)
	TEnumAsByte<Engine_ENATType>                       NatType;                                                   // 0x0059(0x0001) (Const)
	unsigned char                                      UnknownData_IYJO[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TitleId;                                                   // 0x005C(0x0004) (Const)
	unsigned long                                      bIsLocal : 1;                                              // 0x0060(0x0001) BIT_FIELD (Const)
	unsigned long                                      bIsInPartyVoice : 1;                                       // 0x0060(0x0001) BIT_FIELD (Const)
	unsigned long                                      bIsTalking : 1;                                            // 0x0060(0x0001) BIT_FIELD (Const)
	unsigned long                                      bIsInGameSession : 1;                                      // 0x0060(0x0001) BIT_FIELD (Const)
	unsigned long                                      bIsPlayingThisGame : 1;                                    // 0x0060(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData_QY72[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SessionId[0x8];                                            // 0x0064(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.OnlinePartyMember.SessionId
	int                                                Data1;                                                     // 0x0070(0x0004) (Const)
	int                                                Data2;                                                     // 0x0074(0x0004) (Const)
	int                                                Data3;                                                     // 0x0078(0x0004) (Const)
	int                                                Data4;                                                     // 0x007C(0x0004) (Const)

};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x0010
struct FPlayerStorageArrayProvider
{
	int                                                PlayerStorageId;                                           // 0x0000(0x0004)
	unsigned char                                      UnknownData_IKBD[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                                  // 0x0008(0x0008)

};

// ScriptStruct Engine.OnlineSubsystem.AchievementReward
// 0x0031
struct FAchievementReward
{
	struct FString                                     RewardName;                                                // 0x0000(0x0010) (Const, NeedCtorLink)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Const, NeedCtorLink)
	struct FString                                     Data;                                                      // 0x0020(0x0010) (Const, NeedCtorLink)
	TEnumAsByte<Engine_EAchievementRewardType>         RewardType;                                                // 0x0030(0x0001) (Const)

};

// ScriptStruct Engine.OnlineSubsystem.AchievementMediaAsset
// 0x0028
struct FAchievementMediaAsset
{
	struct FString                                     AssetName;                                                 // 0x0000(0x0010) (Const, NeedCtorLink)
	TEnumAsByte<Engine_EAchievementMediaAssetType>     AssetType;                                                 // 0x0010(0x0001) (Const)
	unsigned char                                      UnknownData_G9AC[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AssetURL;                                                  // 0x0018(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.OnlineSubsystem.AchievementTitleAssociation
// 0x0014
struct FAchievementTitleAssociation
{
	struct FString                                     LocalizedTitleName;                                        // 0x0000(0x0010) (Const, NeedCtorLink)
	int                                                TitleId;                                                   // 0x0010(0x0004) (Const)

};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x00F8
struct FAchievementDetails
{
	int                                                Id;                                                        // 0x0000(0x0004) (Const)
	unsigned char                                      UnknownData_DGU5[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringId;                                                  // 0x0008(0x0010) (Const, NeedCtorLink)
	struct FString                                     AchievementName;                                           // 0x0018(0x0010) (Const, NeedCtorLink)
	struct FString                                     Description;                                               // 0x0028(0x0010) (Const, NeedCtorLink)
	struct FString                                     HowTo;                                                     // 0x0038(0x0010) (Const, NeedCtorLink)
	class USurface*                                    Image;                                                     // 0x0048(0x0008)
	unsigned char                                      MonthEarned;                                               // 0x0050(0x0001) (Const)
	unsigned char                                      DayEarned;                                                 // 0x0051(0x0001) (Const)
	unsigned char                                      YearEarned;                                                // 0x0052(0x0001) (Const)
	unsigned char                                      DayOfWeekEarned;                                           // 0x0053(0x0001) (Const)
	int                                                GamerPoints;                                               // 0x0054(0x0004) (Const)
	unsigned long                                      bIsSecret : 1;                                             // 0x0058(0x0001) BIT_FIELD (Const)
	unsigned long                                      bWasAchievedOnline : 1;                                    // 0x0058(0x0001) BIT_FIELD (Const)
	unsigned long                                      bWasAchievedOffline : 1;                                   // 0x0058(0x0001) BIT_FIELD (Const)
	TEnumAsByte<Engine_EAchievementUnlockType>         UnlockType;                                                // 0x005C(0x0001) (Const)
	unsigned char                                      UnknownData_35OQ[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ChallengeWindowBegin[0x8];                                 // 0x005D(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.AchievementDetails.ChallengeWindowBegin
	unsigned char                                      ChallengeWindowEnd[0x8];                                   // 0x0068(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.AchievementDetails.ChallengeWindowEnd
	struct FString                                     DeepLink;                                                  // 0x0070(0x0010) (Const, NeedCtorLink)
	unsigned char                                      EstimatedUnlockTime[0x8];                                  // 0x0080(0x0008) UNKNOWN PROPERTY: QWordProperty Engine.OnlineSubsystem.AchievementDetails.EstimatedUnlockTime
	unsigned long                                      bIsRevoked : 1;                                            // 0x0088(0x0001) BIT_FIELD (Const)
	TEnumAsByte<Engine_EAchievementParticipationType>  ParticipationType;                                         // 0x008C(0x0001) (Const)
	unsigned char                                      UnknownData_75QU[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PlatformsAvailableOn;                                      // 0x0090(0x0010) (Const, NeedCtorLink)
	TEnumAsByte<Engine_EAchievementProgressState>      ProgressState;                                             // 0x00A0(0x0001) (Const)
	unsigned char                                      UnknownData_C3AH[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAchievementReward>                  Rewards;                                                   // 0x00A8(0x0010) (Const, NeedCtorLink)
	TArray<struct FAchievementMediaAsset>              MediaAssets;                                               // 0x00B8(0x0010) (Const, NeedCtorLink)
	struct FString                                     ProductID;                                                 // 0x00C8(0x0010) (Const, NeedCtorLink)
	struct FString                                     ServiceConfigurationID;                                    // 0x00D8(0x0010) (Const, NeedCtorLink)
	TArray<struct FAchievementTitleAssociation>        TitleAssociations;                                         // 0x00E8(0x0010) (Const, NeedCtorLink)

};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                              // 0x0000(0x0040)
	struct FMatrix                                     LightToWorld;                                              // 0x0040(0x0040)
	struct FBox                                        LightSpaceImportanceBounds;                                // 0x0080(0x001C)
	int                                                ShadowMapSizeX;                                            // 0x009C(0x0004)
	int                                                ShadowMapSizeY;                                            // 0x00A0(0x0004)

};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0034
struct FAttachment
{
	class UActorComponent*                             Component;                                                 // 0x0000(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008) (Edit)
	struct FVector                                     RelativeLocation;                                          // 0x0010(0x000C) (Edit)
	struct FRotator                                    RelativeRotation;                                          // 0x001C(0x000C) (Edit)
	struct FVector                                     RelativeScale;                                             // 0x0028(0x000C) (Edit)

};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int                                                Index;                                                     // 0x0000(0x0004)
	struct FVector                                     Bary;                                                      // 0x0004(0x000C)

};

// ScriptStruct Engine.PBRuleNodeCorner.RBCornerAngleInfo
// 0x0008
struct FRBCornerAngleInfo
{
	float                                              Angle;                                                     // 0x0000(0x0004) (Edit)
	float                                              CornerSize;                                                // 0x0004(0x0004) (Edit)

};

// ScriptStruct Engine.PBRuleNodeEdgeAngle.RBEdgeAngleInfo
// 0x0004
struct FRBEdgeAngleInfo
{
	float                                              Angle;                                                     // 0x0000(0x0004) (Edit)

};

// ScriptStruct Engine.ProcBuildingRuleset.PBVariationInfo
// 0x000C
struct FPBVariationInfo
{
	struct FName                                       VariationName;                                             // 0x0000(0x0008) (Edit)
	unsigned long                                      bMeshOnTopOfFacePoly : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit)

};

// ScriptStruct Engine.PlayerReplicationInfo.PRIRemoteUserData
// 0x0010
struct FPRIRemoteUserData
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)

};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int                                                NumberOfMatchesPlayed;                                     // 0x0000(0x0004)
	int                                                NumMapListCyclesDone;                                      // 0x0004(0x0004)

};

// ScriptStruct Engine.PlayerReplicationInfo.NetPacketStats
// 0x001C
struct FNetPacketStats
{
	int                                                OutPackets;                                                // 0x0000(0x0004)
	int                                                InPackets;                                                 // 0x0004(0x0004)
	int                                                OutPacketsLost;                                            // 0x0008(0x0004)
	int                                                InPacketsLost;                                             // 0x000C(0x0004)
	int                                                OutOfOrderPackets;                                         // 0x0010(0x0004)
	int                                                OutBytes;                                                  // 0x0014(0x0004)
	int                                                InBytes;                                                   // 0x0018(0x0004)

};

// ScriptStruct Engine.PlayerReplicationInfo.ClientConnectionStats
// 0x0058
struct FClientConnectionStats
{
	int                                                ConnectionCount;                                           // 0x0000(0x0004)
	int                                                PingTotal;                                                 // 0x0004(0x0004)
	int                                                PingMin;                                                   // 0x0008(0x0004)
	int                                                PingMax;                                                   // 0x000C(0x0004)
	float                                              CurrentAckTime;                                            // 0x0010(0x0004)
	float                                              TotalAckTime;                                              // 0x0014(0x0004)
	float                                              CurrentReceiveTime;                                        // 0x0018(0x0004)
	float                                              TotalReceiveTime;                                          // 0x001C(0x0004)
	int                                                TotalPacketsLost;                                          // 0x0020(0x0004)
	int                                                TotalPacketsInOut;                                         // 0x0024(0x0004)
	float                                              InPacketLossPerSecMin;                                     // 0x0028(0x0004)
	float                                              InPacketLossPerSecMax;                                     // 0x002C(0x0004)
	float                                              OutPacketLossPerSecMin;                                    // 0x0030(0x0004)
	float                                              OutPacketLossPerSecMax;                                    // 0x0034(0x0004)
	int                                                MaxInBPS;                                                  // 0x0038(0x0004)
	int                                                TotalInBPS;                                                // 0x003C(0x0004)
	int                                                TotalInBytes;                                              // 0x0040(0x0004)
	int                                                MaxOutBPS;                                                 // 0x0044(0x0004)
	int                                                TotalOutBPS;                                               // 0x0048(0x0004)
	int                                                TotalOutBytes;                                             // 0x004C(0x0004)
	float                                              CurrentLatency;                                            // 0x0050(0x0004)
	float                                              CurrentJitter;                                             // 0x0054(0x0004)

};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x00A0
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                               // 0x0000(0x0008)
	struct FName                                       SourceShakeName;                                           // 0x0008(0x0008)
	float                                              OscillatorTimeRemaining;                                   // 0x0010(0x0004)
	unsigned long                                      bBlendingIn : 1;                                           // 0x0014(0x0001) BIT_FIELD
	float                                              CurrentBlendInTime;                                        // 0x0018(0x0004)
	unsigned long                                      bBlendingOut : 1;                                          // 0x001C(0x0001) BIT_FIELD
	float                                              CurrentBlendOutTime;                                       // 0x0020(0x0004)
	struct FVector                                     LocSinOffset;                                              // 0x0024(0x000C)
	struct FVector                                     RotSinOffset;                                              // 0x0030(0x000C)
	float                                              FOVSinOffset;                                              // 0x003C(0x0004)
	float                                              Scale;                                                     // 0x0040(0x0004)
	unsigned char                                      UnknownData_9ZFZ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCameraAnimInst*                             AnimInst;                                                  // 0x0048(0x0008)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x0050(0x0001)
	unsigned char                                      UnknownData_K040[0xF];                                     // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMatrix                                     UserPlaySpaceMatrix;                                       // 0x0060(0x0040)

};

// ScriptStruct Engine.Actor.NavReference
// 0x0018
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                                       // 0x0000(0x0008) (Edit)
	struct FGuid                                       Guid;                                                      // 0x0008(0x0010) (Edit, Const, EditConst)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x0050
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                                         // 0x0000(0x0050) (Const, Native, Transient)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{

};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x001C
struct FActorToLookAt
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)
	float                                              Rating;                                                    // 0x0008(0x0004)
	float                                              EnteredTime;                                               // 0x000C(0x0004)
	float                                              LastKnownDistance;                                         // 0x0010(0x0004)
	float                                              StartTimeBeingLookedAt;                                    // 0x0014(0x0004)
	unsigned long                                      CurrentlyBeingLookedAt : 1;                                // 0x0018(0x0001) BIT_FIELD

};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                     // 0x0000(0x0008)
	class UInterpTrack*                                Track;                                                     // 0x0008(0x0008)
	int                                                KeyIndex;                                                  // 0x0010(0x0004)
	float                                              UnsnappedPosition;                                         // 0x0014(0x0004)

};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                         // 0x0000(0x0020) (ExportObject, Component, EditInline)

};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// 0x0058
struct FGizmoSelectData
{
	float                                              Ratio;                                                     // 0x0000(0x0004) (EditorOnly)
	float                                              HeightData;                                                // 0x0004(0x0004) (EditorOnly)
	unsigned char                                      WeightDataMap[0x50];                                       // 0x0008(0x0050) UNKNOWN PROPERTY: MapProperty Engine.LandscapeGizmoActiveActor.GizmoSelectData.WeightDataMap

};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// 0x0010
struct FMMStats_Timer
{
	unsigned long                                      bInProgress : 1;                                           // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownData_OPCM[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDouble                                     MSecs;                                                     // 0x0008(0x0008)

};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x0028
struct FColumnMetaData
{
	int                                                Id;                                                        // 0x0000(0x0004) (Const)
	unsigned char                                      UnknownData_H1KE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Const, NeedCtorLink)
	struct FString                                     ColumnName;                                                // 0x0018(0x0010) (Const, Localized, NeedCtorLink)

};

// ScriptStruct Engine.PitchTekSettings.PitchTekClearSettings
// 0x0010
struct FPitchTekClearSettings
{
	unsigned long                                      bClearColorTargetEveryFrame : 1;                           // 0x0000(0x0001) BIT_FIELD (Edit)
	struct FColor                                      ColorTargetClearColor;                                     // 0x0004(0x0004) (Edit)
	unsigned long                                      bClearDataTargetEveryFrame : 1;                            // 0x0008(0x0001) BIT_FIELD (Edit)
	struct FColor                                      DataTargetClearColor;                                      // 0x000C(0x0004) (Edit)

};

// ScriptStruct Engine.PitchTekSettings.PitchTekTextureDecalSettings
// 0x0020
struct FPitchTekTextureDecalSettings
{
	unsigned long                                      bDrawColorDecal : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit)
	float                                              ColorTextureScale;                                         // 0x0004(0x0004) (Edit)
	class UTexture2D*                                  ColorTexture;                                              // 0x0008(0x0008) (Edit)
	unsigned long                                      bDrawDataDecal : 1;                                        // 0x0010(0x0001) BIT_FIELD (Edit)
	float                                              DataTextureScale;                                          // 0x0014(0x0004) (Edit)
	class UTexture2D*                                  DataTexture;                                               // 0x0018(0x0008) (Edit)

};

// ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
// 0x0050
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     DisplayDescription;                                        // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     DisplayPrice;                                              // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     CurrencyType;                                              // 0x0040(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0010
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                                     // 0x0000(0x0008)
	struct FPointer                                    CriticalSection;                                           // 0x0008(0x0008)

};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x0178
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                              // 0x0000(0x0168) (NeedCtorLink)
	class APostProcessVolume*                          LastVolumeUsed;                                            // 0x0168(0x0008)
	float                                              BlendStartTime;                                            // 0x0170(0x0004)
	float                                              LastBlendTime;                                             // 0x0174(0x0004)

};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x0010
struct FSplitscreenData
{
	TArray<struct FPerPlayerSplitscreenData>           PlayerData;                                                // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x0008
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                                     // 0x0000(0x0008) (Const, Native)

};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x0010
struct FPathStore
{
	TArray<struct FEdgePointer>                        EdgeList;                                                  // 0x0000(0x0010) (Native)

};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x001C
struct FAnimNotifyEvent
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData_3US5[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimNotify*                                 Notify;                                                    // 0x0008(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	struct FName                                       Comment;                                                   // 0x0010(0x0008) (Edit, EditorOnly)
	float                                              Duration;                                                  // 0x0018(0x0004) (Edit)

};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit)
	float                                              TargetStrength;                                            // 0x0004(0x0004) (Edit)

};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0018
struct FSkelControlModifier
{
	struct FName                                       SkelControlName;                                           // 0x0000(0x0008) (Edit)
	TArray<struct FTimeModifier>                       Modifiers;                                                 // 0x0008(0x0010) (Edit, NeedCtorLink, EditInline)

};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                   // 0x0000(0x0010) (NeedCtorLink)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                   // 0x0000(0x0010) (NeedCtorLink)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                 // 0x0000(0x0008)
	TArray<float>                                      CurveWeights;                                              // 0x0008(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x0024
struct FRootMotionCurve
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008) (Edit)
	struct FInterpCurveVector                          Curve;                                                     // 0x0008(0x0018) (Edit, NeedCtorLink)
	float                                              MaxCurveTime;                                              // 0x0020(0x0004) (Edit)

};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                    // 0x0000(0x0010) (NeedCtorLink)

};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x0005
struct FHeadTrackingKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	TEnumAsByte<Engine_EHeadTrackingAction>            Action;                                                    // 0x0004(0x0001) (Edit)

};

// ScriptStruct Engine.InterpTrackNotify.NotifyTrackKey
// 0x0010
struct FNotifyTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	unsigned char                                      UnknownData_BLYR[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimNotify*                                 Notify;                                                    // 0x0008(0x0008)

};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	float                                              Duration;                                                  // 0x0004(0x0004) (Edit)
	int                                                ClipIDNumber;                                              // 0x0008(0x0004) (Edit)

};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	TEnumAsByte<Engine_ETrackToggleAction>             ToggleAction;                                              // 0x0004(0x0001) (Edit)

};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	float                                              Volume;                                                    // 0x0004(0x0004)
	float                                              Pitch;                                                     // 0x0008(0x0004)
	unsigned char                                      UnknownData_DNLR[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   Sound;                                                     // 0x0010(0x0008) (Edit)

};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	TEnumAsByte<Engine_EVisibilityTrackAction>         Action;                                                    // 0x0004(0x0001) (Edit)
	TEnumAsByte<Engine_EVisibilityTrackCondition>      ActiveCondition;                                           // 0x0005(0x0001)

};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// 0x0090
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008) (Edit)
	TEnumAsByte<Engine_ELandscapeLayerBlendType>       BlendType;                                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData_9IJW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            LayerInput;                                                // 0x0010(0x0038) (NeedCtorLink, EditHide)
	struct FExpressionInput                            HeightInput;                                               // 0x0048(0x0038) (NeedCtorLink, EditHide)
	float                                              PreviewWeight;                                             // 0x0080(0x0004) (Edit)
	unsigned char                                      UnknownData_53YK[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    InstanceOverride;                                          // 0x0088(0x0008) (Const, Native, Transient)

};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                           // 0x0000(0x0008) (Transient)
	struct FGuid                                       ExpressionInputId;                                         // 0x0008(0x0010)
	struct FExpressionInput                            Input;                                                     // 0x0018(0x0038) (NeedCtorLink)

};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x000C (0x003C - 0x0030)
struct FFontParameterValueOverTime : public FParameterValueOverTime
{
	class UFont*                                       FontValue;                                                 // 0x0030(0x0008) (Edit)
	int                                                FontPage;                                                  // 0x0038(0x0004) (Edit)

};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0008 (0x0038 - 0x0030)
struct FTextureParameterValueOverTime : public FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                            // 0x0030(0x0008) (Edit)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
