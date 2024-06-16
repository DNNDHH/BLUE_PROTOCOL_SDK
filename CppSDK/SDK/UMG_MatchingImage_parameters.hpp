#pragma once

 

// Package: UMG_MatchingImage

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingImage.UMG_MatchingImage_C.ExecuteUbergraph_UMG_MatchingImage
// 0x0070 (0x0070 - 0x0000)
struct UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_86DB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_TextureReference;               // 0x0018(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86DC[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86DD[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage) == 0x000008, "Wrong alignment on UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage");
static_assert(sizeof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage) == 0x000070, "Wrong size on UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, EntryPoint) == 0x000000, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, K2Node_CustomEvent_TextureReference) == 0x000018, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::K2Node_CustomEvent_TextureReference' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000040, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, Temp_object_Variable) == 0x000048, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, K2Node_DynamicCast_AsTexture_2D) == 0x000050, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, K2Node_CustomEvent_Loaded) == 0x000060, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000068, "Member 'UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingImage.UMG_MatchingImage_C.UIImageAssetLoad
// 0x0028 (0x0028 - 0x0000)
struct UMG_MatchingImage_C_UIImageAssetLoad final
{
public:
	TSoftObjectPtr<class UTexture2D>              TextureReference;                                  // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingImage_C_UIImageAssetLoad) == 0x000008, "Wrong alignment on UMG_MatchingImage_C_UIImageAssetLoad");
static_assert(sizeof(UMG_MatchingImage_C_UIImageAssetLoad) == 0x000028, "Wrong size on UMG_MatchingImage_C_UIImageAssetLoad");
static_assert(offsetof(UMG_MatchingImage_C_UIImageAssetLoad, TextureReference) == 0x000000, "Member 'UMG_MatchingImage_C_UIImageAssetLoad::TextureReference' has a wrong offset!");

// Function UMG_MatchingImage.UMG_MatchingImage_C.OnLoaded_119447794C1BA6C029376DAB31003374
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374) == 0x000008, "Wrong alignment on UMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374");
static_assert(sizeof(UMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374) == 0x000008, "Wrong size on UMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374");
static_assert(offsetof(UMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374, Loaded) == 0x000000, "Member 'UMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374::Loaded' has a wrong offset!");

// Function UMG_MatchingImage.UMG_MatchingImage_C.SetGameContentID
// 0x0220 (0x0220 - 0x0000)
struct UMG_MatchingImage_C_SetGameContentID final
{
public:
	class FName                                   GameContentId;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetUIImageAsset_Dungeon_ById_ImageAsset;  // 0x0008(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86DE[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfoByGameContentId_OutMapInfo;     // 0x0038(0x01E0)()
	bool                                          CallFunc_GetMapInfoByGameContentId_ReturnValue;    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingImage_C_SetGameContentID) == 0x000008, "Wrong alignment on UMG_MatchingImage_C_SetGameContentID");
static_assert(sizeof(UMG_MatchingImage_C_SetGameContentID) == 0x000220, "Wrong size on UMG_MatchingImage_C_SetGameContentID");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, GameContentId) == 0x000000, "Member 'UMG_MatchingImage_C_SetGameContentID::GameContentId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, CallFunc_GetUIImageAsset_Dungeon_ById_ImageAsset) == 0x000008, "Member 'UMG_MatchingImage_C_SetGameContentID::CallFunc_GetUIImageAsset_Dungeon_ById_ImageAsset' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000030, "Member 'UMG_MatchingImage_C_SetGameContentID::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, CallFunc_NotEqual_SoftObjectReference_ReturnValue) == 0x000031, "Member 'UMG_MatchingImage_C_SetGameContentID::CallFunc_NotEqual_SoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000032, "Member 'UMG_MatchingImage_C_SetGameContentID::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, CallFunc_GetMapInfoByGameContentId_OutMapInfo) == 0x000038, "Member 'UMG_MatchingImage_C_SetGameContentID::CallFunc_GetMapInfoByGameContentId_OutMapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, CallFunc_GetMapInfoByGameContentId_ReturnValue) == 0x000218, "Member 'UMG_MatchingImage_C_SetGameContentID::CallFunc_GetMapInfoByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000219, "Member 'UMG_MatchingImage_C_SetGameContentID::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentID, K2Node_SwitchString_CmpSuccess) == 0x00021A, "Member 'UMG_MatchingImage_C_SetGameContentID::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function UMG_MatchingImage.UMG_MatchingImage_C.SetBestScore
// 0x0014 (0x0014 - 0x0000)
struct UMG_MatchingImage_C_SetBestScore final
{
public:
	int32                                         Record;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClearCount;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86DF[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MapId;                                             // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingImage_C_SetBestScore) == 0x000004, "Wrong alignment on UMG_MatchingImage_C_SetBestScore");
static_assert(sizeof(UMG_MatchingImage_C_SetBestScore) == 0x000014, "Wrong size on UMG_MatchingImage_C_SetBestScore");
static_assert(offsetof(UMG_MatchingImage_C_SetBestScore, Record) == 0x000000, "Member 'UMG_MatchingImage_C_SetBestScore::Record' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetBestScore, ClearCount) == 0x000004, "Member 'UMG_MatchingImage_C_SetBestScore::ClearCount' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetBestScore, ClassType) == 0x000008, "Member 'UMG_MatchingImage_C_SetBestScore::ClassType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetBestScore, MapId) == 0x00000C, "Member 'UMG_MatchingImage_C_SetBestScore::MapId' has a wrong offset!");

// Function UMG_MatchingImage.UMG_MatchingImage_C.SetGameContentId2
// 0x0210 (0x0210 - 0x0000)
struct UMG_MatchingImage_C_SetGameContentId2 final
{
public:
	struct FSBMapInfo                             HelpModeInfo;                                      // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetUIImageAsset_Dungeon_ImageAsset;       // 0x01E0(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingImage_C_SetGameContentId2) == 0x000008, "Wrong alignment on UMG_MatchingImage_C_SetGameContentId2");
static_assert(sizeof(UMG_MatchingImage_C_SetGameContentId2) == 0x000210, "Wrong size on UMG_MatchingImage_C_SetGameContentId2");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentId2, HelpModeInfo) == 0x000000, "Member 'UMG_MatchingImage_C_SetGameContentId2::HelpModeInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentId2, CallFunc_GetUIImageAsset_Dungeon_ImageAsset) == 0x0001E0, "Member 'UMG_MatchingImage_C_SetGameContentId2::CallFunc_GetUIImageAsset_Dungeon_ImageAsset' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentId2, CallFunc_NotEqual_SoftObjectReference_ReturnValue) == 0x000208, "Member 'UMG_MatchingImage_C_SetGameContentId2::CallFunc_NotEqual_SoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentId2, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000209, "Member 'UMG_MatchingImage_C_SetGameContentId2::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_C_SetGameContentId2, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x00020A, "Member 'UMG_MatchingImage_C_SetGameContentId2::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");

}

