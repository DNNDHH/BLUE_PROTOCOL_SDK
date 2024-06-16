#pragma once

 

// Package: WBP_StorageShop

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "StorageMultipleSalesWindowType_structs.hpp"
#include "ESelectItemCategoryMode_structs.hpp"
#include "InputCore_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UseItemWindowType_structs.hpp"
#include "Engine_structs.hpp"
#include "StorageGridType_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "DescripionButtonType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Filter_Type_structs.hpp"


namespace SDK::Params
{

// Function WBP_StorageShop.WBP_StorageShop_C.ExecuteUbergraph_WBP_StorageShop
// 0x39C0 (0x39C0 - 0x0000)
struct WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4826[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	class UUMG_CaptureStudio_C*                   Temp_object_Variable;                              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_1;                            // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_2;                            // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0090(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_3;                            // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4827[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4828[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_4;                            // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4829[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_5;                            // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482A[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0140(0x0018)()
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_6;                            // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_7;                            // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_1;                              // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482B[0x2];                                     // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         K2Node_CustomEvent_InventoryData;                  // 0x0178(0x0098)(HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_482C[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0220(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0230(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_2;                              // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482D[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_KeepPage_1;                     // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_482E[0x2];                                     // 0x025E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_Get_Inventory_Brunch_ReturnValue;         // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_3;                              // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482F[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0270(0x0018)()
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_5;                   // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSelected;                     // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4830[0x3];                                     // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             K2Node_CustomEvent_InputPin_2;                     // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4831[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4832[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem_4;                   // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              K2Node_CustomEvent_InType_1;                       // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4833[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_InputPin_1;                     // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              K2Node_CustomEvent_LastClickGridType;              // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Icon_Select_Items_bAdd;               // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4834[0x2];                                     // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_6;                  // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Total_Item_Num_ReturnValue;           // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_ToStorage_2;                    // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_ToStorage_1;                    // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFilter_Type                                  Temp_byte_Variable_4;                              // 0x02DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_6;                   // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_8;                       // 0x02E1(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4835[0x6];                                     // 0x02E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLockItemData>                K2Node_CustomEvent_LockItemData;                   // 0x02E8(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_InRetCode_12;                   // 0x02F8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_7;                  // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_5;                              // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4836[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0320(0x0018)()
	EFilter_Type                                  Temp_byte_Variable_6;                              // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4837[0x1];                                     // 0x033B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_11;                   // 0x033C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems_5;                 // 0x0340(0x0010)(ConstParm, ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_7;                              // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENumberInputDialogResult                      K2Node_CustomEvent_InResult_4;                     // 0x0352(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4838[0x1];                                     // 0x0353(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InNumber_3;                     // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4839[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_483A[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_483B[0x6];                                     // 0x0372(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0388(0x0060)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x03E8(0x0018)()
	int32                                         Temp_int_Array_Index_Variable_7;                   // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_8;                              // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  K2Node_Select_Default;                             // 0x0405(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_483C[0x2];                                     // 0x0406(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0418(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0430(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0440(0x0018)()
	struct FInventoryData                         CallFunc_SearchInventoryItemData_OutputPin;        // 0x0458(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_SearchInventoryItemData_Enable;           // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_483D[0x7];                                     // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue_1;   // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0501(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_483E[0x2];                                     // 0x0502(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0504(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0509(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_483F[0x2];                                     // 0x050A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x050C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_8;                   // 0x0510(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4840[0x4];                                     // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetCollectItemsUniqueID_ReturnValue;      // 0x0518(0x0010)(ReferenceParm)
	struct FSBLockItemData                        CallFunc_Array_Get_Item;                           // 0x0528(0x0020)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4841[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_2;                 // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable_9;                              // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4842[0x7];                                     // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             K2Node_Select_Default_1;                           // 0x0560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4843[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x0570(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Value_1;                        // 0x0580(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4844[0x4];                                     // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNumberInputDialog_C*                   K2Node_CustomEvent_CallerDialg_1;                  // 0x0588(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0590(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x05A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x05C0(0x0040)(HasGetValueTypeHash)
	TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0600(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_7;                       // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4845[0x7];                                     // 0x0611(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLockItemData                        CallFunc_Set_Item_Lock_Save_LockItemData;          // 0x0618(0x0020)()
	bool                                          CallFunc_Set_Item_Lock_Save_bIsItemLock;           // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0639(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENumberInputDialogResult                      K2Node_CustomEvent_InResult_3;                     // 0x063A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4846[0x1];                                     // 0x063B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InNumber_2;                     // 0x063C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4847[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_3;                 // 0x0648(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4848[0x3];                                     // 0x0651(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_1; // 0x0654(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0658(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0659(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x065A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESelectItemCategoryMode                       Temp_byte_Variable_10;                             // 0x065B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x065C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0660(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0678(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0680(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x06C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x06C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x06C8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x06E0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x06F8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0738(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0778(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0788(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0798(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x07B0(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4849[0x3];                                     // 0x07C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_10;                   // 0x07CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x07D0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x07E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_484A[0x7];                                     // 0x07E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x07E8(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0800(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_484B[0x4];                                     // 0x0804(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0808(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerShopComponent*                 CallFunc_GetPlayerShopComponent_ReturnValue;       // 0x0810(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x0818(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_484C[0x7];                                     // 0x0831(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0838(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0878(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_4;                               // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_484D[0x4];                                     // 0x088C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x0890(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x08A0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x08B8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x08D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x08D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_6;                       // 0x08D5(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x08D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x08D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_6;     // 0x08D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_7;     // 0x08E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x08F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x0910(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x0928(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EStorageGridType                              Temp_byte_Variable_11;                             // 0x0929(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x092A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_484E[0x1];                                     // 0x092B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_3;            // 0x092C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x093C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EStorageGridType                              Temp_byte_Variable_12;                             // 0x093D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable_13;                             // 0x093E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable_14;                             // 0x093F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_8;                  // 0x0940(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode_9;                    // 0x0944(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems_4;                 // 0x0948(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0958(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0968(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_484F[0x7];                                     // 0x0969(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x0970(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0988(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4850[0x3];                                     // 0x0989(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;                // 0x098C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0990(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0998(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_5;                       // 0x0999(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x099A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x099B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENumberInputDialogResult                      K2Node_CustomEvent_InResult_2;                     // 0x099C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4851[0x3];                                     // 0x099D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InNumber_1;                     // 0x09A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x09A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x09A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4852[0x2];                                     // 0x09A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_4;                 // 0x09A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x09B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4853[0x3];                                     // 0x09B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_2; // 0x09B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x09B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x09C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x09C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_ToStorage;                      // 0x09C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EStorageGridType                              Temp_byte_Variable_15;                             // 0x09C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x09C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4854[0x3];                                     // 0x09C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_8;                    // 0x09C8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4855[0x4];                                     // 0x09CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems_3;                 // 0x09D0(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x09E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4856[0x4];                                     // 0x09E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x09E8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x09F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4857[0x7];                                     // 0x09F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x0A00(0x0018)()
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0A18(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0A20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4858[0x3];                                     // 0x0A21(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0A24(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0A28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4859[0x3];                                     // 0x0A29(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0A2C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0A30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Icon_Select_Items_bAdd_1;             // 0x0A31(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SwitchMultipleSelection_bAdd;             // 0x0A32(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0A33(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x0A34(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485A[0x3];                                     // 0x0A35(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x0A38(0x0018)()
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_1;           // 0x0A50(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0A58(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0A98(0x0010)(ReferenceParm)
	int32                                         K2Node_CustomEvent_InRetCode_7;                    // 0x0AA8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485B[0x4];                                     // 0x0AAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems_2;                 // 0x0AB0(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0AC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_485C[0x7];                                     // 0x0AC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0AC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0AD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x0AD4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485D[0x3];                                     // 0x0AD5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0AD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_10;           // 0x0ADC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_4;                       // 0x0ADD(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485E[0x2];                                     // 0x0ADE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ExpIncrease_C*                     CallFunc_Create_ReturnValue_4;                     // 0x0AE0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x0AE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue_2;   // 0x0AE9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_485F[0x2];                                     // 0x0AEA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0AEC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;                // 0x0AF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0AF4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4860[0x3];                                     // 0x0AF5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x0AF8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;             // 0x0AFC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4861[0x3];                                     // 0x0AFD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_8;               // 0x0B00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4862[0x4];                                     // 0x0B04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStorageItemData>             K2Node_CustomEvent_InputPin;                       // 0x0B08(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_5;             // 0x0B18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4863[0x3];                                     // 0x0B19(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0B1C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Value, class UWBP_ExpIncrease_C* CallerDialg)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0B20(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x0B30(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x0B40(0x0018)()
	TDelegate<void(ENumberInputDialogResult InResult, int32 InNumber)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0B58(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_8;     // 0x0B68(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x0B78(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue_6;             // 0x0B90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_11;           // 0x0B91(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0B92(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x0B93(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker; // 0x0B94(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4864[0x3];                                     // 0x0B95(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo; // 0x0B98(0x0010)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x0BA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4865[0x3];                                     // 0x0BA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0BAC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4866[0x4];                                     // 0x0BBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_Get_Inventory_Brunch_ReturnValue_1;       // 0x0BC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0BC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_7;            // 0x0BD0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_8;            // 0x0BE0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_SetCaptureStudioEnable_Result;            // 0x0BF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4867[0x7];                                     // 0x0BF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_CaptureStudio_C*                   K2Node_Select_Default_3;                           // 0x0BF8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   K2Node_Select_Default_4;                           // 0x0C00(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_1;             // 0x0C08(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0C68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUseItemWindowType                            CallFunc_Get_Use_Item_Window_Type_WindowType;      // 0x0C69(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4868[0x2];                                     // 0x0C6A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Use_Item_Window_Type_Valu;            // 0x0C6C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Use_Item_Window_Type_Time;            // 0x0C70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0C74(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStorageItemData>             CallFunc_Create_Use_Data_DataList;                 // 0x0C78(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x0C88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4869[0x3];                                     // 0x0C89(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_9;            // 0x0C8C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InRetCode_6;                    // 0x0C9C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData;               // 0x0CA0(0x0020)()
	int32                                         Temp_int_Array_Index_Variable_9;                   // 0x0CC0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_486A[0x4];                                     // 0x0CC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StorageRowListItem_C*              CallFunc_Array_Get_Item_1;                         // 0x0CC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0CD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Lock_Item_bLock;                       // 0x0CD1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_486B[0x6];                                     // 0x0CD2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData_1;             // 0x0CD8(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0CF8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0CFC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_10;           // 0x0D00(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0D10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_12;           // 0x0D11(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENumberInputDialogResult                      K2Node_CustomEvent_NewParam_1;                     // 0x0D12(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_486C[0x5];                                     // 0x0D13(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBox_C*                         K2Node_CustomEvent_ItemBox;                        // 0x0D18(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_2;           // 0x0D20(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_Get_Select_List_SelectedElement;          // 0x0D28(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_11;       // 0x0D38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_486D[0x3];                                     // 0x0D39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_5;                    // 0x0D3C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStorageItemBoxResultData            K2Node_CustomEvent_InItemBoxResultData;            // 0x0D40(0x0108)(ConstParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_5;            // 0x0E48(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x0E58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_486E[0x7];                                     // 0x0E59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x0E60(0x0018)()
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_3;           // 0x0E78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_16;                             // 0x0E80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_17;                             // 0x0E81(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x0E82(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_486F[0x5];                                     // 0x0E83(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_5;                     // 0x0E88(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0E90(0x0010)(ZeroConstructor, NoDestructor)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_6;                     // 0x0EA0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStorageItemBoxData                  K2Node_MakeStruct_SBStorageItemBoxData;            // 0x0EA8(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_13;           // 0x0ED0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4870[0x3];                                     // 0x0ED1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_4;                    // 0x0ED4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems_1;                 // 0x0ED8(0x0010)(ConstParm, ReferenceParm)
	ENumberInputDialogResult                      K2Node_CustomEvent_InResult_1;                     // 0x0EE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4871[0x7];                                     // 0x0EE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_NewParam;                       // 0x0EF0(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_12;       // 0x0F50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0F51(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x0F52(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4872[0x1];                                     // 0x0F53(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               K2Node_CustomEvent_InWeaponStickerInfo;            // 0x0F54(0x0010)(NoDestructor)
	uint8                                         Pad_4873[0x4];                                     // 0x0F64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InWeaponStickerUniqueId;        // 0x0F68(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0F78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4874[0x7];                                     // 0x0F79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0F80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponType                                 CallFunc_GetWeaponTypeByWeaponID_ReturnValue;      // 0x0F88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4875[0x7];                                     // 0x0F89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InSelectedWeaponUniqueItemId;   // 0x0F90(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsHideWindowCalledByDecide;   // 0x0FA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x0FA1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4876[0x2];                                     // 0x0FA2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InSelectedWeaponUniqueItemId)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0FA4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsHideWindowCalledByDecide)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x0FB4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& InSelectedWeaponUniqueItemId)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x0FC4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsHideWindowCalledByDecide)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x0FD4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_14;           // 0x0FE4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4877[0x3];                                     // 0x0FE5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0FE8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsStickerDiscardSelected;     // 0x0FF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4878[0x7];                                     // 0x0FF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetItemBag_ReturnValue;                   // 0x0FF8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponStickerRemoveItemAmount_OutHaveWeaponStickerRemoveItem; // 0x1000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4879[0x3];                                     // 0x1001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeaponStickerRemoveItemAmount_OutItemAmount; // 0x1004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool InIsStickerDiscardSelected)> K2Node_CreateDelegate_OutputDelegate_16;           // 0x1008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_17;           // 0x1018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsStickerDiscardSelected)> K2Node_CreateDelegate_OutputDelegate_18;           // 0x1028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_19;           // 0x1038(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_4;           // 0x1048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, const class FString& InStickerUsedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas)> K2Node_CreateDelegate_OutputDelegate_20;           // 0x1050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x1060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_487A[0x7];                                     // 0x1061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWeaponComponent*               CallFunc_GetPlayerWeaponComponent_ReturnValue;     // 0x1068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x1070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_487B[0x7];                                     // 0x1071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_5;           // 0x1078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, const class FString& InStickerRemovedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas)> K2Node_CreateDelegate_OutputDelegate_21;           // 0x1080(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x1090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_487C[0x7];                                     // 0x1091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWeaponComponent*               CallFunc_GetPlayerWeaponComponent_ReturnValue_1;   // 0x1098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x10A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_487D[0x7];                                     // 0x10A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetItemBag_ReturnValue_1;                 // 0x10A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponStickerRemoveItemInfo_OutHaveWeaponStickerRemoveItem; // 0x10B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_487E[0x7];                                     // 0x10B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetWeaponStickerRemoveItemInfo_OutOwnItemInfo; // 0x10B8(0x0118)()
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_2;            // 0x11D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_487F[0x3];                                     // 0x11D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_3;                    // 0x11D4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InStickerUsedWeaponUniqueId;    // 0x11D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsExpiredStickerWeapons_1;    // 0x11E8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4880[0x7];                                     // 0x11E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds_2; // 0x11F0(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FSBWeaponItemData>              K2Node_CustomEvent_InExpiredStickerWeaponItemDatas_1; // 0x1200(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_InRetCode_2;                    // 0x1210(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4881[0x4];                                     // 0x1214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InStickerRemovedWeaponUniqueId; // 0x1218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsExpiredStickerWeapons;      // 0x1228(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4882[0x7];                                     // 0x1229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds_1; // 0x1230(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FSBWeaponItemData>              K2Node_CustomEvent_InExpiredStickerWeaponItemDatas; // 0x1240(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_FindWeaponDataInEquipmentBagOrCharacterStorage_IsValid; // 0x1250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4883[0x7];                                     // 0x1251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_FindWeaponDataInEquipmentBagOrCharacterStorage_WeaponData; // 0x1258(0x0050)()
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_6;            // 0x12A8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_19;         // 0x12B8(0x0018)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x12D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4884[0x7];                                     // 0x12D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x12D8(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x1388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x1398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4885[0x7];                                     // 0x1399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_7;            // 0x13A0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x13B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4886[0x7];                                     // 0x13B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_20;         // 0x13B8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_9;          // 0x13D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4887[0x3];                                     // 0x13D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_9;                  // 0x13D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_FindInventoryDataFromUniqueId_OutInventoryData; // 0x13D8(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x1470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4888[0x3];                                     // 0x1471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_13;                // 0x1474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x1478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4889[0x7];                                     // 0x1479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x1480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_9;     // 0x1488(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x1498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_21;         // 0x14A0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x14B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_488A[0x7];                                     // 0x14B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds; // 0x14C0(0x0010)(ConstParm, ReferenceParm)
	class FString                                 K2Node_CustomEvent_InEquippedWeaponUniqueId;       // 0x14D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InActivateWeaponModelRotate;    // 0x14E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_15;           // 0x14E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponItemDataByUniqueId_OutIsValid;   // 0x14E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_488B[0x5];                                     // 0x14E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData; // 0x14E8(0x0050)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x1538(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindWeaponMaster_bIsValid_1;              // 0x1540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_488C[0x7];                                     // 0x1541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster_1;          // 0x1548(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue_1;              // 0x15F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x1608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_488D[0x4];                                     // 0x160C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_22;         // 0x1610(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_488E[0x7];                                     // 0x1629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x1630(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x1670(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x1680(0x0018)()
	class FString                                 K2Node_CustomEvent_InStickerAttachedWeaponUniqueId; // 0x1698(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_1;            // 0x16A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x16B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_1; // 0x16B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_488F[0x6];                                     // 0x16B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_1; // 0x16B8(0x0050)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid_2;              // 0x1708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4890[0x7];                                     // 0x1709(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster_2;          // 0x1710(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue_2;              // 0x17C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker_1; // 0x17D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4891[0x3];                                     // 0x17D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo_1; // 0x17D4(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x17E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x17E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveChild_ReturnValue_1;                // 0x17E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x17E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCaptureStudioEnable_Result_1;          // 0x17E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_16;           // 0x17E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4892[0x6];                                     // 0x17EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_5;                 // 0x17F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_3; // 0x17F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_7;             // 0x17FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker_2; // 0x17FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4893[0x2];                                     // 0x17FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo_2; // 0x1800(0x0010)(NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x1810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4894[0x7];                                     // 0x1811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x1818(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_13;       // 0x1820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue; // 0x1821(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x1822(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4895[0x1];                                     // 0x1823(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x1824(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x1828(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_4;                     // 0x182C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_InWeaponUniqueId;       // 0x1830(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      K2Node_ComponentBoundEvent_InWeaponItemData;       // 0x1840(0x0050)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_2;            // 0x1890(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue_1;        // 0x1898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetItemBag_ReturnValue_2;                 // 0x18A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x18A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4896[0x3];                                     // 0x18A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetFreeBlockNum_ReturnValue;              // 0x18AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x18B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4897[0x7];                                     // 0x18B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x18B8(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x18E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4898[0x7];                                     // 0x18E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x18E8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x1910(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x1938(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x1960(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x1961(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4899[0x6];                                     // 0x1962(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x1968(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x1970(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x1978(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_14;       // 0x1980(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_489A[0x7];                                     // 0x1981(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x1988(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_23;         // 0x1998(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_24;         // 0x19B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x19C8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_25;         // 0x1A08(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x1A20(0x0040)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_13;                             // 0x1A60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x1A61(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_489B[0x6];                                     // 0x1A62(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x1A68(0x00D0)()
	struct FSlateColor                            K2Node_Select_Default_5;                           // 0x1B38(0x0028)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_15;       // 0x1B60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x1B61(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_489C[0x6];                                     // 0x1B62(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_6;             // 0x1B68(0x0018)()
	bool                                          Temp_bool_Variable_14;                             // 0x1B80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_489D[0x7];                                     // 0x1B81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_6;                           // 0x1B88(0x0028)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x1BB0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x1BC8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_26;         // 0x1BD8(0x0018)()
	class FText                                   K2Node_Select_Default_7;                           // 0x1BF0(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x1C08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_489E[0x7];                                     // 0x1C09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_9;            // 0x1C10(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_5;                          // 0x1C50(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x1C60(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_7;             // 0x1C78(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_8;             // 0x1C90(0x0018)()
	int32                                         Temp_int_Variable_5;                               // 0x1CA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_489F[0x4];                                     // 0x1CAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x1CB0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x1CB8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x1CC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x1CC1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48A0[0x2];                                     // 0x1CC2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_14;                // 0x1CC4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_15;                             // 0x1CC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_16;                             // 0x1CC9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_17;           // 0x1CCA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_8;                           // 0x1CCB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48A1[0x4];                                     // 0x1CCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_2;            // 0x1CD0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_17;                             // 0x1CD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_18;                             // 0x1CD9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48A2[0x2];                                     // 0x1CDA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x1CDC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48A3[0x4];                                     // 0x1CE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default_9;                           // 0x1CE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x1CF0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFreeBlockNum_ReturnValue_1;            // 0x1CF8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x1CFC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_19;                             // 0x1CFD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48A4[0x2];                                     // 0x1CFE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_10;                          // 0x1D00(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_18;                             // 0x1D08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48A5[0x7];                                     // 0x1D09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_10;    // 0x1D10(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_27;         // 0x1D20(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_19;                             // 0x1D38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48A6[0x7];                                     // 0x1D39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_11;    // 0x1D40(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_28;         // 0x1D50(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_29;         // 0x1D68(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_10;           // 0x1D80(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_6;                          // 0x1DC0(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_20;                             // 0x1DD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48A7[0x7];                                     // 0x1DD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_5;                     // 0x1DD8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_11;                          // 0x1DF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid_1;                // 0x1DF1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48A8[0x6];                                     // 0x1DF2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster_1;              // 0x1DF8(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x1EC8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x1ED8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48A9[0x3];                                     // 0x1ED9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_22;           // 0x1EDC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_48AA[0x4];                                     // 0x1EEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x1EF0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x1EF8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_12;    // 0x1F00(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_30;         // 0x1F10(0x0018)()
	class UAppearanceWeaponStickerRemoveWindow_C* CallFunc_Create_ReturnValue_7;                     // 0x1F28(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_31;         // 0x1F30(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_13;    // 0x1F48(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_11;           // 0x1F58(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_32;         // 0x1F98(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_33;         // 0x1FB0(0x0018)()
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x1FC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_12;           // 0x1FD0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_7;                          // 0x2010(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_6;                     // 0x2020(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_34;         // 0x2038(0x0018)()
	class FString                                 CallFunc_GetWeaponStickerRemoveItemName_OutItemName; // 0x2050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_13;           // 0x2060(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_35;         // 0x20A0(0x0018)()
	class UAppearanceWeaponStickerWeaponSelectMenuWindow_C* CallFunc_Create_ReturnValue_8;                     // 0x20B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_14;           // 0x20C0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_8;                          // 0x2100(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_7;                     // 0x2110(0x0018)()
	class FText                                   K2Node_Select_Default_12;                          // 0x2128(0x0018)(ConstParm)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_6;           // 0x2140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x2148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48AB[0x3];                                     // 0x2149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam)> K2Node_CreateDelegate_OutputDelegate_23;           // 0x214C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_48AC[0x4];                                     // 0x215C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWeaponComponent*               CallFunc_GetPlayerWeaponComponent_ReturnValue_2;   // 0x2160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x2168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48AD[0x3];                                     // 0x2169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, const class FString& InStickerRemovedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas)> K2Node_CreateDelegate_OutputDelegate_24;           // 0x216C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_48AE[0x4];                                     // 0x217C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_7;           // 0x2180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x2188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48AF[0x3];                                     // 0x2189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_25;           // 0x218C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_48B0[0x4];                                     // 0x219C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWeaponComponent*               CallFunc_GetPlayerWeaponComponent_ReturnValue_3;   // 0x21A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, const class FString& InStickerUsedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas)> K2Node_CreateDelegate_OutputDelegate_26;           // 0x21A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x21B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B1[0x7];                                     // 0x21B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_8;           // 0x21C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_18;           // 0x21C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x21C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B2[0x6];                                     // 0x21CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_3;            // 0x21D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponComponent*               CallFunc_GetPlayerWeaponComponent_ReturnValue_4;   // 0x21D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x21E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B3[0x3];                                     // 0x21E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, const class FString& InStickerUsedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas)> K2Node_CreateDelegate_OutputDelegate_27;           // 0x21E4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode, const class FString& InStickerRemovedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas)> K2Node_CreateDelegate_OutputDelegate_28;           // 0x21F4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& InSelectedWeaponUniqueItemId)> K2Node_CreateDelegate_OutputDelegate_29;           // 0x2204(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsHideWindowCalledByDecide)> K2Node_CreateDelegate_OutputDelegate_30;           // 0x2214(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x2224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B4[0x3];                                     // 0x2225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, struct FSBStorageItemBoxResultData& InItemBoxResultData)> K2Node_CreateDelegate_OutputDelegate_31;           // 0x2228(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsStickerDiscardSelected)> K2Node_CreateDelegate_OutputDelegate_32;           // 0x2238(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_33;           // 0x2248(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x2258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B5[0x7];                                     // 0x2259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x2260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x2268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue_9;                     // 0x2270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_23;                   // 0x2278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B6[0x3];                                     // 0x2279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_10;                  // 0x227C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              CallFunc_Array_Get_Item_2;                         // 0x2280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x2288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B7[0x7];                                     // 0x2289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x2290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData_2;             // 0x2298(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x22B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48B8[0x4];                                     // 0x22BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChangeItemAmountParam               K2Node_CustomEvent_InParam;                        // 0x22C0(0x0020)(ConstParm)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x22E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B9[0x7];                                     // 0x22E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x22E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FSBChangeItemAmountParam& InParam)> K2Node_CreateDelegate_OutputDelegate_34;           // 0x22F0(0x0010)(ZeroConstructor, NoDestructor)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x2300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_24;                   // 0x2308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_2;            // 0x2309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48BA[0x6];                                     // 0x230A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_2;        // 0x2310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FSBChangeItemAmountParam& InParam)> K2Node_CreateDelegate_OutputDelegate_35;           // 0x2318(0x0010)(ZeroConstructor, NoDestructor)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x2328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_25;                   // 0x2330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_3;            // 0x2331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48BB[0x6];                                     // 0x2332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_3;        // 0x2338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FSBChangeItemAmountParam& InParam)> K2Node_CreateDelegate_OutputDelegate_36;           // 0x2340(0x0010)(ZeroConstructor, NoDestructor)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_2;             // 0x2350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_26;                   // 0x2358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48BC[0x7];                                     // 0x2359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBoxResult_C*                   CallFunc_Create_ReturnValue_10;                    // 0x2360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_21;                             // 0x2368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48BD[0x7];                                     // 0x2369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x2370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortRule_SortType;                     // 0x2378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Get_Filter_Type_FilterType;               // 0x2379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_16;       // 0x237A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFilter_Type                                  K2Node_Select_Default_13;                          // 0x237B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x237C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_27;                   // 0x237D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48BE[0x2];                                     // 0x237E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_Array_Get_Item_3;                         // 0x2380(0x0060)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_9;               // 0x23E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x23E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Lock_Item_bLock_1;                     // 0x23E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48BF[0x2];                                     // 0x23E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x23E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFangExpeditionUsing_ReturnValue;        // 0x23EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_3;            // 0x23ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C0[0x2];                                     // 0x23EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x23F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48C1[0x4];                                     // 0x23F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_Array_Get_Item_4;                         // 0x23F8(0x0060)(HasGetValueTypeHash)
	struct FInventoryItemData                     CallFunc_Array_Get_Item_5;                         // 0x2458(0x0060)(HasGetValueTypeHash)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData_3;             // 0x24B8(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x24D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue_3;   // 0x24DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Lock_Item_bLock_2;                     // 0x24DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C2[0x2];                                     // 0x24DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData_4;             // 0x24E0(0x0020)()
	bool                                          CallFunc_IsFangExpeditionUsing_ReturnValue_1;      // 0x2500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C3[0x3];                                     // 0x2501(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x2504(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_9;                  // 0x2508(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_4;            // 0x250C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_5;            // 0x250D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x250E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x250F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x2510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C4[0x3];                                     // 0x2511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_10;              // 0x2514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x2518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C5[0x3];                                     // 0x2519(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_11;              // 0x251C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x2520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C6[0x7];                                     // 0x2521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_9;           // 0x2528(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_6;                 // 0x2530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_28;                   // 0x2538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x2539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C7[0x6];                                     // 0x253A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x2540(0x0118)(ConstParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_14;    // 0x2658(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_36;         // 0x2668(0x0018)()
	bool                                          CallFunc_FindItemMaster_bIsValid_2;                // 0x2680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C8[0x7];                                     // 0x2681(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster_2;              // 0x2688(0x00D0)()
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x2758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue_1;                // 0x2760(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x2770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48C9[0x3];                                     // 0x2771(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_10;                 // 0x2774(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox)> K2Node_CreateDelegate_OutputDelegate_37;           // 0x2778(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x2788(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48CA[0x3];                                     // 0x2789(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_15;                // 0x278C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_19;           // 0x2790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x2791(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUseCheckOutBuffItem_NeedToCheck;        // 0x2792(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanUseItem_TypeA;                         // 0x2793(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemUseStatus                              CallFunc_CanUseItem_ReturnValue;                   // 0x2794(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_17;       // 0x2795(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48CB[0x2];                                     // 0x2796(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x2798(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48CC[0x4];                                     // 0x279C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetAt_ReturnValue;           // 0x27A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_37;         // 0x27B0(0x0018)()
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x27C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StorageNumber;                  // 0x27D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     K2Node_CustomEvent_Tipe;                           // 0x27DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_18;       // 0x27DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48CD[0x2];                                     // 0x27DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetFindWeaponData_WeaponData;             // 0x27E0(0x0050)()
	class UWBP_ItemBox_C*                         CallFunc_Create_ReturnValue_11;                    // 0x2830(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidItemWarning_ReturnValue;             // 0x2838(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_3;                       // 0x2839(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_19;       // 0x283A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWeaponStickerAttachd_IsAttach;          // 0x283B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48CE[0x4];                                     // 0x283C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_12;                    // 0x2840(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_2;             // 0x2848(0x0060)(HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable_20;                             // 0x28A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_2;                       // 0x28A9(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48CF[0x6];                                     // 0x28AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default_14;                          // 0x28B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_20;       // 0x28B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_2; // 0x28B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48D0[0x6];                                     // 0x28BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_2; // 0x28C0(0x0050)()
	EYesNoDialogResult                            K2Node_CustomEvent_Result_1;                       // 0x2910(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_21;       // 0x2911(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWeaponStickerAttachd_IsAttach_1;        // 0x2912(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48D1[0x5];                                     // 0x2913(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x2918(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x2920(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D2[0x7];                                     // 0x2921(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_13;                    // 0x2928(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_22;       // 0x2930(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48D3[0x3];                                     // 0x2931(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_5;                     // 0x2934(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_6;                     // 0x2938(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D4[0x4];                                     // 0x293C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_3;            // 0x2940(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_29;                   // 0x2948(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48D5[0x3];                                     // 0x2949(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x294C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems;                   // 0x2950(0x0010)(ConstParm, ReferenceParm)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData_5;             // 0x2960(0x0020)()
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_10;          // 0x2980(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_38;           // 0x2988(0x0010)(ZeroConstructor, NoDestructor)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_4;            // 0x2998(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x29A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_30;                   // 0x29A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_23;       // 0x29A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_20;           // 0x29A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_15;                          // 0x29A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_5;                    // 0x29A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_6;                    // 0x29A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x29A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetStorageNum_Num;                        // 0x29A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStorageNum_Max;                        // 0x29AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue;       // 0x29B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48D6[0x3];                                     // 0x29B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x29B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x29BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_7;                 // 0x29C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_21;           // 0x29C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D7[0x3];                                     // 0x29C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_4; // 0x29CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelLimitClassExpMax_ReturnValue;     // 0x29D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x29D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_39;           // 0x29D8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x29E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_16;                // 0x29EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_15;    // 0x29F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_22;           // 0x2A00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D8[0x7];                                     // 0x2A01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_38;         // 0x2A08(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_16;    // 0x2A20(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_isClassLevelLimit_ReturnValue;            // 0x2A30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48D9[0x7];                                     // 0x2A31(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_39;         // 0x2A38(0x0018)()
	ENumberInputDialogResult                      K2Node_CustomEvent_InResult;                       // 0x2A50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48DA[0x3];                                     // 0x2A51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InNumber;                       // 0x2A54(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_23;           // 0x2A58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_24;       // 0x2A59(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48DB[0x2];                                     // 0x2A5A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_40;           // 0x2A5C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_31;                   // 0x2A6C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48DC[0x3];                                     // 0x2A6D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_17;    // 0x2A70(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_40;         // 0x2A80(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_15;           // 0x2A98(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_18;    // 0x2AD8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_9;                          // 0x2AE8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_41;         // 0x2AF8(0x0018)()
	int32                                         Temp_int_Variable_6;                               // 0x2B10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48DD[0x4];                                     // 0x2B14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_8;                     // 0x2B18(0x0018)()
	int32                                         K2Node_CustomEvent_Value;                          // 0x2B30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48DE[0x4];                                     // 0x2B34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ExpIncrease_C*                     K2Node_CustomEvent_CallerDialg;                    // 0x2B38(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x2B40(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x2B44(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_16;           // 0x2B48(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_3;            // 0x2B88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48DF[0x4];                                     // 0x2B8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_10;                         // 0x2B90(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetClassLevelAddExpCalculation_AfterLevel; // 0x2BA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelAddExpCalculation_AfterExp;  // 0x2BA4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelAddExpCalculation_AfterMaxExp; // 0x2BA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetClassLevelAddExpCalculation_bExpOver;  // 0x2BAC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48E0[0x3];                                     // 0x2BAD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_9;                     // 0x2BB0(0x0018)()
	int32                                         CallFunc_GetNowLevelClassExpMax_ReturnValue;       // 0x2BC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNowLevelClassExpPoint_ReturnValue;     // 0x2BCC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x2BD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E1[0x4];                                     // 0x2BD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_19;    // 0x2BD8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_42;         // 0x2BE8(0x0018)()
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_8;                 // 0x2C00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_22;                             // 0x2C08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48E2[0x3];                                     // 0x2C09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_5; // 0x2C0C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_17;                // 0x2C10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_16;                          // 0x2C14(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x2C18(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x2C1C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x2C1D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x2C1E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48E3[0x1];                                     // 0x2C1F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_14;                    // 0x2C20(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_20;    // 0x2C28(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_21;    // 0x2C38(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_43;         // 0x2C48(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_44;         // 0x2C60(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_24;           // 0x2C78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E4[0x7];                                     // 0x2C79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_9;                 // 0x2C80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_17;                          // 0x2C88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         K2Node_ComponentBoundEvent_ButtonType;             // 0x2C89(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E5[0x6];                                     // 0x2C8A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNumberInputDialog_C*                   CallFunc_Create_ReturnValue_15;                    // 0x2C90(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_7;                    // 0x2C98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48E6[0x7];                                     // 0x2C99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x2CA0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x2CB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E7[0x7];                                     // 0x2CB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x2CB8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x2CC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E8[0x7];                                     // 0x2CC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         K2Node_ComponentBoundEvent_OnItemClick;            // 0x2CD0(0x0098)(HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x2D68(0x0010)(ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_25;           // 0x2D78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E9[0x3];                                     // 0x2D79(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ENumberInputDialogResult InResult, int32 InNumber)> K2Node_CreateDelegate_OutputDelegate_41;           // 0x2D7C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_42;           // 0x2D8C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_48EA[0x4];                                     // 0x2D9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopCmnBtn1_C*                         K2Node_ComponentBoundEvent_ClickBtn_2;             // 0x2DA0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_TabID_2;                // 0x2DA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48EB[0x4];                                     // 0x2DAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopCmnBtn1_C*                         K2Node_ComponentBoundEvent_ClickBtn_1;             // 0x2DB0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_TabID_1;                // 0x2DB8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48EC[0x4];                                     // 0x2DBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x2DC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InTotalPrice;           // 0x2DC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48ED[0x4];                                     // 0x2DCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryItemData>             K2Node_ComponentBoundEvent_InSelectItemList_3;     // 0x2DD0(0x0010)(ReferenceParm)
	struct FInventoryData                         K2Node_ComponentBoundEvent_NewParam;               // 0x2DE0(0x0098)(HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_43;           // 0x2E78(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_RequestSaveItemDrop_Success;              // 0x2E88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48EE[0x7];                                     // 0x2E89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryItemData>             K2Node_ComponentBoundEvent_InSelectItemList_2;     // 0x2E90(0x0010)(ReferenceParm)
	TArray<struct FInventoryItemData>             K2Node_ComponentBoundEvent_InSelectItemList_1;     // 0x2EA0(0x0010)(ReferenceParm)
	TArray<struct FInventoryItemData>             K2Node_ComponentBoundEvent_InSelectItemList;       // 0x2EB0(0x0010)(ReferenceParm)
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem_3;                   // 0x2EC0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem_2;                   // 0x2EC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem_1;                   // 0x2ED0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x2ED8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_SearchInventoryItemData_OutputPin_1;      // 0x2EE8(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_SearchInventoryItemData_Enable_1;         // 0x2F80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48EF[0x7];                                     // 0x2F81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_45;         // 0x2F88(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_10;                    // 0x2FA0(0x0018)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_5;            // 0x2FB8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue_4;   // 0x2FC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48F0[0x7];                                     // 0x2FC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem;                     // 0x2FC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_SearchInventoryItemData_OutputPin_2;      // 0x2FD0(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_SearchInventoryItemData_Enable_2;         // 0x3068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDownMultipleSelection_ReturnValue;      // 0x3069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue_5;   // 0x306A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_32;                   // 0x306B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x306C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48F1[0x3];                                     // 0x306D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_11;                 // 0x3070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x3074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48F2[0x3];                                     // 0x3075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_18;                // 0x3078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_InIsInUse;              // 0x307C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_26;           // 0x307D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48F3[0x2];                                     // 0x307E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_3;             // 0x3080(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_25;       // 0x30E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_27;           // 0x30E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48F4[0x6];                                     // 0x30E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_4;            // 0x30E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue_2;        // 0x30F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_7;                     // 0x30F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48F5[0x4];                                     // 0x30FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default_18;                          // 0x3100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     K2Node_ComponentBoundEvent_InventoryData;          // 0x3108(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_33;                   // 0x3168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48F6[0x7];                                     // 0x3169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         CallFunc_GetIconPtr_AsItem_Icon_Btn;               // 0x3170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIconPtr_bInventory;                    // 0x3178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIconPtr_NotHave;                       // 0x3179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_3; // 0x317A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48F7[0x5];                                     // 0x317B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_3; // 0x3180(0x0050)()
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_44;           // 0x31D0(0x0010)(ZeroConstructor, NoDestructor)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_6;            // 0x31E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDownMultipleSelection_ReturnValue_1;    // 0x31E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x31E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_26;       // 0x31EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48F8[0x5];                                     // 0x31EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_Select_Default_19;                          // 0x31F0(0x0060)(HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_CurrentOffset_1;        // 0x3250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_CurrentOffset;          // 0x3254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_28;           // 0x3258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48F9[0x7];                                     // 0x3259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             K2Node_CustomEvent_Slot;                           // 0x3260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Offset;                         // 0x3268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x326C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x3270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x3278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48FA[0x4];                                     // 0x327C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_1;              // 0x3280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x3288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x3289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_34;                   // 0x328A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48FB[0x1];                                     // 0x328B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_12;              // 0x328C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_45;           // 0x3290(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_8;             // 0x32A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48FC[0x7];                                     // 0x32A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             K2Node_CustomEvent_Grid;                           // 0x32A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x32B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48FD[0x4];                                     // 0x32B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x32B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_2;              // 0x32C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x32C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48FE[0x3];                                     // 0x32C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_2;           // 0x32CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x32D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x32D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48FF[0x3];                                     // 0x32D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x32D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x32DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4900[0x3];                                     // 0x32DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopCmnBtn1_C*                         K2Node_ComponentBoundEvent_ClickBtn;               // 0x32E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_TabID;                  // 0x32E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpen_ReturnValue;                       // 0x32EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOpen_ReturnValue_1;                     // 0x32ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x32EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4901[0x1];                                     // 0x32EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x32F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x32F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EStorageGridType                              K2Node_CustomEvent_InType;                         // 0x32F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ScrollReset;                    // 0x32F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_27;       // 0x32F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_28;       // 0x32F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_29;       // 0x32F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_8;                    // 0x32FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4902[0x5];                                     // 0x32FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetItemListContainer_ReturnValue;         // 0x3300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetItemListContainer_ReturnValue_1;       // 0x3308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue_1;                // 0x3310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4903[0x4];                                     // 0x3314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x3318(0x0118)(ConstParm)
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x3430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4904[0x4];                                     // 0x3434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x3438(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x34D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4905[0x3];                                     // 0x34D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x34D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_5;           // 0x34D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_9;             // 0x34D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4906[0x2];                                     // 0x34DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue_2;                // 0x34DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_9;                    // 0x34E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4907[0x7];                                     // 0x34E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x34E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x34F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_29;           // 0x34F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_23;                             // 0x34F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_30;           // 0x34FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4908[0x1];                                     // 0x34FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_20;                          // 0x34FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x3500(0x001C)(NoDestructor)
	uint8                                         Pad_4909[0x4];                                     // 0x351C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_16;                    // 0x3520(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNumberInputDialog_C*                   CallFunc_Create_ReturnValue_17;                    // 0x3528(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFilterGroup                           CallFunc_Array_Get_Item_6;                         // 0x3530(0x0010)()
	TDelegate<void(ENumberInputDialogResult InResult, int32 InNumber)> K2Node_CreateDelegate_OutputDelegate_46;           // 0x3540(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_13;              // 0x3550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_7;                // 0x3554(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_490A[0x3];                                     // 0x3555(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_47;           // 0x3558(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Value, class UNumberInputDialog_C* CallerDialg)> K2Node_CreateDelegate_OutputDelegate_48;           // 0x3568(0x0010)(ZeroConstructor, NoDestructor)
	class UScrollBox*                             K2Node_Select_Default_21;                          // 0x3578(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x3580(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_490B[0x4];                                     // 0x3584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryData>                 K2Node_Select_Default_22;                          // 0x3588(0x0010)(ReferenceParm)
	struct FInventoryData                         CallFunc_Array_Get_Item_7;                         // 0x3598(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_10;                 // 0x3630(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_14;              // 0x3634(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_11;                 // 0x3638(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_8;                // 0x363C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_Get_Filter_Type_FilterType_1;             // 0x363D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_490C[0x2];                                     // 0x363E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_15;              // 0x3640(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_490D[0x4];                                     // 0x3644(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x3648(0x0010)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_9;                // 0x3658(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_490E[0x7];                                     // 0x3659(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_EmptyFilter_ReturnValue;                  // 0x3660(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x3670(0x0010)()
	class UNumberInputDialog_C*                   CallFunc_Create_ReturnValue_18;                    // 0x3680(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue_6;   // 0x3688(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_30;       // 0x3689(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_490F[0x6];                                     // 0x368A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default_23;                          // 0x3690(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_24;                          // 0x3698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ENumberInputDialogResult InResult, int32 InNumber)> K2Node_CreateDelegate_OutputDelegate_49;           // 0x36A0(0x0010)(ZeroConstructor, NoDestructor)
	EAddItemOpResult                              CallFunc_QueryAddItem_ReturnValue;                 // 0x36B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_31;       // 0x36B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4910[0x6];                                     // 0x36B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue_1;               // 0x36B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_5;            // 0x36C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_10;                // 0x36C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_25;                          // 0x36D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_26;                          // 0x36D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           K2Node_Select_Default_27;                          // 0x36E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSlackNum_ReturnValue;                  // 0x36E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue_1;                        // 0x36EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_10;            // 0x36F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x36F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_11;            // 0x36F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4911[0x1];                                     // 0x36F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_50;           // 0x36F4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_35;                   // 0x3704(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4912[0x3];                                     // 0x3705(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_9;                               // 0x3708(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x370C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_24;                             // 0x3710(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4913[0x3];                                     // 0x3711(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate_51;           // 0x3714(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Select_Default_28;                          // 0x3724(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate_52;           // 0x3728(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate_53;           // 0x3738(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate_54;           // 0x3748(0x0010)(ZeroConstructor, NoDestructor)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_6;            // 0x3758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue_3;                // 0x3760(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4914[0x4];                                     // 0x3764(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x3768(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_3;           // 0x3770(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_31;           // 0x3774(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_10;         // 0x3775(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4915[0x2];                                     // 0x3776(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue_1;           // 0x3778(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue_2;               // 0x3780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue_4;                // 0x3788(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_10;                   // 0x378C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_12;            // 0x378D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4916[0x2];                                     // 0x378E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_29;                          // 0x3790(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_8;                     // 0x3794(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x3798(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x37A0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4917[0x4];                                     // 0x37A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue; // 0x37A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x37B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1; // 0x37B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x37C0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x37C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4918[0x7];                                     // 0x37C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x37D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x37D8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortRule_SortType_1;                   // 0x37E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetRecentSortType_ReturnValue;            // 0x37E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_25;                             // 0x37E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4919[0x1];                                     // 0x37E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_30;                          // 0x37E4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491A[0x4];                                     // 0x37EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_22;    // 0x37F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_46;         // 0x3800(0x0018)()
	class FName                                   Temp_name_Variable_4;                              // 0x3818(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Sort_Mode_ModeNum;                    // 0x3820(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Sort_Mode_ModeNum_1;                  // 0x3824(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetInventorySortName_SortList1;           // 0x3828(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetInventorySortIndex_Index1;             // 0x3838(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_8;                         // 0x383C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491B[0x4];                                     // 0x3844(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_23;    // 0x3848(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_16;              // 0x3858(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_10;               // 0x385C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_491C[0x3];                                     // 0x385D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_11;                  // 0x3860(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491D[0x4];                                     // 0x3864(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StorageRowListItem_C*              CallFunc_Array_Get_Item_9;                         // 0x3868(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_12;                 // 0x3870(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x3874(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_13;                 // 0x387C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x3880(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             K2Node_Select_Default_31;                          // 0x3888(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x3890(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x3898(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_KeepPage;                       // 0x3899(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_32;                          // 0x389A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491E[0x1];                                     // 0x389B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x389C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x38A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_19;                // 0x38A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_PageCurrent;            // 0x38A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalcPageIndex_Active;                     // 0x38AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_491F[0x3];                                     // 0x38AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalcPageIndex_Index;                      // 0x38B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4920[0x4];                                     // 0x38B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_3;                 // 0x38B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x38C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4921[0x4];                                     // 0x38C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_3;              // 0x38C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x38D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4922[0x3];                                     // 0x38D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_33;                          // 0x38D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_26;                             // 0x38D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4923[0x3];                                     // 0x38D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_34;                          // 0x38DC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4924[0x4];                                     // 0x38E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_24;    // 0x38E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_32;       // 0x38F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4925[0x7];                                     // 0x38F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_47;         // 0x3900(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x3918(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4926[0x3];                                     // 0x3919(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_6;                              // 0x391C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_33;       // 0x3924(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4927[0x3];                                     // 0x3925(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_7;                              // 0x3928(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x3930(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_27;                             // 0x3931(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4928[0x2];                                     // 0x3932(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_35;                          // 0x3934(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4929[0x4];                                     // 0x393C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_25;    // 0x3940(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_Select_Default_36;                          // 0x3950(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_48;         // 0x3960(0x0018)()
	class FName                                   CallFunc_Array_Get_Item_10;                        // 0x3978(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_26;    // 0x3980(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_17;              // 0x3990(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_11;               // 0x3994(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_11;                   // 0x3995(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_12;                   // 0x3996(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_32;           // 0x3997(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue_1;     // 0x3998(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_492A[0x3];                                     // 0x3999(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue_1;        // 0x399C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue_2;     // 0x39A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_492B[0x3];                                     // 0x39A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue_2;        // 0x39A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetRecentSortType_ReturnValue_1;          // 0x39B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_492C[0x3];                                     // 0x39B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_2;           // 0x39B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidOrnament_ReturnValue;                // 0x39B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x39B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_37;                          // 0x39BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop) == 0x000008, "Wrong alignment on WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop");
static_assert(sizeof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop) == 0x0039C0, "Wrong size on WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, EntryPoint) == 0x000000, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000040, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_object_Variable) == 0x000068, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_object_Variable_1) == 0x000070, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000078, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_object_Variable_2) == 0x000088, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000090, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable) == 0x0000A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_object_Variable_3) == 0x0000B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_1) == 0x0000B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000BC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable) == 0x0000C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable) == 0x0000C4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable) == 0x0000CC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue) == 0x0000D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_1) == 0x0000E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_1) == 0x0000FC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_2) == 0x000100, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_4) == 0x000104, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_object_Variable_4) == 0x000108, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue) == 0x000110, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_object_Variable_5) == 0x000118, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_2) == 0x000120, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_5) == 0x000124, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_2) == 0x000128, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000130, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000140, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_object_Variable_6) == 0x000158, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_object_Variable_7) == 0x000160, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_3) == 0x000168, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_6) == 0x00016C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_3) == 0x000170, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_1) == 0x000174, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue) == 0x000175, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InventoryData) == 0x000178, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_3) == 0x000210, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_4) == 0x000214, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue) == 0x000218, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBRetMessage_ReturnValue) == 0x000220, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000230, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_4) == 0x000248, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_2) == 0x00024C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_7) == 0x000250, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_5) == 0x000254, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_8) == 0x000258, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00025C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_KeepPage_1) == 0x00025D, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_KeepPage_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Inventory_Brunch_ReturnValue) == 0x000260, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Inventory_Brunch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_3) == 0x000268, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCapacity_ReturnValue) == 0x00026C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue) == 0x000270, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetUseBlockNum_ReturnValue) == 0x000288, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_5) == 0x00028C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSelectedIndex_ReturnValue) == 0x000290, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_IsSelected) == 0x000294, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InputPin_2) == 0x000298, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InputPin_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetChildrenCount_ReturnValue) == 0x0002A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable) == 0x0002A4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Subtract_IntInt_ReturnValue) == 0x0002A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_SelectItem_4) == 0x0002B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_SelectItem_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InType_1) == 0x0002B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InType_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InputPin_1) == 0x0002C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InputPin_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_LastClickGridType) == 0x0002C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_LastClickGridType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Set_Icon_Select_Items_bAdd) == 0x0002C9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Set_Icon_Select_Items_bAdd' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_6) == 0x0002CC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_9) == 0x0002D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Total_Item_Num_ReturnValue) == 0x0002D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Total_Item_Num_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_ToStorage_2) == 0x0002D9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_ToStorage_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_ToStorage_1) == 0x0002DA, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_ToStorage_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_4) == 0x0002DB, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_6) == 0x0002DC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0002E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result_8) == 0x0002E1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_LockItemData) == 0x0002E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_LockItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_12) == 0x0002F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_7) == 0x0002FC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue) == 0x000300, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_10) == 0x000304, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000308, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_5) == 0x000318, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000320, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_6) == 0x000338, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000339, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00033A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_11) == 0x00033C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InDirtyItems_5) == 0x000340, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InDirtyItems_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000350, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_7) == 0x000351, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InResult_4) == 0x000352, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InResult_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InNumber_3) == 0x000354, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InNumber_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess) == 0x000358, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue) == 0x000360, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000368, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x00036C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsEquipmentItem_ReturnValue) == 0x000370, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue) == 0x000371, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000378, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_InventoryItemData) == 0x000388, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0003E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_7) == 0x000400, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_8) == 0x000404, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default) == 0x000405, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000408, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000418, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000430, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000440, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SearchInventoryItemData_OutputPin) == 0x000458, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SearchInventoryItemData_OutputPin' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SearchInventoryItemData_Enable) == 0x0004F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SearchInventoryItemData_Enable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_1) == 0x0004F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsInventoryStorageNumber_ReturnValue_1) == 0x000500, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsInventoryStorageNumber_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000501, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue) == 0x000504, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanAND_ReturnValue) == 0x000508, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue_1) == 0x000509, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_1) == 0x00050C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_8) == 0x000510, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCollectItemsUniqueID_ReturnValue) == 0x000518, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCollectItemsUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item) == 0x000528, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000548, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_2) == 0x000550, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_9) == 0x000558, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_1) == 0x000560, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_1) == 0x000568, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x000570, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Value_1) == 0x000580, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_CallerDialg_1) == 0x000588, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_CallerDialg_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000590, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0005A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData) == 0x0005C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_2) == 0x000600, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result_7) == 0x000610, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Set_Item_Lock_Save_LockItemData) == 0x000618, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Set_Item_Lock_Save_LockItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Set_Item_Lock_Save_bIsItemLock) == 0x000638, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Set_Item_Lock_Save_bIsItemLock' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000639, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InResult_3) == 0x00063A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InResult_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InNumber_2) == 0x00063C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InNumber_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_1) == 0x000640, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_3) == 0x000648, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000650, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_1) == 0x000654, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000658, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue) == 0x000659, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanAND_ReturnValue_1) == 0x00065A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_10) == 0x00065B, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x00065C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000660, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlayAnimation_ReturnValue) == 0x000678, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_1) == 0x000680, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Multiply_IntInt_ReturnValue) == 0x0006C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x0006C4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0006C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue_4) == 0x0006E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_2) == 0x0006F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_3) == 0x000738, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array) == 0x000778, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_1) == 0x000788, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue) == 0x000798, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_1) == 0x0007B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_1) == 0x0007C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_10) == 0x0007CC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0007D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0007E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_10) == 0x0007E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue_1) == 0x000800, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerController_ReturnValue) == 0x000808, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPlayerShopComponent_ReturnValue) == 0x000810, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPlayerShopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue_5) == 0x000818, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_2) == 0x000830, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_4) == 0x000838, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_2) == 0x000878, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_4) == 0x000888, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x000890, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_11) == 0x0008A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_2) == 0x0008B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_1) == 0x0008D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_2) == 0x0008D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result_6) == 0x0008D5, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0008D6, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0008D7, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_6) == 0x0008D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_7) == 0x0008E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_12) == 0x0008F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_13) == 0x000910, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_3) == 0x000928, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_11) == 0x000929, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_4) == 0x00092A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_3) == 0x00092C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_5) == 0x00093C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_12) == 0x00093D, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_13) == 0x00093E, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_14) == 0x00093F, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_8) == 0x000940, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_9) == 0x000944, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InDirtyItems_4) == 0x000948, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InDirtyItems_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000958, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000968, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_14) == 0x000970, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue) == 0x000988, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_11) == 0x00098C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_1) == 0x000990, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000998, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result_5) == 0x000999, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x00099A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x00099B, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InResult_2) == 0x00099C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InResult_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InNumber_1) == 0x0009A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InNumber_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_2) == 0x0009A4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_6) == 0x0009A5, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_4) == 0x0009A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0009B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_2) == 0x0009B4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue) == 0x0009B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0009C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanAND_ReturnValue_2) == 0x0009C1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_ToStorage) == 0x0009C2, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_ToStorage' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_15) == 0x0009C3, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_7) == 0x0009C4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_8) == 0x0009C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InDirtyItems_3) == 0x0009D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InDirtyItems_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_RetCode_1) == 0x0009E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x0009E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0009F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_15) == 0x000A00, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_2) == 0x000A18, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_8) == 0x000A20, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_2) == 0x000A24, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000A28, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_3) == 0x000A2C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_3) == 0x000A30, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Set_Icon_Select_Items_bAdd_1) == 0x000A31, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Set_Icon_Select_Items_bAdd_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SwitchMultipleSelection_bAdd) == 0x000A32, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SwitchMultipleSelection_bAdd' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_9) == 0x000A33, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x000A34, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_2) == 0x000A38, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_1) == 0x000A50, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_5) == 0x000A58, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_3) == 0x000A98, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_7) == 0x000AA8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InDirtyItems_2) == 0x000AB0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InDirtyItems_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000AC0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_3) == 0x000AC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_4) == 0x000AD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x000AD4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_5) == 0x000AD8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_10) == 0x000ADC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result_4) == 0x000ADD, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_4) == 0x000AE0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000AE8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsInventoryStorageNumber_ReturnValue_2) == 0x000AE9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsInventoryStorageNumber_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_6) == 0x000AEC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_12) == 0x000AF0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_3) == 0x000AF4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_7) == 0x000AF8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_4) == 0x000AFC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_8) == 0x000B00, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InputPin) == 0x000B08, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InputPin' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_5) == 0x000B18, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_RetCode) == 0x000B1C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_4) == 0x000B20, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x000B30, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_16) == 0x000B40, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_5) == 0x000B58, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_8) == 0x000B68, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_17) == 0x000B78, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_6) == 0x000B90, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_11) == 0x000B91, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue_2) == 0x000B92, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000B93, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker) == 0x000B94, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo) == 0x000B98, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_10) == 0x000BA8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_6) == 0x000BAC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Inventory_Brunch_ReturnValue_1) == 0x000BC0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Inventory_Brunch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCharacterStorage_ReturnValue) == 0x000BC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_7) == 0x000BD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_8) == 0x000BE0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SetCaptureStudioEnable_Result) == 0x000BF0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SetCaptureStudioEnable_Result' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_3) == 0x000BF8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_4) == 0x000C00, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_InventoryItemData_1) == 0x000C08, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_InventoryItemData_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue_3) == 0x000C68, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Use_Item_Window_Type_WindowType) == 0x000C69, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Use_Item_Window_Type_WindowType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Use_Item_Window_Type_Valu) == 0x000C6C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Use_Item_Window_Type_Valu' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Use_Item_Window_Type_Time) == 0x000C70, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Use_Item_Window_Type_Time' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Amount) == 0x000C74, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_Use_Data_DataList) == 0x000C78, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_Use_Data_DataList' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_3) == 0x000C88, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_9) == 0x000C8C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_6) == 0x000C9C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SBStorageItemData) == 0x000CA0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SBStorageItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_9) == 0x000CC0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_1) == 0x000CC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_4) == 0x000CD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Is_Lock_Item_bLock) == 0x000CD1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Is_Lock_Item_bLock' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SBStorageItemData_1) == 0x000CD8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SBStorageItemData_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_2) == 0x000CF8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_3) == 0x000CFC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_10) == 0x000D00, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_5) == 0x000D10, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_12) == 0x000D11, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_NewParam_1) == 0x000D12, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_NewParam_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_ItemBox) == 0x000D18, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_ItemBox' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_2) == 0x000D20, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Select_List_SelectedElement) == 0x000D28, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Select_List_SelectedElement' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_11) == 0x000D38, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_5) == 0x000D3C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InItemBoxResultData) == 0x000D40, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InItemBoxResultData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBRetMessage_ReturnValue_5) == 0x000E48, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBRetMessage_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x000E58, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_18) == 0x000E60, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_3) == 0x000E78, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_16) == 0x000E80, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_17) == 0x000E81, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_10) == 0x000E82, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_5) == 0x000E88, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_11) == 0x000E90, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_6) == 0x000EA0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SBStorageItemBoxData) == 0x000EA8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SBStorageItemBoxData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_13) == 0x000ED0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_4) == 0x000ED4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InDirtyItems_1) == 0x000ED8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InDirtyItems_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InResult_1) == 0x000EE8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InResult_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_NewParam) == 0x000EF0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_12) == 0x000F50, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_6) == 0x000F51, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_11) == 0x000F52, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InWeaponStickerInfo) == 0x000F54, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InWeaponStickerUniqueId) == 0x000F68, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InWeaponStickerUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponManager_IsValid) == 0x000F78, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponManager_ReturnValue) == 0x000F80, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponTypeByWeaponID_ReturnValue) == 0x000F88, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponTypeByWeaponID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InSelectedWeaponUniqueItemId) == 0x000F90, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InSelectedWeaponUniqueItemId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InIsHideWindowCalledByDecide) == 0x000FA0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InIsHideWindowCalledByDecide' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x000FA1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_12) == 0x000FA4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_13) == 0x000FB4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_14) == 0x000FC4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_15) == 0x000FD4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_14) == 0x000FE4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000FE8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InIsStickerDiscardSelected) == 0x000FF0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InIsStickerDiscardSelected' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetItemBag_ReturnValue) == 0x000FF8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetItemBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerRemoveItemAmount_OutHaveWeaponStickerRemoveItem) == 0x001000, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerRemoveItemAmount_OutHaveWeaponStickerRemoveItem' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerRemoveItemAmount_OutItemAmount) == 0x001004, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerRemoveItemAmount_OutItemAmount' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_16) == 0x001008, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_17) == 0x001018, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_18) == 0x001028, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_19) == 0x001038, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_4) == 0x001048, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_20) == 0x001050, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_7) == 0x001060, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPlayerWeaponComponent_ReturnValue) == 0x001068, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPlayerWeaponComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_8) == 0x001070, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_5) == 0x001078, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_21) == 0x001080, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_9) == 0x001090, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPlayerWeaponComponent_ReturnValue_1) == 0x001098, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPlayerWeaponComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_10) == 0x0010A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetItemBag_ReturnValue_1) == 0x0010A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetItemBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerRemoveItemInfo_OutHaveWeaponStickerRemoveItem) == 0x0010B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerRemoveItemInfo_OutHaveWeaponStickerRemoveItem' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerRemoveItemInfo_OutOwnItemInfo) == 0x0010B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerRemoveItemInfo_OutOwnItemInfo' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsEquipmentItem_ReturnValue_2) == 0x0011D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsEquipmentItem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_3) == 0x0011D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InStickerUsedWeaponUniqueId) == 0x0011D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InStickerUsedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InIsExpiredStickerWeapons_1) == 0x0011E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InIsExpiredStickerWeapons_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds_2) == 0x0011F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InExpiredStickerWeaponItemDatas_1) == 0x001200, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InExpiredStickerWeaponItemDatas_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_2) == 0x001210, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InStickerRemovedWeaponUniqueId) == 0x001218, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InStickerRemovedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InIsExpiredStickerWeapons) == 0x001228, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds_1) == 0x001230, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InExpiredStickerWeaponItemDatas) == 0x001240, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InExpiredStickerWeaponItemDatas' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindWeaponDataInEquipmentBagOrCharacterStorage_IsValid) == 0x001250, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindWeaponDataInEquipmentBagOrCharacterStorage_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindWeaponDataInEquipmentBagOrCharacterStorage_WeaponData) == 0x001258, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindWeaponDataInEquipmentBagOrCharacterStorage_WeaponData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBRetMessage_ReturnValue_6) == 0x0012A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBRetMessage_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_19) == 0x0012B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindWeaponMaster_bIsValid) == 0x0012D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindWeaponMaster_WeaponMaster) == 0x0012D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponText_ReturnValue) == 0x001388, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x001398, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBRetMessage_ReturnValue_7) == 0x0013A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBRetMessage_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x0013B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_20) == 0x0013B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_9) == 0x0013D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_9) == 0x0013D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindInventoryDataFromUniqueId_OutInventoryData) == 0x0013D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindInventoryDataFromUniqueId_OutInventoryData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_1) == 0x001470, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_13) == 0x001474, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSystemMessageManager_IsValid) == 0x001478, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSystemMessageManager_ReturnValue) == 0x001480, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_9) == 0x001488, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEquipmentBag_ReturnValue) == 0x001498, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_21) == 0x0014A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_11) == 0x0014B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds) == 0x0014C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InEquippedWeaponUniqueId) == 0x0014D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InEquippedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InActivateWeaponModelRotate) == 0x0014E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InActivateWeaponModelRotate' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_15) == 0x0014E1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponItemDataByUniqueId_OutIsValid) == 0x0014E2, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponItemDataByUniqueId_OutIsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData) == 0x0014E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x001538, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindWeaponMaster_bIsValid_1) == 0x001540, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindWeaponMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindWeaponMaster_WeaponMaster_1) == 0x001548, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindWeaponMaster_WeaponMaster_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponText_ReturnValue_1) == 0x0015F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Find_ReturnValue) == 0x001608, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_22) == 0x001610, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x001628, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_6) == 0x001630, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_4) == 0x001670, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_3) == 0x001680, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InStickerAttachedWeaponUniqueId) == 0x001698, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InStickerAttachedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEquipmentBag_ReturnValue_1) == 0x0016A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEquipmentBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_12) == 0x0016B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_1) == 0x0016B1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_1) == 0x0016B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindWeaponMaster_bIsValid_2) == 0x001708, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindWeaponMaster_bIsValid_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindWeaponMaster_WeaponMaster_2) == 0x001710, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindWeaponMaster_WeaponMaster_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponText_ReturnValue_2) == 0x0017C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker_1) == 0x0017D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo_1) == 0x0017D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_13) == 0x0017E4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_RemoveChild_ReturnValue) == 0x0017E5, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_RemoveChild_ReturnValue_1) == 0x0017E6, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_RemoveChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_IsVisible) == 0x0017E7, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SetCaptureStudioEnable_Result_1) == 0x0017E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SetCaptureStudioEnable_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_16) == 0x0017E9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_5) == 0x0017F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_3) == 0x0017F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_7) == 0x0017FC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker_2) == 0x0017FD, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo_2) == 0x001800, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNetworkDataCache_IsValid) == 0x001810, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNetworkDataCache_ReturnValue) == 0x001818, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_13) == 0x001820, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue) == 0x001821, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_12) == 0x001822, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue_2) == 0x001824, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue_3) == 0x001828, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue_4) == 0x00182C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InWeaponUniqueId) == 0x001830, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InWeaponItemData) == 0x001840, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InWeaponItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEquipmentBag_ReturnValue_2) == 0x001890, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEquipmentBag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCharacterStorage_ReturnValue_1) == 0x001898, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCharacterStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetItemBag_ReturnValue_2) == 0x0018A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetItemBag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue_4) == 0x0018A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetFreeBlockNum_ReturnValue) == 0x0018AC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetFreeBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0018B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SlateColor) == 0x0018B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0018E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SlateColor_1) == 0x0018E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SlateColor_2) == 0x001910, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SlateColor_3) == 0x001938, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x001960, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_14) == 0x001961, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x001968, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPosition_ReturnValue) == 0x001970, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x001978, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_14) == 0x001980, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x001988, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_23) == 0x001998, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_24) == 0x0019B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_7) == 0x0019C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_25) == 0x001A08, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_8) == 0x001A20, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_13) == 0x001A60, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindItemMaster_bIsValid) == 0x001A61, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindItemMaster_ItemMaster) == 0x001A68, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_5) == 0x001B38, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_15) == 0x001B60, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SetDateTime_ReturnValue) == 0x001B61, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue_6) == 0x001B68, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_14) == 0x001B80, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_6) == 0x001B88, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetText_ReturnValue) == 0x001BB0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x001BC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_26) == 0x001BD8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_7) == 0x001BF0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue_5) == 0x001C08, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_9) == 0x001C10, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_5) == 0x001C50, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_4) == 0x001C60, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue_7) == 0x001C78, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_IntToText_ReturnValue_8) == 0x001C90, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_IntToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_5) == 0x001CA8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetChildAt_ReturnValue) == 0x001CB0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x001CB8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_DynamicCast_bSuccess) == 0x001CC0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x001CC1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_14) == 0x001CC4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_15) == 0x001CC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_16) == 0x001CC9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_17) == 0x001CCA, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_8) == 0x001CCB, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog_ReturnValue_2) == 0x001CD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_17) == 0x001CD8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_18) == 0x001CD9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_name_Variable) == 0x001CDC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_9) == 0x001CE8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_name_Variable_1) == 0x001CF0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetFreeBlockNum_ReturnValue_1) == 0x001CF8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetFreeBlockNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x001CFC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_19) == 0x001CFD, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_10) == 0x001D00, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_18) == 0x001D08, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_10) == 0x001D10, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_27) == 0x001D20, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_19) == 0x001D38, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_11) == 0x001D40, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_28) == 0x001D50, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_29) == 0x001D68, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_10) == 0x001D80, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_6) == 0x001DC0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_20) == 0x001DD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_5) == 0x001DD8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_11) == 0x001DF0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindItemMaster_bIsValid_1) == 0x001DF1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindItemMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindItemMaster_ItemMaster_1) == 0x001DF8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindItemMaster_ItemMaster_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetItemText_ReturnValue) == 0x001EC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue_6) == 0x001ED8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_22) == 0x001EDC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_AddChildToCanvas_ReturnValue) == 0x001EF0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x001EF8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_12) == 0x001F00, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_30) == 0x001F10, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_7) == 0x001F28, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_31) == 0x001F30, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_13) == 0x001F48, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_11) == 0x001F58, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_32) == 0x001F98, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_33) == 0x001FB0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_AddChildToCanvas_ReturnValue_1) == 0x001FC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_AddChildToCanvas_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_12) == 0x001FD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_7) == 0x002010, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_6) == 0x002020, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_34) == 0x002038, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponStickerRemoveItemName_OutItemName) == 0x002050, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponStickerRemoveItemName_OutItemName' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_13) == 0x002060, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_35) == 0x0020A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_8) == 0x0020B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_14) == 0x0020C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_8) == 0x002100, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_7) == 0x002110, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_12) == 0x002128, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_6) == 0x002140, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_15) == 0x002148, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_23) == 0x00214C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPlayerWeaponComponent_ReturnValue_2) == 0x002160, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPlayerWeaponComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_16) == 0x002168, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_24) == 0x00216C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_7) == 0x002180, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_17) == 0x002188, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_25) == 0x00218C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPlayerWeaponComponent_ReturnValue_3) == 0x0021A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPlayerWeaponComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_26) == 0x0021A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_18) == 0x0021B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_8) == 0x0021C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_18) == 0x0021C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_19) == 0x0021C9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog_ReturnValue_3) == 0x0021D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPlayerWeaponComponent_ReturnValue_4) == 0x0021D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPlayerWeaponComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_20) == 0x0021E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_27) == 0x0021E4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_27' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_28) == 0x0021F4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_28' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_29) == 0x002204, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_29' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_30) == 0x002214, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_30' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_21) == 0x002224, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_31) == 0x002228, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_31' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_32) == 0x002238, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_32' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_33) == 0x002248, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_33' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_22) == 0x002258, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetOwningPlayer_ReturnValue) == 0x002260, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Sender) == 0x002268, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_9) == 0x002270, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_23) == 0x002278, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_10) == 0x00227C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_2) == 0x002280, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetUIManager_IsValid) == 0x002288, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetUIManager_ReturnValue) == 0x002290, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SBStorageItemData_2) == 0x002298, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SBStorageItemData_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_4) == 0x0022B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InParam) == 0x0022C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InParam' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNetworkDataCache_IsValid_1) == 0x0022E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x0022E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_34) == 0x0022F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_34' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetOwnItemList_ReturnValue) == 0x002300, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_24) == 0x002308, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNetworkDataCache_IsValid_2) == 0x002309, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNetworkDataCache_IsValid_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNetworkDataCache_ReturnValue_2) == 0x002310, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNetworkDataCache_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_35) == 0x002318, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_35' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetOwnItemList_ReturnValue_1) == 0x002328, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_25) == 0x002330, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNetworkDataCache_IsValid_3) == 0x002331, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNetworkDataCache_IsValid_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNetworkDataCache_ReturnValue_3) == 0x002338, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNetworkDataCache_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_36) == 0x002340, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_36' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetOwnItemList_ReturnValue_2) == 0x002350, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetOwnItemList_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_26) == 0x002358, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_10) == 0x002360, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_21) == 0x002368, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_21' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SpawnObject_ReturnValue) == 0x002370, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSortRule_SortType) == 0x002378, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSortRule_SortType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Filter_Type_FilterType) == 0x002379, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Filter_Type_FilterType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_16) == 0x00237A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_13) == 0x00237B, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x00237C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_27) == 0x00237D, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_3) == 0x002380, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_9) == 0x0023E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_2) == 0x0023E4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Is_Lock_Item_bLock_1) == 0x0023E5, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Is_Lock_Item_bLock_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_5) == 0x0023E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsFangExpeditionUsing_ReturnValue) == 0x0023EC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsFangExpeditionUsing_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsEquipmentItem_ReturnValue_3) == 0x0023ED, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsEquipmentItem_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_6) == 0x0023F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_4) == 0x0023F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_5) == 0x002458, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SBStorageItemData_3) == 0x0024B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SBStorageItemData_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_7) == 0x0024D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsInventoryStorageNumber_ReturnValue_3) == 0x0024DC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsInventoryStorageNumber_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Is_Lock_Item_bLock_2) == 0x0024DD, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Is_Lock_Item_bLock_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SBStorageItemData_4) == 0x0024E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SBStorageItemData_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsFangExpeditionUsing_ReturnValue_1) == 0x002500, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsFangExpeditionUsing_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_8) == 0x002504, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_9) == 0x002508, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsEquipmentItem_ReturnValue_4) == 0x00250C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsEquipmentItem_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsEquipmentItem_ReturnValue_5) == 0x00250D, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsEquipmentItem_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanOR_ReturnValue) == 0x00250E, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue_7) == 0x00250F, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanOR_ReturnValue_1) == 0x002510, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_10) == 0x002514, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_3) == 0x002518, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_11) == 0x00251C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_4) == 0x002520, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_9) == 0x002528, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_6) == 0x002530, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_28) == 0x002538, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x002539, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x002540, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_14) == 0x002658, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_36) == 0x002668, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindItemMaster_bIsValid_2) == 0x002680, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindItemMaster_bIsValid_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_FindItemMaster_ItemMaster_2) == 0x002688, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_FindItemMaster_ItemMaster_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x002758, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetItemText_ReturnValue_1) == 0x002760, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetItemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_4) == 0x002770, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_10) == 0x002774, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_37) == 0x002778, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_37' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_5) == 0x002788, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_15) == 0x00278C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_19) == 0x002790, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsPackagedForDistribution_ReturnValue) == 0x002791, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsPackagedForDistribution_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsUseCheckOutBuffItem_NeedToCheck) == 0x002792, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsUseCheckOutBuffItem_NeedToCheck' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_CanUseItem_TypeA) == 0x002793, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_CanUseItem_TypeA' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_CanUseItem_ReturnValue) == 0x002794, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_CanUseItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_17) == 0x002795, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_ByteToInt_ReturnValue) == 0x002798, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetAt_ReturnValue) == 0x0027A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_37) == 0x0027B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_UniqueId) == 0x0027C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_StorageNumber) == 0x0027D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_StorageNumber' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Tipe) == 0x0027DC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Tipe' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_18) == 0x0027DD, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetFindWeaponData_WeaponData) == 0x0027E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetFindWeaponData_WeaponData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_11) == 0x002830, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ValidItemWarning_ReturnValue) == 0x002838, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ValidItemWarning_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result_3) == 0x002839, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_19) == 0x00283A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsWeaponStickerAttachd_IsAttach) == 0x00283B, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsWeaponStickerAttachd_IsAttach' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_12) == 0x002840, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_InventoryItemData_2) == 0x002848, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_InventoryItemData_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_byte_Variable_20) == 0x0028A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result_2) == 0x0028A9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_14) == 0x0028B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_20) == 0x0028B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_2) == 0x0028B9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_2) == 0x0028C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result_1) == 0x002910, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_21) == 0x002911, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsWeaponStickerAttachd_IsAttach_1) == 0x002912, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsWeaponStickerAttachd_IsAttach_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetInventory_ReturnValue) == 0x002918, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Result) == 0x002920, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_13) == 0x002928, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_22) == 0x002930, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue_5) == 0x002934, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue_6) == 0x002938, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEquipmentBag_ReturnValue_3) == 0x002940, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEquipmentBag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_29) == 0x002948, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode_1) == 0x00294C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InDirtyItems) == 0x002950, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InDirtyItems' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_SBStorageItemData_5) == 0x002960, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_SBStorageItemData_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerState_ReturnValue_10) == 0x002980, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerState_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_38) == 0x002988, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_38' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog_ReturnValue_4) == 0x002998, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0029A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_30) == 0x0029A1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_23) == 0x0029A2, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_20) == 0x0029A3, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_15) == 0x0029A4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_5) == 0x0029A5, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_6) == 0x0029A6, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0029A7, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorageNum_Num) == 0x0029A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorageNum_Num' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorageNum_Max) == 0x0029AC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorageNum_Max' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ValidTypeAFilterModefi_ReturnValue) == 0x0029B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ValidTypeAFilterModefi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCategoryModeName_ReturnValue) == 0x0029B4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x0029BC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_7) == 0x0029C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_21) == 0x0029C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_4) == 0x0029CC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetLevelLimitClassExpMax_ReturnValue) == 0x0029D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetLevelLimitClassExpMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0029D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_39) == 0x0029D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_39' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Divide_IntInt_ReturnValue) == 0x0029E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_16) == 0x0029EC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_15) == 0x0029F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_22) == 0x002A00, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_38) == 0x002A08, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_16) == 0x002A20, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_isClassLevelLimit_ReturnValue) == 0x002A30, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_isClassLevelLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_39) == 0x002A38, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InResult) == 0x002A50, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InResult' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InNumber) == 0x002A54, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InNumber' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_23) == 0x002A58, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_24) == 0x002A59, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_40) == 0x002A5C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_40' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_31) == 0x002A6C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_17) == 0x002A70, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_40) == 0x002A80, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_15) == 0x002A98, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_18) == 0x002AD8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_9) == 0x002AE8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_41) == 0x002AF8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_6) == 0x002B10, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_8) == 0x002B18, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Value) == 0x002B30, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_CallerDialg) == 0x002B38, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_CallerDialg' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_7) == 0x002B40, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Multiply_IntInt_ReturnValue_2) == 0x002B44, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Multiply_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FormatArgumentData_16) == 0x002B48, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FormatArgumentData_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Multiply_IntInt_ReturnValue_3) == 0x002B88, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Multiply_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeArray_Array_10) == 0x002B90, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeArray_Array_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetClassLevelAddExpCalculation_AfterLevel) == 0x002BA0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetClassLevelAddExpCalculation_AfterLevel' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetClassLevelAddExpCalculation_AfterExp) == 0x002BA4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetClassLevelAddExpCalculation_AfterExp' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetClassLevelAddExpCalculation_AfterMaxExp) == 0x002BA8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetClassLevelAddExpCalculation_AfterMaxExp' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetClassLevelAddExpCalculation_bExpOver) == 0x002BAC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetClassLevelAddExpCalculation_bExpOver' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_9) == 0x002BB0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNowLevelClassExpMax_ReturnValue) == 0x002BC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNowLevelClassExpMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetNowLevelClassExpPoint_ReturnValue) == 0x002BCC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetNowLevelClassExpPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetClassLevel_ReturnValue) == 0x002BD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_19) == 0x002BD8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_42) == 0x002BE8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_8) == 0x002C00, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_22) == 0x002C08, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_22' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_5) == 0x002C0C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_17) == 0x002C10, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_16) == 0x002C14, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Min_ReturnValue) == 0x002C18, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_NotEqual_IntInt_ReturnValue) == 0x002C1C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x002C1D, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanAND_ReturnValue_3) == 0x002C1E, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_14) == 0x002C20, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_20) == 0x002C28, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_21) == 0x002C38, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_43) == 0x002C48, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_44) == 0x002C60, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_24) == 0x002C78, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_9) == 0x002C80, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_17) == 0x002C88, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_ButtonType) == 0x002C89, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_ButtonType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_15) == 0x002C90, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_7) == 0x002C98, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x002CA0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_SelectionType_1) == 0x002CB0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_SelectedItem) == 0x002CB8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_SelectionType) == 0x002CC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_OnItemClick) == 0x002CD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_OnItemClick' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_Filters) == 0x002D68, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_25) == 0x002D78, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_41) == 0x002D7C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_41' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_42) == 0x002D8C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_42' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_ClickBtn_2) == 0x002DA0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_ClickBtn_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_TabID_2) == 0x002DA8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_TabID_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_ClickBtn_1) == 0x002DB0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_ClickBtn_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_TabID_1) == 0x002DB8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_TabID_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlayAnimation_ReturnValue_1) == 0x002DC0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InTotalPrice) == 0x002DC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InTotalPrice' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InSelectItemList_3) == 0x002DD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InSelectItemList_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_NewParam) == 0x002DE0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_43) == 0x002E78, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_43' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_RequestSaveItemDrop_Success) == 0x002E88, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_RequestSaveItemDrop_Success' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InSelectItemList_2) == 0x002E90, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InSelectItemList_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InSelectItemList_1) == 0x002EA0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InSelectItemList_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InSelectItemList) == 0x002EB0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InSelectItemList' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_SelectItem_3) == 0x002EC0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_SelectItem_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_SelectItem_2) == 0x002EC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_SelectItem_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_SelectItem_1) == 0x002ED0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_SelectItem_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x002ED8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SearchInventoryItemData_OutputPin_1) == 0x002EE8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SearchInventoryItemData_OutputPin_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SearchInventoryItemData_Enable_1) == 0x002F80, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SearchInventoryItemData_Enable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_45) == 0x002F88, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Format_ReturnValue_10) == 0x002FA0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Format_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog_ReturnValue_5) == 0x002FB8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsInventoryStorageNumber_ReturnValue_4) == 0x002FC0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsInventoryStorageNumber_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_SelectItem) == 0x002FC8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SearchInventoryItemData_OutputPin_2) == 0x002FD0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SearchInventoryItemData_OutputPin_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_SearchInventoryItemData_Enable_2) == 0x003068, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_SearchInventoryItemData_Enable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsDownMultipleSelection_ReturnValue) == 0x003069, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsDownMultipleSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsInventoryStorageNumber_ReturnValue_5) == 0x00306A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsInventoryStorageNumber_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_32) == 0x00306B, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Not_PreBool_ReturnValue_8) == 0x00306C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Loop_Counter_Variable_11) == 0x003070, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Loop_Counter_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_6) == 0x003074, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_18) == 0x003078, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InIsInUse) == 0x00307C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InIsInUse' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_26) == 0x00307D, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_InventoryItemData_3) == 0x003080, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_InventoryItemData_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_25) == 0x0030E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_27) == 0x0030E1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEquipmentBag_ReturnValue_4) == 0x0030E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEquipmentBag_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCharacterStorage_ReturnValue_2) == 0x0030F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCharacterStorage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue_7) == 0x0030F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_18) == 0x003100, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_InventoryData) == 0x003108, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_33) == 0x003168, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetIconPtr_AsItem_Icon_Btn) == 0x003170, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetIconPtr_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetIconPtr_bInventory) == 0x003178, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetIconPtr_bInventory' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetIconPtr_NotHave) == 0x003179, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetIconPtr_NotHave' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_3) == 0x00317A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponItemDataByUniqueId_OutIsValid_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_3) == 0x003180, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_44) == 0x0031D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_44' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog_ReturnValue_6) == 0x0031E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsDownMultipleSelection_ReturnValue_1) == 0x0031E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsDownMultipleSelection_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetVisibility_ReturnValue) == 0x0031E9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_26) == 0x0031EA, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_19) == 0x0031F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_CurrentOffset_1) == 0x003250, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_CurrentOffset_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_CurrentOffset) == 0x003254, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_CurrentOffset' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_28) == 0x003258, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Slot) == 0x003260, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Offset) == 0x003268, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Offset' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetChildrenCount_ReturnValue_1) == 0x00326C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetChildAt_ReturnValue_1) == 0x003270, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x003278, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_DynamicCast_AsItem_Icon_Btn_1) == 0x003280, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_DynamicCast_AsItem_Icon_Btn_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_DynamicCast_bSuccess_1) == 0x003288, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x003289, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_34) == 0x00328A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_12) == 0x00328C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_45) == 0x003290, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_45' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_8) == 0x0032A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Grid) == 0x0032A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Grid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_float_Variable) == 0x0032B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetChildAt_ReturnValue_2) == 0x0032B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_DynamicCast_AsItem_Icon_Btn_2) == 0x0032C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_DynamicCast_AsItem_Icon_Btn_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_DynamicCast_bSuccess_2) == 0x0032C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetChildrenCount_ReturnValue_2) == 0x0032CC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetChildrenCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x0032D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_LessEqual_IntInt_ReturnValue_4) == 0x0032D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_LessEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Find_ReturnValue_1) == 0x0032D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0032DC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_ClickBtn) == 0x0032E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_TabID) == 0x0032E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_TabID' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsOpen_ReturnValue) == 0x0032EC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsOpen_ReturnValue_1) == 0x0032ED, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsOpen_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanOR_ReturnValue_2) == 0x0032EE, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_float_Variable_1) == 0x0032F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanOR_ReturnValue_3) == 0x0032F4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InType) == 0x0032F5, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_ScrollReset) == 0x0032F6, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_ScrollReset' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_27) == 0x0032F7, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_28) == 0x0032F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_29) == 0x0032F9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_8) == 0x0032FA, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetItemListContainer_ReturnValue) == 0x003300, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetItemListContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetItemListContainer_ReturnValue_1) == 0x003308, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetItemListContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCapacity_ReturnValue_1) == 0x003310, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCapacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x003318, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSotedIndexNum_ReturnValue) == 0x003430, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_CreateInventoryData_InventoryData) == 0x003438, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_CreateInventoryData_IsSuccess) == 0x0034D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Subtract_IntInt_ReturnValue_4) == 0x0034D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Subtract_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_LessEqual_IntInt_ReturnValue_5) == 0x0034D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_LessEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_9) == 0x0034D9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCapacity_ReturnValue_2) == 0x0034DC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCapacity_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_9) == 0x0034E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_K2_SetTimer_ReturnValue) == 0x0034E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_K2_SetTimer_ReturnValue_1) == 0x0034F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_29) == 0x0034F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_23) == 0x0034F9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_23' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_30) == 0x0034FA, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_20) == 0x0034FC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_20' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_WidgetTransform) == 0x003500, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_16) == 0x003520, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_17) == 0x003528, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_6) == 0x003530, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_46) == 0x003540, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_46' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_13) == 0x003550, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_7) == 0x003554, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_47) == 0x003558, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_47' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_48) == 0x003568, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_48' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_21) == 0x003578, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_21' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_8) == 0x003580, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_22) == 0x003588, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_22' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_7) == 0x003598, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_10) == 0x003630, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_14) == 0x003634, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_11) == 0x003638, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_8) == 0x00363C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Filter_Type_FilterType_1) == 0x00363D, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Filter_Type_FilterType_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_15) == 0x003640, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_MakeStruct_FilterGroup) == 0x003648, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_9) == 0x003658, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EmptyFilter_ReturnValue) == 0x003660, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EmptyFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_AddFilter_ReturnValue) == 0x003670, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Create_ReturnValue_18) == 0x003680, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Create_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsInventoryStorageNumber_ReturnValue_6) == 0x003688, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsInventoryStorageNumber_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_30) == 0x003689, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_23) == 0x003690, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_23' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_24) == 0x003698, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_24' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_49) == 0x0036A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_49' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_QueryAddItem_ReturnValue) == 0x0036B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_QueryAddItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_31) == 0x0036B1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetInventory_ReturnValue_1) == 0x0036B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetInventory_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEquipmentBag_ReturnValue_5) == 0x0036C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEquipmentBag_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetStorage_ReturnValue_10) == 0x0036C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetStorage_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_25) == 0x0036D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_25' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_26) == 0x0036D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_26' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_27) == 0x0036E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_27' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSlackNum_ReturnValue) == 0x0036E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSlackNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Min_ReturnValue_1) == 0x0036EC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Min_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_10) == 0x0036F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanAND_ReturnValue_4) == 0x0036F1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_11) == 0x0036F2, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_50) == 0x0036F4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_50' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_IsValid_ReturnValue_35) == 0x003704, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_IsValid_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_9) == 0x003708, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Variable_10) == 0x00370C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_24) == 0x003710, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_24' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_51) == 0x003714, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_51' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_28) == 0x003724, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_28' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_52) == 0x003728, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_52' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_53) == 0x003738, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_53' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CreateDelegate_OutputDelegate_54) == 0x003748, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CreateDelegate_OutputDelegate_54' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEquipmentBag_ReturnValue_6) == 0x003758, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEquipmentBag_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCapacity_ReturnValue_3) == 0x003760, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCapacity_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlayAnimation_ReturnValue_2) == 0x003768, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetChildrenCount_ReturnValue_3) == 0x003770, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetChildrenCount_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_31) == 0x003774, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_IntInt_ReturnValue_10) == 0x003775, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ShowYesNoDialog2_ReturnValue_1) == 0x003778, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ShowYesNoDialog2_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetInventory_ReturnValue_2) == 0x003780, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetInventory_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCapacity_ReturnValue_4) == 0x003788, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCapacity_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_10) == 0x00378C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Greater_IntInt_ReturnValue_12) == 0x00378D, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Greater_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_29) == 0x003790, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_29' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_PlaySE_ReturnValue_8) == 0x003794, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_PlaySE_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x003798, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_InRetCode) == 0x0037A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue) == 0x0037A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0037B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1) == 0x0037B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_name_Variable_2) == 0x0037C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetUIManager_IsValid_1) == 0x0037C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetUIManager_ReturnValue_1) == 0x0037D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_name_Variable_3) == 0x0037D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSortRule_SortType_1) == 0x0037E0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSortRule_SortType_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetRecentSortType_ReturnValue) == 0x0037E1, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetRecentSortType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_25) == 0x0037E2, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_25' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_30) == 0x0037E4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_30' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_22) == 0x0037F0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_46) == 0x003800, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_name_Variable_4) == 0x003818, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Sort_Mode_ModeNum) == 0x003820, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Sort_Mode_ModeNum' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Get_Sort_Mode_ModeNum_1) == 0x003824, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Get_Sort_Mode_ModeNum_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetInventorySortName_SortList1) == 0x003828, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetInventorySortName_SortList1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetInventorySortIndex_Index1) == 0x003838, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetInventorySortIndex_Index1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_8) == 0x00383C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_23) == 0x003848, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_16) == 0x003858, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_10) == 0x00385C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_int_Array_Index_Variable_11) == 0x003860, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_int_Array_Index_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_9) == 0x003868, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_12) == 0x003870, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_name_Variable_5) == 0x003874, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Add_ReturnValue_13) == 0x00387C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Add_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEventExecutor_ReturnValue) == 0x003880, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_31) == 0x003888, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_31' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetEventExecutor_ReturnValue_1) == 0x003890, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_Visible) == 0x003898, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_CustomEvent_KeepPage) == 0x003899, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_CustomEvent_KeepPage' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_32) == 0x00389A, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_32' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Subtract_IntInt_ReturnValue_5) == 0x00389C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Subtract_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Divide_IntInt_ReturnValue_1) == 0x0038A0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Add_IntInt_ReturnValue_19) == 0x0038A4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Add_IntInt_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_ComponentBoundEvent_PageCurrent) == 0x0038A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_ComponentBoundEvent_PageCurrent' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_CalcPageIndex_Active) == 0x0038AC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_CalcPageIndex_Active' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_CalcPageIndex_Index) == 0x0038B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_CalcPageIndex_Index' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetChildAt_ReturnValue_3) == 0x0038B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetChildAt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Clamp_ReturnValue) == 0x0038C0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_DynamicCast_AsItem_Icon_Btn_3) == 0x0038C8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_DynamicCast_AsItem_Icon_Btn_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_DynamicCast_bSuccess_3) == 0x0038D0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_33) == 0x0038D4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_33' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_26) == 0x0038D8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_26' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_34) == 0x0038DC, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_34' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_24) == 0x0038E8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_32) == 0x0038F8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_47) == 0x003900, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanAND_ReturnValue_5) == 0x003918, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_name_Variable_6) == 0x00391C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_EqualEqual_ByteByte_ReturnValue_33) == 0x003924, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_EqualEqual_ByteByte_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_name_Variable_7) == 0x003928, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_BooleanAND_ReturnValue_6) == 0x003930, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, Temp_bool_Variable_27) == 0x003931, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::Temp_bool_Variable_27' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_35) == 0x003934, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_35' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_25) == 0x003940, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_36) == 0x003950, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_36' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Conv_StringToText_ReturnValue_48) == 0x003960, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Conv_StringToText_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Get_Item_10) == 0x003978, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Get_Item_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetTextFromAssetByName_ReturnValue_26) == 0x003980, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetTextFromAssetByName_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Array_Length_ReturnValue_17) == 0x003990, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Array_Length_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_Less_IntInt_ReturnValue_11) == 0x003994, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_Less_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_11) == 0x003995, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_SwitchEnum_CmpSuccess_12) == 0x003996, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_SwitchEnum_CmpSuccess_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_MakeLiteralByte_ReturnValue_32) == 0x003997, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_MakeLiteralByte_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ValidTypeAFilterModefi_ReturnValue_1) == 0x003998, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ValidTypeAFilterModefi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCategoryModeName_ReturnValue_1) == 0x00399C, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCategoryModeName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ValidTypeAFilterModefi_ReturnValue_2) == 0x0039A4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ValidTypeAFilterModefi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetCategoryModeName_ReturnValue_2) == 0x0039A8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetCategoryModeName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetRecentSortType_ReturnValue_1) == 0x0039B0, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetRecentSortType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_GetSelectedIndex_ReturnValue_2) == 0x0039B4, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_GetSelectedIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, CallFunc_ValidOrnament_ReturnValue) == 0x0039B8, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::CallFunc_ValidOrnament_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Event_IsDesignTime) == 0x0039B9, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop, K2Node_Select_Default_37) == 0x0039BA, "Member 'WBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop::K2Node_Select_Default_37' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_StorageShop_C_PreConstruct");
static_assert(sizeof(WBP_StorageShop_C_PreConstruct) == 0x000001, "Wrong size on WBP_StorageShop_C_PreConstruct");
static_assert(offsetof(WBP_StorageShop_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_StorageShop_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature final
{
public:
	int32                                         PageCurrent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on WBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on WBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature, PageCurrent) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature::PageCurrent' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.UpdetaPage
// 0x0002 (0x0002 - 0x0000)
struct WBP_StorageShop_C_UpdetaPage final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          KeepPage;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_UpdetaPage) == 0x000001, "Wrong alignment on WBP_StorageShop_C_UpdetaPage");
static_assert(sizeof(WBP_StorageShop_C_UpdetaPage) == 0x000002, "Wrong size on WBP_StorageShop_C_UpdetaPage");
static_assert(offsetof(WBP_StorageShop_C_UpdetaPage, Visible) == 0x000000, "Member 'WBP_StorageShop_C_UpdetaPage::Visible' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdetaPage, KeepPage) == 0x000001, "Member 'WBP_StorageShop_C_UpdetaPage::KeepPage' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_11
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_11 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_11) == 0x000004, "Wrong alignment on WBP_StorageShop_C_CustomEvent_11");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_11) == 0x000004, "Wrong size on WBP_StorageShop_C_CustomEvent_11");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_11, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_11::InRetCode' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.ResetGrid
// 0x0002 (0x0002 - 0x0000)
struct WBP_StorageShop_C_ResetGrid final
{
public:
	EStorageGridType                              InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScrollReset;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_ResetGrid) == 0x000001, "Wrong alignment on WBP_StorageShop_C_ResetGrid");
static_assert(sizeof(WBP_StorageShop_C_ResetGrid) == 0x000002, "Wrong size on WBP_StorageShop_C_ResetGrid");
static_assert(offsetof(WBP_StorageShop_C_ResetGrid, InType) == 0x000000, "Member 'WBP_StorageShop_C_ResetGrid::InType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ResetGrid, ScrollReset) == 0x000001, "Member 'WBP_StorageShop_C_ResetGrid::ScrollReset' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature final
{
public:
	class UShopCmnBtn1_C*                         ClickBtn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabId;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature) == 0x000010, "Wrong size on WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature, ClickBtn) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature::ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature, TabId) == 0x000008, "Member 'WBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature::TabId' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.SlotSelectRevival
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_SlotSelectRevival final
{
public:
	class UGridPanel*                             Grid;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_SlotSelectRevival) == 0x000008, "Wrong alignment on WBP_StorageShop_C_SlotSelectRevival");
static_assert(sizeof(WBP_StorageShop_C_SlotSelectRevival) == 0x000008, "Wrong size on WBP_StorageShop_C_SlotSelectRevival");
static_assert(offsetof(WBP_StorageShop_C_SlotSelectRevival, Grid) == 0x000000, "Member 'WBP_StorageShop_C_SlotSelectRevival::Grid' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.IconScrollVisible
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_IconScrollVisible final
{
public:
	class UGridPanel*                             Param_Slot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Offset;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_IconScrollVisible) == 0x000008, "Wrong alignment on WBP_StorageShop_C_IconScrollVisible");
static_assert(sizeof(WBP_StorageShop_C_IconScrollVisible) == 0x000010, "Wrong size on WBP_StorageShop_C_IconScrollVisible");
static_assert(offsetof(WBP_StorageShop_C_IconScrollVisible, Param_Slot) == 0x000000, "Member 'WBP_StorageShop_C_IconScrollVisible::Param_Slot' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_IconScrollVisible, Offset) == 0x000008, "Member 'WBP_StorageShop_C_IconScrollVisible::Offset' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     Param_InventoryData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature, Param_InventoryData) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature final
{
public:
	bool                                          InIsInUse;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature) == 0x000001, "Wrong alignment on WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature) == 0x000001, "Wrong size on WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature, InIsInUse) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature::InIsInUse' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnPressRight_Storage
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_OnPressRight_Storage final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnPressRight_Storage) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnPressRight_Storage");
static_assert(sizeof(WBP_StorageShop_C_OnPressRight_Storage) == 0x000008, "Wrong size on WBP_StorageShop_C_OnPressRight_Storage");
static_assert(offsetof(WBP_StorageShop_C_OnPressRight_Storage, SelectItem) == 0x000000, "Member 'WBP_StorageShop_C_OnPressRight_Storage::SelectItem' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnPressRight_Inventory
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_OnPressRight_Inventory final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnPressRight_Inventory) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnPressRight_Inventory");
static_assert(sizeof(WBP_StorageShop_C_OnPressRight_Inventory) == 0x000008, "Wrong size on WBP_StorageShop_C_OnPressRight_Inventory");
static_assert(offsetof(WBP_StorageShop_C_OnPressRight_Inventory, SelectItem) == 0x000000, "Member 'WBP_StorageShop_C_OnPressRight_Inventory::SelectItem' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnPressItem_Storage
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_OnPressItem_Storage final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnPressItem_Storage) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnPressItem_Storage");
static_assert(sizeof(WBP_StorageShop_C_OnPressItem_Storage) == 0x000008, "Wrong size on WBP_StorageShop_C_OnPressItem_Storage");
static_assert(offsetof(WBP_StorageShop_C_OnPressItem_Storage, SelectItem) == 0x000000, "Member 'WBP_StorageShop_C_OnPressItem_Storage::SelectItem' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnPressItem_Inventory
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_OnPressItem_Inventory final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnPressItem_Inventory) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnPressItem_Inventory");
static_assert(sizeof(WBP_StorageShop_C_OnPressItem_Inventory) == 0x000008, "Wrong size on WBP_StorageShop_C_OnPressItem_Inventory");
static_assert(offsetof(WBP_StorageShop_C_OnPressItem_Inventory, SelectItem) == 0x000000, "Member 'WBP_StorageShop_C_OnPressItem_Inventory::SelectItem' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature final
{
public:
	TArray<struct FInventoryItemData>             InSelectItemList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature) == 0x000010, "Wrong size on WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature, InSelectItemList) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature::InSelectItemList' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature final
{
public:
	TArray<struct FInventoryItemData>             InSelectItemList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature) == 0x000010, "Wrong size on WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature, InSelectItemList) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature::InSelectItemList' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature final
{
public:
	TArray<struct FInventoryItemData>             InSelectItemList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature) == 0x000010, "Wrong size on WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature, InSelectItemList) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature::InSelectItemList' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature
// 0x0098 (0x0098 - 0x0000)
struct WBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature final
{
public:
	struct FInventoryData                         NewParam;                                          // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature) == 0x000098, "Wrong size on WBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature, NewParam) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature::NewParam' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature final
{
public:
	int32                                         InTotalPrice;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_492D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryItemData>             InSelectItemList;                                  // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature) == 0x000018, "Wrong size on WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature, InTotalPrice) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature::InTotalPrice' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature, InSelectItemList) == 0x000008, "Member 'WBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature::InSelectItemList' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature final
{
public:
	class UShopCmnBtn1_C*                         ClickBtn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabId;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature) == 0x000010, "Wrong size on WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature, ClickBtn) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature::ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature, TabId) == 0x000008, "Member 'WBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature::TabId' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature final
{
public:
	class UShopCmnBtn1_C*                         ClickBtn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabId;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature) == 0x000010, "Wrong size on WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature, ClickBtn) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature::ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature, TabId) == 0x000008, "Member 'WBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature::TabId' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Param_Filters;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on WBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature, Param_Filters) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature::Param_Filters' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature
// 0x0098 (0x0098 - 0x0000)
struct WBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature final
{
public:
	struct FInventoryData                         OnItemClick;                                       // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature) == 0x000098, "Wrong size on WBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature, OnItemClick) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature::OnItemClick' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'WBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'WBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature) == 0x000001, "Wrong alignment on WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature) == 0x000001, "Wrong size on WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature, ButtonType) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature::ButtonType' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.SetLevelAfter
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_SetLevelAfter final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_492E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ExpIncrease_C*                     CallerDialg;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_SetLevelAfter) == 0x000008, "Wrong alignment on WBP_StorageShop_C_SetLevelAfter");
static_assert(sizeof(WBP_StorageShop_C_SetLevelAfter) == 0x000010, "Wrong size on WBP_StorageShop_C_SetLevelAfter");
static_assert(offsetof(WBP_StorageShop_C_SetLevelAfter, Value) == 0x000000, "Member 'WBP_StorageShop_C_SetLevelAfter::Value' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SetLevelAfter, CallerDialg) == 0x000008, "Member 'WBP_StorageShop_C_SetLevelAfter::CallerDialg' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.WBP_ExpIncreaseEnd
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_WBP_ExpIncreaseEnd final
{
public:
	ENumberInputDialogResult                      InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_492F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNumber;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_WBP_ExpIncreaseEnd) == 0x000004, "Wrong alignment on WBP_StorageShop_C_WBP_ExpIncreaseEnd");
static_assert(sizeof(WBP_StorageShop_C_WBP_ExpIncreaseEnd) == 0x000008, "Wrong size on WBP_StorageShop_C_WBP_ExpIncreaseEnd");
static_assert(offsetof(WBP_StorageShop_C_WBP_ExpIncreaseEnd, InResult) == 0x000000, "Member 'WBP_StorageShop_C_WBP_ExpIncreaseEnd::InResult' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_WBP_ExpIncreaseEnd, InNumber) == 0x000004, "Member 'WBP_StorageShop_C_WBP_ExpIncreaseEnd::InNumber' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_19
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_19 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4930[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_19) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CustomEvent_19");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_19) == 0x000018, "Wrong size on WBP_StorageShop_C_CustomEvent_19");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_19, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_19::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_19, InDirtyItems) == 0x000008, "Member 'WBP_StorageShop_C_CustomEvent_19::InDirtyItems' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_18
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_18 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_18) == 0x000001, "Wrong alignment on WBP_StorageShop_C_CustomEvent_18");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_18) == 0x000001, "Wrong size on WBP_StorageShop_C_CustomEvent_18");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_18, Result) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_18::Result' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_17
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_17 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_17) == 0x000001, "Wrong alignment on WBP_StorageShop_C_CustomEvent_17");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_17) == 0x000001, "Wrong size on WBP_StorageShop_C_CustomEvent_17");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_17, Result) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_17::Result' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_16
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_16 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_16) == 0x000001, "Wrong alignment on WBP_StorageShop_C_CustomEvent_16");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_16) == 0x000001, "Wrong size on WBP_StorageShop_C_CustomEvent_16");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_16, Result) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_16::Result' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_15
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_15 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_15) == 0x000001, "Wrong alignment on WBP_StorageShop_C_CustomEvent_15");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_15) == 0x000001, "Wrong size on WBP_StorageShop_C_CustomEvent_15");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_15, Result) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_15::Result' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CheckWarning
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_CheckWarning final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         StorageNumber;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Tipe;                                              // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CheckWarning) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CheckWarning");
static_assert(sizeof(WBP_StorageShop_C_CheckWarning) == 0x000018, "Wrong size on WBP_StorageShop_C_CheckWarning");
static_assert(offsetof(WBP_StorageShop_C_CheckWarning, UniqueId) == 0x000000, "Member 'WBP_StorageShop_C_CheckWarning::UniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CheckWarning, StorageNumber) == 0x000010, "Member 'WBP_StorageShop_C_CheckWarning::StorageNumber' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CheckWarning, Tipe) == 0x000014, "Member 'WBP_StorageShop_C_CheckWarning::Tipe' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnOwnItemAmountChanged
// 0x0020 (0x0020 - 0x0000)
struct WBP_StorageShop_C_OnOwnItemAmountChanged final
{
public:
	struct FSBChangeItemAmountParam               InParam;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_OnOwnItemAmountChanged) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnOwnItemAmountChanged");
static_assert(sizeof(WBP_StorageShop_C_OnOwnItemAmountChanged) == 0x000020, "Wrong size on WBP_StorageShop_C_OnOwnItemAmountChanged");
static_assert(offsetof(WBP_StorageShop_C_OnOwnItemAmountChanged, InParam) == 0x000000, "Member 'WBP_StorageShop_C_OnOwnItemAmountChanged::InParam' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnCloseDetailMenu
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_OnCloseDetailMenu final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnCloseDetailMenu) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnCloseDetailMenu");
static_assert(sizeof(WBP_StorageShop_C_OnCloseDetailMenu) == 0x000008, "Wrong size on WBP_StorageShop_C_OnCloseDetailMenu");
static_assert(offsetof(WBP_StorageShop_C_OnCloseDetailMenu, Sender) == 0x000000, "Member 'WBP_StorageShop_C_OnCloseDetailMenu::Sender' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      InWeaponItemData;                                  // 0x0010(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature");
static_assert(sizeof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature) == 0x000060, "Wrong size on WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature, InWeaponUniqueId) == 0x000000, "Member 'WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature, InWeaponItemData) == 0x000010, "Member 'WBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature::InWeaponItemData' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.UiInputBlock
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_UiInputBlock final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_UiInputBlock) == 0x000001, "Wrong alignment on WBP_StorageShop_C_UiInputBlock");
static_assert(sizeof(WBP_StorageShop_C_UiInputBlock) == 0x000001, "Wrong size on WBP_StorageShop_C_UiInputBlock");
static_assert(offsetof(WBP_StorageShop_C_UiInputBlock, Param_IsVisible) == 0x000000, "Member 'WBP_StorageShop_C_UiInputBlock::Param_IsVisible' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog final
{
public:
	class FString                                 InStickerAttachedWeaponUniqueId;                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog) == 0x000008, "Wrong alignment on WBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog");
static_assert(sizeof(WBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog) == 0x000010, "Wrong size on WBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog");
static_assert(offsetof(WBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog, InStickerAttachedWeaponUniqueId) == 0x000000, "Member 'WBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog::InStickerAttachedWeaponUniqueId' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.ShowExpiredWeaponStickerSystemMessage
// 0x0028 (0x0028 - 0x0000)
struct WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage final
{
public:
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 InEquippedWeaponUniqueId;                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InActivateWeaponModelRotate;                       // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage) == 0x000008, "Wrong alignment on WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage");
static_assert(sizeof(WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage) == 0x000028, "Wrong size on WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage");
static_assert(offsetof(WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage, InExpiredStickerWeaponUniqueIds) == 0x000000, "Member 'WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage, InEquippedWeaponUniqueId) == 0x000010, "Member 'WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage::InEquippedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage, InActivateWeaponModelRotate) == 0x000020, "Member 'WBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage::InActivateWeaponModelRotate' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnRemoveWeaponStickerDelegateEvent
// 0x0040 (0x0040 - 0x0000)
struct WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4931[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InStickerRemovedWeaponUniqueId;                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InIsExpiredStickerWeapons;                         // 0x0018(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4932[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBWeaponItemData>              InExpiredStickerWeaponItemDatas;                   // 0x0030(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent");
static_assert(sizeof(WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent) == 0x000040, "Wrong size on WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent");
static_assert(offsetof(WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent, InStickerRemovedWeaponUniqueId) == 0x000008, "Member 'WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent::InStickerRemovedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent, InIsExpiredStickerWeapons) == 0x000018, "Member 'WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent::InIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent, InExpiredStickerWeaponUniqueIds) == 0x000020, "Member 'WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent, InExpiredStickerWeaponItemDatas) == 0x000030, "Member 'WBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent::InExpiredStickerWeaponItemDatas' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnUseWeaponStickerDelegateEvent
// 0x0040 (0x0040 - 0x0000)
struct WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4933[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InStickerUsedWeaponUniqueId;                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InIsExpiredStickerWeapons;                         // 0x0018(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4934[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBWeaponItemData>              InExpiredStickerWeaponItemDatas;                   // 0x0030(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent");
static_assert(sizeof(WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent) == 0x000040, "Wrong size on WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent");
static_assert(offsetof(WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent, InStickerUsedWeaponUniqueId) == 0x000008, "Member 'WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent::InStickerUsedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent, InIsExpiredStickerWeapons) == 0x000018, "Member 'WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent::InIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent, InExpiredStickerWeaponUniqueIds) == 0x000020, "Member 'WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent, InExpiredStickerWeaponItemDatas) == 0x000030, "Member 'WBP_StorageShop_C_OnUseWeaponStickerDelegateEvent::InExpiredStickerWeaponItemDatas' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerRemoveDecideEvent
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent final
{
public:
	bool                                          InIsStickerDiscardSelected;                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent) == 0x000001, "Wrong alignment on WBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent");
static_assert(sizeof(WBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent) == 0x000001, "Wrong size on WBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent");
static_assert(offsetof(WBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent, InIsStickerDiscardSelected) == 0x000000, "Member 'WBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent::InIsStickerDiscardSelected' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerWeaponSelectWindowHideEndEvent
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent final
{
public:
	bool                                          InIsHideWindowCalledByDecide;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent) == 0x000001, "Wrong alignment on WBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent");
static_assert(sizeof(WBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent) == 0x000001, "Wrong size on WBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent");
static_assert(offsetof(WBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent, InIsHideWindowCalledByDecide) == 0x000000, "Member 'WBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent::InIsHideWindowCalledByDecide' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnUseWeaponStickerDecideEvent
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_OnUseWeaponStickerDecideEvent final
{
public:
	class FString                                 InSelectedWeaponUniqueItemId;                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnUseWeaponStickerDecideEvent) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnUseWeaponStickerDecideEvent");
static_assert(sizeof(WBP_StorageShop_C_OnUseWeaponStickerDecideEvent) == 0x000010, "Wrong size on WBP_StorageShop_C_OnUseWeaponStickerDecideEvent");
static_assert(offsetof(WBP_StorageShop_C_OnUseWeaponStickerDecideEvent, InSelectedWeaponUniqueItemId) == 0x000000, "Member 'WBP_StorageShop_C_OnUseWeaponStickerDecideEvent::InSelectedWeaponUniqueItemId' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.UseWeaponSticker
// 0x0020 (0x0020 - 0x0000)
struct WBP_StorageShop_C_UseWeaponSticker final
{
public:
	struct FAppearanceWeaponSticker               InWeaponStickerInfo;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class FString                                 InWeaponStickerUniqueId;                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_UseWeaponSticker) == 0x000008, "Wrong alignment on WBP_StorageShop_C_UseWeaponSticker");
static_assert(sizeof(WBP_StorageShop_C_UseWeaponSticker) == 0x000020, "Wrong size on WBP_StorageShop_C_UseWeaponSticker");
static_assert(offsetof(WBP_StorageShop_C_UseWeaponSticker, InWeaponStickerInfo) == 0x000000, "Member 'WBP_StorageShop_C_UseWeaponSticker::InWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UseWeaponSticker, InWeaponStickerUniqueId) == 0x000010, "Member 'WBP_StorageShop_C_UseWeaponSticker::InWeaponStickerUniqueId' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_14
// 0x0068 (0x0068 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_14 final
{
public:
	ENumberInputDialogResult                      InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4935[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     NewParam;                                          // 0x0008(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_14) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CustomEvent_14");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_14) == 0x000068, "Wrong size on WBP_StorageShop_C_CustomEvent_14");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_14, InResult) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_14::InResult' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_14, NewParam) == 0x000008, "Member 'WBP_StorageShop_C_CustomEvent_14::NewParam' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_13
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_13 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4936[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_13) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CustomEvent_13");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_13) == 0x000018, "Wrong size on WBP_StorageShop_C_CustomEvent_13");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_13, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_13::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_13, InDirtyItems) == 0x000008, "Member 'WBP_StorageShop_C_CustomEvent_13::InDirtyItems' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_12
// 0x0110 (0x0110 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_12 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4937[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStorageItemBoxResultData            InItemBoxResultData;                               // 0x0008(0x0108)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_12) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CustomEvent_12");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_12) == 0x000110, "Wrong size on WBP_StorageShop_C_CustomEvent_12");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_12, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_12::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_12, InItemBoxResultData) == 0x000008, "Member 'WBP_StorageShop_C_CustomEvent_12::InItemBoxResultData' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_6
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_6 final
{
public:
	ENumberInputDialogResult                      NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4938[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemBox_C*                         ItemBox;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_6) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CustomEvent_6");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_6) == 0x000010, "Wrong size on WBP_StorageShop_C_CustomEvent_6");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_6, NewParam) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_6::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_6, ItemBox) == 0x000008, "Member 'WBP_StorageShop_C_CustomEvent_6::ItemBox' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.ItemUseAfter
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_ItemUseAfter final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_ItemUseAfter) == 0x000004, "Wrong alignment on WBP_StorageShop_C_ItemUseAfter");
static_assert(sizeof(WBP_StorageShop_C_ItemUseAfter) == 0x000004, "Wrong size on WBP_StorageShop_C_ItemUseAfter");
static_assert(offsetof(WBP_StorageShop_C_ItemUseAfter, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_ItemUseAfter::InRetCode' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.UseExp
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_UseExp final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_UseExp) == 0x000004, "Wrong alignment on WBP_StorageShop_C_UseExp");
static_assert(sizeof(WBP_StorageShop_C_UseExp) == 0x000004, "Wrong size on WBP_StorageShop_C_UseExp");
static_assert(offsetof(WBP_StorageShop_C_UseExp, Amount) == 0x000000, "Member 'WBP_StorageShop_C_UseExp::Amount' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.DropCheck
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_DropCheck final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_DropCheck) == 0x000004, "Wrong alignment on WBP_StorageShop_C_DropCheck");
static_assert(sizeof(WBP_StorageShop_C_DropCheck) == 0x000004, "Wrong size on WBP_StorageShop_C_DropCheck");
static_assert(offsetof(WBP_StorageShop_C_DropCheck, RetCode) == 0x000000, "Member 'WBP_StorageShop_C_DropCheck::RetCode' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.SendSaveItemsDrop
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_SendSaveItemsDrop final
{
public:
	TArray<struct FSBStorageItemData>             InputPin;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_SendSaveItemsDrop) == 0x000008, "Wrong alignment on WBP_StorageShop_C_SendSaveItemsDrop");
static_assert(sizeof(WBP_StorageShop_C_SendSaveItemsDrop) == 0x000010, "Wrong size on WBP_StorageShop_C_SendSaveItemsDrop");
static_assert(offsetof(WBP_StorageShop_C_SendSaveItemsDrop, InputPin) == 0x000000, "Member 'WBP_StorageShop_C_SendSaveItemsDrop::InputPin' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_10
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_10 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_10) == 0x000001, "Wrong alignment on WBP_StorageShop_C_CustomEvent_10");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_10) == 0x000001, "Wrong size on WBP_StorageShop_C_CustomEvent_10");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_10, Result) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_10::Result' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_9
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_9 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4939[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_9) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CustomEvent_9");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_9) == 0x000018, "Wrong size on WBP_StorageShop_C_CustomEvent_9");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_9, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_9::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_9, InDirtyItems) == 0x000008, "Member 'WBP_StorageShop_C_CustomEvent_9::InDirtyItems' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.MoveAfter
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_MoveAfter final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_MoveAfter) == 0x000004, "Wrong alignment on WBP_StorageShop_C_MoveAfter");
static_assert(sizeof(WBP_StorageShop_C_MoveAfter) == 0x000004, "Wrong size on WBP_StorageShop_C_MoveAfter");
static_assert(offsetof(WBP_StorageShop_C_MoveAfter, RetCode) == 0x000000, "Member 'WBP_StorageShop_C_MoveAfter::RetCode' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_5
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_5 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_493A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_5) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CustomEvent_5");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_5) == 0x000018, "Wrong size on WBP_StorageShop_C_CustomEvent_5");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_5, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_5::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_5, InDirtyItems) == 0x000008, "Member 'WBP_StorageShop_C_CustomEvent_5::InDirtyItems' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.MoveItems
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_MoveItems final
{
public:
	bool                                          ToStorage;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_MoveItems) == 0x000001, "Wrong alignment on WBP_StorageShop_C_MoveItems");
static_assert(sizeof(WBP_StorageShop_C_MoveItems) == 0x000001, "Wrong size on WBP_StorageShop_C_MoveItems");
static_assert(offsetof(WBP_StorageShop_C_MoveItems, ToStorage) == 0x000000, "Member 'WBP_StorageShop_C_MoveItems::ToStorage' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnHideDeligate
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_OnHideDeligate final
{
public:
	ENumberInputDialogResult                      InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_493B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNumber;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnHideDeligate) == 0x000004, "Wrong alignment on WBP_StorageShop_C_OnHideDeligate");
static_assert(sizeof(WBP_StorageShop_C_OnHideDeligate) == 0x000008, "Wrong size on WBP_StorageShop_C_OnHideDeligate");
static_assert(offsetof(WBP_StorageShop_C_OnHideDeligate, InResult) == 0x000000, "Member 'WBP_StorageShop_C_OnHideDeligate::InResult' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnHideDeligate, InNumber) == 0x000004, "Member 'WBP_StorageShop_C_OnHideDeligate::InNumber' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_0 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_0) == 0x000001, "Wrong alignment on WBP_StorageShop_C_CustomEvent_0");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_0) == 0x000001, "Wrong size on WBP_StorageShop_C_CustomEvent_0");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_0, Result) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_0::Result' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnSaveItemStorage
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_OnSaveItemStorage final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_493C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_OnSaveItemStorage) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnSaveItemStorage");
static_assert(sizeof(WBP_StorageShop_C_OnSaveItemStorage) == 0x000018, "Wrong size on WBP_StorageShop_C_OnSaveItemStorage");
static_assert(offsetof(WBP_StorageShop_C_OnSaveItemStorage, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_OnSaveItemStorage::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnSaveItemStorage, InDirtyItems) == 0x000008, "Member 'WBP_StorageShop_C_OnSaveItemStorage::InDirtyItems' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_7
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_7 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_7) == 0x000001, "Wrong alignment on WBP_StorageShop_C_CustomEvent_7");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_7) == 0x000001, "Wrong size on WBP_StorageShop_C_CustomEvent_7");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_7, Result) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_7::Result' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_8
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_8 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_8) == 0x000004, "Wrong alignment on WBP_StorageShop_C_CustomEvent_8");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_8) == 0x000004, "Wrong size on WBP_StorageShop_C_CustomEvent_8");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_8, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_8::InRetCode' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_3
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_3 final
{
public:
	ENumberInputDialogResult                      InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_493D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNumber;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_3) == 0x000004, "Wrong alignment on WBP_StorageShop_C_CustomEvent_3");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_3) == 0x000008, "Wrong size on WBP_StorageShop_C_CustomEvent_3");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_3, InResult) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_3::InResult' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_3, InNumber) == 0x000004, "Member 'WBP_StorageShop_C_CustomEvent_3::InNumber' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_4
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_4 final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_4) == 0x000001, "Wrong alignment on WBP_StorageShop_C_CustomEvent_4");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_4) == 0x000001, "Wrong size on WBP_StorageShop_C_CustomEvent_4");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_4, Result) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_4::Result' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnSliderChangeTextUpdeta
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_OnSliderChangeTextUpdeta final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_493E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNumberInputDialog_C*                   CallerDialg;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnSliderChangeTextUpdeta) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnSliderChangeTextUpdeta");
static_assert(sizeof(WBP_StorageShop_C_OnSliderChangeTextUpdeta) == 0x000010, "Wrong size on WBP_StorageShop_C_OnSliderChangeTextUpdeta");
static_assert(offsetof(WBP_StorageShop_C_OnSliderChangeTextUpdeta, Value) == 0x000000, "Member 'WBP_StorageShop_C_OnSliderChangeTextUpdeta::Value' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnSliderChangeTextUpdeta, CallerDialg) == 0x000008, "Member 'WBP_StorageShop_C_OnSliderChangeTextUpdeta::CallerDialg' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_1
// 0x0008 (0x0008 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_1 final
{
public:
	ENumberInputDialogResult                      InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_493F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNumber;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_1) == 0x000004, "Wrong alignment on WBP_StorageShop_C_CustomEvent_1");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_1) == 0x000008, "Wrong size on WBP_StorageShop_C_CustomEvent_1");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_1, InResult) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_1::InResult' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_1, InNumber) == 0x000004, "Member 'WBP_StorageShop_C_CustomEvent_1::InNumber' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_2
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_CustomEvent_2 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4940[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageShop_C_CustomEvent_2) == 0x000008, "Wrong alignment on WBP_StorageShop_C_CustomEvent_2");
static_assert(sizeof(WBP_StorageShop_C_CustomEvent_2) == 0x000018, "Wrong size on WBP_StorageShop_C_CustomEvent_2");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_2, InRetCode) == 0x000000, "Member 'WBP_StorageShop_C_CustomEvent_2::InRetCode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_CustomEvent_2, InDirtyItems) == 0x000008, "Member 'WBP_StorageShop_C_CustomEvent_2::InDirtyItems' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnSaveItemLockCompleteDelegate
// 0x0020 (0x0020 - 0x0000)
struct WBP_StorageShop_C_OnSaveItemLockCompleteDelegate final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4941[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLockItemData>                LockItemData;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InRetCode;                                         // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnSaveItemLockCompleteDelegate) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnSaveItemLockCompleteDelegate");
static_assert(sizeof(WBP_StorageShop_C_OnSaveItemLockCompleteDelegate) == 0x000020, "Wrong size on WBP_StorageShop_C_OnSaveItemLockCompleteDelegate");
static_assert(offsetof(WBP_StorageShop_C_OnSaveItemLockCompleteDelegate, Result) == 0x000000, "Member 'WBP_StorageShop_C_OnSaveItemLockCompleteDelegate::Result' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnSaveItemLockCompleteDelegate, LockItemData) == 0x000008, "Member 'WBP_StorageShop_C_OnSaveItemLockCompleteDelegate::LockItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnSaveItemLockCompleteDelegate, InRetCode) == 0x000018, "Member 'WBP_StorageShop_C_OnSaveItemLockCompleteDelegate::InRetCode' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.ArrowAnimationStart
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_ArrowAnimationStart final
{
public:
	bool                                          ToStorage;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_ArrowAnimationStart) == 0x000001, "Wrong alignment on WBP_StorageShop_C_ArrowAnimationStart");
static_assert(sizeof(WBP_StorageShop_C_ArrowAnimationStart) == 0x000001, "Wrong size on WBP_StorageShop_C_ArrowAnimationStart");
static_assert(offsetof(WBP_StorageShop_C_ArrowAnimationStart, ToStorage) == 0x000000, "Member 'WBP_StorageShop_C_ArrowAnimationStart::ToStorage' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.MoveItem
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_MoveItem final
{
public:
	bool                                          ToStorage;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_MoveItem) == 0x000001, "Wrong alignment on WBP_StorageShop_C_MoveItem");
static_assert(sizeof(WBP_StorageShop_C_MoveItem) == 0x000001, "Wrong size on WBP_StorageShop_C_MoveItem");
static_assert(offsetof(WBP_StorageShop_C_MoveItem, ToStorage) == 0x000000, "Member 'WBP_StorageShop_C_MoveItem::ToStorage' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OnMultipleSelection
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_OnMultipleSelection final
{
public:
	class UItemIconBtn_C*                         InputPin;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Param_LastClickGridType;                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OnMultipleSelection) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OnMultipleSelection");
static_assert(sizeof(WBP_StorageShop_C_OnMultipleSelection) == 0x000010, "Wrong size on WBP_StorageShop_C_OnMultipleSelection");
static_assert(offsetof(WBP_StorageShop_C_OnMultipleSelection, InputPin) == 0x000000, "Member 'WBP_StorageShop_C_OnMultipleSelection::InputPin' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OnMultipleSelection, Param_LastClickGridType) == 0x000008, "Member 'WBP_StorageShop_C_OnMultipleSelection::Param_LastClickGridType' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.OmPressItem_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_OmPressItem_Internal final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              InType;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_OmPressItem_Internal) == 0x000008, "Wrong alignment on WBP_StorageShop_C_OmPressItem_Internal");
static_assert(sizeof(WBP_StorageShop_C_OmPressItem_Internal) == 0x000010, "Wrong size on WBP_StorageShop_C_OmPressItem_Internal");
static_assert(offsetof(WBP_StorageShop_C_OmPressItem_Internal, SelectItem) == 0x000000, "Member 'WBP_StorageShop_C_OmPressItem_Internal::SelectItem' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_OmPressItem_Internal, InType) == 0x000008, "Member 'WBP_StorageShop_C_OmPressItem_Internal::InType' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.SetSlotSelect
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_SetSlotSelect final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4942[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             InputPin;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_SetSlotSelect) == 0x000008, "Wrong alignment on WBP_StorageShop_C_SetSlotSelect");
static_assert(sizeof(WBP_StorageShop_C_SetSlotSelect) == 0x000010, "Wrong size on WBP_StorageShop_C_SetSlotSelect");
static_assert(offsetof(WBP_StorageShop_C_SetSlotSelect, IsSelected) == 0x000000, "Member 'WBP_StorageShop_C_SetSlotSelect::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SetSlotSelect, InputPin) == 0x000008, "Member 'WBP_StorageShop_C_SetSlotSelect::InputPin' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.UpdateItemNums
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageShop_C_UpdateItemNums final
{
public:
	bool                                          KeepPage;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_UpdateItemNums) == 0x000001, "Wrong alignment on WBP_StorageShop_C_UpdateItemNums");
static_assert(sizeof(WBP_StorageShop_C_UpdateItemNums) == 0x000001, "Wrong size on WBP_StorageShop_C_UpdateItemNums");
static_assert(offsetof(WBP_StorageShop_C_UpdateItemNums, KeepPage) == 0x000000, "Member 'WBP_StorageShop_C_UpdateItemNums::KeepPage' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.ItemClickEnter
// 0x0098 (0x0098 - 0x0000)
struct WBP_StorageShop_C_ItemClickEnter final
{
public:
	struct FInventoryData                         Param_InventoryData;                               // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_ItemClickEnter) == 0x000008, "Wrong alignment on WBP_StorageShop_C_ItemClickEnter");
static_assert(sizeof(WBP_StorageShop_C_ItemClickEnter) == 0x000098, "Wrong size on WBP_StorageShop_C_ItemClickEnter");
static_assert(offsetof(WBP_StorageShop_C_ItemClickEnter, Param_InventoryData) == 0x000000, "Member 'WBP_StorageShop_C_ItemClickEnter::Param_InventoryData' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.Get Filter Type
// 0x003C (0x003C - 0x0000)
struct WBP_StorageShop_C_Get_Filter_Type final
{
public:
	EItemFilterType                               FilterType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESelectItemCategoryMode                       Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_2;                              // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_3;                              // 0x0009(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_4;                              // 0x000A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_5;                              // 0x000B(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_6;                              // 0x000C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_7;                              // 0x000D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_8;                              // 0x000E(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4943[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_9;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_10;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_11;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_12;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_13;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_14;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_15;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_16;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_17;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4944[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue;       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4945[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_GetFilterBtnType_Filter;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4946[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default_1;                           // 0x0039(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default_2;                           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default_3;                           // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_Get_Filter_Type) == 0x000004, "Wrong alignment on WBP_StorageShop_C_Get_Filter_Type");
static_assert(sizeof(WBP_StorageShop_C_Get_Filter_Type) == 0x00003C, "Wrong size on WBP_StorageShop_C_Get_Filter_Type");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, FilterType) == 0x000000, "Member 'WBP_StorageShop_C_Get_Filter_Type::FilterType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_bool_Variable) == 0x000001, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable) == 0x000002, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_int_Variable) == 0x000004, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_2) == 0x000008, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_3) == 0x000009, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_4) == 0x00000A, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_5) == 0x00000B, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_6) == 0x00000C, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_7) == 0x00000D, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_8) == 0x00000E, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_int_Variable_1) == 0x000010, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_9) == 0x000014, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_10) == 0x000015, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_11) == 0x000016, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_12) == 0x000017, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_13) == 0x000018, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_14) == 0x000019, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_15) == 0x00001A, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_16) == 0x00001B, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, Temp_byte_Variable_17) == 0x00001C, "Member 'WBP_StorageShop_C_Get_Filter_Type::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, CallFunc_GetCategoryModeName_ReturnValue) == 0x000020, "Member 'WBP_StorageShop_C_Get_Filter_Type::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, CallFunc_ValidTypeAFilterModefi_ReturnValue) == 0x000028, "Member 'WBP_StorageShop_C_Get_Filter_Type::CallFunc_ValidTypeAFilterModefi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, CallFunc_GetSelectedIndex_ReturnValue) == 0x00002C, "Member 'WBP_StorageShop_C_Get_Filter_Type::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, CallFunc_GetFilterBtnType_Filter) == 0x000030, "Member 'WBP_StorageShop_C_Get_Filter_Type::CallFunc_GetFilterBtnType_Filter' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x000034, "Member 'WBP_StorageShop_C_Get_Filter_Type::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, K2Node_Select_Default) == 0x000038, "Member 'WBP_StorageShop_C_Get_Filter_Type::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, K2Node_Select_Default_1) == 0x000039, "Member 'WBP_StorageShop_C_Get_Filter_Type::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, K2Node_Select_Default_2) == 0x00003A, "Member 'WBP_StorageShop_C_Get_Filter_Type::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Filter_Type, K2Node_Select_Default_3) == 0x00003B, "Member 'WBP_StorageShop_C_Get_Filter_Type::K2Node_Select_Default_3' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.Updete Item Slot List
// 0x0150 (0x0150 - 0x0000)
struct WBP_StorageShop_C_Updete_Item_Slot_List final
{
public:
	ESelectItemCategoryMode                       Param_SelectItemCategoryMode;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsModeChange;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4947[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0068(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0090(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x00B8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x00E0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0118(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0130(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_Updete_Item_Slot_List) == 0x000008, "Wrong alignment on WBP_StorageShop_C_Updete_Item_Slot_List");
static_assert(sizeof(WBP_StorageShop_C_Updete_Item_Slot_List) == 0x000150, "Wrong size on WBP_StorageShop_C_Updete_Item_Slot_List");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, Param_SelectItemCategoryMode) == 0x000000, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::Param_SelectItemCategoryMode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, IsModeChange) == 0x000001, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::IsModeChange' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000018, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue) == 0x000058, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000068, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000080, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000090, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000A8, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0000B8, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0000D0, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0000E0, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x0000F8, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000108, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000118, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000130, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, K2Node_SwitchEnum_CmpSuccess) == 0x000148, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updete_Item_Slot_List, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000149, "Member 'WBP_StorageShop_C_Updete_Item_Slot_List::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4948[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on WBP_StorageShop_C_RandomPlayAnimation");
static_assert(sizeof(WBP_StorageShop_C_RandomPlayAnimation) == 0x000018, "Wrong size on WBP_StorageShop_C_RandomPlayAnimation");
static_assert(offsetof(WBP_StorageShop_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'WBP_StorageShop_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_StorageShop_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WBP_StorageShop_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4949[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on WBP_StorageShop_C_RandomPlayAnimation2");
static_assert(sizeof(WBP_StorageShop_C_RandomPlayAnimation2) == 0x000018, "Wrong size on WBP_StorageShop_C_RandomPlayAnimation2");
static_assert(offsetof(WBP_StorageShop_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'WBP_StorageShop_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_StorageShop_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WBP_StorageShop_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.Get Inventory Brunch
// 0x0030 (0x0030 - 0x0000)
struct WBP_StorageShop_C_Get_Inventory_Brunch final
{
public:
	class USBOwnItemListContainer*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_494A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_494B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_Get_Inventory_Brunch) == 0x000008, "Wrong alignment on WBP_StorageShop_C_Get_Inventory_Brunch");
static_assert(sizeof(WBP_StorageShop_C_Get_Inventory_Brunch) == 0x000030, "Wrong size on WBP_StorageShop_C_Get_Inventory_Brunch");
static_assert(offsetof(WBP_StorageShop_C_Get_Inventory_Brunch, ReturnValue) == 0x000000, "Member 'WBP_StorageShop_C_Get_Inventory_Brunch::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Inventory_Brunch, Temp_bool_Variable) == 0x000008, "Member 'WBP_StorageShop_C_Get_Inventory_Brunch::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Inventory_Brunch, CallFunc_GetEquipmentBag_ReturnValue) == 0x000010, "Member 'WBP_StorageShop_C_Get_Inventory_Brunch::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Inventory_Brunch, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'WBP_StorageShop_C_Get_Inventory_Brunch::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Inventory_Brunch, CallFunc_GetInventory_ReturnValue) == 0x000020, "Member 'WBP_StorageShop_C_Get_Inventory_Brunch::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Inventory_Brunch, K2Node_Select_Default) == 0x000028, "Member 'WBP_StorageShop_C_Get_Inventory_Brunch::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.GetItemListContainer
// 0x0060 (0x0060 - 0x0000)
struct WBP_StorageShop_C_GetItemListContainer final
{
public:
	EStorageGridType                              InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_494C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_494D[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_494E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_494F[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_1;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_2;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_GetItemListContainer) == 0x000008, "Wrong alignment on WBP_StorageShop_C_GetItemListContainer");
static_assert(sizeof(WBP_StorageShop_C_GetItemListContainer) == 0x000060, "Wrong size on WBP_StorageShop_C_GetItemListContainer");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, InType) == 0x000000, "Member 'WBP_StorageShop_C_GetItemListContainer::InType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, ReturnValue) == 0x000008, "Member 'WBP_StorageShop_C_GetItemListContainer::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, Temp_byte_Variable) == 0x000010, "Member 'WBP_StorageShop_C_GetItemListContainer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, Temp_bool_Variable) == 0x000011, "Member 'WBP_StorageShop_C_GetItemListContainer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, CallFunc_GetOrnamentStorage_ReturnValue) == 0x000018, "Member 'WBP_StorageShop_C_GetItemListContainer::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'WBP_StorageShop_C_GetItemListContainer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, CallFunc_GetCharacterStorage_ReturnValue) == 0x000028, "Member 'WBP_StorageShop_C_GetItemListContainer::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, Temp_bool_Variable_1) == 0x000030, "Member 'WBP_StorageShop_C_GetItemListContainer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000031, "Member 'WBP_StorageShop_C_GetItemListContainer::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, K2Node_Select_Default) == 0x000038, "Member 'WBP_StorageShop_C_GetItemListContainer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, CallFunc_GetEquipmentBag_ReturnValue) == 0x000040, "Member 'WBP_StorageShop_C_GetItemListContainer::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, CallFunc_GetInventory_ReturnValue) == 0x000048, "Member 'WBP_StorageShop_C_GetItemListContainer::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, K2Node_Select_Default_1) == 0x000050, "Member 'WBP_StorageShop_C_GetItemListContainer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetItemListContainer, K2Node_Select_Default_2) == 0x000058, "Member 'WBP_StorageShop_C_GetItemListContainer::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.On_ComboBoxString_Sort_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0) == 0x000008, "Wrong alignment on WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0");
static_assert(sizeof(WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0) == 0x000038, "Wrong size on WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0");
static_assert(offsetof(WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0, Item) == 0x000000, "Member 'WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.On_ComboBoxString_Filter_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0) == 0x000008, "Wrong alignment on WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0");
static_assert(sizeof(WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0) == 0x000038, "Wrong size on WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0");
static_assert(offsetof(WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0, Item) == 0x000000, "Member 'WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.SearchInventoryItemData
// 0x0230 (0x0230 - 0x0000)
struct WBP_StorageShop_C_SearchInventoryItemData final
{
public:
	EStorageGridType                              Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4950[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         OutputPin;                                         // 0x0010(0x0098)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x00A8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4951[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4952[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable_1;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4953[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryData>                 K2Node_Select_Default;                             // 0x00D0(0x0010)(ReferenceParm)
	TArray<struct FInventoryData>                 K2Node_Select_Default_1;                           // 0x00E0(0x0010)(ReferenceParm)
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x00F0(0x0098)(HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item_1;                         // 0x0188(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4954[0x2];                                     // 0x0222(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_SearchInventoryItemData) == 0x000008, "Wrong alignment on WBP_StorageShop_C_SearchInventoryItemData");
static_assert(sizeof(WBP_StorageShop_C_SearchInventoryItemData) == 0x000230, "Wrong size on WBP_StorageShop_C_SearchInventoryItemData");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Param_Index) == 0x000000, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Target) == 0x000008, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Target' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, OutputPin) == 0x000010, "Member 'WBP_StorageShop_C_SearchInventoryItemData::OutputPin' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Enable) == 0x0000A8, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Enable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Temp_int_Array_Index_Variable) == 0x0000AC, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Temp_int_Array_Index_Variable_1) == 0x0000B8, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Temp_int_Loop_Counter_Variable_1) == 0x0000BC, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Temp_byte_Variable) == 0x0000C0, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C4, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, Temp_byte_Variable_1) == 0x0000C8, "Member 'WBP_StorageShop_C_SearchInventoryItemData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, K2Node_Select_Default) == 0x0000D0, "Member 'WBP_StorageShop_C_SearchInventoryItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, K2Node_Select_Default_1) == 0x0000E0, "Member 'WBP_StorageShop_C_SearchInventoryItemData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_Array_Get_Item_1) == 0x000188, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000220, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000221, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_Array_Length_ReturnValue) == 0x000224, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_Array_Length_ReturnValue_1) == 0x000228, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_Less_IntInt_ReturnValue) == 0x00022C, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SearchInventoryItemData, CallFunc_Less_IntInt_ReturnValue_1) == 0x00022D, "Member 'WBP_StorageShop_C_SearchInventoryItemData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.Set Icon Select Items
// 0x0010 (0x0010 - 0x0000)
struct WBP_StorageShop_C_Set_Icon_Select_Items final
{
public:
	class UItemIconBtn_C*                         InputPin;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAdd;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EStorageMultipleSalesWindowType               CallFunc_SetSelectItems_NewParam;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_Set_Icon_Select_Items) == 0x000008, "Wrong alignment on WBP_StorageShop_C_Set_Icon_Select_Items");
static_assert(sizeof(WBP_StorageShop_C_Set_Icon_Select_Items) == 0x000010, "Wrong size on WBP_StorageShop_C_Set_Icon_Select_Items");
static_assert(offsetof(WBP_StorageShop_C_Set_Icon_Select_Items, InputPin) == 0x000000, "Member 'WBP_StorageShop_C_Set_Icon_Select_Items::InputPin' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Set_Icon_Select_Items, bAdd) == 0x000008, "Member 'WBP_StorageShop_C_Set_Icon_Select_Items::bAdd' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Set_Icon_Select_Items, CallFunc_SetSelectItems_NewParam) == 0x000009, "Member 'WBP_StorageShop_C_Set_Icon_Select_Items::CallFunc_SetSelectItems_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Set_Icon_Select_Items, K2Node_SwitchEnum_CmpSuccess) == 0x00000A, "Member 'WBP_StorageShop_C_Set_Icon_Select_Items::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.IsDownMultipleSelection
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageShop_C_IsDownMultipleSelection final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4955[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_2;             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_IsDownMultipleSelection) == 0x000008, "Wrong alignment on WBP_StorageShop_C_IsDownMultipleSelection");
static_assert(sizeof(WBP_StorageShop_C_IsDownMultipleSelection) == 0x000018, "Wrong size on WBP_StorageShop_C_IsDownMultipleSelection");
static_assert(offsetof(WBP_StorageShop_C_IsDownMultipleSelection, ReturnValue) == 0x000000, "Member 'WBP_StorageShop_C_IsDownMultipleSelection::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_IsDownMultipleSelection, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_StorageShop_C_IsDownMultipleSelection::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_IsDownMultipleSelection, CallFunc_IsInputKeyDown_ReturnValue) == 0x000010, "Member 'WBP_StorageShop_C_IsDownMultipleSelection::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_IsDownMultipleSelection, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x000011, "Member 'WBP_StorageShop_C_IsDownMultipleSelection::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_IsDownMultipleSelection, CallFunc_IsInputKeyDown_ReturnValue_2) == 0x000012, "Member 'WBP_StorageShop_C_IsDownMultipleSelection::CallFunc_IsInputKeyDown_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_IsDownMultipleSelection, CallFunc_BooleanOR_ReturnValue) == 0x000013, "Member 'WBP_StorageShop_C_IsDownMultipleSelection::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_IsDownMultipleSelection, CallFunc_BooleanOR_ReturnValue_1) == 0x000014, "Member 'WBP_StorageShop_C_IsDownMultipleSelection::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.GetIconPtr
// 0x0260 (0x0260 - 0x0000)
struct WBP_StorageShop_C_GetIconPtr final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UItemIconBtn_C*                         AsItem_Icon_Btn;                                   // 0x0060(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInventory;                                        // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NotHave;                                           // 0x0069(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4956[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     SwapData;                                          // 0x0070(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4957[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4958[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x0100(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4959[0x2];                                     // 0x019E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_495A[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_1;              // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_495B[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item_1;                         // 0x01C0(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_GetIconPtr) == 0x000008, "Wrong alignment on WBP_StorageShop_C_GetIconPtr");
static_assert(sizeof(WBP_StorageShop_C_GetIconPtr) == 0x000260, "Wrong size on WBP_StorageShop_C_GetIconPtr");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, InventoryItemData) == 0x000000, "Member 'WBP_StorageShop_C_GetIconPtr::InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, AsItem_Icon_Btn) == 0x000060, "Member 'WBP_StorageShop_C_GetIconPtr::AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, bInventory) == 0x000068, "Member 'WBP_StorageShop_C_GetIconPtr::bInventory' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, NotHave) == 0x000069, "Member 'WBP_StorageShop_C_GetIconPtr::NotHave' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, SwapData) == 0x000070, "Member 'WBP_StorageShop_C_GetIconPtr::SwapData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, Temp_int_Loop_Counter_Variable) == 0x0000D0, "Member 'WBP_StorageShop_C_GetIconPtr::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, Temp_int_Array_Index_Variable) == 0x0000D8, "Member 'WBP_StorageShop_C_GetIconPtr::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, Temp_int_Loop_Counter_Variable_1) == 0x0000DC, "Member 'WBP_StorageShop_C_GetIconPtr::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000E0, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_GetChildAt_ReturnValue) == 0x0000E8, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0000F0, "Member 'WBP_StorageShop_C_GetIconPtr::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'WBP_StorageShop_C_GetIconPtr::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_Array_Get_Item) == 0x000100, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_Array_Length_ReturnValue) == 0x000198, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_Less_IntInt_ReturnValue) == 0x00019C, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00019D, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, Temp_int_Array_Index_Variable_1) == 0x0001A0, "Member 'WBP_StorageShop_C_GetIconPtr::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_GetChildAt_ReturnValue_1) == 0x0001A8, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, K2Node_DynamicCast_AsItem_Icon_Btn_1) == 0x0001B0, "Member 'WBP_StorageShop_C_GetIconPtr::K2Node_DynamicCast_AsItem_Icon_Btn_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, K2Node_DynamicCast_bSuccess_1) == 0x0001B8, "Member 'WBP_StorageShop_C_GetIconPtr::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_Array_Length_ReturnValue_1) == 0x0001BC, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_Array_Get_Item_1) == 0x0001C0, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_Less_IntInt_ReturnValue_1) == 0x000258, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetIconPtr, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000259, "Member 'WBP_StorageShop_C_GetIconPtr::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.FindInventoryDataFromUniqueId
// 0x0208 (0x0208 - 0x0000)
struct WBP_StorageShop_C_FindInventoryDataFromUniqueId final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryData                         OutInventoryData;                                  // 0x0010(0x0098)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_495C[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x00C0(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_495D[0x2];                                     // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item_1;                         // 0x0168(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageShop_C_FindInventoryDataFromUniqueId) == 0x000008, "Wrong alignment on WBP_StorageShop_C_FindInventoryDataFromUniqueId");
static_assert(sizeof(WBP_StorageShop_C_FindInventoryDataFromUniqueId) == 0x000208, "Wrong size on WBP_StorageShop_C_FindInventoryDataFromUniqueId");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, InUniqueId) == 0x000000, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::InUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, OutInventoryData) == 0x000010, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::OutInventoryData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, Temp_int_Loop_Counter_Variable) == 0x0000A8, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, Temp_int_Array_Index_Variable) == 0x0000B0, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, Temp_int_Array_Index_Variable_1) == 0x0000B4, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, Temp_int_Loop_Counter_Variable_1) == 0x0000B8, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_Array_Length_ReturnValue) == 0x000158, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_Less_IntInt_ReturnValue) == 0x00015C, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00015D, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_Array_Length_ReturnValue_1) == 0x000164, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_Array_Get_Item_1) == 0x000168, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_Less_IntInt_ReturnValue_1) == 0x000200, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_FindInventoryDataFromUniqueId, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000201, "Member 'WBP_StorageShop_C_FindInventoryDataFromUniqueId::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.Create Use Data
// 0x01D0 (0x01D0 - 0x0000)
struct WBP_StorageShop_C_Create_Use_Data final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_495E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStorageItemData>             DataList;                                          // 0x0008(0x0010)(Parm, OutParm)
	int32                                         BaseAmount;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalAmount;                                       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStorageItemData>             NewLocalVar_0;                                     // 0x0020(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_495F[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4960[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0050(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4961[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByItemIndex_bOutExist;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4962[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByItemIndex_ReturnValue;      // 0x0068(0x0118)(ConstParm)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData;               // 0x0180(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4963[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData_1;             // 0x01A8(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_Create_Use_Data) == 0x000008, "Wrong alignment on WBP_StorageShop_C_Create_Use_Data");
static_assert(sizeof(WBP_StorageShop_C_Create_Use_Data) == 0x0001D0, "Wrong size on WBP_StorageShop_C_Create_Use_Data");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, Amount) == 0x000000, "Member 'WBP_StorageShop_C_Create_Use_Data::Amount' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, DataList) == 0x000008, "Member 'WBP_StorageShop_C_Create_Use_Data::DataList' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, BaseAmount) == 0x000018, "Member 'WBP_StorageShop_C_Create_Use_Data::BaseAmount' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, TotalAmount) == 0x00001C, "Member 'WBP_StorageShop_C_Create_Use_Data::TotalAmount' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, NewLocalVar_0) == 0x000020, "Member 'WBP_StorageShop_C_Create_Use_Data::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, Temp_bool_Variable) == 0x000030, "Member 'WBP_StorageShop_C_Create_Use_Data::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, Temp_int_Variable) == 0x000034, "Member 'WBP_StorageShop_C_Create_Use_Data::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, Temp_int_Variable_1) == 0x000038, "Member 'WBP_StorageShop_C_Create_Use_Data::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_GetStorage_ReturnValue) == 0x000040, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x000048, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, K2Node_Select_Default) == 0x000050, "Member 'WBP_StorageShop_C_Create_Use_Data::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_GetStorage_ReturnValue_1) == 0x000058, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_BP_FindItem_ByItemIndex_bOutExist) == 0x000060, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_BP_FindItem_ByItemIndex_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_BP_FindItem_ByItemIndex_ReturnValue) == 0x000068, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_BP_FindItem_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, K2Node_MakeStruct_SBStorageItemData) == 0x000180, "Member 'WBP_StorageShop_C_Create_Use_Data::K2Node_MakeStruct_SBStorageItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_Array_Add_ReturnValue) == 0x0001A0, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, K2Node_MakeStruct_SBStorageItemData_1) == 0x0001A8, "Member 'WBP_StorageShop_C_Create_Use_Data::K2Node_MakeStruct_SBStorageItemData_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Create_Use_Data, CallFunc_Array_Add_ReturnValue_1) == 0x0001C8, "Member 'WBP_StorageShop_C_Create_Use_Data::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.UpdateKeyGuideText
// 0x0240 (0x0240 - 0x0000)
struct WBP_StorageShop_C_UpdateKeyGuideText final
{
public:
	struct FKey                                   OKKye;                                             // 0x0000(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ESBOperateMode                                Mode;                                              // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4964[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBOperateMode                                Temp_byte_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4965[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_1;                            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_GetUIOKKey_ReturnValue;                   // 0x0048(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_1;            // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0108(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0120(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0138(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4966[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4967[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_2;            // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyNameText_KB_DisplayText;            // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01D8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0218(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0228(0x0018)()
};
static_assert(alignof(WBP_StorageShop_C_UpdateKeyGuideText) == 0x000008, "Wrong alignment on WBP_StorageShop_C_UpdateKeyGuideText");
static_assert(sizeof(WBP_StorageShop_C_UpdateKeyGuideText) == 0x000240, "Wrong size on WBP_StorageShop_C_UpdateKeyGuideText");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, OKKye) == 0x000000, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::OKKye' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, Mode) == 0x000018, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::Mode' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, Temp_byte_Variable) == 0x000019, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, Temp_string_Variable) == 0x000020, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, Temp_byte_Variable_1) == 0x000030, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, Temp_string_Variable_1) == 0x000038, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetUIOKKey_ReturnValue) == 0x000048, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetUIOKKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000060, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000070, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetKeyTextByKey_ReturnValue_1) == 0x0000D8, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetKeyTextByKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, K2Node_Select_Default) == 0x0000E8, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000F8, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000108, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000120, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000138, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetConfigSaveManager_IsValid) == 0x000178, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000180, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetOperateMode_ReturnValue) == 0x000188, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetKeyTextByKey_ReturnValue_2) == 0x000190, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetKeyTextByKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_GetKeyNameText_KB_DisplayText) == 0x0001A0, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_GetKeyNameText_KB_DisplayText' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, K2Node_Select_Default_1) == 0x0001B0, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001C0, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001D8, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, K2Node_MakeArray_Array) == 0x000218, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_UpdateKeyGuideText, CallFunc_Format_ReturnValue) == 0x000228, "Member 'WBP_StorageShop_C_UpdateKeyGuideText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.GetSortRule
// 0x0028 (0x0028 - 0x0000)
struct WBP_StorageShop_C_GetSortRule final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4968[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTypeAFilterModefi_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4969[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortType_Array_Element;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_496A[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Sort_Mode_ModeNum;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_2;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Get_Inventory_Sort_Rule_SortType;         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_GetSortRule) == 0x000004, "Wrong alignment on WBP_StorageShop_C_GetSortRule");
static_assert(sizeof(WBP_StorageShop_C_GetSortRule) == 0x000028, "Wrong size on WBP_StorageShop_C_GetSortRule");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, SortType) == 0x000000, "Member 'WBP_StorageShop_C_GetSortRule::SortType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, Temp_bool_Variable) == 0x000001, "Member 'WBP_StorageShop_C_GetSortRule::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, CallFunc_GetCategoryModeName_ReturnValue) == 0x000004, "Member 'WBP_StorageShop_C_GetSortRule::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, CallFunc_GetSelectedIndex_ReturnValue) == 0x00000C, "Member 'WBP_StorageShop_C_GetSortRule::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, CallFunc_ValidTypeAFilterModefi_ReturnValue) == 0x000010, "Member 'WBP_StorageShop_C_GetSortRule::CallFunc_ValidTypeAFilterModefi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x000014, "Member 'WBP_StorageShop_C_GetSortRule::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, CallFunc_GetSortType_Array_Element) == 0x000018, "Member 'WBP_StorageShop_C_GetSortRule::CallFunc_GetSortType_Array_Element' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, CallFunc_Get_Sort_Mode_ModeNum) == 0x00001C, "Member 'WBP_StorageShop_C_GetSortRule::CallFunc_Get_Sort_Mode_ModeNum' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, CallFunc_GetSelectedIndex_ReturnValue_2) == 0x000020, "Member 'WBP_StorageShop_C_GetSortRule::CallFunc_GetSelectedIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, CallFunc_Get_Inventory_Sort_Rule_SortType) == 0x000024, "Member 'WBP_StorageShop_C_GetSortRule::CallFunc_Get_Inventory_Sort_Rule_SortType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetSortRule, K2Node_Select_Default) == 0x000025, "Member 'WBP_StorageShop_C_GetSortRule::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.Get Sort Mode
// 0x000C (0x000C - 0x0000)
struct WBP_StorageShop_C_Get_Sort_Mode final
{
public:
	int32                                         ModeNum;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Get_Filter_Type_FilterType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_496B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum;      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_Get_Sort_Mode) == 0x000004, "Wrong alignment on WBP_StorageShop_C_Get_Sort_Mode");
static_assert(sizeof(WBP_StorageShop_C_Get_Sort_Mode) == 0x00000C, "Wrong size on WBP_StorageShop_C_Get_Sort_Mode");
static_assert(offsetof(WBP_StorageShop_C_Get_Sort_Mode, ModeNum) == 0x000000, "Member 'WBP_StorageShop_C_Get_Sort_Mode::ModeNum' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Sort_Mode, CallFunc_Get_Filter_Type_FilterType) == 0x000004, "Member 'WBP_StorageShop_C_Get_Sort_Mode::CallFunc_Get_Filter_Type_FilterType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Sort_Mode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'WBP_StorageShop_C_Get_Sort_Mode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Get_Sort_Mode, CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum) == 0x000008, "Member 'WBP_StorageShop_C_Get_Sort_Mode::CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.Storage List Update
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageShop_C_Storage_List_Update final
{
public:
	bool                                          ScrollReset;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               CallFunc_GetSortRule_SortType;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_Get_Filter_Type_FilterType;               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_Storage_List_Update) == 0x000001, "Wrong alignment on WBP_StorageShop_C_Storage_List_Update");
static_assert(sizeof(WBP_StorageShop_C_Storage_List_Update) == 0x000004, "Wrong size on WBP_StorageShop_C_Storage_List_Update");
static_assert(offsetof(WBP_StorageShop_C_Storage_List_Update, ScrollReset) == 0x000000, "Member 'WBP_StorageShop_C_Storage_List_Update::ScrollReset' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Storage_List_Update, CallFunc_GetSortRule_SortType) == 0x000001, "Member 'WBP_StorageShop_C_Storage_List_Update::CallFunc_GetSortRule_SortType' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Storage_List_Update, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_StorageShop_C_Storage_List_Update::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Storage_List_Update, CallFunc_Get_Filter_Type_FilterType) == 0x000003, "Member 'WBP_StorageShop_C_Storage_List_Update::CallFunc_Get_Filter_Type_FilterType' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.SelectItemSwapData
// 0x0078 (0x0078 - 0x0000)
struct WBP_StorageShop_C_SelectItemSwapData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     CallFunc_Array_Get_Item;                           // 0x0010(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_496C[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_SelectItemSwapData) == 0x000008, "Wrong alignment on WBP_StorageShop_C_SelectItemSwapData");
static_assert(sizeof(WBP_StorageShop_C_SelectItemSwapData) == 0x000078, "Wrong size on WBP_StorageShop_C_SelectItemSwapData");
static_assert(offsetof(WBP_StorageShop_C_SelectItemSwapData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_StorageShop_C_SelectItemSwapData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SelectItemSwapData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_StorageShop_C_SelectItemSwapData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SelectItemSwapData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_StorageShop_C_SelectItemSwapData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SelectItemSwapData, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WBP_StorageShop_C_SelectItemSwapData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SelectItemSwapData, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_StorageShop_C_SelectItemSwapData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SelectItemSwapData, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'WBP_StorageShop_C_SelectItemSwapData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_SelectItemSwapData, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'WBP_StorageShop_C_SelectItemSwapData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.GetStorageNum
// 0x0090 (0x0090 - 0x0000)
struct WBP_StorageShop_C_GetStorageNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_496D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidOrnament_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_496E[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_496F[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4970[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue_1;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4971[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue_2;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue_3;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemTypeNum_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemTypeNum_ReturnValue_1;             // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue_1;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue_2;             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_GetStorageNum) == 0x000008, "Wrong alignment on WBP_StorageShop_C_GetStorageNum");
static_assert(sizeof(WBP_StorageShop_C_GetStorageNum) == 0x000090, "Wrong size on WBP_StorageShop_C_GetStorageNum");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, Num) == 0x000000, "Member 'WBP_StorageShop_C_GetStorageNum::Num' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, Max) == 0x000004, "Member 'WBP_StorageShop_C_GetStorageNum::Max' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, Temp_bool_Variable) == 0x000008, "Member 'WBP_StorageShop_C_GetStorageNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetCharacterStorage_ReturnValue) == 0x000010, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_ValidOrnament_ReturnValue) == 0x000018, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_ValidOrnament_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetCapacity_ReturnValue) == 0x00001C, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetCharacterStorage_ReturnValue_1) == 0x000020, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetCharacterStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetOrnamentStorage_ReturnValue) == 0x000028, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetOrnamentStorage_ReturnValue_1) == 0x000030, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetOrnamentStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetUseBlockNum_ReturnValue) == 0x00003C, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, Temp_bool_Variable_1) == 0x000040, "Member 'WBP_StorageShop_C_GetStorageNum::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000041, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, K2Node_Select_Default) == 0x000048, "Member 'WBP_StorageShop_C_GetStorageNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetCapacity_ReturnValue_1) == 0x000050, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetCapacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetCharacterStorage_ReturnValue_2) == 0x000058, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetCharacterStorage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetCharacterStorage_ReturnValue_3) == 0x000060, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetCharacterStorage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetItemTypeNum_ReturnValue) == 0x000068, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetItemTypeNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetItemTypeNum_ReturnValue_1) == 0x00006C, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetItemTypeNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetUseBlockNum_ReturnValue_1) == 0x000070, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetUseBlockNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_GetUseBlockNum_ReturnValue_2) == 0x000074, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_GetUseBlockNum_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x000078, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00007C, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_Clamp_ReturnValue) == 0x000080, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, CallFunc_Clamp_ReturnValue_1) == 0x000084, "Member 'WBP_StorageShop_C_GetStorageNum::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetStorageNum, K2Node_Select_Default_1) == 0x000088, "Member 'WBP_StorageShop_C_GetStorageNum::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.GetCategoryModeName
// 0x002C (0x002C - 0x0000)
struct WBP_StorageShop_C_GetCategoryModeName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESelectItemCategoryMode                       Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4972[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_GetCategoryModeName) == 0x000004, "Wrong alignment on WBP_StorageShop_C_GetCategoryModeName");
static_assert(sizeof(WBP_StorageShop_C_GetCategoryModeName) == 0x00002C, "Wrong size on WBP_StorageShop_C_GetCategoryModeName");
static_assert(offsetof(WBP_StorageShop_C_GetCategoryModeName, ReturnValue) == 0x000000, "Member 'WBP_StorageShop_C_GetCategoryModeName::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetCategoryModeName, Temp_byte_Variable) == 0x000008, "Member 'WBP_StorageShop_C_GetCategoryModeName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetCategoryModeName, Temp_name_Variable) == 0x00000C, "Member 'WBP_StorageShop_C_GetCategoryModeName::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetCategoryModeName, Temp_name_Variable_1) == 0x000014, "Member 'WBP_StorageShop_C_GetCategoryModeName::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetCategoryModeName, Temp_name_Variable_2) == 0x00001C, "Member 'WBP_StorageShop_C_GetCategoryModeName::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_GetCategoryModeName, K2Node_Select_Default) == 0x000024, "Member 'WBP_StorageShop_C_GetCategoryModeName::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StorageShop.WBP_StorageShop_C.Updeta Ornament Visual
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_StorageShop_C_Updeta_Ornament_Visual final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4973[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4974[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4975[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4976[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4977[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4978[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4979[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_497A[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_497B[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default_2;                           // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageShop_C_Updeta_Ornament_Visual) == 0x000008, "Wrong alignment on WBP_StorageShop_C_Updeta_Ornament_Visual");
static_assert(sizeof(WBP_StorageShop_C_Updeta_Ornament_Visual) == 0x0000A0, "Wrong size on WBP_StorageShop_C_Updeta_Ornament_Visual");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_bool_Variable) == 0x000000, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_struct_Variable) == 0x000004, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_struct_Variable_1) == 0x00000C, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_bool_Variable_1) == 0x000014, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_struct_Variable_2) == 0x000018, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_struct_Variable_3) == 0x000020, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_bool_Variable_2) == 0x000028, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_int_Variable) == 0x00002C, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_int_Variable_1) == 0x000030, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_int_Variable_2) == 0x000034, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003C, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_float_Variable) == 0x000040, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_GetChildAt_ReturnValue) == 0x000048, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000050, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_GetChildrenCount_ReturnValue) == 0x00005C, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_float_Variable_1) == 0x000060, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_Subtract_IntInt_ReturnValue) == 0x000064, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000069, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000070, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, K2Node_Select_Default) == 0x000078, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, Temp_bool_Variable_3) == 0x000080, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, K2Node_Select_Default_1) == 0x000084, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000088, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, K2Node_Select_Default_2) == 0x00008C, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, K2Node_Select_Default_3) == 0x000094, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageShop_C_Updeta_Ornament_Visual, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000098, "Member 'WBP_StorageShop_C_Updeta_Ornament_Visual::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");

}

