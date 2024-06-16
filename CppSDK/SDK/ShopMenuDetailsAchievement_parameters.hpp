#pragma once

 

// Package: ShopMenuDetailsAchievement

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ExecuteUbergraph_ShopMenuDetailsAchievement
// 0x01D8 (0x01D8 - 0x0000)
struct ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_930C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_930D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_930E[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_CustomEvent_RewardType;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_930F[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAchievementMaster_bIsValid;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9310[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_FindAchievementMaster_AchievementMaster;  // 0x0068(0x0078)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindRealGoodsMaster_bIsValid;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9311[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopRealGoodsMasterData        CallFunc_FindRealGoodsMaster_RealGoodsMaster;      // 0x00FC(0x0010)(NoDestructor)
	uint8                                         Pad_9312[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetRealGoodsThumbnail_Texture;            // 0x0110(0x0028)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterRealGoodsText_ReturnValue;       // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0148(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9313[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0168(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_2;                          // 0x0198(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C0(0x0018)()
};
static_assert(alignof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement) == 0x000008, "Wrong alignment on ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement");
static_assert(sizeof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement) == 0x0001D8, "Wrong size on ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_IsEmpty_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, K2Node_MakeArray_Array) == 0x000008, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_Array_Get_Item) == 0x000018, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_IsEmpty_ReturnValue_1) == 0x000028, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, K2Node_SwitchInteger_CmpSuccess) == 0x000040, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000041, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, K2Node_CustomEvent_RewardType) == 0x000058, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::K2Node_CustomEvent_RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, K2Node_CustomEvent_ItemIndex) == 0x00005C, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_FindAchievementMaster_bIsValid) == 0x000060, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_FindAchievementMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_FindAchievementMaster_AchievementMaster) == 0x000068, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_FindAchievementMaster_AchievementMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_Conv_IntToString_ReturnValue) == 0x0000E0, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_Conv_StringToName_ReturnValue) == 0x0000F0, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_FindRealGoodsMaster_bIsValid) == 0x0000F8, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_FindRealGoodsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_FindRealGoodsMaster_RealGoodsMaster) == 0x0000FC, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_FindRealGoodsMaster_RealGoodsMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_GetRealGoodsThumbnail_Texture) == 0x000110, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_GetRealGoodsThumbnail_Texture' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_GetMasterRealGoodsText_ReturnValue) == 0x000138, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_GetMasterRealGoodsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_Conv_StringToText_ReturnValue) == 0x000148, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000160, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, K2Node_MakeArray_Array_1) == 0x000168, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_Array_Get_Item_1) == 0x000178, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000180, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_GetDisplayName_ReturnValue_1) == 0x000188, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, K2Node_MakeArray_Array_2) == 0x000198, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0001A8, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001B0, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C0, "Member 'ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsAchievement_C_SetData final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9314[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsAchievement_C_SetData) == 0x000004, "Wrong alignment on ShopMenuDetailsAchievement_C_SetData");
static_assert(sizeof(ShopMenuDetailsAchievement_C_SetData) == 0x000008, "Wrong size on ShopMenuDetailsAchievement_C_SetData");
static_assert(offsetof(ShopMenuDetailsAchievement_C_SetData, RewardType) == 0x000000, "Member 'ShopMenuDetailsAchievement_C_SetData::RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsAchievement_C_SetData, ItemIndex) == 0x000004, "Member 'ShopMenuDetailsAchievement_C_SetData::ItemIndex' has a wrong offset!");

}

