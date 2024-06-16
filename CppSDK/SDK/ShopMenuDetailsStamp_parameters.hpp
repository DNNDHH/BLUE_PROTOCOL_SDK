#pragma once

 

// Package: ShopMenuDetailsStamp

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsStamp_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsStamp_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsStamp_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsStamp_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsStamp_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsStamp_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsStamp_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.ExecuteUbergraph_ShopMenuDetailsStamp
// 0x02B0 (0x02B0 - 0x0000)
struct ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A9F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA0[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA1[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0068(0x0010)(ReferenceParm)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_3;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA2[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_3;                          // 0x00B8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsEmpty_ReturnValue_4;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA3[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;        // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_3;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_5;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA4[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_4;                          // 0x00F8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_4;                         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_4;        // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_4;             // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA5[0x5];                                     // 0x012B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_CustomEvent_RewardType;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AA6[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindStampDataByStampId_IsExists;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA7[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampMasterData                     CallFunc_FindStampDataByStampId_ReturnValue;       // 0x0150(0x0020)()
	bool                                          CallFunc_FindStampCategoryMaster_bIsValid;         // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA8[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_FindStampCategoryMaster_StampCategoryMaster; // 0x0178(0x0020)()
	struct FSBStampCategoryData                   CallFunc_FindStampCategoryData_Data;               // 0x0198(0x0038)()
	bool                                          CallFunc_FindStampCategoryData_ReturnValue;        // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AA9[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampData                           CallFunc_FindStampData_Data;                       // 0x01D8(0x0088)()
	bool                                          CallFunc_FindStampData_ReturnValue;                // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0263(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AAA[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_5;                          // 0x0268(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_5;                         // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_5;        // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_5;             // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_6;                          // 0x0298(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp) == 0x000008, "Wrong alignment on ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp");
static_assert(sizeof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp) == 0x0002B0, "Wrong size on ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_MakeArray_Array) == 0x000010, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_Array_Get_Item) == 0x000020, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsEmpty_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsEmpty_ReturnValue_1) == 0x000048, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsEmpty_ReturnValue_2) == 0x000049, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_MakeArray_Array_1) == 0x000050, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_MakeArray_Array_2) == 0x000068, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000078, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_Array_Get_Item_2) == 0x000080, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_GetDisplayName_ReturnValue_1) == 0x000088, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000098, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_GetDisplayName_ReturnValue_2) == 0x0000A0, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsEmpty_ReturnValue_3) == 0x0000B0, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_MakeArray_Array_3) == 0x0000B8, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsEmpty_ReturnValue_4) == 0x0000C8, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsEmpty_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_Array_Get_Item_3) == 0x0000D0, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x0000D8, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_GetDisplayName_ReturnValue_3) == 0x0000E0, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_GetDisplayName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsEmpty_ReturnValue_5) == 0x0000F0, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsEmpty_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_MakeArray_Array_4) == 0x0000F8, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_Array_Get_Item_4) == 0x000108, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_K2_GetRootComponent_ReturnValue_4) == 0x000110, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_K2_GetRootComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_GetDisplayName_ReturnValue_4) == 0x000118, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_GetDisplayName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_SwitchInteger_CmpSuccess) == 0x000128, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000129, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00012A, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_PlayAnimation_ReturnValue) == 0x000130, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_PlayAnimation_ReturnValue_1) == 0x000138, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_CustomEvent_RewardType) == 0x000140, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_CustomEvent_RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_CustomEvent_ItemIndex) == 0x000144, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_FindStampDataByStampId_IsExists) == 0x000148, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_FindStampDataByStampId_IsExists' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_FindStampDataByStampId_ReturnValue) == 0x000150, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_FindStampDataByStampId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_FindStampCategoryMaster_bIsValid) == 0x000170, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_FindStampCategoryMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_FindStampCategoryMaster_StampCategoryMaster) == 0x000178, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_FindStampCategoryMaster_StampCategoryMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_FindStampCategoryData_Data) == 0x000198, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_FindStampCategoryData_Data' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_FindStampCategoryData_ReturnValue) == 0x0001D0, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_FindStampCategoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_FindStampData_Data) == 0x0001D8, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_FindStampData_Data' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_FindStampData_ReturnValue) == 0x000260, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_FindStampData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000261, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000262, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000263, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_MakeArray_Array_5) == 0x000268, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_Array_Get_Item_5) == 0x000278, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_K2_GetRootComponent_ReturnValue_5) == 0x000280, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_K2_GetRootComponent_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_GetDisplayName_ReturnValue_5) == 0x000288, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_GetDisplayName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, K2Node_MakeArray_Array_6) == 0x000298, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0002A8, "Member 'ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsStamp_C_SetData final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AAB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsStamp_C_SetData) == 0x000004, "Wrong alignment on ShopMenuDetailsStamp_C_SetData");
static_assert(sizeof(ShopMenuDetailsStamp_C_SetData) == 0x000008, "Wrong size on ShopMenuDetailsStamp_C_SetData");
static_assert(offsetof(ShopMenuDetailsStamp_C_SetData, RewardType) == 0x000000, "Member 'ShopMenuDetailsStamp_C_SetData::RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsStamp_C_SetData, ItemIndex) == 0x000004, "Member 'ShopMenuDetailsStamp_C_SetData::ItemIndex' has a wrong offset!");

}

