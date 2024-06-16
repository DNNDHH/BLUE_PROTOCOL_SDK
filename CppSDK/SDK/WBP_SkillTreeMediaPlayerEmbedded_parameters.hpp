#pragma once

 

// Package: WBP_SkillTreeMediaPlayerEmbedded

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BFA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	TDelegate<void(const class FString& OpenedUrl)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_OpenedUrl;                      // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                           K2Node_DynamicCast_AsMedia_Source;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BFB[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 K2Node_CustomEvent_Asset;                          // 0x0058(0x0028)(HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLooping_ReturnValue;                   // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BFC[0x5];                                     // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFileMediaSource*                       K2Node_DynamicCast_AsFile_Media_Source;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OpenUrl_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BFD[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x00C0(0x0018)()
};
static_assert(alignof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded) == 0x000008, "Wrong alignment on WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded");
static_assert(sizeof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded) == 0x0000D8, "Wrong size on WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, EntryPoint) == 0x000000, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_CustomEvent_OpenedUrl) == 0x000030, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_CustomEvent_OpenedUrl' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, Temp_object_Variable) == 0x000040, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_DynamicCast_AsMedia_Source) == 0x000048, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_DynamicCast_AsMedia_Source' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_CustomEvent_Asset) == 0x000058, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_CustomEvent_Asset' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_CreateDelegate_OutputDelegate_1) == 0x000080, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_CustomEvent_Loaded) == 0x000090, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_CreateDelegate_OutputDelegate_2) == 0x000098, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, CallFunc_Play_ReturnValue) == 0x0000A9, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, CallFunc_SetLooping_ReturnValue) == 0x0000AA, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::CallFunc_SetLooping_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_DynamicCast_AsFile_Media_Source) == 0x0000B0, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_DynamicCast_AsFile_Media_Source' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, K2Node_DynamicCast_bSuccess_1) == 0x0000B8, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, CallFunc_OpenUrl_ReturnValue) == 0x0000B9, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::CallFunc_OpenUrl_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded, CallFunc_MakeLiteralText_ReturnValue_1) == 0x0000C0, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");

// Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.MovieLoadRequest
// 0x0028 (0x0028 - 0x0000)
struct WBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest final
{
public:
	TSoftObjectPtr<class UObject>                 Asset;                                             // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest) == 0x000008, "Wrong alignment on WBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest");
static_assert(sizeof(WBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest) == 0x000028, "Wrong size on WBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest, Asset) == 0x000000, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest::Asset' has a wrong offset!");

// Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_0 final
{
public:
	class FString                                 OpenedUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_0");
static_assert(sizeof(WBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_0) == 0x000010, "Wrong size on WBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_0");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_0, OpenedUrl) == 0x000000, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_0::OpenedUrl' has a wrong offset!");

// Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnLoaded_41AC99C64E613999FD6600A6E8657C13
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13) == 0x000008, "Wrong alignment on WBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13");
static_assert(sizeof(WBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13) == 0x000008, "Wrong size on WBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13, Loaded) == 0x000000, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13::Loaded' has a wrong offset!");

// Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Request Play Media
// 0x0030 (0x0030 - 0x0000)
struct WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media final
{
public:
	TSoftObjectPtr<class UMediaSource>            MediaSource;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media) == 0x000008, "Wrong alignment on WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media");
static_assert(sizeof(WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media) == 0x000030, "Wrong size on WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media, MediaSource) == 0x000000, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media::MediaSource' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media, Result) == 0x000028, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media::Result' has a wrong offset!");
static_assert(offsetof(WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000029, "Member 'WBP_SkillTreeMediaPlayerEmbedded_C_Request_Play_Media::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

}

