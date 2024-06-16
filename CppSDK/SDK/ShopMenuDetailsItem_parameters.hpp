#pragma once

 

// Package: ShopMenuDetailsItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'ShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickShowProduct__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B19[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature) == 0x000004, "Wrong alignment on ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature, RewardType) == 0x000000, "Member 'ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature::RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature, ItemIndex) == 0x000004, "Member 'ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature::ItemIndex' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ExecuteUbergraph_ShopMenuDetailsItem
// 0x0360 (0x0360 - 0x0000)
struct ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBDetailsZoomIn                             Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBDetailsZoomIn                             Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B1A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmountMin;                      // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B1B[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemBoxMaster_bIsValid;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B1C[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterItemBox                       CallFunc_FindItemBoxMaster_ItemBoxMaster;          // 0x0070(0x0020)()
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B1D[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0098(0x00D0)()
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0168(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select_Default;                             // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B1E[0x5];                                     // 0x017B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0180(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B1F[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B0(0x0018)()
	E_SBDetailsZoomIn                             K2Node_Select_Default_1;                           // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B20[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindProductImagineByMaterialItem_bIsValid; // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B21[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindProductImagineByMaterialItem_ImagineMaster; // 0x01E0(0x00B0)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0292(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0293(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0295(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B22[0x2];                                     // 0x0296(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_1;                          // 0x0298(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_FindProductImagineByMaterialItem_bIsValid_1; // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B23[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindProductImagineByMaterialItem_ImagineMaster_1; // 0x02B0(0x00B0)()
};
static_assert(alignof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem) == 0x000008, "Wrong alignment on ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem");
static_assert(sizeof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem) == 0x000360, "Wrong size on ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, Temp_byte_Variable) == 0x000004, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, Temp_byte_Variable_1) == 0x000005, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000006, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, Temp_bool_Variable) == 0x000007, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_MakeArray_Array) == 0x000008, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_Array_Get_Item) == 0x000018, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, Temp_int_Variable) == 0x000040, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_CustomEvent_ItemIndex) == 0x000044, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_CustomEvent_Amount) == 0x000048, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_CustomEvent_AmountMin) == 0x00004C, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_CustomEvent_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000060, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, Temp_int_Variable_1) == 0x000064, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_FindItemBoxMaster_bIsValid) == 0x000068, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_FindItemBoxMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_FindItemBoxMaster_ItemBoxMaster) == 0x000070, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_FindItemBoxMaster_ItemBoxMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_FindItemMaster_bIsValid) == 0x000090, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_FindItemMaster_ItemMaster) == 0x000098, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_Event_Animation) == 0x000168, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000170, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, Temp_bool_Variable_1) == 0x000171, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_SwitchInteger_CmpSuccess) == 0x000172, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_Not_PreBool_ReturnValue) == 0x000173, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_Select_Default) == 0x000174, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, Temp_bool_Variable_2) == 0x000178, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000179, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00017A, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000180, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000198, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_GetItemText_ReturnValue) == 0x0001A0, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B0, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_Select_Default_1) == 0x0001C8, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001C9, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0001D0, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_FindProductImagineByMaterialItem_bIsValid) == 0x0001D8, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_FindProductImagineByMaterialItem_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_FindProductImagineByMaterialItem_ImagineMaster) == 0x0001E0, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_FindProductImagineByMaterialItem_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x000290, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_BooleanAND_ReturnValue) == 0x000291, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_Not_PreBool_ReturnValue_3) == 0x000292, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_BooleanAND_ReturnValue_1) == 0x000293, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_BooleanAND_ReturnValue_2) == 0x000294, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_Select_Default_2) == 0x000295, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, K2Node_MakeArray_Array_1) == 0x000298, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_FindProductImagineByMaterialItem_bIsValid_1) == 0x0002A8, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_FindProductImagineByMaterialItem_bIsValid_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem, CallFunc_FindProductImagineByMaterialItem_ImagineMaster_1) == 0x0002B0, "Member 'ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem::CallFunc_FindProductImagineByMaterialItem_ImagineMaster_1' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsItem_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsItem_C_OnAnimationFinished) == 0x000008, "Wrong alignment on ShopMenuDetailsItem_C_OnAnimationFinished");
static_assert(sizeof(ShopMenuDetailsItem_C_OnAnimationFinished) == 0x000008, "Wrong size on ShopMenuDetailsItem_C_OnAnimationFinished");
static_assert(offsetof(ShopMenuDetailsItem_C_OnAnimationFinished, Animation) == 0x000000, "Member 'ShopMenuDetailsItem_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ShowDetails
// 0x000C (0x000C - 0x0000)
struct ShopMenuDetailsItem_C_ShowDetails final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_AmountMin;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsItem_C_ShowDetails) == 0x000004, "Wrong alignment on ShopMenuDetailsItem_C_ShowDetails");
static_assert(sizeof(ShopMenuDetailsItem_C_ShowDetails) == 0x00000C, "Wrong size on ShopMenuDetailsItem_C_ShowDetails");
static_assert(offsetof(ShopMenuDetailsItem_C_ShowDetails, ItemIndex) == 0x000000, "Member 'ShopMenuDetailsItem_C_ShowDetails::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ShowDetails, Param_Amount) == 0x000004, "Member 'ShopMenuDetailsItem_C_ShowDetails::Param_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_ShowDetails, Param_AmountMin) == 0x000008, "Member 'ShopMenuDetailsItem_C_ShowDetails::Param_AmountMin' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemIconImage
// 0x0004 (0x0004 - 0x0000)
struct ShopMenuDetailsItem_C_SetItemIconImage final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsItem_C_SetItemIconImage) == 0x000004, "Wrong alignment on ShopMenuDetailsItem_C_SetItemIconImage");
static_assert(sizeof(ShopMenuDetailsItem_C_SetItemIconImage) == 0x000004, "Wrong size on ShopMenuDetailsItem_C_SetItemIconImage");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemIconImage, InItemIndex) == 0x000000, "Member 'ShopMenuDetailsItem_C_SetItemIconImage::InItemIndex' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemEffectText
// 0x0100 (0x0100 - 0x0000)
struct ShopMenuDetailsItem_C_SetItemEffectText final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B24[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0008(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E8(0x0018)()
};
static_assert(alignof(ShopMenuDetailsItem_C_SetItemEffectText) == 0x000008, "Wrong alignment on ShopMenuDetailsItem_C_SetItemEffectText");
static_assert(sizeof(ShopMenuDetailsItem_C_SetItemEffectText) == 0x000100, "Wrong size on ShopMenuDetailsItem_C_SetItemEffectText");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemEffectText, InItemID) == 0x000000, "Member 'ShopMenuDetailsItem_C_SetItemEffectText::InItemID' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemEffectText, CallFunc_FindItemMaster_bIsValid) == 0x000004, "Member 'ShopMenuDetailsItem_C_SetItemEffectText::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemEffectText, CallFunc_FindItemMaster_ItemMaster) == 0x000008, "Member 'ShopMenuDetailsItem_C_SetItemEffectText::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemEffectText, CallFunc_GetItemText_ReturnValue) == 0x0000D8, "Member 'ShopMenuDetailsItem_C_SetItemEffectText::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E8, "Member 'ShopMenuDetailsItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemRecastText
// 0x0130 (0x0130 - 0x0000)
struct ShopMenuDetailsItem_C_SetItemRecastText final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B25[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0008(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsItem_C_SetItemRecastText) == 0x000008, "Wrong alignment on ShopMenuDetailsItem_C_SetItemRecastText");
static_assert(sizeof(ShopMenuDetailsItem_C_SetItemRecastText) == 0x000130, "Wrong size on ShopMenuDetailsItem_C_SetItemRecastText");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemRecastText, InItemID) == 0x000000, "Member 'ShopMenuDetailsItem_C_SetItemRecastText::InItemID' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemRecastText, CallFunc_FindItemMaster_bIsValid) == 0x000004, "Member 'ShopMenuDetailsItem_C_SetItemRecastText::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemRecastText, CallFunc_FindItemMaster_ItemMaster) == 0x000008, "Member 'ShopMenuDetailsItem_C_SetItemRecastText::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemRecastText, CallFunc_GetItemText_ReturnValue) == 0x0000D8, "Member 'ShopMenuDetailsItem_C_SetItemRecastText::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemRecastText, CallFunc_Conv_FloatToString_ReturnValue) == 0x0000E8, "Member 'ShopMenuDetailsItem_C_SetItemRecastText::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemRecastText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F8, "Member 'ShopMenuDetailsItem_C_SetItemRecastText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemRecastText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'ShopMenuDetailsItem_C_SetItemRecastText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetItemRecastText, CallFunc_NotEqual_TextText_ReturnValue) == 0x000128, "Member 'ShopMenuDetailsItem_C_SetItemRecastText::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetIntervalGrpVisibility
// 0x0005 (0x0005 - 0x0000)
struct ShopMenuDetailsItem_C_SetIntervalGrpVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsItem_C_SetIntervalGrpVisibility) == 0x000001, "Wrong alignment on ShopMenuDetailsItem_C_SetIntervalGrpVisibility");
static_assert(sizeof(ShopMenuDetailsItem_C_SetIntervalGrpVisibility) == 0x000005, "Wrong size on ShopMenuDetailsItem_C_SetIntervalGrpVisibility");
static_assert(offsetof(ShopMenuDetailsItem_C_SetIntervalGrpVisibility, InIsVisible) == 0x000000, "Member 'ShopMenuDetailsItem_C_SetIntervalGrpVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetIntervalGrpVisibility, Temp_bool_Variable) == 0x000001, "Member 'ShopMenuDetailsItem_C_SetIntervalGrpVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetIntervalGrpVisibility, Temp_byte_Variable) == 0x000002, "Member 'ShopMenuDetailsItem_C_SetIntervalGrpVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetIntervalGrpVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'ShopMenuDetailsItem_C_SetIntervalGrpVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsItem_C_SetIntervalGrpVisibility, K2Node_Select_Default) == 0x000004, "Member 'ShopMenuDetailsItem_C_SetIntervalGrpVisibility::K2Node_Select_Default' has a wrong offset!");

}

