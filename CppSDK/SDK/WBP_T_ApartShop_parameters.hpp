#pragma once

 

// Package: WBP_T_ApartShop

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"
#include "ESelectItemCategoryMode_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "StorageGridType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.ExecuteUbergraph_WBP_T_ApartShop
// 0x0748 (0x0748 - 0x0000)
struct WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_794C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_InputPin;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              K2Node_CustomEvent_LastClickGridType;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Icon_Select_Items_bAdd;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_794D[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Icon_Select_Items_bAdd_1;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_794E[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSelected;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_794F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             K2Node_CustomEvent_InputPin_1;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7950[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7951[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7952[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0078(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00A0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00C8(0x0028)()
	ESBItemSortType                               CallFunc_GetSortRule_SortType;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetStorageNum_Num;                        // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStorageNum_Max;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7953[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7954[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7955[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0140(0x0010)(ReferenceParm)
	class UShopCmnBtn1_C*                         K2Node_ComponentBoundEvent_ClickBtn;               // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_TabID;                  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7956[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7957[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem_3;                   // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7958[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem_2;                   // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem_1;                   // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7959[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem;                     // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_795A[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_CurrentOffset_1;        // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_CurrentOffset;          // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_795B[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             K2Node_CustomEvent_Slot;                           // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Offset;                         // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_795C[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_795D[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_795E[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             K2Node_CustomEvent_Grid;                           // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_2;           // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_795F[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_1;              // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7960[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7961[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              K2Node_CustomEvent_InType;                         // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ScrollReset;                    // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0223(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7962[0x3];                                     // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetItemListContainer_ReturnValue;         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetItemListContainer_ReturnValue_1;       // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7963[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0240(0x0118)(ConstParm)
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7964[0x4];                                     // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0360(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7965[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7966[0x2];                                     // 0x0402(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue_1;                // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7967[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0410(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x0418(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFilterGroup                           CallFunc_Array_Get_Item;                           // 0x0420(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7968[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_Get_Inventory_Brunch_ReturnValue;         // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue_2;                // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0448(0x0018)()
	bool                                          K2Node_CustomEvent_KeepPage_1;                     // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7969[0x3];                                     // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_Get_Filter_Type_FilterType;               // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_796A[0x6];                                     // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x0470(0x0010)()
	struct FFilterGroup                           CallFunc_EmptyFilter_ReturnValue;                  // 0x0480(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0490(0x0010)()
	EStorageGridType                              Temp_byte_Variable;                                // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EStorageGridType                              Temp_byte_Variable_1;                              // 0x04A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable_2;                              // 0x04A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_796B[0x4];                                     // 0x04A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryData>                 K2Node_Select_Default;                             // 0x04A8(0x0010)(ReferenceParm)
	class UScrollBox*                             K2Node_Select_Default_1;                           // 0x04B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item_1;                         // 0x04C0(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0558(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x055C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EStorageGridType                              Temp_byte_Variable_3;                              // 0x0561(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0562(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_796C[0x5];                                     // 0x0563(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_Select_Default_2;                           // 0x0568(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x0570(0x0028)()
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0598(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x05A8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x05B8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x05C8(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x05D8(0x0018)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x05F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue_3;                // 0x05F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_796D[0x4];                                     // 0x05FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_3;           // 0x060C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0611(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_796E[0x2];                                     // 0x0612(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0614(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_796F[0x7];                                     // 0x0619(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue_4;                // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x062C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7970[0x3];                                     // 0x062D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0630(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x0634(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0639(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7971[0x6];                                     // 0x063A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0640(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default_5;                           // 0x0648(0x0028)()
	ESBItemSortType                               CallFunc_GetSortRule_SortType_1;                   // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7972[0x7];                                     // 0x0671(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0678(0x0018)()
	int32                                         Temp_int_Variable_4;                               // 0x0690(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7973[0x4];                                     // 0x0694(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0698(0x0018)()
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x06B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_2;              // 0x06B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x06C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7974[0x2];                                     // 0x06C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x06C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7975[0x7];                                     // 0x06C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             K2Node_Select_Default_6;                           // 0x06D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x06E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_KeepPage;                       // 0x06E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_7;                           // 0x06EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7976[0x1];                                     // 0x06EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x06EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x06F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x06F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_PageCurrent;            // 0x06F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalcPageIndex_Active;                     // 0x06FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7977[0x3];                                     // 0x06FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalcPageIndex_Index;                      // 0x0700(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7978[0x4];                                     // 0x0704(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_3;                 // 0x0708(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0710(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7979[0x4];                                     // 0x0714(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_3;              // 0x0718(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_797A[0x3];                                     // 0x0721(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_8;                           // 0x0724(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0728(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0729(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_9;                           // 0x072A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_797B[0x1];                                     // 0x072B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue_1;        // 0x072C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue_2;        // 0x0734(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetRecentSortType_ReturnValue;            // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_797C[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x0740(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop");
static_assert(sizeof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop) == 0x000748, "Wrong size on WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, EntryPoint) == 0x000000, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_InputPin) == 0x000008, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_InputPin' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_LastClickGridType) == 0x000010, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_LastClickGridType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Set_Icon_Select_Items_bAdd) == 0x000011, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Set_Icon_Select_Items_bAdd' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Variable) == 0x000014, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Variable_1) == 0x00001C, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Set_Icon_Select_Items_bAdd_1) == 0x000021, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Set_Icon_Select_Items_bAdd_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_IsSelected) == 0x000028, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_InputPin_1) == 0x000030, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_InputPin_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_IsVisible) == 0x000038, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetChildrenCount_ReturnValue) == 0x00003C, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000070, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_MakeStruct_SlateColor_1) == 0x000078, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_MakeStruct_SlateColor_2) == 0x0000A0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_MakeStruct_SlateColor_3) == 0x0000C8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetSortRule_SortType) == 0x0000F0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetSortRule_SortType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0000F1, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000F2, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000F3, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetStorageNum_Num) == 0x0000F4, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetStorageNum_Num' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetStorageNum_Max) == 0x0000F8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetStorageNum_Max' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetCategoryModeName_ReturnValue) == 0x0000FC, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetSelectedIndex_ReturnValue) == 0x000104, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Array_Index_Variable) == 0x000108, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x000110, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_SelectionType_1) == 0x000120, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_SelectedItem) == 0x000128, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_SelectionType) == 0x000138, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_Filters) == 0x000140, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_ClickBtn) == 0x000150, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_TabID) == 0x000158, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_TabID' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_PlayAnimation_ReturnValue) == 0x000160, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Variable_2) == 0x000168, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_SelectItem_3) == 0x000170, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_SelectItem_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Add_IntInt_ReturnValue_2) == 0x000178, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_SelectItem_2) == 0x000180, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_SelectItem_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_SelectItem_1) == 0x000188, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_SelectItem_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Loop_Counter_Variable) == 0x000190, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_SelectItem) == 0x000198, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001A0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_PlaySE_ReturnValue) == 0x0001A4, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_MakeLiteralByte_ReturnValue) == 0x0001A8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_CurrentOffset_1) == 0x0001AC, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_CurrentOffset_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_CurrentOffset) == 0x0001B0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_CurrentOffset' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_Slot) == 0x0001B8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_Offset) == 0x0001C0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_Offset' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetChildrenCount_ReturnValue_1) == 0x0001C4, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001C8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetChildAt_ReturnValue) == 0x0001D0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001D8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0001E0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_DynamicCast_bSuccess) == 0x0001E8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_Grid) == 0x0001F0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_Grid' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetChildAt_ReturnValue_1) == 0x0001F8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetChildrenCount_ReturnValue_2) == 0x000200, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetChildrenCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_DynamicCast_AsItem_Icon_Btn_1) == 0x000208, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_DynamicCast_AsItem_Icon_Btn_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_DynamicCast_bSuccess_1) == 0x000210, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000214, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000218, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Array_Index_Variable_1) == 0x00021C, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000220, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_InType) == 0x000221, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_InType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_ScrollReset) == 0x000222, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_ScrollReset' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000223, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_SwitchEnum_CmpSuccess) == 0x000224, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetItemListContainer_ReturnValue) == 0x000228, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetItemListContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetItemListContainer_ReturnValue_1) == 0x000230, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetItemListContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetCapacity_ReturnValue) == 0x000238, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000240, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetSotedIndexNum_ReturnValue) == 0x000358, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_CreateInventoryData_InventoryData) == 0x000360, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_CreateInventoryData_IsSuccess) == 0x0003F8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x0003FC, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000400, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Greater_IntInt_ReturnValue) == 0x000401, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetCapacity_ReturnValue_1) == 0x000404, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetCapacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_SwitchEnum_CmpSuccess_1) == 0x000408, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_K2_SetTimer_ReturnValue) == 0x000410, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000418, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Array_Get_Item) == 0x000420, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Array_Length_ReturnValue) == 0x000430, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Get_Inventory_Brunch_ReturnValue) == 0x000438, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Get_Inventory_Brunch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetCapacity_ReturnValue_2) == 0x000440, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetCapacity_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetUseBlockNum_ReturnValue) == 0x000444, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Conv_IntToText_ReturnValue) == 0x000448, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_KeepPage_1) == 0x000460, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_KeepPage_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Variable_3) == 0x000464, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_bool_Variable) == 0x000468, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Get_Filter_Type_FilterType) == 0x000469, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Get_Filter_Type_FilterType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_MakeStruct_FilterGroup) == 0x000470, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_EmptyFilter_ReturnValue) == 0x000480, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_EmptyFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_AddFilter_ReturnValue) == 0x000490, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_byte_Variable) == 0x0004A0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_bool_Variable_1) == 0x0004A1, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_byte_Variable_1) == 0x0004A2, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_byte_Variable_2) == 0x0004A3, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default) == 0x0004A8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_1) == 0x0004B8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Array_Get_Item_1) == 0x0004C0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Array_Length_ReturnValue_1) == 0x000558, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Array_Add_ReturnValue) == 0x00055C, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Less_IntInt_ReturnValue) == 0x000560, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_byte_Variable_3) == 0x000561, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_bool_Variable_2) == 0x000562, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_2) == 0x000568, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_3) == 0x000570, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CreateDelegate_OutputDelegate) == 0x000598, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CreateDelegate_OutputDelegate_1) == 0x0005A8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CreateDelegate_OutputDelegate_2) == 0x0005B8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CreateDelegate_OutputDelegate_3) == 0x0005C8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0005D8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetEquipmentBag_ReturnValue) == 0x0005F0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetCapacity_ReturnValue_3) == 0x0005F8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetCapacity_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_PlayAnimation_ReturnValue_1) == 0x000600, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Loop_Counter_Variable_1) == 0x000608, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetChildrenCount_ReturnValue_3) == 0x00060C, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetChildrenCount_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Less_IntInt_ReturnValue_1) == 0x000610, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000611, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Add_IntInt_ReturnValue_4) == 0x000614, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_bool_Variable_3) == 0x000618, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetInventory_ReturnValue) == 0x000620, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetCapacity_ReturnValue_4) == 0x000628, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetCapacity_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00062C, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_PlaySE_ReturnValue_1) == 0x000630, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_4) == 0x000634, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_bool_Variable_4) == 0x000638, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetUIManager_IsValid) == 0x000639, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetUIManager_ReturnValue) == 0x000640, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_5) == 0x000648, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetSortRule_SortType_1) == 0x000670, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetSortRule_SortType_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000678, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_int_Variable_4) == 0x000690, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000698, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetChildAt_ReturnValue_2) == 0x0006B0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_DynamicCast_AsItem_Icon_Btn_2) == 0x0006B8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_DynamicCast_AsItem_Icon_Btn_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_DynamicCast_bSuccess_2) == 0x0006C0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x0006C1, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Add_IntInt_ReturnValue_5) == 0x0006C4, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_byte_Variable_4) == 0x0006C8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetEventExecutor_ReturnValue) == 0x0006D0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_6) == 0x0006D8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetEventExecutor_ReturnValue_1) == 0x0006E0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_Visible) == 0x0006E8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_CustomEvent_KeepPage) == 0x0006E9, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_CustomEvent_KeepPage' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_7) == 0x0006EA, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Subtract_IntInt_ReturnValue_4) == 0x0006EC, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Subtract_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Divide_IntInt_ReturnValue) == 0x0006F0, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Add_IntInt_ReturnValue_6) == 0x0006F4, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_ComponentBoundEvent_PageCurrent) == 0x0006F8, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_ComponentBoundEvent_PageCurrent' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_CalcPageIndex_Active) == 0x0006FC, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_CalcPageIndex_Active' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_CalcPageIndex_Index) == 0x000700, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_CalcPageIndex_Index' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetChildAt_ReturnValue_3) == 0x000708, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetChildAt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_Clamp_ReturnValue) == 0x000710, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_DynamicCast_AsItem_Icon_Btn_3) == 0x000718, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_DynamicCast_AsItem_Icon_Btn_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_DynamicCast_bSuccess_3) == 0x000720, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_8) == 0x000724, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_byte_Variable_5) == 0x000728, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, Temp_bool_Variable_5) == 0x000729, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, K2Node_Select_Default_9) == 0x00072A, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetCategoryModeName_ReturnValue_1) == 0x00072C, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetCategoryModeName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetCategoryModeName_ReturnValue_2) == 0x000734, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetCategoryModeName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetRecentSortType_ReturnValue) == 0x00073C, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetRecentSortType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x000740, "Member 'WBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature final
{
public:
	int32                                         PageCurrent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
static_assert(sizeof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature, PageCurrent) == 0x000000, "Member 'WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature::PageCurrent' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdetaPage
// 0x0002 (0x0002 - 0x0000)
struct WBP_T_ApartShop_C_UpdetaPage final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          KeepPage;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_UpdetaPage) == 0x000001, "Wrong alignment on WBP_T_ApartShop_C_UpdetaPage");
static_assert(sizeof(WBP_T_ApartShop_C_UpdetaPage) == 0x000002, "Wrong size on WBP_T_ApartShop_C_UpdetaPage");
static_assert(offsetof(WBP_T_ApartShop_C_UpdetaPage, Visible) == 0x000000, "Member 'WBP_T_ApartShop_C_UpdetaPage::Visible' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_UpdetaPage, KeepPage) == 0x000001, "Member 'WBP_T_ApartShop_C_UpdetaPage::KeepPage' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.ResetGrid
// 0x0002 (0x0002 - 0x0000)
struct WBP_T_ApartShop_C_ResetGrid final
{
public:
	EStorageGridType                              InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScrollReset;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_ResetGrid) == 0x000001, "Wrong alignment on WBP_T_ApartShop_C_ResetGrid");
static_assert(sizeof(WBP_T_ApartShop_C_ResetGrid) == 0x000002, "Wrong size on WBP_T_ApartShop_C_ResetGrid");
static_assert(offsetof(WBP_T_ApartShop_C_ResetGrid, InType) == 0x000000, "Member 'WBP_T_ApartShop_C_ResetGrid::InType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_ResetGrid, ScrollReset) == 0x000001, "Member 'WBP_T_ApartShop_C_ResetGrid::ScrollReset' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.SlotSelectRevival
// 0x0008 (0x0008 - 0x0000)
struct WBP_T_ApartShop_C_SlotSelectRevival final
{
public:
	class UGridPanel*                             Grid;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_SlotSelectRevival) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_SlotSelectRevival");
static_assert(sizeof(WBP_T_ApartShop_C_SlotSelectRevival) == 0x000008, "Wrong size on WBP_T_ApartShop_C_SlotSelectRevival");
static_assert(offsetof(WBP_T_ApartShop_C_SlotSelectRevival, Grid) == 0x000000, "Member 'WBP_T_ApartShop_C_SlotSelectRevival::Grid' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconScrollVisible
// 0x0010 (0x0010 - 0x0000)
struct WBP_T_ApartShop_C_IconScrollVisible final
{
public:
	class UGridPanel*                             Param_Slot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Offset;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_IconScrollVisible) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_IconScrollVisible");
static_assert(sizeof(WBP_T_ApartShop_C_IconScrollVisible) == 0x000010, "Wrong size on WBP_T_ApartShop_C_IconScrollVisible");
static_assert(offsetof(WBP_T_ApartShop_C_IconScrollVisible, Param_Slot) == 0x000000, "Member 'WBP_T_ApartShop_C_IconScrollVisible::Param_Slot' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_IconScrollVisible, Offset) == 0x000008, "Member 'WBP_T_ApartShop_C_IconScrollVisible::Offset' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'WBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressRight_Storage
// 0x0008 (0x0008 - 0x0000)
struct WBP_T_ApartShop_C_OnPressRight_Storage final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_OnPressRight_Storage) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_OnPressRight_Storage");
static_assert(sizeof(WBP_T_ApartShop_C_OnPressRight_Storage) == 0x000008, "Wrong size on WBP_T_ApartShop_C_OnPressRight_Storage");
static_assert(offsetof(WBP_T_ApartShop_C_OnPressRight_Storage, SelectItem) == 0x000000, "Member 'WBP_T_ApartShop_C_OnPressRight_Storage::SelectItem' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressRight_Inventory
// 0x0008 (0x0008 - 0x0000)
struct WBP_T_ApartShop_C_OnPressRight_Inventory final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_OnPressRight_Inventory) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_OnPressRight_Inventory");
static_assert(sizeof(WBP_T_ApartShop_C_OnPressRight_Inventory) == 0x000008, "Wrong size on WBP_T_ApartShop_C_OnPressRight_Inventory");
static_assert(offsetof(WBP_T_ApartShop_C_OnPressRight_Inventory, SelectItem) == 0x000000, "Member 'WBP_T_ApartShop_C_OnPressRight_Inventory::SelectItem' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressItem_Storage
// 0x0008 (0x0008 - 0x0000)
struct WBP_T_ApartShop_C_OnPressItem_Storage final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_OnPressItem_Storage) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_OnPressItem_Storage");
static_assert(sizeof(WBP_T_ApartShop_C_OnPressItem_Storage) == 0x000008, "Wrong size on WBP_T_ApartShop_C_OnPressItem_Storage");
static_assert(offsetof(WBP_T_ApartShop_C_OnPressItem_Storage, SelectItem) == 0x000000, "Member 'WBP_T_ApartShop_C_OnPressItem_Storage::SelectItem' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressItem_Inventory
// 0x0008 (0x0008 - 0x0000)
struct WBP_T_ApartShop_C_OnPressItem_Inventory final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_OnPressItem_Inventory) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_OnPressItem_Inventory");
static_assert(sizeof(WBP_T_ApartShop_C_OnPressItem_Inventory) == 0x000008, "Wrong size on WBP_T_ApartShop_C_OnPressItem_Inventory");
static_assert(offsetof(WBP_T_ApartShop_C_OnPressItem_Inventory, SelectItem) == 0x000000, "Member 'WBP_T_ApartShop_C_OnPressItem_Inventory::SelectItem' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature final
{
public:
	class UShopCmnBtn1_C*                         ClickBtn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabId;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
static_assert(sizeof(WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature) == 0x000010, "Wrong size on WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature, ClickBtn) == 0x000000, "Member 'WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature::ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature, TabId) == 0x000008, "Member 'WBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature::TabId' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Param_Filters;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature");
static_assert(sizeof(WBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on WBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature, Param_Filters) == 0x000000, "Member 'WBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature::Param_Filters' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'WBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'WBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.UiInputBlock
// 0x0001 (0x0001 - 0x0000)
struct WBP_T_ApartShop_C_UiInputBlock final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_UiInputBlock) == 0x000001, "Wrong alignment on WBP_T_ApartShop_C_UiInputBlock");
static_assert(sizeof(WBP_T_ApartShop_C_UiInputBlock) == 0x000001, "Wrong size on WBP_T_ApartShop_C_UiInputBlock");
static_assert(offsetof(WBP_T_ApartShop_C_UiInputBlock, Param_IsVisible) == 0x000000, "Member 'WBP_T_ApartShop_C_UiInputBlock::Param_IsVisible' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnMultipleSelection
// 0x0010 (0x0010 - 0x0000)
struct WBP_T_ApartShop_C_OnMultipleSelection final
{
public:
	class UItemIconBtn_C*                         InputPin;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Param_LastClickGridType;                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_OnMultipleSelection) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_OnMultipleSelection");
static_assert(sizeof(WBP_T_ApartShop_C_OnMultipleSelection) == 0x000010, "Wrong size on WBP_T_ApartShop_C_OnMultipleSelection");
static_assert(offsetof(WBP_T_ApartShop_C_OnMultipleSelection, InputPin) == 0x000000, "Member 'WBP_T_ApartShop_C_OnMultipleSelection::InputPin' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_OnMultipleSelection, Param_LastClickGridType) == 0x000008, "Member 'WBP_T_ApartShop_C_OnMultipleSelection::Param_LastClickGridType' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.SetSlotSelect
// 0x0010 (0x0010 - 0x0000)
struct WBP_T_ApartShop_C_SetSlotSelect final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_797D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             InputPin;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_SetSlotSelect) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_SetSlotSelect");
static_assert(sizeof(WBP_T_ApartShop_C_SetSlotSelect) == 0x000010, "Wrong size on WBP_T_ApartShop_C_SetSlotSelect");
static_assert(offsetof(WBP_T_ApartShop_C_SetSlotSelect, IsSelected) == 0x000000, "Member 'WBP_T_ApartShop_C_SetSlotSelect::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SetSlotSelect, InputPin) == 0x000008, "Member 'WBP_T_ApartShop_C_SetSlotSelect::InputPin' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateItemNums
// 0x0001 (0x0001 - 0x0000)
struct WBP_T_ApartShop_C_UpdateItemNums final
{
public:
	bool                                          KeepPage;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_UpdateItemNums) == 0x000001, "Wrong alignment on WBP_T_ApartShop_C_UpdateItemNums");
static_assert(sizeof(WBP_T_ApartShop_C_UpdateItemNums) == 0x000001, "Wrong size on WBP_T_ApartShop_C_UpdateItemNums");
static_assert(offsetof(WBP_T_ApartShop_C_UpdateItemNums, KeepPage) == 0x000000, "Member 'WBP_T_ApartShop_C_UpdateItemNums::KeepPage' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Filter Type
// 0x0014 (0x0014 - 0x0000)
struct WBP_T_ApartShop_C_Get_Filter_Type final
{
public:
	EItemFilterType                               FilterType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_797E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_GetFilterBtnType_Filter;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_Get_Filter_Type) == 0x000004, "Wrong alignment on WBP_T_ApartShop_C_Get_Filter_Type");
static_assert(sizeof(WBP_T_ApartShop_C_Get_Filter_Type) == 0x000014, "Wrong size on WBP_T_ApartShop_C_Get_Filter_Type");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Filter_Type, FilterType) == 0x000000, "Member 'WBP_T_ApartShop_C_Get_Filter_Type::FilterType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Filter_Type, CallFunc_GetCategoryModeName_ReturnValue) == 0x000004, "Member 'WBP_T_ApartShop_C_Get_Filter_Type::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Filter_Type, CallFunc_GetSelectedIndex_ReturnValue) == 0x00000C, "Member 'WBP_T_ApartShop_C_Get_Filter_Type::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Filter_Type, CallFunc_GetFilterBtnType_Filter) == 0x000010, "Member 'WBP_T_ApartShop_C_Get_Filter_Type::CallFunc_GetFilterBtnType_Filter' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.Updete Item Slot List
// 0x0088 (0x0088 - 0x0000)
struct WBP_T_ApartShop_C_Updete_Item_Slot_List final
{
public:
	ESelectItemCategoryMode                       Param_SelectItemCategoryMode;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsModeChange;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_797F[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0068(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_Updete_Item_Slot_List) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_Updete_Item_Slot_List");
static_assert(sizeof(WBP_T_ApartShop_C_Updete_Item_Slot_List) == 0x000088, "Wrong size on WBP_T_ApartShop_C_Updete_Item_Slot_List");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, Param_SelectItemCategoryMode) == 0x000000, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::Param_SelectItemCategoryMode' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, IsModeChange) == 0x000001, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::IsModeChange' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000030, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000058, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000068, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, K2Node_SwitchEnum_CmpSuccess) == 0x000080, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Updete_Item_Slot_List, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000081, "Member 'WBP_T_ApartShop_C_Updete_Item_Slot_List::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct WBP_T_ApartShop_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7980[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_RandomPlayAnimation");
static_assert(sizeof(WBP_T_ApartShop_C_RandomPlayAnimation) == 0x000018, "Wrong size on WBP_T_ApartShop_C_RandomPlayAnimation");
static_assert(offsetof(WBP_T_ApartShop_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'WBP_T_ApartShop_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_T_ApartShop_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WBP_T_ApartShop_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct WBP_T_ApartShop_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7981[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_RandomPlayAnimation2");
static_assert(sizeof(WBP_T_ApartShop_C_RandomPlayAnimation2) == 0x000018, "Wrong size on WBP_T_ApartShop_C_RandomPlayAnimation2");
static_assert(offsetof(WBP_T_ApartShop_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'WBP_T_ApartShop_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_T_ApartShop_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WBP_T_ApartShop_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Inventory Brunch
// 0x0030 (0x0030 - 0x0000)
struct WBP_T_ApartShop_C_Get_Inventory_Brunch final
{
public:
	class USBOwnItemListContainer*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7982[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7983[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_Get_Inventory_Brunch) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_Get_Inventory_Brunch");
static_assert(sizeof(WBP_T_ApartShop_C_Get_Inventory_Brunch) == 0x000030, "Wrong size on WBP_T_ApartShop_C_Get_Inventory_Brunch");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Inventory_Brunch, ReturnValue) == 0x000000, "Member 'WBP_T_ApartShop_C_Get_Inventory_Brunch::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Inventory_Brunch, Temp_bool_Variable) == 0x000008, "Member 'WBP_T_ApartShop_C_Get_Inventory_Brunch::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Inventory_Brunch, CallFunc_GetEquipmentBag_ReturnValue) == 0x000010, "Member 'WBP_T_ApartShop_C_Get_Inventory_Brunch::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Inventory_Brunch, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'WBP_T_ApartShop_C_Get_Inventory_Brunch::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Inventory_Brunch, CallFunc_GetInventory_ReturnValue) == 0x000020, "Member 'WBP_T_ApartShop_C_Get_Inventory_Brunch::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Inventory_Brunch, K2Node_Select_Default) == 0x000028, "Member 'WBP_T_ApartShop_C_Get_Inventory_Brunch::K2Node_Select_Default' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetItemListContainer
// 0x0060 (0x0060 - 0x0000)
struct WBP_T_ApartShop_C_GetItemListContainer final
{
public:
	EStorageGridType                              InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7984[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7985[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7986[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7987[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_1;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_2;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_GetItemListContainer) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_GetItemListContainer");
static_assert(sizeof(WBP_T_ApartShop_C_GetItemListContainer) == 0x000060, "Wrong size on WBP_T_ApartShop_C_GetItemListContainer");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, InType) == 0x000000, "Member 'WBP_T_ApartShop_C_GetItemListContainer::InType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, ReturnValue) == 0x000008, "Member 'WBP_T_ApartShop_C_GetItemListContainer::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, Temp_byte_Variable) == 0x000010, "Member 'WBP_T_ApartShop_C_GetItemListContainer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, Temp_bool_Variable) == 0x000011, "Member 'WBP_T_ApartShop_C_GetItemListContainer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, CallFunc_GetOrnamentStorage_ReturnValue) == 0x000018, "Member 'WBP_T_ApartShop_C_GetItemListContainer::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'WBP_T_ApartShop_C_GetItemListContainer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, CallFunc_GetCharacterStorage_ReturnValue) == 0x000028, "Member 'WBP_T_ApartShop_C_GetItemListContainer::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, Temp_bool_Variable_1) == 0x000030, "Member 'WBP_T_ApartShop_C_GetItemListContainer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000031, "Member 'WBP_T_ApartShop_C_GetItemListContainer::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, K2Node_Select_Default) == 0x000038, "Member 'WBP_T_ApartShop_C_GetItemListContainer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, CallFunc_GetEquipmentBag_ReturnValue) == 0x000040, "Member 'WBP_T_ApartShop_C_GetItemListContainer::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, CallFunc_GetInventory_ReturnValue) == 0x000048, "Member 'WBP_T_ApartShop_C_GetItemListContainer::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, K2Node_Select_Default_1) == 0x000050, "Member 'WBP_T_ApartShop_C_GetItemListContainer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetItemListContainer, K2Node_Select_Default_2) == 0x000058, "Member 'WBP_T_ApartShop_C_GetItemListContainer::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.On_ComboBoxString_Sort_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0");
static_assert(sizeof(WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0) == 0x000038, "Wrong size on WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0");
static_assert(offsetof(WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0, Item) == 0x000000, "Member 'WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.On_ComboBoxString_Filter_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0");
static_assert(sizeof(WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0) == 0x000038, "Wrong size on WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0");
static_assert(offsetof(WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0, Item) == 0x000000, "Member 'WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.SearchInventoryItemData
// 0x0230 (0x0230 - 0x0000)
struct WBP_T_ApartShop_C_SearchInventoryItemData final
{
public:
	EStorageGridType                              Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7988[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         OutputPin;                                         // 0x0010(0x0098)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x00A8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7989[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_798A[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageGridType                              Temp_byte_Variable_1;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_798B[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryData>                 K2Node_Select_Default;                             // 0x00D0(0x0010)(ReferenceParm)
	TArray<struct FInventoryData>                 K2Node_Select_Default_1;                           // 0x00E0(0x0010)(ReferenceParm)
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x00F0(0x0098)(HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item_1;                         // 0x0188(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_798C[0x2];                                     // 0x0222(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_SearchInventoryItemData) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_SearchInventoryItemData");
static_assert(sizeof(WBP_T_ApartShop_C_SearchInventoryItemData) == 0x000230, "Wrong size on WBP_T_ApartShop_C_SearchInventoryItemData");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Param_Index) == 0x000000, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Target) == 0x000008, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Target' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, OutputPin) == 0x000010, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::OutputPin' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Enable) == 0x0000A8, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Enable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Temp_int_Array_Index_Variable) == 0x0000AC, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Temp_int_Array_Index_Variable_1) == 0x0000B8, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Temp_int_Loop_Counter_Variable_1) == 0x0000BC, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Temp_byte_Variable) == 0x0000C0, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C4, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, Temp_byte_Variable_1) == 0x0000C8, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, K2Node_Select_Default) == 0x0000D0, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, K2Node_Select_Default_1) == 0x0000E0, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_Array_Get_Item_1) == 0x000188, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000220, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000221, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_Array_Length_ReturnValue) == 0x000224, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_Array_Length_ReturnValue_1) == 0x000228, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_Less_IntInt_ReturnValue) == 0x00022C, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_SearchInventoryItemData, CallFunc_Less_IntInt_ReturnValue_1) == 0x00022D, "Member 'WBP_T_ApartShop_C_SearchInventoryItemData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.Set Icon Select Items
// 0x0010 (0x0010 - 0x0000)
struct WBP_T_ApartShop_C_Set_Icon_Select_Items final
{
public:
	class UItemIconBtn_C*                         InputPin;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAdd;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_Set_Icon_Select_Items) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_Set_Icon_Select_Items");
static_assert(sizeof(WBP_T_ApartShop_C_Set_Icon_Select_Items) == 0x000010, "Wrong size on WBP_T_ApartShop_C_Set_Icon_Select_Items");
static_assert(offsetof(WBP_T_ApartShop_C_Set_Icon_Select_Items, InputPin) == 0x000000, "Member 'WBP_T_ApartShop_C_Set_Icon_Select_Items::InputPin' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Set_Icon_Select_Items, bAdd) == 0x000008, "Member 'WBP_T_ApartShop_C_Set_Icon_Select_Items::bAdd' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetIconPtr
// 0x0258 (0x0258 - 0x0000)
struct WBP_T_ApartShop_C_GetIconPtr final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UItemIconBtn_C*                         AsItem_Icon_Btn;                                   // 0x0060(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInventory;                                        // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NotHave;                                           // 0x0069(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_798D[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     SwapData;                                          // 0x0070(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_798E[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_1;              // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_798F[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x0118(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7990[0x2];                                     // 0x01B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_Array_Get_Item_1;                         // 0x01B8(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_GetIconPtr) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_GetIconPtr");
static_assert(sizeof(WBP_T_ApartShop_C_GetIconPtr) == 0x000258, "Wrong size on WBP_T_ApartShop_C_GetIconPtr");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, InventoryItemData) == 0x000000, "Member 'WBP_T_ApartShop_C_GetIconPtr::InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, AsItem_Icon_Btn) == 0x000060, "Member 'WBP_T_ApartShop_C_GetIconPtr::AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, bInventory) == 0x000068, "Member 'WBP_T_ApartShop_C_GetIconPtr::bInventory' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, NotHave) == 0x000069, "Member 'WBP_T_ApartShop_C_GetIconPtr::NotHave' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, SwapData) == 0x000070, "Member 'WBP_T_ApartShop_C_GetIconPtr::SwapData' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, Temp_int_Loop_Counter_Variable) == 0x0000D0, "Member 'WBP_T_ApartShop_C_GetIconPtr::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, Temp_int_Array_Index_Variable) == 0x0000D8, "Member 'WBP_T_ApartShop_C_GetIconPtr::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, Temp_int_Loop_Counter_Variable_1) == 0x0000DC, "Member 'WBP_T_ApartShop_C_GetIconPtr::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000E0, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, Temp_int_Array_Index_Variable_1) == 0x0000E4, "Member 'WBP_T_ApartShop_C_GetIconPtr::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_GetChildAt_ReturnValue) == 0x0000E8, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_GetChildAt_ReturnValue_1) == 0x0000F0, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0000F8, "Member 'WBP_T_ApartShop_C_GetIconPtr::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'WBP_T_ApartShop_C_GetIconPtr::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, K2Node_DynamicCast_AsItem_Icon_Btn_1) == 0x000108, "Member 'WBP_T_ApartShop_C_GetIconPtr::K2Node_DynamicCast_AsItem_Icon_Btn_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'WBP_T_ApartShop_C_GetIconPtr::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_Array_Get_Item) == 0x000118, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_Array_Length_ReturnValue) == 0x0001B0, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_Less_IntInt_ReturnValue) == 0x0001B4, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001B5, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_Array_Get_Item_1) == 0x0001B8, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_Array_Length_ReturnValue_1) == 0x000250, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_Less_IntInt_ReturnValue_1) == 0x000254, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetIconPtr, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000255, "Member 'WBP_T_ApartShop_C_GetIconPtr::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.FindInventoryDataFromUniqueId
// 0x0208 (0x0208 - 0x0000)
struct WBP_T_ApartShop_C_FindInventoryDataFromUniqueId final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryData                         OutInventoryData;                                  // 0x0010(0x0098)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7991[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x00C0(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7992[0x2];                                     // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item_1;                         // 0x0168(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_FindInventoryDataFromUniqueId");
static_assert(sizeof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId) == 0x000208, "Wrong size on WBP_T_ApartShop_C_FindInventoryDataFromUniqueId");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, InUniqueId) == 0x000000, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::InUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, OutInventoryData) == 0x000010, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::OutInventoryData' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, Temp_int_Loop_Counter_Variable) == 0x0000A8, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, Temp_int_Array_Index_Variable) == 0x0000B0, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, Temp_int_Array_Index_Variable_1) == 0x0000B4, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, Temp_int_Loop_Counter_Variable_1) == 0x0000B8, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_Array_Length_ReturnValue) == 0x000158, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_Less_IntInt_ReturnValue) == 0x00015C, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00015D, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_Array_Length_ReturnValue_1) == 0x000164, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_Array_Get_Item_1) == 0x000168, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_Less_IntInt_ReturnValue_1) == 0x000200, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_FindInventoryDataFromUniqueId, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000201, "Member 'WBP_T_ApartShop_C_FindInventoryDataFromUniqueId::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.Create Use Data
// 0x01D0 (0x01D0 - 0x0000)
struct WBP_T_ApartShop_C_Create_Use_Data final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7993[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStorageItemData>             DataList;                                          // 0x0008(0x0010)(Parm, OutParm)
	int32                                         BaseAmount;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalAmount;                                       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStorageItemData>             NewLocalVar_0;                                     // 0x0020(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7994[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7995[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0050(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7996[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByItemIndex_bOutExist;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7997[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByItemIndex_ReturnValue;      // 0x0068(0x0118)(ConstParm)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData;               // 0x0180(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7998[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData_1;             // 0x01A8(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_Create_Use_Data) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_Create_Use_Data");
static_assert(sizeof(WBP_T_ApartShop_C_Create_Use_Data) == 0x0001D0, "Wrong size on WBP_T_ApartShop_C_Create_Use_Data");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, Amount) == 0x000000, "Member 'WBP_T_ApartShop_C_Create_Use_Data::Amount' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, DataList) == 0x000008, "Member 'WBP_T_ApartShop_C_Create_Use_Data::DataList' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, BaseAmount) == 0x000018, "Member 'WBP_T_ApartShop_C_Create_Use_Data::BaseAmount' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, TotalAmount) == 0x00001C, "Member 'WBP_T_ApartShop_C_Create_Use_Data::TotalAmount' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, NewLocalVar_0) == 0x000020, "Member 'WBP_T_ApartShop_C_Create_Use_Data::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, Temp_bool_Variable) == 0x000030, "Member 'WBP_T_ApartShop_C_Create_Use_Data::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, Temp_int_Variable) == 0x000034, "Member 'WBP_T_ApartShop_C_Create_Use_Data::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, Temp_int_Variable_1) == 0x000038, "Member 'WBP_T_ApartShop_C_Create_Use_Data::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_GetStorage_ReturnValue) == 0x000040, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x000048, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, K2Node_Select_Default) == 0x000050, "Member 'WBP_T_ApartShop_C_Create_Use_Data::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_GetStorage_ReturnValue_1) == 0x000058, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_BP_FindItem_ByItemIndex_bOutExist) == 0x000060, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_BP_FindItem_ByItemIndex_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_BP_FindItem_ByItemIndex_ReturnValue) == 0x000068, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_BP_FindItem_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, K2Node_MakeStruct_SBStorageItemData) == 0x000180, "Member 'WBP_T_ApartShop_C_Create_Use_Data::K2Node_MakeStruct_SBStorageItemData' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_Array_Add_ReturnValue) == 0x0001A0, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, K2Node_MakeStruct_SBStorageItemData_1) == 0x0001A8, "Member 'WBP_T_ApartShop_C_Create_Use_Data::K2Node_MakeStruct_SBStorageItemData_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Create_Use_Data, CallFunc_Array_Add_ReturnValue_1) == 0x0001C8, "Member 'WBP_T_ApartShop_C_Create_Use_Data::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetSortRule
// 0x0018 (0x0018 - 0x0000)
struct WBP_T_ApartShop_C_GetSortRule final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7999[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCategoryModeName_ReturnValue;          // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortType_Array_Element;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_GetSortRule) == 0x000004, "Wrong alignment on WBP_T_ApartShop_C_GetSortRule");
static_assert(sizeof(WBP_T_ApartShop_C_GetSortRule) == 0x000018, "Wrong size on WBP_T_ApartShop_C_GetSortRule");
static_assert(offsetof(WBP_T_ApartShop_C_GetSortRule, SortType) == 0x000000, "Member 'WBP_T_ApartShop_C_GetSortRule::SortType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetSortRule, CallFunc_GetCategoryModeName_ReturnValue) == 0x000004, "Member 'WBP_T_ApartShop_C_GetSortRule::CallFunc_GetCategoryModeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetSortRule, CallFunc_GetSelectedIndex_ReturnValue) == 0x00000C, "Member 'WBP_T_ApartShop_C_GetSortRule::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetSortRule, CallFunc_GetSelectedIndex_ReturnValue_1) == 0x000010, "Member 'WBP_T_ApartShop_C_GetSortRule::CallFunc_GetSelectedIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetSortRule, CallFunc_GetSortType_Array_Element) == 0x000014, "Member 'WBP_T_ApartShop_C_GetSortRule::CallFunc_GetSortType_Array_Element' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Sort Mode
// 0x000C (0x000C - 0x0000)
struct WBP_T_ApartShop_C_Get_Sort_Mode final
{
public:
	int32                                         ModeNum;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Get_Filter_Type_FilterType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_799A[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum;      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_Get_Sort_Mode) == 0x000004, "Wrong alignment on WBP_T_ApartShop_C_Get_Sort_Mode");
static_assert(sizeof(WBP_T_ApartShop_C_Get_Sort_Mode) == 0x00000C, "Wrong size on WBP_T_ApartShop_C_Get_Sort_Mode");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Sort_Mode, ModeNum) == 0x000000, "Member 'WBP_T_ApartShop_C_Get_Sort_Mode::ModeNum' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Sort_Mode, CallFunc_Get_Filter_Type_FilterType) == 0x000004, "Member 'WBP_T_ApartShop_C_Get_Sort_Mode::CallFunc_Get_Filter_Type_FilterType' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Sort_Mode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'WBP_T_ApartShop_C_Get_Sort_Mode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_Get_Sort_Mode, CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum) == 0x000008, "Member 'WBP_T_ApartShop_C_Get_Sort_Mode::CallFunc_Get_Inventory_Sort_Mode_Num_ModeNum' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetStorageNum
// 0x0068 (0x0068 - 0x0000)
struct WBP_T_ApartShop_C_GetStorageNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_799B[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_799C[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_799D[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemTypeNum_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue_1;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_799E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_GetStorageNum) == 0x000008, "Wrong alignment on WBP_T_ApartShop_C_GetStorageNum");
static_assert(sizeof(WBP_T_ApartShop_C_GetStorageNum) == 0x000068, "Wrong size on WBP_T_ApartShop_C_GetStorageNum");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, Num) == 0x000000, "Member 'WBP_T_ApartShop_C_GetStorageNum::Num' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, Max) == 0x000004, "Member 'WBP_T_ApartShop_C_GetStorageNum::Max' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, Temp_bool_Variable) == 0x000008, "Member 'WBP_T_ApartShop_C_GetStorageNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_GetOrnamentStorage_ReturnValue) == 0x000010, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_GetOrnamentStorage_ReturnValue_1) == 0x000018, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_GetOrnamentStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_GetUseBlockNum_ReturnValue) == 0x000024, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, Temp_bool_Variable_1) == 0x000028, "Member 'WBP_T_ApartShop_C_GetStorageNum::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000029, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_GetCharacterStorage_ReturnValue) == 0x000030, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_GetItemTypeNum_ReturnValue) == 0x000038, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_GetItemTypeNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_GetUseBlockNum_ReturnValue_1) == 0x00003C, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_GetUseBlockNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_GetCharacterStorage_ReturnValue_1) == 0x000040, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_GetCharacterStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, K2Node_Select_Default) == 0x000050, "Member 'WBP_T_ApartShop_C_GetStorageNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_Clamp_ReturnValue) == 0x000058, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, CallFunc_GetCapacity_ReturnValue) == 0x00005C, "Member 'WBP_T_ApartShop_C_GetStorageNum::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetStorageNum, K2Node_Select_Default_1) == 0x000060, "Member 'WBP_T_ApartShop_C_GetStorageNum::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetCategoryModeName
// 0x002C (0x002C - 0x0000)
struct WBP_T_ApartShop_C_GetCategoryModeName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESelectItemCategoryMode                       Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_799F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_T_ApartShop_C_GetCategoryModeName) == 0x000004, "Wrong alignment on WBP_T_ApartShop_C_GetCategoryModeName");
static_assert(sizeof(WBP_T_ApartShop_C_GetCategoryModeName) == 0x00002C, "Wrong size on WBP_T_ApartShop_C_GetCategoryModeName");
static_assert(offsetof(WBP_T_ApartShop_C_GetCategoryModeName, ReturnValue) == 0x000000, "Member 'WBP_T_ApartShop_C_GetCategoryModeName::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetCategoryModeName, Temp_byte_Variable) == 0x000008, "Member 'WBP_T_ApartShop_C_GetCategoryModeName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetCategoryModeName, Temp_name_Variable) == 0x00000C, "Member 'WBP_T_ApartShop_C_GetCategoryModeName::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetCategoryModeName, Temp_name_Variable_1) == 0x000014, "Member 'WBP_T_ApartShop_C_GetCategoryModeName::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetCategoryModeName, Temp_name_Variable_2) == 0x00001C, "Member 'WBP_T_ApartShop_C_GetCategoryModeName::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_T_ApartShop_C_GetCategoryModeName, K2Node_Select_Default) == 0x000024, "Member 'WBP_T_ApartShop_C_GetCategoryModeName::K2Node_Select_Default' has a wrong offset!");

}

