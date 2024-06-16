#pragma once

 

// Package: UMG_ProductItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "E_SBProductDetailType_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_ProductItem.UMG_ProductItem_C.OnItemClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductItem_C_OnItemClicked__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_OnItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductItem_C_OnItemClicked__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_OnItemClicked__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductItem_C_OnItemClicked__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_OnItemClicked__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_ProductItem_C_OnItemClicked__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.OnSelectedItemData__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductItem_C_OnSelectedItemData__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItem_C_OnSelectedItemData__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductItem_C_OnSelectedItemData__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_OnSelectedItemData__DelegateSignature) == 0x000010, "Wrong size on UMG_ProductItem_C_OnSelectedItemData__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_OnSelectedItemData__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_ProductItem_C_OnSelectedItemData__DelegateSignature::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_OnSelectedItemData__DelegateSignature, bTrying) == 0x000008, "Member 'UMG_ProductItem_C_OnSelectedItemData__DelegateSignature::bTrying' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.OnChangeStep__DelegateSignature
// 0x01C8 (0x01C8 - 0x0000)
struct UMG_ProductItem_C_OnChangeStep__DelegateSignature final
{
public:
	struct FSBGashaInfo                           GashaInfo;                                         // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_ProductItem_C_OnChangeStep__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductItem_C_OnChangeStep__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_OnChangeStep__DelegateSignature) == 0x0001C8, "Wrong size on UMG_ProductItem_C_OnChangeStep__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_OnChangeStep__DelegateSignature, GashaInfo) == 0x000000, "Member 'UMG_ProductItem_C_OnChangeStep__DelegateSignature::GashaInfo' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.OnChangePurchaseType__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_ProductItem_C_OnChangePurchaseType__DelegateSignature final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_OnChangePurchaseType__DelegateSignature) == 0x000004, "Wrong alignment on UMG_ProductItem_C_OnChangePurchaseType__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_OnChangePurchaseType__DelegateSignature) == 0x000004, "Wrong size on UMG_ProductItem_C_OnChangePurchaseType__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_OnChangePurchaseType__DelegateSignature, BtnId) == 0x000000, "Member 'UMG_ProductItem_C_OnChangePurchaseType__DelegateSignature::BtnId' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.ExecuteUbergraph_UMG_ProductItem
// 0x03A0 (0x03A0 - 0x0000)
struct UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9663[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9664[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_2;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9665[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_BtnId;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsVisible;              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9666[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9667[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_4;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaInfo                           K2Node_ComponentBoundEvent_GashaInfo;              // 0x0060(0x01C8)()
	bool                                          CallFunc_IsCurrentStepUp_ReturnValue;              // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9668[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_5;                             // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0230(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9669[0x5];                                     // 0x0243(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_966A[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue_1;          // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaLapCount_ReturnValue;      // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepMax_ReturnValue;       // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepNow_ReturnValue;       // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentStepUp_ReturnValue_1;            // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x0275(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0276(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_966B[0x1];                                     // 0x0277(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0278(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_2;                  // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x028B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_966C[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectStepNum_OutSelectStepNum;        // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_966D[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRoseOrbShopItemMasterData           K2Node_CustomEvent_ProductData;                    // 0x0298(0x0060)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x02F8(0x0010)(ZeroConstructor, NoDestructor)
	class UGashaShopSubWindow_C*                  CallFunc_Create_ReturnValue;                       // 0x0308(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0312(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0313(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_966E[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data_1;                 // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0320(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                CallFunc_GetOffsets_ReturnValue;                   // 0x0328(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data;                   // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bTrying;                // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_966F[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0344(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9670[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_SBProductItemData_C*>        K2Node_CustomEvent_ItemDataList;                   // 0x0358(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_ComponentBoundEvent_Value;                  // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9671[0x4];                                     // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0370(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9672[0x3];                                     // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x037C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x038C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x0394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0395(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x0396(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9673[0x1];                                     // 0x0397(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem) == 0x000008, "Wrong alignment on UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem");
static_assert(sizeof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem) == 0x0003A0, "Wrong size on UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, EntryPoint) == 0x000000, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_byte_Variable) == 0x000004, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_byte_Variable_1) == 0x000005, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_bool_Variable) == 0x000006, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_float_Variable) == 0x000008, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_float_Variable_1) == 0x00000C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000012, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000013, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_bool_Variable_1) == 0x000015, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_BooleanOR_ReturnValue_1) == 0x000016, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_float_Variable_2) == 0x000018, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_Select_Default) == 0x00001C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_float_Variable_3) == 0x000020, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000024, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000025, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000026, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_BooleanOR_ReturnValue_2) == 0x000027, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_bool_Variable_2) == 0x000028, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_BooleanOR_ReturnValue_3) == 0x000029, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_ComponentBoundEvent_BtnId) == 0x00002C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_ComponentBoundEvent_BtnId' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_Select_Default_1) == 0x000030, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x000034, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsVisible_ReturnValue) == 0x000035, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_ComponentBoundEvent_IsVisible) == 0x000036, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_ComponentBoundEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_Not_PreBool_ReturnValue) == 0x000037, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_bool_Variable_3) == 0x000038, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000039, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000048, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_float_Variable_4) == 0x000054, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_float_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetGashaComponent_ReturnValue) == 0x000058, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_ComponentBoundEvent_GashaInfo) == 0x000060, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_ComponentBoundEvent_GashaInfo' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsCurrentStepUp_ReturnValue) == 0x000228, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsCurrentStepUp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_float_Variable_5) == 0x00022C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_float_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_CreateDelegate_OutputDelegate) == 0x000230, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsValid_ReturnValue) == 0x000240, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsValid_ReturnValue_1) == 0x000241, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_bool_Variable_4) == 0x000242, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetPlayerController_ReturnValue_1) == 0x000248, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000250, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_DynamicCast_bSuccess_1) == 0x000258, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_Select_Default_2) == 0x00025C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetGashaComponent_ReturnValue_1) == 0x000260, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetGashaComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetCurrentGashaLapCount_ReturnValue) == 0x000268, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetCurrentGashaLapCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetCurrentGashaStepMax_ReturnValue) == 0x00026C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetCurrentGashaStepMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetCurrentGashaStepNow_ReturnValue) == 0x000270, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetCurrentGashaStepNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsCurrentStepUp_ReturnValue_1) == 0x000274, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsCurrentStepUp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000275, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsValid_ReturnValue_2) == 0x000276, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x000278, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsVisible_ReturnValue_1) == 0x000288, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsVisible_ReturnValue_2) == 0x000289, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsVisible_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00028A, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00028B, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_Select_Default_3) == 0x00028C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetSelectStepNum_OutSelectStepNum) == 0x000290, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetSelectStepNum_OutSelectStepNum' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_CustomEvent_ProductData) == 0x000298, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_CustomEvent_ProductData' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002F8, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_Create_ReturnValue) == 0x000308, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, Temp_bool_Variable_5) == 0x000310, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000311, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_Select_Default_4) == 0x000312, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_Event_IsDesignTime) == 0x000313, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_BooleanAND_ReturnValue) == 0x000314, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_ComponentBoundEvent_Data_1) == 0x000318, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_ComponentBoundEvent_Data_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000320, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetOffsets_ReturnValue) == 0x000328, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetOffsets_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_ComponentBoundEvent_Data) == 0x000338, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_ComponentBoundEvent_bTrying) == 0x000340, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_ComponentBoundEvent_bTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_MakeStruct_Margin) == 0x000344, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_CustomEvent_ItemDataList) == 0x000358, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_CustomEvent_ItemDataList' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_ComponentBoundEvent_Value) == 0x000368, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000370, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000378, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_GetPosition_ReturnValue) == 0x00037C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_BreakVector2D_X) == 0x000384, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_BreakVector2D_Y) == 0x000388, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_MakeVector2D_ReturnValue) == 0x00038C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000394, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_BooleanAND_ReturnValue_1) == 0x000395, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, K2Node_Select_Default_5) == 0x000396, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_PlaySE_ReturnValue) == 0x000398, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem, CallFunc_IsValid_ReturnValue_3) == 0x00039C, "Member 'UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'UMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.CreateItemList
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductItem_C_CreateItemList final
{
public:
	TArray<class UBP_SBProductItemData_C*>        ItemDataList;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_ProductItem_C_CreateItemList) == 0x000008, "Wrong alignment on UMG_ProductItem_C_CreateItemList");
static_assert(sizeof(UMG_ProductItem_C_CreateItemList) == 0x000010, "Wrong size on UMG_ProductItem_C_CreateItemList");
static_assert(offsetof(UMG_ProductItem_C_CreateItemList, ItemDataList) == 0x000000, "Member 'UMG_ProductItem_C_CreateItemList::ItemDataList' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature) == 0x000010, "Wrong size on UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature, bTrying) == 0x000008, "Member 'UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature::bTrying' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItem_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_ProductItem_C_PreConstruct");
static_assert(sizeof(UMG_ProductItem_C_PreConstruct) == 0x000001, "Wrong size on UMG_ProductItem_C_PreConstruct");
static_assert(offsetof(UMG_ProductItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_ProductItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetProductData_RoPS
// 0x0060 (0x0060 - 0x0000)
struct UMG_ProductItem_C_SetProductData_RoPS final
{
public:
	struct FSBRoseOrbShopItemMasterData           Param_ProductData;                                 // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_ProductItem_C_SetProductData_RoPS) == 0x000008, "Wrong alignment on UMG_ProductItem_C_SetProductData_RoPS");
static_assert(sizeof(UMG_ProductItem_C_SetProductData_RoPS) == 0x000060, "Wrong size on UMG_ProductItem_C_SetProductData_RoPS");
static_assert(offsetof(UMG_ProductItem_C_SetProductData_RoPS, Param_ProductData) == 0x000000, "Member 'UMG_ProductItem_C_SetProductData_RoPS::Param_ProductData' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature
// 0x01C8 (0x01C8 - 0x0000)
struct UMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature final
{
public:
	struct FSBGashaInfo                           GashaInfo;                                         // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature) == 0x0001C8, "Wrong size on UMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature, GashaInfo) == 0x000000, "Member 'UMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature::GashaInfo' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged __DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature) == 0x000001, "Wrong alignment on UMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature) == 0x000001, "Wrong size on UMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature, Param_IsVisible) == 0x000000, "Member 'UMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature::Param_IsVisible' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on UMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(UMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000004, "Wrong size on UMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(UMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, BtnId) == 0x000000, "Member 'UMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::BtnId' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetProductInfo
// 0x0038 (0x0038 - 0x0000)
struct UMG_ProductItem_C_SetProductInfo final
{
public:
	bool                                          Param_ProductData;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9674[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Description;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FShopItemInfo>                  ItemInfoList;                                      // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_SetProductInfo) == 0x000008, "Wrong alignment on UMG_ProductItem_C_SetProductInfo");
static_assert(sizeof(UMG_ProductItem_C_SetProductInfo) == 0x000038, "Wrong size on UMG_ProductItem_C_SetProductInfo");
static_assert(offsetof(UMG_ProductItem_C_SetProductInfo, Param_ProductData) == 0x000000, "Member 'UMG_ProductItem_C_SetProductInfo::Param_ProductData' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInfo, Description) == 0x000008, "Member 'UMG_ProductItem_C_SetProductInfo::Description' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInfo, ItemInfoList) == 0x000020, "Member 'UMG_ProductItem_C_SetProductInfo::ItemInfoList' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInfo, Temp_byte_Variable) == 0x000030, "Member 'UMG_ProductItem_C_SetProductInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInfo, Temp_byte_Variable_1) == 0x000031, "Member 'UMG_ProductItem_C_SetProductInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInfo, Temp_bool_Variable) == 0x000032, "Member 'UMG_ProductItem_C_SetProductInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInfo, K2Node_Select_Default) == 0x000033, "Member 'UMG_ProductItem_C_SetProductInfo::K2Node_Select_Default' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.GetRemainNum
// 0x0004 (0x0004 - 0x0000)
struct UMG_ProductItem_C_GetRemainNum final
{
public:
	int32                                         Remain;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_GetRemainNum) == 0x000004, "Wrong alignment on UMG_ProductItem_C_GetRemainNum");
static_assert(sizeof(UMG_ProductItem_C_GetRemainNum) == 0x000004, "Wrong size on UMG_ProductItem_C_GetRemainNum");
static_assert(offsetof(UMG_ProductItem_C_GetRemainNum, Remain) == 0x000000, "Member 'UMG_ProductItem_C_GetRemainNum::Remain' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetPurcahseNum
// 0x0048 (0x0048 - 0x0000)
struct UMG_ProductItem_C_SetPurcahseNum final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9675[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9676[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
};
static_assert(alignof(UMG_ProductItem_C_SetPurcahseNum) == 0x000008, "Wrong alignment on UMG_ProductItem_C_SetPurcahseNum");
static_assert(sizeof(UMG_ProductItem_C_SetPurcahseNum) == 0x000048, "Wrong size on UMG_ProductItem_C_SetPurcahseNum");
static_assert(offsetof(UMG_ProductItem_C_SetPurcahseNum, Amount) == 0x000000, "Member 'UMG_ProductItem_C_SetPurcahseNum::Amount' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPurcahseNum, Temp_bool_Variable) == 0x000004, "Member 'UMG_ProductItem_C_SetPurcahseNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPurcahseNum, CallFunc_Greater_IntInt_ReturnValue) == 0x000005, "Member 'UMG_ProductItem_C_SetPurcahseNum::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPurcahseNum, CallFunc_Multiply_IntInt_ReturnValue) == 0x000008, "Member 'UMG_ProductItem_C_SetPurcahseNum::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPurcahseNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UMG_ProductItem_C_SetPurcahseNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPurcahseNum, K2Node_Select_Default) == 0x000028, "Member 'UMG_ProductItem_C_SetPurcahseNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPurcahseNum, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x00002C, "Member 'UMG_ProductItem_C_SetPurcahseNum::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPurcahseNum, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'UMG_ProductItem_C_SetPurcahseNum::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetDetailType
// 0x0170 (0x0170 - 0x0000)
struct UMG_ProductItem_C_SetDetailType final
{
public:
	E_SBProductDetailType                         InDetailType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9677[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_8;                              // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_9;                              // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_10;                             // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable;                                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9678[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Temp_object_Variable;                              // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_1;                            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_2;                            // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_3;                            // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_4;                            // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_5;                            // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_6;                            // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_7;                            // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_8;                            // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_9;                            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x00BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9679[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_11;                             // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_967A[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x00D8(0x001C)(NoDestructor)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform_1;               // 0x00F4(0x001C)(NoDestructor)
	struct FWidgetTransform                       K2Node_Select_Default_1;                           // 0x0110(0x001C)(NoDestructor)
	class FName                                   Temp_name_Variable_12;                             // 0x012C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         Temp_byte_Variable_1;                              // 0x0137(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_967B[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_2;                           // 0x013C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_967C[0x1];                                     // 0x0147(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_4;                           // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_5;                           // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_6;                           // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_7;                           // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_8;                           // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_SetDetailType) == 0x000008, "Wrong alignment on UMG_ProductItem_C_SetDetailType");
static_assert(sizeof(UMG_ProductItem_C_SetDetailType) == 0x000170, "Wrong size on UMG_ProductItem_C_SetDetailType");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, InDetailType) == 0x000000, "Member 'UMG_ProductItem_C_SetDetailType::InDetailType' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable) == 0x000004, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_1) == 0x00000C, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_2) == 0x000014, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_3) == 0x00001C, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_4) == 0x000024, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_5) == 0x00002C, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_6) == 0x000034, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_7) == 0x00003C, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_8) == 0x000044, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_8' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_9) == 0x00004C, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_9' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_10) == 0x000054, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_10' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_byte_Variable) == 0x00005C, "Member 'UMG_ProductItem_C_SetDetailType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable) == 0x000060, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_1) == 0x000068, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_2) == 0x000070, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_3) == 0x000078, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_4) == 0x000080, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_5) == 0x000088, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_6) == 0x000090, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_7) == 0x000098, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_8) == 0x0000A0, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_object_Variable_9) == 0x0000A8, "Member 'UMG_ProductItem_C_SetDetailType::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_bool_Variable) == 0x0000B0, "Member 'UMG_ProductItem_C_SetDetailType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_bool_Variable_1) == 0x0000B1, "Member 'UMG_ProductItem_C_SetDetailType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_bool_Variable_2) == 0x0000B2, "Member 'UMG_ProductItem_C_SetDetailType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B3, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000B4, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000B5, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000B6, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0000B7, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0000B8, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_BooleanOR_ReturnValue) == 0x0000B9, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_1) == 0x0000BA, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0000BB, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_BooleanOR_ReturnValue_2) == 0x0000BC, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0000BD, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_bool_Variable_3) == 0x0000BE, "Member 'UMG_ProductItem_C_SetDetailType::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_bool_Variable_4) == 0x0000BF, "Member 'UMG_ProductItem_C_SetDetailType::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_bool_Variable_5) == 0x0000C0, "Member 'UMG_ProductItem_C_SetDetailType::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_11) == 0x0000C4, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_11' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default) == 0x0000D0, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_MakeStruct_WidgetTransform) == 0x0000D8, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_MakeStruct_WidgetTransform_1) == 0x0000F4, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_MakeStruct_WidgetTransform_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default_1) == 0x000110, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_name_Variable_12) == 0x00012C, "Member 'UMG_ProductItem_C_SetDetailType::Temp_name_Variable_12' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_Not_PreBool_ReturnValue) == 0x000134, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_BooleanAND_ReturnValue) == 0x000135, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_Not_PreBool_ReturnValue_1) == 0x000136, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_byte_Variable_1) == 0x000137, "Member 'UMG_ProductItem_C_SetDetailType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_MakeLiteralByte_ReturnValue) == 0x000138, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default_2) == 0x00013C, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000144, "Member 'UMG_ProductItem_C_SetDetailType::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, Temp_bool_Variable_6) == 0x000145, "Member 'UMG_ProductItem_C_SetDetailType::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default_3) == 0x000146, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default_4) == 0x000148, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default_5) == 0x000150, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default_6) == 0x000158, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default_7) == 0x000160, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetDetailType, K2Node_Select_Default_8) == 0x000168, "Member 'UMG_ProductItem_C_SetDetailType::K2Node_Select_Default_8' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetProductInterfaceData
// 0x0038 (0x0038 - 0x0000)
struct UMG_ProductItem_C_SetProductInterfaceData final
{
public:
	TScriptInterface<class IBPI_SBProductData_C>  Param_Data;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                K2Node_DynamicCast_AsBP_SBProduct_Item_Data;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_967D[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductData_C*                    K2Node_DynamicCast_AsBP_SBProduct_Data;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItem_C_SetProductInterfaceData) == 0x000008, "Wrong alignment on UMG_ProductItem_C_SetProductInterfaceData");
static_assert(sizeof(UMG_ProductItem_C_SetProductInterfaceData) == 0x000038, "Wrong size on UMG_ProductItem_C_SetProductInterfaceData");
static_assert(offsetof(UMG_ProductItem_C_SetProductInterfaceData, Param_Data) == 0x000000, "Member 'UMG_ProductItem_C_SetProductInterfaceData::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInterfaceData, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000010, "Member 'UMG_ProductItem_C_SetProductInterfaceData::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInterfaceData, K2Node_DynamicCast_AsBP_SBProduct_Item_Data) == 0x000018, "Member 'UMG_ProductItem_C_SetProductInterfaceData::K2Node_DynamicCast_AsBP_SBProduct_Item_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInterfaceData, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UMG_ProductItem_C_SetProductInterfaceData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInterfaceData, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'UMG_ProductItem_C_SetProductInterfaceData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInterfaceData, K2Node_DynamicCast_AsBP_SBProduct_Data) == 0x000028, "Member 'UMG_ProductItem_C_SetProductInterfaceData::K2Node_DynamicCast_AsBP_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductInterfaceData, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'UMG_ProductItem_C_SetProductInterfaceData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetProductData
// 0x0088 (0x0088 - 0x0000)
struct UMG_ProductItem_C_SetProductData final
{
public:
	class UBP_SBProductData_C*                    Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSoldOut_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_967E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_967F[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9680[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetDetailType_self_CastInput;             // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         CallFunc_GetDetailType_DetailType;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9681[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_IsItemBox_self_CastInput;                 // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9682[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_SetProductData) == 0x000008, "Wrong alignment on UMG_ProductItem_C_SetProductData");
static_assert(sizeof(UMG_ProductItem_C_SetProductData) == 0x000088, "Wrong size on UMG_ProductItem_C_SetProductData");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, Param_Data) == 0x000000, "Member 'UMG_ProductItem_C_SetProductData::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, Temp_bool_Variable) == 0x000009, "Member 'UMG_ProductItem_C_SetProductData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00000A, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00000B, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, Temp_bool_Variable_1) == 0x00000C, "Member 'UMG_ProductItem_C_SetProductData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00000D, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_IsValid_ReturnValue) == 0x00000E, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00000F, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000010, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000012, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, Temp_bool_Variable_2) == 0x000013, "Member 'UMG_ProductItem_C_SetProductData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000014, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_IsSoldOut_ReturnValue) == 0x000015, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_IsSoldOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000016, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, K2Node_Select_Default) == 0x000017, "Member 'UMG_ProductItem_C_SetProductData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, K2Node_Select_Default_1) == 0x000018, "Member 'UMG_ProductItem_C_SetProductData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000038, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, K2Node_Select_Default_2) == 0x000039, "Member 'UMG_ProductItem_C_SetProductData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00003A, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_Clamp_ReturnValue) == 0x00003C, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_SelectInt_ReturnValue) == 0x000040, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_GetDetailType_self_CastInput) == 0x000048, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_GetDetailType_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_GetDetailType_DetailType) == 0x000058, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_GetDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_IsItemBox_self_CastInput) == 0x000060, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_IsItemBox_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, CallFunc_IsItemBox_bReturnValue) == 0x000070, "Member 'UMG_ProductItem_C_SetProductData::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, Temp_bool_Variable_3) == 0x000071, "Member 'UMG_ProductItem_C_SetProductData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'UMG_ProductItem_C_SetProductData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetProductData, K2Node_Select_Default_3) == 0x000084, "Member 'UMG_ProductItem_C_SetProductData::K2Node_Select_Default_3' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetData
// 0x0030 (0x0030 - 0x0000)
struct UMG_ProductItem_C_SetData final
{
public:
	class UBP_SBProductItemData_C*                Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_IsItemBox_self_CastInput;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9683[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItem_C_SetData) == 0x000008, "Wrong alignment on UMG_ProductItem_C_SetData");
static_assert(sizeof(UMG_ProductItem_C_SetData) == 0x000030, "Wrong size on UMG_ProductItem_C_SetData");
static_assert(offsetof(UMG_ProductItem_C_SetData, Param_Data) == 0x000000, "Member 'UMG_ProductItem_C_SetData::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetData, CallFunc_IsItemBox_self_CastInput) == 0x000008, "Member 'UMG_ProductItem_C_SetData::CallFunc_IsItemBox_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetData, CallFunc_IsItemBox_bReturnValue) == 0x000018, "Member 'UMG_ProductItem_C_SetData::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetData, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'UMG_ProductItem_C_SetData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetData, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'UMG_ProductItem_C_SetData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetPrice
// 0x0048 (0x0048 - 0x0000)
struct UMG_ProductItem_C_SetPrice final
{
public:
	int32                                         Param_Price;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_RankPoint;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9684[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9685[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
};
static_assert(alignof(UMG_ProductItem_C_SetPrice) == 0x000008, "Wrong alignment on UMG_ProductItem_C_SetPrice");
static_assert(sizeof(UMG_ProductItem_C_SetPrice) == 0x000048, "Wrong size on UMG_ProductItem_C_SetPrice");
static_assert(offsetof(UMG_ProductItem_C_SetPrice, Param_Price) == 0x000000, "Member 'UMG_ProductItem_C_SetPrice::Param_Price' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPrice, Param_RankPoint) == 0x000004, "Member 'UMG_ProductItem_C_SetPrice::Param_RankPoint' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPrice, Temp_bool_Variable) == 0x000008, "Member 'UMG_ProductItem_C_SetPrice::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPrice, CallFunc_Greater_IntInt_ReturnValue) == 0x000009, "Member 'UMG_ProductItem_C_SetPrice::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPrice, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UMG_ProductItem_C_SetPrice::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPrice, K2Node_Select_Default) == 0x000028, "Member 'UMG_ProductItem_C_SetPrice::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetPrice, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'UMG_ProductItem_C_SetPrice::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.SetVisibleReceiveButton
// 0x0005 (0x0005 - 0x0000)
struct UMG_ProductItem_C_SetVisibleReceiveButton final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_SetVisibleReceiveButton) == 0x000001, "Wrong alignment on UMG_ProductItem_C_SetVisibleReceiveButton");
static_assert(sizeof(UMG_ProductItem_C_SetVisibleReceiveButton) == 0x000005, "Wrong size on UMG_ProductItem_C_SetVisibleReceiveButton");
static_assert(offsetof(UMG_ProductItem_C_SetVisibleReceiveButton, bVisible) == 0x000000, "Member 'UMG_ProductItem_C_SetVisibleReceiveButton::bVisible' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetVisibleReceiveButton, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'UMG_ProductItem_C_SetVisibleReceiveButton::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetVisibleReceiveButton, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'UMG_ProductItem_C_SetVisibleReceiveButton::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetVisibleReceiveButton, Temp_bool_Variable) == 0x000003, "Member 'UMG_ProductItem_C_SetVisibleReceiveButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_SetVisibleReceiveButton, K2Node_Select_Default) == 0x000004, "Member 'UMG_ProductItem_C_SetVisibleReceiveButton::K2Node_Select_Default' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.Set Enable Purchase Button
// 0x0004 (0x0004 - 0x0000)
struct UMG_ProductItem_C_Set_Enable_Purchase_Button final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductItem_C_Set_Enable_Purchase_Button) == 0x000001, "Wrong alignment on UMG_ProductItem_C_Set_Enable_Purchase_Button");
static_assert(sizeof(UMG_ProductItem_C_Set_Enable_Purchase_Button) == 0x000004, "Wrong size on UMG_ProductItem_C_Set_Enable_Purchase_Button");
static_assert(offsetof(UMG_ProductItem_C_Set_Enable_Purchase_Button, Enable) == 0x000000, "Member 'UMG_ProductItem_C_Set_Enable_Purchase_Button::Enable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_Set_Enable_Purchase_Button, Temp_bool_Variable) == 0x000001, "Member 'UMG_ProductItem_C_Set_Enable_Purchase_Button::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_Set_Enable_Purchase_Button, Temp_bool_Variable_1) == 0x000002, "Member 'UMG_ProductItem_C_Set_Enable_Purchase_Button::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_Set_Enable_Purchase_Button, K2Node_Select_Default) == 0x000003, "Member 'UMG_ProductItem_C_Set_Enable_Purchase_Button::K2Node_Select_Default' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.GetInputNum
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductItem_C_GetInputNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_Number;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_GetInputNum) == 0x000004, "Wrong alignment on UMG_ProductItem_C_GetInputNum");
static_assert(sizeof(UMG_ProductItem_C_GetInputNum) == 0x000008, "Wrong size on UMG_ProductItem_C_GetInputNum");
static_assert(offsetof(UMG_ProductItem_C_GetInputNum, Num) == 0x000000, "Member 'UMG_ProductItem_C_GetInputNum::Num' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_GetInputNum, CallFunc_GetValue_Number) == 0x000004, "Member 'UMG_ProductItem_C_GetInputNum::CallFunc_GetValue_Number' has a wrong offset!");

// Function UMG_ProductItem.UMG_ProductItem_C.ShowNumberSelect
// 0x0005 (0x0005 - 0x0000)
struct UMG_ProductItem_C_ShowNumberSelect final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductItem_C_ShowNumberSelect) == 0x000001, "Wrong alignment on UMG_ProductItem_C_ShowNumberSelect");
static_assert(sizeof(UMG_ProductItem_C_ShowNumberSelect) == 0x000005, "Wrong size on UMG_ProductItem_C_ShowNumberSelect");
static_assert(offsetof(UMG_ProductItem_C_ShowNumberSelect, Enable) == 0x000000, "Member 'UMG_ProductItem_C_ShowNumberSelect::Enable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ShowNumberSelect, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'UMG_ProductItem_C_ShowNumberSelect::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ShowNumberSelect, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'UMG_ProductItem_C_ShowNumberSelect::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ShowNumberSelect, Temp_bool_Variable) == 0x000003, "Member 'UMG_ProductItem_C_ShowNumberSelect::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductItem_C_ShowNumberSelect, K2Node_Select_Default) == 0x000004, "Member 'UMG_ProductItem_C_ShowNumberSelect::K2Node_Select_Default' has a wrong offset!");

}

