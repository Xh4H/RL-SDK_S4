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
// Classes
//---------------------------------------------------------------------------

// Class IpDrv.AdHocDelegates
// 0x00D8 (FullSize[0x0138] - InheritedSize[0x0060])
class UAdHocDelegates : public UObject
{
public:
	struct FScriptDelegate                             __EventAdHocOnNetworkChanged__Delegate;                    // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WBTR[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAdHocError__Delegate;                               // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_I6B0[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAdHocInitialized__Delegate;                         // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MT2H[0xC];                                     // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAccessPointCreated__Delegate;                       // 0x00A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9C4C[0xC];                                     // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBecomeStation__Delegate;                            // 0x00C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_131I[0xC];                                     // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStationConnected__Delegate;                         // 0x00D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9978[0xC];                                     // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStationDisconnected__Delegate;                      // 0x00F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HRZ3[0xC];                                     // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAdHocFinalized__Delegate;                           // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_O1EE[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAdHocDestroyed__Delegate;                           // 0x0120(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_UXC2[0xC];                                     // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.AdHocDelegates");
		return ptr;
	}



	void EventAdHocDestroyed();
	void EventAdHocFinalized();
	void EventStationDisconnected();
	void EventStationConnected();
	void EventBecomeStation();
	void EventAccessPointCreated();
	void EventAdHocInitialized();
	void EventAdHocError(class UError* Error);
	void EventAdHocOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis);
};

// Class IpDrv.AdHocErrors
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UAdHocErrors : public UErrorList
{
public:
	class UErrorType*                                  AdHocError;                                                // 0x0080(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.AdHocErrors");
		return ptr;
	}



};

// Class IpDrv.AvatarDownload
// 0x0080 (FullSize[0x00E0] - InheritedSize[0x0060])
class UAvatarDownload : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0048) (NeedCtorLink)
	struct FString                                     URL;                                                       // 0x00A8(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_EAvatarSize>                    AvatarSize;                                                // 0x00B8(0x0001)
	unsigned char                                      UnknownData_1Y4X[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    Texture;                                                   // 0x00C0(0x0008)
	struct FScriptDelegate                             Callbacks;                                                 // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EUK1[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.AvatarDownload");
		return ptr;
	}



};

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0060 (FullSize[0x0370] - InheritedSize[0x0310])
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                               // 0x0310(0x0008) (Const, Native, Transient)
	int                                                MaxLocalTalkers;                                           // 0x0318(0x0004) (Config)
	int                                                MaxRemoteTalkers;                                          // 0x031C(0x0004) (Config)
	unsigned long                                      bIsUsingSpeechRecognition : 1;                             // 0x0320(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownData_GOIG[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                         // 0x0328(0x0008)
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                                         // 0x0330(0x0008)
	class UOnlinePurchaseInterfaceImpl*                PurchaseInterfaceImpl;                                     // 0x0338(0x0008)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;                      // 0x0340(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V2OK[0xC];                                     // 0x0340(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPlayerCountryRetrieved__Delegate;                      // 0x0358(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FV6T[0xC];                                     // 0x0358(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		return ptr;
	}



	void GetRegisteredPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers);
	bool IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
	void OnPlayerCountryRetrieved(const struct FUniqueNetId& PlayerID, const struct FString& Country);
	void OnSanitizeStringComplete(const struct FWordFilterResult& Result);
};

// Class IpDrv.OnlineImageDownloaderWeb
// 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
class UOnlineImageDownloaderWeb : public UObject
{
public:
	int                                                MaxSimultaneousDownloads;                                  // 0x0060(0x0004) (Config)
	unsigned char                                      UnknownData_NY2M[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMap_Mirror                                 Downloads;                                                 // 0x0068(0x0050) (Native)
	TArray<struct FString>                             URLQueue;                                                  // 0x00B8(0x0010) (Native)
	class UImageDecoder*                               Decoder;                                                   // 0x00C8(0x0008)
	int                                                PendingDownloadCount;                                      // 0x00D0(0x0004) (Native, PrivateWrite)
	int                                                ActiveDownloadCount;                                       // 0x00D4(0x0004) (Native, PrivateWrite)
	int                                                SucceededDownloadCount;                                    // 0x00D8(0x0004) (Native, PrivateWrite)
	int                                                FailedDownloadCount;                                       // 0x00DC(0x0004) (Native, PrivateWrite)
	struct FScriptDelegate                             __OnOnlineImageFinished__Delegate;                         // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_H4H0[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventImageDecoded__Delegate;                             // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GB9N[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineImageDownloaderWeb");
		return ptr;
	}



	TEnumAsByte<Core_EImageType> GetImageType(const struct FString& ContentType);
	void QueueURLForDownload(const struct FString& NewURL, const struct FScriptDelegate& InternalCallbackOnComplete, const struct FScriptDelegate& ExternalCallback, bool bSupportSRGB);
	void DebugDraw(class UCanvas* Canvas);
	void OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void DownloadNextImage();
	void RequestOnlineImages(TArray<struct FString>* URLs, const struct FScriptDelegate& FinishedCallback, bool bSupportSRGB);
	class UTexture* GetOnlineImageTexture(const struct FString& URL);
	void ClearQueue();
	struct FString Dequeue();
	void Enqueue(const struct FString& URL);
	void ClearActiveDownloads();
	void ClearCompletedDownloads();
	void HandleImageDecoded(const struct FString& RequestedURL, struct FImageLayout* DecodedImage);
	void RequeueFailedURL(const struct FString& URL);
	void DownloadNextQueuedURL();
	void UpdateActiveDownloadFromResponse(const struct FString& URL, class UHttpResponseInterface* Response, const struct FScriptDelegate& OnDecodedCallback);
	void MarkActiveDownloadFailed(const struct FString& URL);
	void QueueURLForDownloadInternal(const struct FString& NewURL, class UHttpRequestInterface* Request, class UTexture2DDynamic* TextureHolder, const struct FScriptDelegate& OnDecodedCallback);
	void AddCallbackToDownload(const struct FString& URL, const struct FScriptDelegate& NewCallback);
	struct FOnlineImageDownload GetDownload(const struct FString& URL);
	bool IsURLQueued(const struct FString& URL);
	bool IsURLActive(const struct FString& URL);
	bool DidURLFail(const struct FString& URL);
	bool DidURLSucceed(const struct FString& URL);
	bool IsURLTracked(const struct FString& URL);
	void AllValues(struct FOnlineImageDownload* OutImage, int StartIndex, int MaxValues);
	void ClearPendingDownloads();
	void ClearAllDownloads();
	void EventImageDecoded(const struct FString& RequestURL, struct FImageLayout* Image);
	void OnOnlineImageFinished(const struct FOnlineImageDownload& ImageInfo);
	void Construct();
};

// Class IpDrv.AvatarDownloadMap
// 0x00F0 (FullSize[0x0160] - InheritedSize[0x0070])
class UAvatarDownloadMap : public UComponent
{
public:
	struct FMap_Mirror                                 AvatarMap;                                                 // 0x0070(0x0050) (Native)
	struct FMap_Mirror                                 ImageMap;                                                  // 0x00C0(0x0050) (Native)
	struct FMap_Mirror                                 AvatarsPendingImages;                                      // 0x0110(0x0050) (Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.AvatarDownloadMap");
		return ptr;
	}



	bool ContainsImage(const struct FString& Key);
	bool ContainsAvatar(struct FAvatarKey* Key);
	void OnAvatarReceivedImage(class UAvatarDownload* Avatar);
	void RemoveImage(const struct FString& Key);
	void RemoveAvatar(struct FAvatarKey* Key);
	void RemoveAllNetIDs(struct FUniqueNetId* PlayerID);
	void ClearAvatarsPendingImages();
	void ClearImages();
	void ClearAvatars();
	void Clear();
	bool TryGetImage(const struct FString& Key, class UTexture** OutValue);
	bool TryGetAvatar(struct FAvatarKey* Key, class UAvatarDownload** OutValue);
	void GetAvatarsPendingImage(const struct FString& Key, TArray<class UAvatarDownload*>* OutAvatars);
	class UTexture* GetImage(const struct FString& Key);
	class UAvatarDownload* GetAvatar(struct FAvatarKey* Key);
	void AddAvatarPendingImage(class UAvatarDownload* Avatar);
	void SetImage(const struct FString& URL, class UTexture* Value);
	void SetAvatar(class UAvatarDownload* Value);
	int CountAvatars();
	void AllValues(class UAvatarDownload** OutAvatar, int StartIndex, int MaxValues);
};

// Class IpDrv.AvatarDownloadComponent
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UAvatarDownloadComponent : public UComponent
{
public:
	class UAvatarDownloadMap*                          AvatarDownloadCache;                                       // 0x0070(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineImageDownloaderWeb*                   ImageDownloader;                                           // 0x0078(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.AvatarDownloadComponent");
		return ptr;
	}



	void TriggerAvatarCallbacks(class UAvatarDownload* Avatar);
	void HandleOnlineImageDownloaded(const struct FOnlineImageDownload& ImageInfo);
	class UAvatarDownload* GetAvatar(const struct FUniqueNetId& PlayerID, TEnumAsByte<Engine_EAvatarSize> Size);
	void ClearPendingDownloads();
	void CleanupAvatars();
	void DownloadAvatar(const struct FUniqueNetId& PlayerID, TEnumAsByte<Engine_EAvatarSize> Size, const struct FString& URL);
	void StoreNewAvatars(TArray<struct FUniqueNetId>* NewPlayerIDs, TEnumAsByte<Engine_EAvatarSize> Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
	void ProcessOldRequests(TArray<struct FUniqueNetId>* InPlayerIDs, TEnumAsByte<Engine_EAvatarSize> SizeType, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>* NewRequestIDs);
	bool TryAddAvatarTextureCallback(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<Engine_EAvatarSize> Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
};

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                                // 0x0060(0x0004)
	struct FName                                       BeaconName;                                                // 0x0064(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		return ptr;
	}



};

// Class IpDrv.HTTPDownload
// 0x0140 (FullSize[0x0BF0] - InheritedSize[0x0AB0])
class UHTTPDownload : public UDownload
{
public:
	unsigned char                                      UnknownData_AD4U[0x18];                                    // 0x0AB0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConnectionTimeout;                                         // 0x0AC8(0x0004) (Config)
	unsigned long                                      MaxRedirection : 1;                                        // 0x0AC4(0x0001) BIT_FIELD (Config)
	int                                                ProxyServerPort;                                           // 0x0AC0(0x0004) (Config)
	struct FString                                     ProxyServerHost;                                           // 0x0AB0(0x0010) (Config, NeedCtorLink)
	unsigned char                                      UnknownData_ETNF[0x130];                                   // 0x0AC0(0x0130) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HTTPDownload");
		return ptr;
	}



};

// Class IpDrv.HttpRequestCurl
// 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
class UHttpRequestCurl : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                                   // 0x0078(0x0008) (Const, Native, Transient)
	struct FString                                     RequestVerb;                                               // 0x0080(0x0010) (Const, Native)
	struct FString                                     RequestURL;                                                // 0x0090(0x0010) (Const, Native, Transient)
	TArray<unsigned char>                              Payload;                                                   // 0x00A0(0x0010) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HttpRequestCurl");
		return ptr;
	}



	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	class UHttpRequestInterface* SetContentAsString(const struct FString& ContentString);
	class UHttpRequestInterface* SetContent(TArray<unsigned char>* ContentPayload);
	class UHttpRequestInterface* SetURL(const struct FString& URL);
	class UHttpRequestInterface* SetVerb(const struct FString& Verb);
	struct FString GetVerb();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};

// Class IpDrv.HttpResponseCurl
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UHttpResponseCurl : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                                  // 0x0060(0x0008) (Const, Native, Transient)
	TArray<unsigned char>                              Payload;                                                   // 0x0068(0x0010) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HttpResponseCurl");
		return ptr;
	}



	int GetResponseCode();
	struct FString GetContentAsString();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};

// Class IpDrv.ImageDecoder
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UImageDecoder : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FDecodeImageRequest>                 ActiveDecodeRequests;                                      // 0x0068(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __ImageDecodedDelegate__Delegate;                          // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4S30[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ImageDecoder");
		return ptr;
	}



	void RequestDecodeImage(const struct FString& RequestURL, TEnumAsByte<Core_EImageType> ImageType, const struct FScriptDelegate& FinishedCallback, TArray<unsigned char>* ImageData);
	void ImageDecodedDelegate(const struct FString& RequestURL, const struct FImageLayout& Image);
};

// Class IpDrv.McpServiceBase
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UMcpServiceBase : public UObject
{
public:
	struct FString                                     McpConfigClassName;                                        // 0x0060(0x0010) (Config, NeedCtorLink)
	class UMcpServiceConfig*                           McpConfig;                                                 // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServiceBase");
		return ptr;
	}



	struct FString GetUserAuthURL(const struct FString& McpId);
	struct FString GetAppAccessURL();
	struct FString GetBaseURL();
	void Init();
};

// Class IpDrv.MCPBase
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0078(0x0008) (Const, Native, NoExport)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MCPBase");
		return ptr;
	}



};

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (FullSize[0x00B4] - InheritedSize[0x0080])
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                                        // 0x0080(0x0010) (Const, Config, NeedCtorLink)
	TArray<struct FPointer>                            MCPEventPostObjects;                                       // 0x0090(0x0010) (Const, Native)
	TArray<TEnumAsByte<IpDrv_EEventUploadType>>        DisabledUploadTypes;                                       // 0x00A0(0x0010) (Config, NeedCtorLink)
	unsigned long                                      bBinaryStats : 1;                                          // 0x00B0(0x0001) BIT_FIELD (Const, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		return ptr;
	}



	bool UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int PlaylistId, int NumPlayers);
	bool UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, TArray<unsigned char>* Payload);
	bool UploadPlayerData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};

// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0098 (FullSize[0x0118] - InheritedSize[0x0080])
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                            // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RequestTitleFileListCompleteDelegates;                     // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     BaseUrl;                                                   // 0x00A0(0x0010) (Config, NeedCtorLink)
	struct FString                                     RequestFileListURL;                                        // 0x00B0(0x0010) (Config, NeedCtorLink)
	struct FString                                     RequestFileURL;                                            // 0x00C0(0x0010) (Config, NeedCtorLink)
	float                                              Timeout;                                                   // 0x00D0(0x0004) (Config)
	unsigned char                                      UnknownData_J82F[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFileNameToURLMapping>               FilesToUrls;                                               // 0x00D8(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                       // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HIFO[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;                // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_7H2Y[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadBase");
		return ptr;
	}



	struct FString GetUrlForFile(const struct FString& Filename);
	void ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void OnRequestTitleFileListComplete(bool bWasSuccessful, TArray<struct FString> ResultStr);
	bool RequestTitleFileList();
	bool ClearDownloadedFile(const struct FString& Filename);
	bool ClearDownloadedFiles();
	TEnumAsByte<Engine_EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<Engine_EOnlineFileType> FileType);
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
};

// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileWeb>                       TitleFiles;                                                // 0x0118(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadWeb");
		return ptr;
	}



	struct FString GetUrlForFile(const struct FString& Filename);
	void OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool RequestTitleFileList();
	bool ClearDownloadedFile(const struct FString& Filename);
	bool ClearDownloadedFiles();
	TEnumAsByte<Engine_EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void TriggerDelegates(bool bSuccess, const struct FString& FileRead);
	void OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<Engine_EOnlineFileType> FileType);
	bool UncompressTitleFileContents(TEnumAsByte<IpDrv_EMcpFileCompressionType> FileCompressionType, TArray<unsigned char>* CompressedFileContents, TArray<unsigned char>* UncompressedFileContents);
};

// Class IpDrv.InternetLink
// 0x002C (FullSize[0x0294] - InheritedSize[0x0268])
class AInternetLink : public AInfo
{
public:
	TEnumAsByte<IpDrv_ELinkMode>                       LinkMode;                                                  // 0x0268(0x0001)
	TEnumAsByte<IpDrv_ELineMode>                       InLineMode;                                                // 0x0269(0x0001)
	TEnumAsByte<IpDrv_ELineMode>                       OutLineMode;                                               // 0x026A(0x0001)
	TEnumAsByte<IpDrv_EReceiveMode>                    ReceiveMode;                                               // 0x026B(0x0001)
	unsigned char                                      UnknownData_0JIC[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    Socket;                                                    // 0x0270(0x0008) (Const)
	int                                                Port;                                                      // 0x0278(0x0004) (Const)
	unsigned char                                      UnknownData_D2I4[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    RemoteSocket;                                              // 0x0280(0x0008) (Const)
	struct FPointer                                    PrivateResolveInfo;                                        // 0x0288(0x0008) (Const, Native)
	int                                                DataPending;                                               // 0x0290(0x0004) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.InternetLink");
		return ptr;
	}



	void ResolveFailed();
	void Resolved(const struct FIpAddr& Addr);
	void GetLocalIP(struct FIpAddr* Arg);
	bool StringToIpAddr(const struct FString& Str, struct FIpAddr* Addr);
	struct FString IpAddrToString(const struct FIpAddr& Arg);
	int GetLastError();
	void Resolve(const struct FString& Domain);
	bool ParseURL(const struct FString& URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName);
	bool IsDataPending();
};

// Class IpDrv.TcpLink
// 0x0044 (FullSize[0x02D8] - InheritedSize[0x0294])
class ATcpLink : public AInternetLink
{
public:
	unsigned char                                      UnknownData_KJF6[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<IpDrv_ELinkState>                      LinkState;                                                 // 0x0298(0x0001)
	unsigned char                                      UnknownData_7G9N[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIpAddr                                     RemoteAddr;                                                // 0x029C(0x0014)
	class UClass*                                      AcceptClass;                                               // 0x02B0(0x0008)
	TArray<unsigned char>                              SendFIFO;                                                  // 0x02B8(0x0010) (Const, NeedCtorLink)
	struct FString                                     RecvBuf;                                                   // 0x02C8(0x0010) (Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpLink");
		return ptr;
	}



	void ReceivedBinary(int Count, unsigned char* B);
	void ReceivedLine(const struct FString& Line);
	void ReceivedText(const struct FString& Text);
	void Closed();
	void Opened();
	void Accepted();
	int ReadBinary(int Count, unsigned char* B);
	int ReadText(struct FString* Str);
	int SendBinary(int Count, unsigned char* B);
	int SendText(const struct FString& Str);
	bool IsConnected();
	bool Close();
	bool Open(const struct FIpAddr& Addr);
	bool Listen();
	int BindPort(int PortNum, bool bUseNextAvailable);
};

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                                 // 0x0080(0x0010) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                                         // 0x0090(0x0010) (NeedCtorLink)
	unsigned long                                      bNeedsTicking : 1;                                         // 0x00A0(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_XKN9[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                           // 0x00A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_53PK[0xC];                                     // 0x00A4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		return ptr;
	}



	struct FString GetNews(unsigned char LocalUserNum, TEnumAsByte<Engine_EOnlineNewsType> NewsType);
	void ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate);
	void OnReadNewsCompleted(bool bWasSuccessful, TEnumAsByte<Engine_EOnlineNewsType> NewsType);
	bool ReadNews(unsigned char LocalUserNum, TEnumAsByte<Engine_EOnlineNewsType> NewsType);
};

// Class IpDrv.McpMessageBase
// 0x0098 (FullSize[0x0110] - InheritedSize[0x0078])
class UMcpMessageBase : public UMcpServiceBase
{
public:
	struct FString                                     McpMessageManagerClassName;                                // 0x0078(0x0010) (Config, NeedCtorLink)
	TEnumAsByte<IpDrv_EMcpMessageCompressionType>      CompressionType;                                           // 0x0088(0x0001) (Config)
	unsigned char                                      UnknownData_LHIP[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMcpMessageContents>                 MessageContentsList;                                       // 0x0090(0x0010) (NeedCtorLink)
	TArray<struct FMcpMessageList>                     MessageLists;                                              // 0x00A0(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;                       // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OXNJ[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;                       // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ND4N[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;                       // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VPRJ[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;                // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FZFS[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpMessageBase");
		return ptr;
	}



	bool CacheMessageContents(TArray<unsigned char>* MessageContents, const struct FString& MessageId);
	void CacheMessage(const struct FMcpMessage& Message);
	bool GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	void OnQueryMessageContentsComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error);
	void QueryMessageContents(const struct FString& MessageId);
	void GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList);
	void OnQueryMessagesComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error);
	void QueryMessages(const struct FString& ToUniqueUserId);
	void OnDeleteMessageComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error);
	void DeleteMessage(const struct FString& MessageId);
	void OnCreateMessageComplete(const struct FMcpMessage& Message, bool bWasSuccessful, const struct FString& Error);
	void CreateMessage(TArray<struct FString>* ToUniqueUserIds, const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<unsigned char>* MessageContents);
	class UMcpMessageBase* CreateInstance();
};

// Class IpDrv.McpMessageManager
// 0x0078 (FullSize[0x0188] - InheritedSize[0x0110])
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0110(0x0008) (Const, Native, NoExport)
	struct FString                                     CreateMessageUrl;                                          // 0x0118(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteMessageUrl;                                          // 0x0128(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryMessagesUrl;                                          // 0x0138(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryMessageContentsUrl;                                   // 0x0148(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteAllMessagesUrl;                                      // 0x0158(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpCompressMessageRequest>          CompressMessageRequests;                                   // 0x0168(0x0010) (Native)
	TArray<struct FMcpUncompressMessageRequest>        UncompressMessageRequests;                                 // 0x0178(0x0010) (Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpMessageManager");
		return ptr;
	}



	bool CacheMessageContents(TArray<unsigned char>* MessageContents, const struct FString& MessageId);
	bool GetMessageById(const struct FString& MessageId, struct FMcpMessage* Message);
	void CacheMessage(const struct FMcpMessage& Message);
	bool GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	void OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryMessageContents(const struct FString& MessageId);
	void GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList);
	void OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryMessages(const struct FString& ToUniqueUserId);
	void OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteMessage(const struct FString& MessageId);
	void OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void CreateMessage(TArray<struct FString>* ToUniqueUserIds, const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<unsigned char>* MessageContents);
	void FinishedAsyncUncompression(bool bWasSuccessful, TArray<unsigned char>* UncompressedMessageContents, const struct FString& MessageId);
	bool StartAsyncUncompression(const struct FString& MessageId, TEnumAsByte<IpDrv_EMcpMessageCompressionType> MessageCompressionType, TArray<unsigned char>* MessageContent);
	bool StartAsyncCompression(TEnumAsByte<IpDrv_EMcpMessageCompressionType> MessageCompressionType, TArray<unsigned char>* MessageContent, class UHttpRequestInterface* Request);
};

// Class IpDrv.McpUserCloudFileDownload
// 0x00F0 (FullSize[0x0168] - InheritedSize[0x0078])
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	struct FString                                     EnumerateCloudFilesUrl;                                    // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FString                                     ReadCloudFileUrl;                                          // 0x0088(0x0010) (Config, NeedCtorLink)
	struct FString                                     WriteCloudFileUrl;                                         // 0x0098(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteCloudFileUrl;                                        // 0x00A8(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpUserCloudFilesEntry>             UserCloudFileRequests;                                     // 0x00B8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;                       // 0x00C8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                             // 0x00D8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                            // 0x00E8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                           // 0x00F8(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;                  // 0x0108(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XRP5[0xC];                                     // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;                        // 0x0120(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NN3O[0xC];                                     // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;                       // 0x0138(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SSE1[0xC];                                     // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;                      // 0x0150(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6LBK[0xC];                                     // 0x0150(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserCloudFileDownload");
		return ptr;
	}



	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void CallDeleteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void CallWriteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int* UserIdx, int* FileIdx);
	bool WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void CallReadUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool ReadUserFile(const struct FString& UserId, const struct FString& Filename);
	void GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void CallEnumerateUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId);
	void OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void EnumerateUserFiles(const struct FString& UserId);
	bool ClearFile(const struct FString& UserId, const struct FString& Filename);
	bool ClearFiles(const struct FString& UserId);
	bool GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
};

// Class IpDrv.MeshBeacon
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	int                                                MeshBeaconPort;                                            // 0x0068(0x0004) (Config)
	unsigned char                                      UnknownData_ZAQC[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    Socket;                                                    // 0x0070(0x0008) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                             // 0x0078(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bWantsDeferredDestroy : 1;                                 // 0x0078(0x0001) BIT_FIELD (Transient)
	unsigned long                                      bShouldTick : 1;                                           // 0x0078(0x0001) BIT_FIELD
	float                                              HeartbeatTimeout;                                          // 0x007C(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                      // 0x0080(0x0004)
	struct FName                                       BeaconName;                                                // 0x0084(0x0008)
	int                                                SocketSendBufferSize;                                      // 0x008C(0x0004) (Config)
	int                                                SocketReceiveBufferSize;                                   // 0x0090(0x0004) (Config)
	int                                                MaxBandwidthTestBufferSize;                                // 0x0094(0x0004) (Config)
	int                                                MinBandwidthTestBufferSize;                                // 0x0098(0x0004) (Config)
	float                                              MaxBandwidthTestSendTime;                                  // 0x009C(0x0004) (Config)
	float                                              MaxBandwidthTestReceiveTime;                               // 0x00A0(0x0004) (Config)
	int                                                MaxBandwidthHistoryEntries;                                // 0x00A4(0x0004) (Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeacon");
		return ptr;
	}



	void DestroyBeacon();
};

// Class IpDrv.MeshBeaconClient
// 0x0140 (FullSize[0x01E8] - InheritedSize[0x00A8])
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                        // 0x00A8(0x0010) (Const)
	struct FClientConnectionRequest                    ClientPendingRequest;                                      // 0x00B8(0x0070) (Const, NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                                      // 0x0128(0x0014)
	TEnumAsByte<IpDrv_EMeshBeaconClientState>          ClientBeaconState;                                         // 0x013C(0x0001)
	TEnumAsByte<IpDrv_EMeshBeaconPacketType>           ClientBeaconRequestType;                                   // 0x013D(0x0001)
	unsigned char                                      UnknownData_3IC5[0x2];                                     // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConnectionRequestTimeout;                                  // 0x0140(0x0004) (Config)
	float                                              ConnectionRequestElapsedTime;                              // 0x0144(0x0004)
	struct FString                                     ResolverClassName;                                         // 0x0148(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                             // 0x0158(0x0008)
	class UClientBeaconAddressResolver*                Resolver;                                                  // 0x0160(0x0008)
	unsigned long                                      bUsingRegisteredAddr : 1;                                  // 0x0168(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData_58I2[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;                     // 0x0170(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_0JMD[0xC];                                     // 0x016C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;                // 0x0188(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_L2PV[0xC];                                     // 0x0188(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;                // 0x01A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QVUO[0xC];                                     // 0x01A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                       // 0x01B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YN77[0xC];                                     // 0x01B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;             // 0x01D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JBN6[0xC];                                     // 0x01D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		return ptr;
	}



	bool SendHostNewGameSessionResponse(bool bSuccess, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(TEnumAsByte<IpDrv_EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<IpDrv_EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnReceivedBandwidthTestRequest(TEnumAsByte<IpDrv_EMeshBeaconBandwidthTestType> TestType);
	void OnConnectionRequestResult(TEnumAsByte<IpDrv_EMeshBeaconConnectionResult> ConnectionResult);
	bool BeginBandwidthTest(TEnumAsByte<IpDrv_EMeshBeaconBandwidthTestType> TestType, int TestBufferSize);
	bool RequestConnection(struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest, bool bRegisterSecureAddress);
	void DestroyBeacon();
};

// Class IpDrv.MeshBeaconHost
// 0x00E8 (FullSize[0x0190] - InheritedSize[0x00A8])
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                                         // 0x00A8(0x0010) (Const, NeedCtorLink)
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                                  // 0x00B8(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                            // 0x00C8(0x0048) (Const, NeedCtorLink)
	unsigned long                                      bAllowBandwidthTesting : 1;                                // 0x0110(0x0001) BIT_FIELD
	int                                                ConnectionBacklog;                                         // 0x0114(0x0004) (Config)
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;             // 0x0118(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KFW3[0xC];                                     // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;                        // 0x0130(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VMF1[0xC];                                     // 0x0130(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;                       // 0x0148(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9LVM[0xC];                                     // 0x0148(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;                  // 0x0160(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V3ZI[0xC];                                     // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;        // 0x0178(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8W6U[0xC];                                     // 0x0178(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		return ptr;
	}



	void OnReceivedClientCreateNewSessionResult(bool bSucceeded, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	bool RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(TArray<struct FUniqueNetId>* Players);
	int GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId);
	void SetPendingPlayerConnections(TArray<struct FUniqueNetId>* Players);
	void OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<IpDrv_EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<IpDrv_EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<IpDrv_EMeshBeaconBandwidthTestType> TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection);
	void AllowBandwidthTesting(bool bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<IpDrv_EMeshBeaconBandwidthTestType> TestType, int TestBufferSize);
	void DestroyBeacon();
	bool InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId);
};

// Class IpDrv.OnlineAuthInterfaceImpl
// 0x0368 (FullSize[0x03C8] - InheritedSize[0x0060])
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                              // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FAuthCodeRequest>                    AuthCodeRequests;                                          // 0x0068(0x0010) (Transient, NeedCtorLink)
	int                                                NextAuthCodeID;                                            // 0x0078(0x0004) (Transient)
	unsigned char                                      UnknownData_RT5G[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                           // 0x0080(0x0008)
	unsigned long                                      bAuthReady : 1;                                            // 0x0088(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData_CXUI[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSparseArray_Mirror                         ClientAuthSessions;                                        // 0x0090(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         ServerAuthSessions;                                        // 0x00C8(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         PeerAuthSessions;                                          // 0x0100(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                                   // 0x0138(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                                   // 0x0170(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                                     // 0x01A8(0x0038) (Const, Native)
	TArray<struct FScriptDelegate>                     AuthReadyDelegates;                                        // 0x01E0(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthRequestDelegates;                                // 0x01F0(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRequestDelegates;                                // 0x0200(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthResponseDelegates;                               // 0x0210(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthResponseDelegates;                               // 0x0220(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthCompleteDelegates;                               // 0x0230(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthCompleteDelegates;                               // 0x0240(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthEndSessionRequestDelegates;                      // 0x0250(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRetryRequestDelegates;                           // 0x0260(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientConnectionCloseDelegates;                            // 0x0270(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerConnectionCloseDelegates;                            // 0x0280(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnAuthReady__Delegate;                                   // 0x0290(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QY86[0xC];                                     // 0x0290(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;                           // 0x02A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PWR6[0xC];                                     // 0x02A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;                           // 0x02C0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EU2H[0xC];                                     // 0x02C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;                          // 0x02D8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_7AHB[0xC];                                     // 0x02D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;                          // 0x02F0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_17LF[0xC];                                     // 0x02F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;                          // 0x0308(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_MMD0[0xC];                                     // 0x0308(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;                          // 0x0320(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_52AM[0xC];                                     // 0x0320(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;                 // 0x0338(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JV9P[0xC];                                     // 0x0338(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;                      // 0x0350(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_Z3EJ[0xC];                                     // 0x0350(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;                       // 0x0368(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JCIC[0xC];                                     // 0x0368(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;                       // 0x0380(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4FCT[0xC];                                     // 0x0380(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedAuthCode__Delegate;                            // 0x0398(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WGER[0xC];                                     // 0x0398(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAccountAuthorization__Delegate;                        // 0x03B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_L3OE[0xC];                                     // 0x03B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineAuthInterfaceImpl");
		return ptr;
	}



	class UAsyncTask* RequestAccountAuthorization(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void OnAccountAuthorization(const struct FString& Token);
	void OnLoginChanged(bool bLoggedIn);
	bool RequestMtxCode(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	bool RequestAuthTicket(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	bool RequiresAuthTicket();
	void OnReceivedAuthCode(bool bSuccess, const struct FString& Code);
	bool GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId* OutServerUID);
	bool FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession* OutSessionInfo);
	bool FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession* OutSessionInfo);
	bool FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession* OutSessionInfo);
	bool FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession* OutSessionInfo);
	void AllLocalServerAuthSessions(struct FLocalAuthSession* OutSessionInfo);
	void AllServerAuthSessions(struct FAuthSession* OutSessionInfo);
	void AllLocalClientAuthSessions(struct FLocalAuthSession* OutSessionInfo);
	void AllClientAuthSessions(struct FAuthSession* OutSessionInfo);
	void EndAllRemoteServerAuthSessions();
	void EndAllLocalServerAuthSessions();
	void EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP);
	void EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP);
	bool VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID);
	void EndAllRemoteClientAuthSessions();
	void EndAllLocalClientAuthSessions();
	void EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP);
	void EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort);
	bool VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID);
	bool SendServerAuthRetryRequest();
	bool SendClientAuthEndSessionRequest(class UPlayer* ClientConnection);
	bool SendServerAuthResponse(class UPlayer* ClientConnection, int AuthTicketUID);
	bool SendClientAuthResponse(int AuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
	void ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void OnServerConnectionClose(class UPlayer* ServerConnection);
	void ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void OnClientConnectionClose(class UPlayer* ClientConnection);
	void ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void OnServerAuthRetryRequest(class UPlayer* ClientConnection);
	void ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void OnClientAuthEndSessionRequest(class UPlayer* ServerConnection);
	void ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const struct FString& ExtraInfo);
	void ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const struct FString& ExtraInfo);
	void ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void OnServerAuthResponse(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID);
	void ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void OnClientAuthResponse(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int AuthTicketUID);
	void ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort);
	void ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void OnClientAuthRequest(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure);
	void ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void OnAuthReady();
	bool IsReady();
};

// Class IpDrv.OnlineFriendsInterfaceImpl
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UOnlineFriendsInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineFriendsInterface;                           // 0x0060(0x0008) (Const, Native, NoExport)
	struct FScriptDelegate                             __OnReceivedLinkedAccount__Delegate;                       // 0x0068(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VFWS[0xC];                                     // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineFriendsInterfaceImpl");
		return ptr;
	}



	bool GetActivePlatformId(unsigned char LocalUserNum, const struct FUniqueNetId& AccountId, struct FUniqueNetId* PlatformId);
	bool RequestLinkedAccounts(unsigned char LocalUserNum, TArray<struct FUniqueNetId> AccountIds, const struct FScriptDelegate& Callback);
	void OnReceivedLinkedAccount(bool bSuccess, TArray<struct FLinkedAccountData> LinkedAccountData);
};

// Class IpDrv.OnlineGameInterfaceImpl
// 0x02B8 (FullSize[0x0318] - InheritedSize[0x0060])
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                           // 0x0060(0x0008)
	class UOnlineGameSettings*                         GameSettings;                                              // 0x0068(0x0008) (Const)
	class UOnlineGameSearch*                           GameSearch;                                                // 0x0070(0x0008) (Const)
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;                         // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;                         // 0x0088(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;                        // 0x0098(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;                           // 0x00A8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MigrateOnlineGameCompleteDelegates;                        // 0x00B8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinMigratedOnlineGameCompleteDelegates;                   // 0x00C8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RecalculateSkillRatingCompleteDelegates;                   // 0x00D8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;                          // 0x00E8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                            // 0x00F8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;                          // 0x0108(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;                    // 0x0118(0x0010) (NeedCtorLink)
	TEnumAsByte<Engine_ELanBeaconState>                LanBeaconState;                                            // 0x0128(0x0001) (Const)
	unsigned char                                      LanNonce[0x8];                                             // 0x0129(0x0008) (Const)
	unsigned char                                      UnknownData_BVRZ[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LanAnnouncePort;                                           // 0x0134(0x0004) (Const, Config)
	int                                                LanGameUniqueId;                                           // 0x0138(0x0004) (Const, Config)
	int                                                LanPacketPlatformMask;                                     // 0x013C(0x0004) (Const, Config)
	float                                              LanQueryTimeLeft;                                          // 0x0140(0x0004)
	float                                              LanQueryTimeout;                                           // 0x0144(0x0004) (Config)
	struct FPointer                                    LanBeacon;                                                 // 0x0148(0x0008) (Const, Native, Transient)
	struct FPointer                                    SessionInfo;                                               // 0x0150(0x0008) (Const, Native, Transient)
	TArray<struct FScriptDelegate>                     GameInviteAcceptedDelegates;                               // 0x0158(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;                     // 0x0168(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TT8J[0xC];                                     // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;                    // 0x0180(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_YBVN[0xC];                                     // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;                    // 0x0198(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_BZPC[0xC];                                     // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;                   // 0x01B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CZ3B[0xC];                                     // 0x01B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;               // 0x01C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EM8B[0xC];                                     // 0x01C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;                      // 0x01E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_EGLZ[0xC];                                     // 0x01E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                      // 0x01F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_KGF4[0xC];                                     // 0x01F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                    // 0x0210(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_K1XD[0xC];                                     // 0x0210(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;                     // 0x0228(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2WX1[0xC];                                     // 0x0228(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;                       // 0x0240(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_U3AW[0xC];                                     // 0x0240(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;             // 0x0258(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8WOR[0xC];                                     // 0x0258(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                          // 0x0270(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_QAII[0xC];                                     // 0x0270(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;              // 0x0288(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HW5Y[0xC];                                     // 0x0288(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;                   // 0x02A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WPUM[0xC];                                     // 0x02A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;              // 0x02B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HJ9R[0xC];                                     // 0x02B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                            // 0x02D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_50DJ[0xC];                                     // 0x02D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReportMatchmakingInfo__Delegate;                    // 0x02E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_BMKQ[0xC];                                     // 0x02E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGamePlayersChanged__Delegate;                          // 0x0300(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CBQK[0xC];                                     // 0x0300(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		return ptr;
	}



	void ClearGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate);
	void AddGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate);
	void OnGamePlayersChanged(const struct FName& SessionName, TArray<struct FUniqueNetId> Players);
	void SetFriendJoinLocation(const struct FUniqueNetId& JoinablePlayerID, const struct FString& ServerAddress, TEnumAsByte<Engine_ELobbyVisibility> Visibility);
	void ClearReportMatchmakingInfoDelegate(const struct FScriptDelegate& OldDelegate);
	void AddReportMatchmakingInfoDelegate(const struct FScriptDelegate& NewDelegate);
	void EventReportMatchmakingInfo(const struct FString& NewInfo);
	void ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void OnQosStatusChanged(int NumComplete, int NumTotal);
	bool BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult, const struct FString& ErrorString);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const struct FName& SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RegisterForArbitration(const struct FName& SessionName);
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool EndOnlineGame(const struct FName& SessionName);
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool StartOnlineGame(const struct FName& SessionName);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool DestroyOnlineGame(const struct FName& SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(const struct FName& SessionName);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};

// Class IpDrv.OnlineLobbyInterfaceImpl
// 0x0260 (FullSize[0x02C0] - InheritedSize[0x0060])
class UOnlineLobbyInterfaceImpl : public UObject
{
public:
	TArray<struct FScriptDelegate>                     CreateLobbyCompleteDelegates;                              // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindLobbiesCompleteDelegates;                              // 0x0070(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinLobbyCompleteDelegates;                                // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbySettingsUpdateDelegates;                              // 0x0090(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyMemberSettingsUpdateDelegates;                        // 0x00A0(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyMemberStatusUpdateDelegates;                          // 0x00B0(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyReceiveMessageDelegates;                              // 0x00C0(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyReceiveBinaryDataDelegates;                           // 0x00D0(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyJoinGameDelegates;                                    // 0x00E0(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyInviteDelegates;                                      // 0x00F0(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyErrorDelegates;                                       // 0x0100(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyDestroyedDelegates;                                   // 0x0110(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbySessionCreatedDelegates;                              // 0x0120(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     HostStartPlayTogetherDelegates;                            // 0x0130(0x0010) (NeedCtorLink)
	TArray<struct FActiveLobbyInfo>                    ActiveLobbies;                                             // 0x0140(0x0010) (Const, NeedCtorLink)
	TArray<struct FBasicLobbyInfo>                     CachedFindLobbyResults;                                    // 0x0150(0x0010) (Const, NeedCtorLink)
	TArray<unsigned char>                              CachedBinaryData;                                          // 0x0160(0x0010) (Const, NeedCtorLink)
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                         // 0x0170(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ONH2[0xC];                                     // 0x0170(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                         // 0x0188(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V63J[0xC];                                     // 0x0188(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                           // 0x01A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_856O[0xC];                                     // 0x01A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                         // 0x01B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V51S[0xC];                                     // 0x01B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;                   // 0x01D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6KKS[0xC];                                     // 0x01D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;                     // 0x01E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_ZEBM[0xC];                                     // 0x01E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                         // 0x0200(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NNIF[0xC];                                     // 0x0200(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;                      // 0x0218(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1JER[0xC];                                     // 0x0218(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                               // 0x0230(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_978Q[0xC];                                     // 0x0230(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                                 // 0x0248(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_JNTT[0xC];                                     // 0x0248(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                              // 0x0260(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WS7O[0xC];                                     // 0x0260(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;                         // 0x0278(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VU7Z[0xC];                                     // 0x0278(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyError__Delegate;                                  // 0x0290(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1U1W[0xC];                                     // 0x0290(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;                       // 0x02A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GJFJ[0xC];                                     // 0x02A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineLobbyInterfaceImpl");
		return ptr;
	}



	void ClearHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void AddHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void OnHostStartPlayTogether(unsigned char LocalUserNum);
	void ClearLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void AddLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void OnLobbyError(const struct FString& Error);
	bool GetLobbyMembers(struct FUniqueLobbyId* LobbyId, TArray<struct FLobbyMember>* Members);
	void ClearLobbySessionCretedeDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void ClearLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void AddLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void TriggerLobbySessionCreatedDelegates();
	void OnLobbySessionCreated();
	int GetLobbyIndex(struct FUniqueLobbyId* LobbyId);
	void RemoveLocalPlayerFromSession(struct FUniqueNetId* PartyMember);
	void AddLocalPartyMemberToSession(struct FUniqueNetId* NewPartyMember);
	bool KickPlayer(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, TEnumAsByte<Engine_ELobbyKickReason> Reason);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId);
	void TriggerLobbyDestroyedDelegates(int LobbyIndex, TEnumAsByte<Engine_ELobbyKickReason> Reason);
	void ClearLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void AddLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void OnLobbyDestroyed(struct FUniqueLobbyId* LobbyId, TEnumAsByte<Engine_ELobbyKickReason> Reason);
	void ClearLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void AddLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void OnLobbyInvite(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* FriendId, bool bAccepted);
	bool InviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwner);
	bool SetLobbyLock(struct FUniqueLobbyId* LobbyId, bool bLocked);
	bool SetLobbyServer(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID, const struct FString& ServerIP);
	bool RemoveLobbySetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key);
	bool SetLobbySetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key, const struct FString& Value);
	bool GetLobbyAdmin(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId);
	void ClearLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void AddLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void TriggerLobbyJoinGameDelegates(int LobbyIndex, struct FUniqueNetId* ServerId, const struct FString& ServerIP);
	void OnLobbyJoinGame(struct FActiveLobbyInfo* LobbyInfo, struct FUniqueNetId* ServerId, const struct FString& ServerIP);
	void ClearLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void AddLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void TriggerLobbyReceiveBinaryDataDelegates(int LobbyIndex, int MemberIndex);
	void OnLobbyReceiveBinaryData(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, TArray<unsigned char>* Data);
	bool SendLobbyBinaryData(struct FUniqueLobbyId* LobbyId, TArray<unsigned char>* Data);
	void ClearLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void AddLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void TriggerLobbyReceiveMessageDelegates(int LobbyIndex, int MemberIndex, const struct FString& Type, const struct FString& Message);
	void OnLobbyReceiveMessage(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, const struct FString& Type, const struct FString& Message);
	bool SendLobbyMessage(struct FUniqueLobbyId* LobbyId, const struct FString& Message);
	void ClearLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void AddLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void TriggerLobbyMemberStatusUpdateDelegates(int LobbyIndex, int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void OnLobbyMemberStatusUpdate(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void ClearLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void AddLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void TriggerLobbyMemberSettingsUpdateDelegates(int LobbyIndex, int MemberIndex);
	void OnLobbyMemberSettingsUpdate(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex);
	void ClearLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void AddLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void TriggerLobbySettingsUpdateDelegates(int LobbyIndex);
	void OnLobbySettingsUpdate(struct FActiveLobbyInfo* LobbyInfo);
	bool SetLobbyUserSetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key, const struct FString& Value);
	bool LeaveLobby(struct FUniqueLobbyId* LobbyId);
	void ClearJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void AddJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void TriggerJoinLobbyCompleteDelegates(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	void OnJoinLobbyComplete(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	bool JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId* LobbyId);
	void ClearFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void AddFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void TriggerFindLobbiesCompleteDelegates(bool bWasSuccessful);
	void OnFindLobbiesComplete(bool bWasSuccessful, TArray<struct FBasicLobbyInfo>* LobbyList);
	bool UpdateFoundLobbies(const struct FUniqueLobbyId& LobbyId);
	bool FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, TEnumAsByte<Engine_ELobbyDistance> Distance);
	void ClearCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void AddCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void OnCreateLobbyComplete(bool bWasSuccessful, struct FUniqueLobbyId* LobbyId, const struct FString& Error);
	bool CreateLobby(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<Engine_ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings);
};

// Class IpDrv.OnlinePersistentAuthInterfaceImpl
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class UOnlinePersistentAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlinePersistentAuthInterface;                    // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FScriptDelegate>                     RequestPinGrantCodeDelegates;                              // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnderageUserDetectedDelegates;                             // 0x0078(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceievedPinGrantCode__Delegate;                       // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_7L68[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnderageUserDetected__Delegate;                        // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_AIXF[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlinePersistentAuthInterfaceImpl");
		return ptr;
	}



	bool AuthWithNintendoAccountToken(unsigned char LocalUserNum, struct FString* NintendoAccountToken);
	class UDateTime* GetAuthExpirationTimestamp(unsigned char LocalUserNum);
	bool LaunchAccountPortal(unsigned char LocalUserNum);
	struct FString GetClientCredentials();
	struct FString GetContinuanceToken(unsigned char LocalUserNum);
	bool UseRefreshToken(unsigned char LocalUserNum, const struct FString& RefreshToken);
	struct FString GetRefreshToken(unsigned char LocalUserNum);
	bool RequestPinGrantCode(unsigned char LocalUserNum);
	void ClearUnderageUserDetectedDelegate(const struct FScriptDelegate& Callback);
	void AddUnderageUserDetectedDelegate(const struct FScriptDelegate& Callback);
	void OnUnderageUserDetected(unsigned char LocalUserNum, const struct FString& ParentalConsentURL);
	void ClearRequestPinGrantCodeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& Callback);
	void AddRequestPinGrantCodeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& Callback);
	void OnReceievedPinGrantCode(TEnumAsByte<Engine_EPinGrantResult> Result, unsigned char LocalUserNum, const struct FString& Code, const struct FString& URL, int SecondsUntilExpiration);
};

// Class IpDrv.OnlinePlaylistManager
// 0x00E8 (FullSize[0x0148] - InheritedSize[0x0060])
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FPlaylist>                           Playlists;                                                 // 0x0068(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             PlaylistFileNames;                                         // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FName>                               DatastoresToRefresh;                                       // 0x0088(0x0010) (Config, NeedCtorLink)
	int                                                DownloadCount;                                             // 0x0098(0x0004)
	int                                                SuccessfulCount;                                           // 0x009C(0x0004)
	int                                                VersionNumber;                                             // 0x00A0(0x0004) (Config)
	unsigned char                                      UnknownData_KLGI[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlaylistPopulation>                 PopulationData;                                            // 0x00A8(0x0010) (Config, NeedCtorLink)
	int                                                WorldwideTotalPlayers;                                     // 0x00B8(0x0004)
	int                                                RegionTotalPlayers;                                        // 0x00BC(0x0004)
	unsigned char                                      TitleFileInterface[0x10];                                  // 0x00C0(0x0010) UNKNOWN PROPERTY: InterfaceProperty IpDrv.OnlinePlaylistManager.TitleFileInterface
	struct FString                                     PopulationFileName;                                        // 0x00D0(0x0010) (NeedCtorLink)
	float                                              NextPlaylistPopulationUpdateTime;                          // 0x00E0(0x0004) (Transient)
	float                                              PlaylistPopulationUpdateInterval;                          // 0x00E4(0x0004) (Config)
	int                                                MinPlaylistIdToReport;                                     // 0x00E8(0x0004) (Config)
	int                                                CurrentPlaylistId;                                         // 0x00EC(0x0004) (Transient)
	struct FName                                       EventsInterfaceName;                                       // 0x00F0(0x0008) (Config)
	int                                                DataCenterId;                                              // 0x00F8(0x0004) (Config)
	unsigned char                                      UnknownData_G5VP[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DataCenterFileName;                                        // 0x0100(0x0010) (NeedCtorLink)
	float                                              LastPlaylistDownloadTime;                                  // 0x0110(0x0004) (Transient)
	float                                              PlaylistRefreshInterval;                                   // 0x0114(0x0004) (Config)
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;                        // 0x0118(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_48F9[0xC];                                     // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;               // 0x0130(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9VWG[0xC];                                     // 0x0130(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlinePlaylistManager");
		return ptr;
	}



	void ParseDataCenterId(TArray<unsigned char>* Data);
	void OnReadDataCenterIdComplete(bool bWasSuccessful, const struct FString& Filename);
	void ReadDataCenterId();
	void SendPlaylistPopulationUpdate(int NumPlayers);
	void GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal);
	void ParsePlaylistPopulationData(TArray<unsigned char>* Data);
	void OnPlaylistPopulationDataUpdated();
	void OnReadPlaylistPopulationComplete(bool bWasSuccessful, const struct FString& Filename);
	void ReadPlaylistPopulation();
	void Reset();
	void GetContentIdsFromPlaylist(int PlaylistId, TArray<int>* ContentIds);
	void GetMapCycleFromPlaylist(int PlaylistId, TArray<struct FName>* MapCycle);
	struct FString GetUrlFromPlaylist(int PlaylistId);
	int GetMatchType(int PlaylistId);
	bool IsPlaylistArbitrated(int PlaylistId);
	void GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId);
	void GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize);
	bool PlaylistSupportsDedicatedServers(int PlaylistId);
	bool HasAnyGameSettings(int PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int PlaylistId, int GameSettingsId);
	void FinalizePlaylistObjects();
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool ShouldRefreshPlaylists();
	void DetermineFilesToDownload();
	void DownloadPlaylist();
	void OnReadPlaylistComplete(bool bWasSuccessful);
};

// Class IpDrv.OnlinePurchaseInterfaceImpl
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UOnlinePurchaseInterfaceImpl : public UObject
{
public:
	struct FScriptDelegate                             __EventGetAppPriceInfoComplete__Delegate;                  // 0x0060(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WPUP[0xC];                                     // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMicroTxnResponse__Delegate;                            // 0x0078(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3CYS[0xC];                                     // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlinePurchaseInterfaceImpl");
		return ptr;
	}



	void ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	void OnMicroTxnResponse(bool bAuthorized);
	struct FString FormatCurrency(const struct FString& Currency, int Price);
	bool GetAppPriceInfo(struct FUniqueNetId* PlayerID, TArray<struct FName>* AppNames, const struct FScriptDelegate& Callback);
	void EventGetAppPriceInfoComplete(const struct FName& AppName, const struct FString& Price, const struct FString& DiscountPrice, int DiscountPercentage);
};

// Class IpDrv.PartyBeacon
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	int                                                PartyBeaconPort;                                           // 0x0068(0x0004) (Config)
	unsigned char                                      UnknownData_AWNN[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointer                                    Socket;                                                    // 0x0070(0x0008) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                             // 0x0078(0x0001) BIT_FIELD
	unsigned long                                      bWantsDeferredDestroy : 1;                                 // 0x0078(0x0001) BIT_FIELD
	unsigned long                                      bShouldTick : 1;                                           // 0x0078(0x0001) BIT_FIELD
	float                                              HeartbeatTimeout;                                          // 0x007C(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                      // 0x0080(0x0004)
	struct FName                                       BeaconName;                                                // 0x0084(0x0008)
	unsigned char                                      UnknownData_O5VH[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                             // 0x0090(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NDTZ[0xC];                                     // 0x008C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeacon");
		return ptr;
	}



	void OnDestroyComplete();
	void DestroyBeacon();
};

// Class IpDrv.PartyBeaconClient
// 0x0118 (FullSize[0x01C0] - InheritedSize[0x00A8])
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                        // 0x00A8(0x0010) (Const)
	struct FPartyReservation                           PendingRequest;                                            // 0x00B8(0x0060) (NeedCtorLink)
	TEnumAsByte<IpDrv_EPartyBeaconClientState>         ClientBeaconState;                                         // 0x0118(0x0001)
	TEnumAsByte<IpDrv_EPartyBeaconClientRequest>       ClientBeaconRequestType;                                   // 0x0119(0x0001)
	unsigned char                                      UnknownData_13K5[0x2];                                     // 0x011A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReservationRequestTimeout;                                 // 0x011C(0x0004) (Config)
	float                                              ReservationRequestElapsedTime;                             // 0x0120(0x0004)
	unsigned char                                      UnknownData_OJKG[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ResolverClassName;                                         // 0x0128(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                             // 0x0138(0x0008)
	class UClientBeaconAddressResolver*                Resolver;                                                  // 0x0140(0x0008)
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;                  // 0x0148(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_33CK[0xC];                                     // 0x0148(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;                     // 0x0160(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CU5L[0xC];                                     // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                       // 0x0178(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_SREN[0xC];                                     // 0x0178(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                                 // 0x0190(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FE83[0xC];                                     // 0x0190(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                            // 0x01A8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4I18[0xC];                                     // 0x01A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		return ptr;
	}



	void DestroyBeacon();
	bool CancelReservation(const struct FUniqueNetId& CancellingPartyLeader);
	bool RequestReservationUpdate(struct FOnlineGameSearchResult* DesiredHost, const struct FUniqueNetId& RequestingPartyLeader, TArray<struct FPlayerReservation>* PlayersToAdd);
	bool RequestReservation(struct FOnlineGameSearchResult* DesiredHost, const struct FUniqueNetId& RequestingPartyLeader, TArray<struct FPlayerReservation>* Players);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnReservationCountUpdated(int ReservationRemaining);
	void OnReservationRequestComplete(TEnumAsByte<IpDrv_EPartyReservationResult> ReservationResult);
};

// Class IpDrv.PartyBeaconHost
// 0x0098 (FullSize[0x0140] - InheritedSize[0x00A8])
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                                   // 0x00A8(0x0010) (Const, NeedCtorLink)
	int                                                NumTeams;                                                  // 0x00B8(0x0004) (Const)
	int                                                NumPlayersPerTeam;                                         // 0x00BC(0x0004) (Const)
	int                                                NumReservations;                                           // 0x00C0(0x0004) (Const)
	int                                                NumConsumedReservations;                                   // 0x00C4(0x0004) (Const)
	TArray<struct FPartyReservation>                   Reservations;                                              // 0x00C8(0x0010) (Const, NeedCtorLink)
	struct FName                                       OnlineSessionName;                                         // 0x00D8(0x0008)
	int                                                ConnectionBacklog;                                         // 0x00E0(0x0004) (Config)
	int                                                ForceTeamNum;                                              // 0x00E4(0x0004) (Const)
	int                                                ReservedHostTeamNum;                                       // 0x00E8(0x0004) (Const)
	unsigned long                                      bBestFitTeamAssignment : 1;                                // 0x00EC(0x0001) BIT_FIELD
	TEnumAsByte<IpDrv_EPartyBeaconHostState>           BeaconState;                                               // 0x00F0(0x0001) (Const)
	unsigned char                                      UnknownData_7VGF[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             __OnReservationChange__Delegate;                           // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WEKQ[0xC];                                     // 0x00F1(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                            // 0x0110(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_4EHP[0xC];                                     // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;                  // 0x0128(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OI0M[0xC];                                     // 0x0128(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		return ptr;
	}



	int GetMaxAvailableTeamSize();
	void GetPartyLeaders(TArray<struct FUniqueNetId>* PartyLeaders);
	void GetPlayers(TArray<struct FUniqueNetId>* Players);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void UnregisterParty(const struct FUniqueNetId& PartyLeader);
	void UnregisterPartyMembers();
	void RegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void DestroyBeacon();
	void OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty);
	int GetExistingReservation(struct FUniqueNetId* PartyLeader);
	TEnumAsByte<IpDrv_EPartyReservationResult> UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers);
	TEnumAsByte<IpDrv_EPartyReservationResult> AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers, int TeamNum, bool bIsHost);
	bool InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, const struct FName& InSessionName, int InForceTeamNum);
	void PauseReservationRequests(bool bPause);
};

// Class IpDrv.TcpipConnection
// 0x0028 (FullSize[0xB210] - InheritedSize[0xB1E8])
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_0L1R[0x28];                                    // 0xB1E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpipConnection");
		return ptr;
	}



};

// Class IpDrv.TcpNetDriver
// 0x0078 (FullSize[0x0288] - InheritedSize[0x0210])
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData_L7PR[0x5C];                                    // 0x0210(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned long                                      LogPortUnreach : 1;                                        // 0x026C(0x0001) BIT_FIELD (Config)
	unsigned long                                      UnknownData_CI9X : 31;                                     // 0x026C(0x0001) BIT_FIELD (PADDING)
	unsigned long                                      AllowPlayerPortUnreach : 1;                                // 0x0268(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownData_NBJV[0x1C];                                    // 0x026C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpNetDriver");
		return ptr;
	}



};

// Class IpDrv.WebRequest
// 0x0100 (FullSize[0x0160] - InheritedSize[0x0060])
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                                // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     URI;                                                       // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     Username;                                                  // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     Password;                                                  // 0x0090(0x0010) (NeedCtorLink)
	int                                                ContentLength;                                             // 0x00A0(0x0004)
	unsigned char                                      UnknownData_AEZ6[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ContentType;                                               // 0x00A8(0x0010) (NeedCtorLink)
	TEnumAsByte<IpDrv_ERequestType>                    RequestType;                                               // 0x00B8(0x0001)
	unsigned char                                      UnknownData_6YYL[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMap_Mirror                                 HeaderMap;                                                 // 0x00C0(0x0050) (Const, Native)
	struct FMap_Mirror                                 VariableMap;                                               // 0x0110(0x0050) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebRequest");
		return ptr;
	}



	int GetHexDigit(const struct FString& D);
	void DecodeFormData(const struct FString& Data);
	void ProcessHeaderString(const struct FString& S);
	void Dump();
	void GetVariables(TArray<struct FString>* varNames);
	struct FString GetVariableNumber(const struct FString& VariableName, int Number, const struct FString& DefaultValue);
	int GetVariableCount(const struct FString& VariableName);
	struct FString GetVariable(const struct FString& VariableName, const struct FString& DefaultValue);
	void AddVariable(const struct FString& VariableName, const struct FString& Value);
	void GetHeaders(TArray<struct FString>* Headers);
	struct FString GetHeader(const struct FString& HeaderName, const struct FString& DefaultValue);
	void AddHeader(const struct FString& HeaderName, const struct FString& Value);
	struct FString EncodeBase64(const struct FString& Decoded);
	struct FString DecodeBase64(const struct FString& Encoded);
};

// Class IpDrv.WebResponse
// 0x008C (FullSize[0x00EC] - InheritedSize[0x0060])
class UWebResponse : public UObject
{
public:
	TArray<struct FString>                             Headers;                                                   // 0x0060(0x0010) (NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                            // 0x0070(0x0050) (Const, Native)
	struct FString                                     IncludePath;                                               // 0x00C0(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     CharSet;                                                   // 0x00D0(0x0010) (Const, Localized, NeedCtorLink)
	class AWebConnection*                              Connection;                                                // 0x00E0(0x0008)
	unsigned long                                      bSentText : 1;                                             // 0x00E8(0x0001) BIT_FIELD
	unsigned long                                      bSentResponse : 1;                                         // 0x00E8(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebResponse");
		return ptr;
	}



	bool SentResponse();
	bool SentText();
	void Redirect(const struct FString& URL);
	void SendStandardHeaders(const struct FString& ContentType, bool bCache);
	void HTTPError(int ErrorNum, const struct FString& Data);
	void SendHeaders();
	void AddHeader(const struct FString& Header, bool bReplace);
	void HTTPHeader(const struct FString& Header);
	void HttpResponse(const struct FString& Header);
	void FailAuthentication(const struct FString& Realm);
	bool SendCachedFile(const struct FString& Filename, const struct FString& ContentType);
	void SendBinary(int Count, unsigned char* B);
	void SendText(const struct FString& Text, bool bNoCRLF);
	void Dump();
	struct FString GetHTTPExpiration(int OffsetSeconds);
	struct FString LoadParsedUHTM(const struct FString& Filename);
	bool IncludeBinaryFile(const struct FString& Filename);
	bool IncludeUHTM(const struct FString& Filename);
	void ClearSubst();
	void Subst(const struct FString& Variable, const struct FString& Value, bool bClear);
	bool FileExists(const struct FString& Filename);
};

// Class IpDrv.OnlinePlaylistProvider
// 0x0030 (FullSize[0x00CC] - InheritedSize[0x009C])
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	unsigned char                                      UnknownData_MGEQ[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlaylistId;                                                // 0x00A0(0x0004) (Config)
	unsigned char                                      UnknownData_X1SF[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               PlaylistGameTypeNames;                                     // 0x00A8(0x0010) (Config, NeedCtorLink)
	struct FString                                     DisplayName;                                               // 0x00B8(0x0010) (Const, Config, Localized, NeedCtorLink)
	int                                                Priority;                                                  // 0x00C8(0x0004) (Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlinePlaylistProvider");
		return ptr;
	}



};

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0060 (FullSize[0x0100] - InheritedSize[0x00A0])
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	struct FString                                     ProviderClassName;                                         // 0x00A0(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ProviderClass;                                             // 0x00B0(0x0008) (Transient)
	TArray<class UUIResourceDataProvider*>             RankedDataProviders;                                       // 0x00B8(0x0010) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             UnrankedDataProviders;                                     // 0x00C8(0x0010) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             RecModeDataProviders;                                      // 0x00D8(0x0010) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             PrivateDataProviders;                                      // 0x00E8(0x0010) (Const, NeedCtorLink)
	class UOnlinePlaylistManager*                      PlaylistMan;                                               // 0x00F8(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.UIDataStore_OnlinePlaylists");
		return ptr;
	}



	int GetMatchTypeForPlaylistId(int PlaylistId);
	class UOnlinePlaylistProvider* GetOnlinePlaylistProvider(const struct FName& ProviderTag, int PlaylistId, int* ProviderIndex);
	bool GetPlaylistProvider(const struct FName& ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider);
	bool GetResourceProviders(const struct FName& ProviderTag, TArray<class UUIResourceDataProvider*>* out_Providers);
	void Init();
};

// Class IpDrv.WebApplication
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                                 // 0x0060(0x0008)
	class AWebServer*                                  WebServer;                                                 // 0x0068(0x0008)
	struct FString                                     Path;                                                      // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebApplication");
		return ptr;
	}



	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};

// Class IpDrv.WebServer
// 0x01D0 (FullSize[0x04A8] - InheritedSize[0x02D8])
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                                // 0x02D8(0x0010) (Config, NeedCtorLink)
	struct FString                                     Applications[0xA];                                         // 0x02E8(0x00A0) (Config, NeedCtorLink)
	struct FString                                     ApplicationPaths[0xA];                                     // 0x0388(0x00A0) (Config, NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                              // 0x0428(0x0001) BIT_FIELD (Config)
	int                                                ListenPort;                                                // 0x042C(0x0004) (Config)
	int                                                MaxConnections;                                            // 0x0430(0x0004) (Config)
	int                                                DefaultApplication;                                        // 0x0434(0x0004) (Config)
	int                                                ExpirationSeconds;                                         // 0x0438(0x0004) (Config)
	unsigned char                                      UnknownData_A0DA[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerURL;                                                 // 0x0440(0x0010) (NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[0xA];                                   // 0x0450(0x0050)
	int                                                ConnectionCount;                                           // 0x04A0(0x0004)
	int                                                ConnID;                                                    // 0x04A4(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebServer");
		return ptr;
	}



	class UWebApplication* GetApplication(const struct FString& URI, struct FString* SubURI);
	void LostChild(class AActor* C);
	void GainedChild(class AActor* C);
	void Destroyed();
	void PostBeginPlay();
};

// Class IpDrv.HelloWeb
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UHelloWeb : public UWebApplication
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HelloWeb");
		return ptr;
	}



	void Query(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};

// Class IpDrv.McpManagedValueManagerBase
// 0x0070 (FullSize[0x00E8] - InheritedSize[0x0078])
class UMcpManagedValueManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpManagedValueManagerClassName;                           // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;                      // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_U5NH[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadSaveSlotComplete__Delegate;                        // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_C5XU[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateValueComplete__Delegate;                         // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PDXY[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteValueComplete__Delegate;                         // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3AUX[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpManagedValueManagerBase");
		return ptr;
	}



	void OnDeleteValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, bool bWasSuccessful, const struct FString& Error);
	void DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	void OnUpdateValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value, bool bWasSuccessful, const struct FString& Error);
	void UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value);
	int GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	TArray<struct FManagedValue> GetValues(const struct FString& McpId, const struct FString& SaveSlot);
	void OnReadSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error);
	void ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	void OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error);
	void CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	class UMcpManagedValueManagerBase* CreateInstance();
};

// Class IpDrv.McpManagedValueManager
// 0x0090 (FullSize[0x0178] - InheritedSize[0x00E8])
class UMcpManagedValueManager : public UMcpManagedValueManagerBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                                         // 0x00E8(0x0010) (Config, NeedCtorLink)
	struct FString                                     ReadSaveSlotUrl;                                           // 0x00F8(0x0010) (Config, NeedCtorLink)
	struct FString                                     UpdateValueUrl;                                            // 0x0108(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteValueUrl;                                            // 0x0118(0x0010) (Config, NeedCtorLink)
	TArray<struct FManagedValueSaveSlot>               SaveSlots;                                                 // 0x0128(0x0010) (NeedCtorLink)
	TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> CreateSaveSlotRequests;                                    // 0x0138(0x0010) (NeedCtorLink)
	TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> ReadSaveSlotRequests;                                      // 0x0148(0x0010) (NeedCtorLink)
	TArray<struct FValueRequestState>                  UpdateValueRequests;                                       // 0x0158(0x0010) (NeedCtorLink)
	TArray<struct FValueRequestState>                  DeleteValueRequests;                                       // 0x0168(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpManagedValueManager");
		return ptr;
	}



	void OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	void OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value);
	int GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	TArray<struct FManagedValue> GetValues(const struct FString& McpId, const struct FString& SaveSlot);
	void OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	void ParseValuesForSaveSlot(const struct FString& McpId, const struct FString& SaveSlot, const struct FString& JsonPayload);
	int FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlot);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
};

// Class IpDrv.McpServerTimeBase
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
class UMcpServerTimeBase : public UMcpServiceBase
{
public:
	struct FString                                     McpServerTimeClassName;                                    // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryServerTimeComplete__Delegate;                     // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_TZNL[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServerTimeBase");
		return ptr;
	}



	struct FString GetLastServerTime();
	void OnQueryServerTimeComplete(bool bWasSuccessful, const struct FString& DateTimeStr, const struct FString& Error);
	void QueryServerTime();
	class UMcpServerTimeBase* CreateInstance();
};

// Class IpDrv.McpServerTimeManager
// 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
class UMcpServerTimeManager : public UMcpServerTimeBase
{
public:
	struct FString                                     TimeStampUrl;                                              // 0x00A0(0x0010) (Config, NeedCtorLink)
	struct FString                                     LastTimeStamp;                                             // 0x00B0(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestServerTime;                                     // 0x00C0(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServerTimeManager");
		return ptr;
	}



	struct FString GetLastServerTime();
	void OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryServerTime();
};

// Class IpDrv.McpUserInventoryBase
// 0x0100 (FullSize[0x0178] - InheritedSize[0x0078])
class UMcpUserInventoryBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserInventoryClassName;                                 // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;                      // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1T9S[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteSaveSlotComplete__Delegate;                      // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_CFG7[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQuerySaveSlotListComplete__Delegate;                   // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2DE8[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryInventoryItemsComplete__Delegate;                 // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2Y3J[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPurchaseItemComplete__Delegate;                        // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_XALN[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSellItemComplete__Delegate;                            // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GM80[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnEarnItemComplete__Delegate;                            // 0x0118(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9ZHG[0xC];                                     // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnConsumeItemComplete__Delegate;                         // 0x0130(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_LPST[0xC];                                     // 0x0130(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteItemComplete__Delegate;                          // 0x0148(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_29D0[0xC];                                     // 0x0148(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRecordIapComplete__Delegate;                           // 0x0160(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8WY8[0xC];                                     // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserInventoryBase");
		return ptr;
	}



	void OnRecordIapComplete(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt);
	void OnDeleteItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, bool bWasSuccessful, const struct FString& Error);
	void DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion);
	void OnConsumeItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion);
	void OnEarnItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion);
	void OnSellItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems);
	void OnPurchaseItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar);
	bool GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem);
	void GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems);
	void OnQueryInventoryItemsComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId);
	void OnQuerySaveSlotListComplete(const struct FString& McpId, bool bWasSuccessful, const struct FString& Error);
	TArray<struct FString> GetSaveSlotList(const struct FString& McpId);
	void QuerySaveSlotList(const struct FString& McpId);
	void OnDeleteSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId);
	void OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId);
	class UMcpUserInventoryBase* CreateInstance();
};

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0014 (FullSize[0x012C] - InheritedSize[0x0118])
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileMcp>                       TitleFiles;                                                // 0x0118(0x0010) (NeedCtorLink)
	int                                                DownloadCount;                                             // 0x0128(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		return ptr;
	}



	bool ClearDownloadedFile(const struct FString& Filename);
	bool ClearDownloadedFiles();
	TEnumAsByte<Engine_EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<Engine_EOnlineFileType> FileType);
};

// Class IpDrv.TitleFileDownloadCache
// 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
class UTitleFileDownloadCache : public UMCPBase
{
public:
	TArray<struct FTitleFileCacheEntry>                TitleFiles;                                                // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoadCompleteDelegates;                                     // 0x0090(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SaveCompleteDelegates;                                     // 0x00A0(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;                       // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_2FEN[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;                       // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_W27G[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TitleFileDownloadCache");
		return ptr;
	}



	bool DeleteTitleFile(const struct FString& Filename);
	bool DeleteTitleFiles(float MaxAgeSeconds);
	bool ClearCachedFile(const struct FString& Filename);
	bool ClearCachedFiles();
	struct FString GetTitleFileLogicalName(const struct FString& Filename);
	struct FString GetTitleFileHash(const struct FString& Filename);
	TEnumAsByte<Engine_EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void OnSaveTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool SaveTitleFile(const struct FString& Filename, const struct FString& LogicalName, TArray<unsigned char> FileContents);
	void ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void OnLoadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool LoadTitleFile(const struct FString& Filename);
};

// Class IpDrv.ImageServer
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UImageServer : public UWebApplication
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ImageServer");
		return ptr;
	}



	void Query(class UWebRequest* Request, class UWebResponse* Response);
};

// Class IpDrv.McpServiceConfig
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class UMcpServiceConfig : public UObject
{
public:
	struct FString                                     Protocol;                                                  // 0x0060(0x0010) (Config, NeedCtorLink)
	struct FString                                     Domain;                                                    // 0x0070(0x0010) (Config, NeedCtorLink)
	struct FString                                     AppKey;                                                    // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     AppSecret;                                                 // 0x0090(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServiceConfig");
		return ptr;
	}



	struct FString GetUserAuthTicket(const struct FString& McpId);
};

// Class IpDrv.McpClashMobBase
// 0x00A0 (FullSize[0x0118] - InheritedSize[0x0078])
class UMcpClashMobBase : public UMcpServiceBase
{
public:
	struct FString                                     McpClashMobClassName;                                      // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeListComplete__Delegate;                  // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GWZ0[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDownloadChallengeFileComplete__Delegate;               // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PE60[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptChallengeComplete__Delegate;                     // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_VC5C[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryChallengeUserStatusComplete__Delegate;            // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GRKU[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateChallengeUserProgressComplete__Delegate;         // 0x00E8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_HOJW[0xC];                                     // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateChallengeUserRewardComplete__Delegate;           // 0x0100(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_OMH8[0xC];                                     // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobBase");
		return ptr;
	}



	void UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward);
	void OnUpdateChallengeUserRewardComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress);
	void OnUpdateChallengeUserProgressComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus);
	void QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead);
	void QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void OnQueryChallengeUserStatusComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void OnAcceptChallengeComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents);
	void DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles);
	void OnDownloadChallengeFileComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& DLName, const struct FString& Filename, const struct FString& Error);
	void GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents);
	void QueryChallengeList();
	void OnQueryChallengeListComplete(bool bWasSuccessful, const struct FString& Error);
	class UMcpClashMobBase* CreateInstance();
};

// Class IpDrv.McpClashMobFileDownload
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UMcpClashMobFileDownload : public UOnlineTitleFileDownloadWeb
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobFileDownload");
		return ptr;
	}



	struct FString GetUrlForFile(const struct FString& Filename);
};

// Class IpDrv.McpClashMobManager
// 0x0150 (FullSize[0x0268] - InheritedSize[0x0118])
class UMcpClashMobManager : public UMcpClashMobBase
{
public:
	struct FString                                     ChallengeListUrl;                                          // 0x0118(0x0010) (Config, NeedCtorLink)
	struct FString                                     ChallengeStatusUrl;                                        // 0x0128(0x0010) (Config, NeedCtorLink)
	struct FString                                     ChallengeMultiStatusUrl;                                   // 0x0138(0x0010) (Config, NeedCtorLink)
	struct FString                                     AcceptChallengeUrl;                                        // 0x0148(0x0010) (Config, NeedCtorLink)
	struct FString                                     UpdateChallengeProgressUrl;                                // 0x0158(0x0010) (Config, NeedCtorLink)
	struct FString                                     UpdateRewardProgressUrl;                                   // 0x0168(0x0010) (Config, NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestChallengeList;                                  // 0x0178(0x0008)
	TArray<struct FMcpChallengeUserRequest>            ChallengeUserRequests;                                     // 0x0180(0x0010) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeEvent>          ChallengeEvents;                                           // 0x0190(0x0010) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeUserStatus>     ChallengeUserStatus;                                       // 0x01A0(0x0010) (NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             TempChallengeUserStatus;                                   // 0x01B0(0x0090) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeUserStatus>     TempChallengeUserStatusArray;                              // 0x0240(0x0010) (NeedCtorLink)
	unsigned char                                      FileCache[0x10];                                           // 0x0250(0x0010) UNKNOWN PROPERTY: InterfaceProperty IpDrv.McpClashMobManager.FileCache
	class UMcpClashMobFileDownload*                    FileDownloader;                                            // 0x0260(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobManager");
		return ptr;
	}



	void OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward);
	void OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress);
	void GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus);
	void OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead);
	void OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents);
	void OnDownloadMcpFileComplete(bool bWasSuccessful, const struct FString& DLName);
	void OnLoadCachedFileComplete(bool bWasSuccessful, const struct FString& DLName);
	void DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles);
	void GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents);
	void OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeList();
	void Init();
};

// Class IpDrv.McpGroupsBase
// 0x00F8 (FullSize[0x0170] - InheritedSize[0x0078])
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	struct FString                                     McpGroupsManagerClassName;                                 // 0x0078(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpGroupList>                       GroupLists;                                                // 0x0088(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;                         // 0x0098(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_1UH1[0xC];                                     // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;                         // 0x00B0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_D6GS[0xC];                                     // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;                         // 0x00C8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_768K[0xC];                                     // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;                   // 0x00E0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_IGM4[0xC];                                     // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;                     // 0x00F8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_UDK9[0xC];                                     // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;                  // 0x0110(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_UX6O[0xC];                                     // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;                     // 0x0128(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_NW9W[0xC];                                     // 0x0128(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;                   // 0x0140(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_T9Z5[0xC];                                     // 0x0140(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;                   // 0x0158(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_3ZAY[0xC];                                     // 0x0158(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpGroupsBase");
		return ptr;
	}



	void OnAcceptGroupInviteComplete(const struct FString& GroupId, bool bWasSuccessful, const struct FString& Error);
	void AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupId, bool bShouldAccept);
	void GetGroupInviteList(const struct FString& UserId, struct FMcpGroupList* InviteList);
	void OnQueryGroupInvitesComplete(bool bWasSuccessful, const struct FString& Error);
	void QueryGroupInvites(const struct FString& UniqueUserId);
	void OnDeleteAllGroupsComplete(const struct FString& RequesterId, bool bWasSuccessful, const struct FString& Error);
	void DeleteAllGroups(const struct FString& OwnerId);
	void OnRemoveGroupMembersComplete(const struct FString& GroupId, bool bWasSuccessful, const struct FString& Error);
	void RemoveGroupMembers(const struct FString& OwnerId, const struct FString& GroupId, TArray<struct FString>* MemberIds);
	void OnAddGroupMembersComplete(const struct FString& GroupId, bool bWasSuccessful, const struct FString& Error);
	void AddGroupMembers(const struct FString& OwnerId, const struct FString& GroupId, TArray<struct FString>* MemberIds, bool bRequiresAcceptance);
	void GetGroupMembers(const struct FString& GroupId, TArray<struct FMcpGroupMember>* GroupMembers);
	void OnQueryGroupMembersComplete(const struct FString& GroupId, bool bWasSuccessful, const struct FString& Error);
	void QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupId);
	void GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList);
	void OnQueryGroupsComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error);
	void QueryGroups(const struct FString& RequesterId);
	void OnDeleteGroupComplete(const struct FString& GroupId, bool bWasSuccessful, const struct FString& Error);
	void DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupId);
	void OnCreateGroupComplete(const struct FMcpGroup& Group, bool bWasSuccessful, const struct FString& Error);
	void CreateGroup(const struct FString& OwnerId, const struct FString& GroupName);
	class UMcpGroupsBase* CreateInstance();
};

// Class IpDrv.McpGroupsManager
// 0x00F0 (FullSize[0x0260] - InheritedSize[0x0170])
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	struct FString                                     CreateGroupUrl;                                            // 0x0170(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteGroupUrl;                                            // 0x0180(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryGroupsUrl;                                            // 0x0190(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryGroupMembersUrl;                                      // 0x01A0(0x0010) (Config, NeedCtorLink)
	struct FString                                     AddGroupMembersUrl;                                        // 0x01B0(0x0010) (Config, NeedCtorLink)
	struct FString                                     RemoveGroupMembersUrl;                                     // 0x01C0(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteAllGroupsUrl;                                        // 0x01D0(0x0010) (Config, NeedCtorLink)
	struct FString                                     AcceptGroupInviteUrl;                                      // 0x01E0(0x0010) (Config, NeedCtorLink)
	struct FString                                     RejectGroupInviteUrl;                                      // 0x01F0(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;                  // 0x0200(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GDQS[0xC];                                     // 0x0200(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;            // 0x0218(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_GXBW[0xC];                                     // 0x0218(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;              // 0x0230(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_WK47[0xC];                                     // 0x0230(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;            // 0x0248(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_9U48[0xC];                                     // 0x0248(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpGroupsManager");
		return ptr;
	}



	void CacheGroupMember(const struct FString& MemberId, const struct FString& GroupId, TEnumAsByte<IpDrv_EMcpGroupAcceptState> AcceptState);
	void CacheGroup(const struct FString& RequesterId, const struct FMcpGroup& Group);
	void OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupId, bool bShouldAccept);
	void OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteAllGroups(const struct FString& UniqueUserId);
	void OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void RemoveGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupId, TArray<struct FString>* MemberIds);
	void OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void AddGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupId, TArray<struct FString>* MemberIds, bool bRequiresAcceptance);
	void GetGroupMembers(const struct FString& GroupId, TArray<struct FMcpGroupMember>* GroupMembers);
	void OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupId);
	void GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList);
	void OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryGroups(const struct FString& RequesterId);
	void OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupId);
	void OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void CreateGroup(const struct FString& UniqueUserId, const struct FString& GroupName);
};

// Class IpDrv.McpIdMappingBase
// 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	struct FString                                     McpIdMappingClassName;                                     // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;                          // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_8P17[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;                       // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_V8HX[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpIdMappingBase");
		return ptr;
	}



	void GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings);
	void OnQueryMappingsComplete(const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error);
	void QueryMappings(TArray<struct FString>* ExternalIds, const struct FString& ExternalType);
	void OnAddMappingComplete(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error);
	void AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType);
	class UMcpIdMappingBase* CreateInstance();
};

// Class IpDrv.McpUserInventoryManager
// 0x00F0 (FullSize[0x0268] - InheritedSize[0x0178])
class UMcpUserInventoryManager : public UMcpUserInventoryBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                                         // 0x0178(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteSaveSlotUrl;                                         // 0x0188(0x0010) (Config, NeedCtorLink)
	struct FString                                     ListSaveSlotUrl;                                           // 0x0198(0x0010) (Config, NeedCtorLink)
	struct FString                                     ListItemsUrl;                                              // 0x01A8(0x0010) (Config, NeedCtorLink)
	struct FString                                     PurchaseItemUrl;                                           // 0x01B8(0x0010) (Config, NeedCtorLink)
	struct FString                                     SellItemUrl;                                               // 0x01C8(0x0010) (Config, NeedCtorLink)
	struct FString                                     EarnItemUrl;                                               // 0x01D8(0x0010) (Config, NeedCtorLink)
	struct FString                                     ConsumeItemUrl;                                            // 0x01E8(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteItemUrl;                                             // 0x01F8(0x0010) (Config, NeedCtorLink)
	struct FString                                     IapRecordUrl;                                              // 0x0208(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpInventorySaveSlot>               SaveSlots;                                                 // 0x0218(0x0010) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> SaveSlotRequests;                                          // 0x0228(0x0010) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListSaveSlotRequests;                                      // 0x0238(0x0010) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListItemsRequests;                                         // 0x0248(0x0010) (NeedCtorLink)
	TArray<struct FInventoryItemRequestState>          ItemRequests;                                              // 0x0258(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserInventoryManager");
		return ptr;
	}



	void OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt);
	void OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion);
	void OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion);
	void OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion);
	void OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems);
	void OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar);
	int FindItemRequest(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ItemID, TArray<struct FInventoryItemRequestState>* InItemRequests);
	int FindSaveSlotRequest(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>* InSaveSlotRequests);
	int FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlotId);
	void ParseSaveSlotList(const struct FString& McpId, const struct FString& JsonPayload);
	TArray<struct FString> ParseInventoryForSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& JsonPayload);
	bool GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem);
	void GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems);
	void OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId);
	TArray<struct FString> GetSaveSlotList(const struct FString& McpId);
	void OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QuerySaveSlotList(const struct FString& McpId);
	void OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId);
};

// Class IpDrv.McpUserManagerBase
// 0x0070 (FullSize[0x00E8] - InheritedSize[0x0078])
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserManagerClassName;                                   // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;                        // 0x0088(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_5FM0[0xC];                                     // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAuthenticateUserComplete__Delegate;                    // 0x00A0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_PUM9[0xC];                                     // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;                          // 0x00B8(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_6SIG[0xC];                                     // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;                          // 0x00D0(0x000C) ELEMENT_SIZE_MISMATCH (NeedCtorLink)
	unsigned char                                      UnknownData_FXPH[0xC];                                     // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserManagerBase");
		return ptr;
	}



	void OnDeleteUserComplete(bool bWasSuccessful, const struct FString& Error);
	void DeleteUser(const struct FString& McpId);
	bool GetUser(const struct FString& McpId, struct FMcpUserStatus* User);
	void GetUsers(TArray<struct FMcpUserStatus>* Users);
	void OnQueryUsersComplete(bool bWasSuccessful, const struct FString& Error);
	void QueryUsers(TArray<struct FString>* McpIds);
	void QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive);
	void OnAuthenticateUserComplete(const struct FString& McpId, const struct FString& Token, bool bWasSuccessful, const struct FString& Error);
	void AuthenticateUserMcp(const struct FString& McpId, const struct FString& ClientSecret, const struct FString& UDID);
	void AuthenticateUserFacebook(const struct FString& FacebookId, const struct FString& FacebookToken, const struct FString& UDID);
	void OnRegisterUserComplete(const struct FString& McpId, bool bWasSuccessful, const struct FString& Error);
	void RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken);
	void RegisterUserGenerated();
	class UMcpUserManagerBase* CreateInstance();
};

// Class IpDrv.McpUserManager
// 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	TArray<struct FMcpUserStatus>                      UserStatuses;                                              // 0x00E8(0x0010) (NeedCtorLink)
	struct FString                                     RegisterUserMcpUrl;                                        // 0x00F8(0x0010) (Config, NeedCtorLink)
	struct FString                                     RegisterUserFacebookUrl;                                   // 0x0108(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryUserUrl;                                              // 0x0118(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryUsersUrl;                                             // 0x0128(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteUserUrl;                                             // 0x0138(0x0010) (Config, NeedCtorLink)
	struct FString                                     FacebookAuthUrl;                                           // 0x0148(0x0010) (Config, NeedCtorLink)
	struct FString                                     McpAuthUrl;                                                // 0x0158(0x0010) (Config, NeedCtorLink)
	TArray<class UHttpRequestInterface*>               RegisterUserRequests;                                      // 0x0168(0x0010) (NeedCtorLink)
	TArray<class UHttpRequestInterface*>               QueryUsersRequests;                                        // 0x0178(0x0010) (NeedCtorLink)
	TArray<struct FUserRequest>                        DeleteUserRequests;                                        // 0x0188(0x0010) (NeedCtorLink)
	TArray<class UHttpRequestInterface*>               AuthUserRequests;                                          // 0x0198(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserManager");
		return ptr;
	}



	void OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteUser(const struct FString& McpId);
	bool GetUser(const struct FString& McpId, struct FMcpUserStatus* User);
	void GetUsers(TArray<struct FMcpUserStatus>* Users);
	void OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ParseUsers(const struct FString& JsonPayload);
	void QueryUsers(TArray<struct FString>* McpIds);
	void OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive);
	void OnAuthenticateUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AuthenticateUserMcp(const struct FString& McpId, const struct FString& ClientSecret, const struct FString& UDID);
	void AuthenticateUserFacebook(const struct FString& FacebookId, const struct FString& FacebookToken, const struct FString& UDID);
	void OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	int ParseUser(const struct FString& JsonPayload);
	void RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken);
	void RegisterUserGenerated();
};

// Class IpDrv.WebConnection
// 0x0044 (FullSize[0x031C] - InheritedSize[0x02D8])
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                                 // 0x02D8(0x0008)
	struct FString                                     ReceivedData;                                              // 0x02E0(0x0010) (NeedCtorLink)
	class UWebRequest*                                 Request;                                                   // 0x02F0(0x0008)
	class UWebResponse*                                Response;                                                  // 0x02F8(0x0008)
	class UWebApplication*                             Application;                                               // 0x0300(0x0008)
	unsigned long                                      bDelayCleanup : 1;                                         // 0x0308(0x0001) BIT_FIELD
	int                                                RawBytesExpecting;                                         // 0x030C(0x0004)
	int                                                MaxValueLength;                                            // 0x0310(0x0004) (Config)
	int                                                MaxLineLength;                                             // 0x0314(0x0004) (Config)
	int                                                ConnID;                                                    // 0x0318(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebConnection");
		return ptr;
	}



	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(const struct FString& S);
	void ProcessGet(const struct FString& S);
	void ProcessHead(const struct FString& S);
	void ReceivedLine(const struct FString& S);
	void ReceivedText(const struct FString& Text);
	void Timer();
	void Closed();
	void Accepted();
};

// Class IpDrv.McpIdMappingManager
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	TArray<struct FMcpIdMapping>                       AccountMappings;                                           // 0x00B8(0x0010) (NeedCtorLink)
	struct FString                                     AddMappingUrl;                                             // 0x00C8(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryMappingUrl;                                           // 0x00D8(0x0010) (Config, NeedCtorLink)
	TArray<struct FAddMappingRequest>                  AddMappingRequests;                                        // 0x00E8(0x0010) (NeedCtorLink)
	TArray<struct FQueryMappingRequest>                QueryMappingRequests;                                      // 0x00F8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpIdMappingManager");
		return ptr;
	}



	void GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings);
	void OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryMappings(TArray<struct FString>* ExternalIds, const struct FString& ExternalType);
	void OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
