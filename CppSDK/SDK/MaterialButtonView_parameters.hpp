#pragma once

 

// Package: MaterialButtonView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MaterialButtonView.MaterialButtonView_C.ExecuteUbergraph_MaterialButtonView
// 0x0004 (0x0004 - 0x0000)
struct MaterialButtonView_C_ExecuteUbergraph_MaterialButtonView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MaterialButtonView_C_ExecuteUbergraph_MaterialButtonView) == 0x000004, "Wrong alignment on MaterialButtonView_C_ExecuteUbergraph_MaterialButtonView");
static_assert(sizeof(MaterialButtonView_C_ExecuteUbergraph_MaterialButtonView) == 0x000004, "Wrong size on MaterialButtonView_C_ExecuteUbergraph_MaterialButtonView");
static_assert(offsetof(MaterialButtonView_C_ExecuteUbergraph_MaterialButtonView, EntryPoint) == 0x000000, "Member 'MaterialButtonView_C_ExecuteUbergraph_MaterialButtonView::EntryPoint' has a wrong offset!");

// Function MaterialButtonView.MaterialButtonView_C.Initialize
// 0x0198 (0x0198 - 0x0000)
struct MaterialButtonView_C_Initialize final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E64[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E65[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseMoney_Money;                        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E66[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	int32                                         CallFunc_GetUseMoney_Money_1;                      // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E67[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0098(0x0018)()
	bool                                          CallFunc_UpdateDiscountColor_IsDiscount;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E68[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E69[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCalculatedItemNum_CalculatedAmount;    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E6A[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBMasterData                    CallFunc_FindStackBMasterData_ReturnValue;         // 0x00D0(0x0030)()
	bool                                          CallFunc_isStorageItemLocked_OutRequiredCnt;       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLocked_ReturnValue;          // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E6B[0x2];                                     // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalclateRewardBoostSupportItemNum_CalculatedAmount; // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E6C[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0120(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E6D[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0140(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0158(0x0018)()
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0180(0x0018)()
};
static_assert(alignof(MaterialButtonView_C_Initialize) == 0x000008, "Wrong alignment on MaterialButtonView_C_Initialize");
static_assert(sizeof(MaterialButtonView_C_Initialize) == 0x000198, "Wrong size on MaterialButtonView_C_Initialize");
static_assert(offsetof(MaterialButtonView_C_Initialize, Temp_bool_Variable) == 0x000000, "Member 'MaterialButtonView_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'MaterialButtonView_C_Initialize::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'MaterialButtonView_C_Initialize::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_MakeLiteralByte_ReturnValue) == 0x000058, "Member 'MaterialButtonView_C_Initialize::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000059, "Member 'MaterialButtonView_C_Initialize::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetTextFromAsset_ReturnValue) == 0x000060, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetUseMoney_Money) == 0x000070, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetUseMoney_Money' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'MaterialButtonView_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetUseMoney_Money_1) == 0x000090, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetUseMoney_Money_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Conv_IntToText_ReturnValue) == 0x000098, "Member 'MaterialButtonView_C_Initialize::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_UpdateDiscountColor_IsDiscount) == 0x0000B0, "Member 'MaterialButtonView_C_Initialize::CallFunc_UpdateDiscountColor_IsDiscount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetMoney_ReturnValue) == 0x0000B4, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'MaterialButtonView_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetCalculatedItemNum_CalculatedAmount) == 0x0000BC, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetCalculatedItemNum_CalculatedAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x0000C0, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000C4, "Member 'MaterialButtonView_C_Initialize::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C5, "Member 'MaterialButtonView_C_Initialize::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Not_PreBool_ReturnValue) == 0x0000C6, "Member 'MaterialButtonView_C_Initialize::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_BooleanAND_ReturnValue) == 0x0000C7, "Member 'MaterialButtonView_C_Initialize::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, Temp_bool_Variable_1) == 0x0000C8, "Member 'MaterialButtonView_C_Initialize::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_FindStackBMasterData_ReturnValue) == 0x0000D0, "Member 'MaterialButtonView_C_Initialize::CallFunc_FindStackBMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_isStorageItemLocked_OutRequiredCnt) == 0x000100, "Member 'MaterialButtonView_C_Initialize::CallFunc_isStorageItemLocked_OutRequiredCnt' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_isStorageItemLocked_ReturnValue) == 0x000101, "Member 'MaterialButtonView_C_Initialize::CallFunc_isStorageItemLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_CalclateRewardBoostSupportItemNum_CalculatedAmount) == 0x000104, "Member 'MaterialButtonView_C_Initialize::CallFunc_CalclateRewardBoostSupportItemNum_CalculatedAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetItemName_OutName) == 0x000108, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetItemName_ReturnValue) == 0x000118, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Greater_IntInt_ReturnValue) == 0x000119, "Member 'MaterialButtonView_C_Initialize::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000120, "Member 'MaterialButtonView_C_Initialize::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_BooleanAND_ReturnValue_1) == 0x000138, "Member 'MaterialButtonView_C_Initialize::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000139, "Member 'MaterialButtonView_C_Initialize::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, K2Node_Select_Default) == 0x00013A, "Member 'MaterialButtonView_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00013B, "Member 'MaterialButtonView_C_Initialize::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000140, "Member 'MaterialButtonView_C_Initialize::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, K2Node_Select_Default_1) == 0x000158, "Member 'MaterialButtonView_C_Initialize::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_GetNameText_ReturnValue) == 0x000170, "Member 'MaterialButtonView_C_Initialize::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_Initialize, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000180, "Member 'MaterialButtonView_C_Initialize::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function MaterialButtonView.MaterialButtonView_C.InitializeTickets
// 0x01C8 (0x01C8 - 0x0000)
struct MaterialButtonView_C_InitializeTickets final
{
public:
	struct FSBStackBTicketData                    TicketData;                                        // 0x0000(0x001C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         TokenID;                                           // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E6E[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemsNum_ReturnValue;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBItemType                             CallFunc_GetStackBItemType_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFullyContent_ReturnValue;               // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E6F[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E70[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   CallFunc_CreateEmptyTemporallyStorage_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0070(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsByUniqueId_ReturnValue;           // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsByUniqueId_ReturnValue_1;         // 0x018E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x018F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E71[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E72[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBTicketData                    CallFunc_FindTicketDataByTypeLevel_ReturnValue;    // 0x01AC(0x001C)(ConstParm, NoDestructor)
};
static_assert(alignof(MaterialButtonView_C_InitializeTickets) == 0x000008, "Wrong alignment on MaterialButtonView_C_InitializeTickets");
static_assert(sizeof(MaterialButtonView_C_InitializeTickets) == 0x0001C8, "Wrong size on MaterialButtonView_C_InitializeTickets");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, TicketData) == 0x000000, "Member 'MaterialButtonView_C_InitializeTickets::TicketData' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, TokenID) == 0x00001C, "Member 'MaterialButtonView_C_InitializeTickets::TokenID' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, Temp_int_Array_Index_Variable) == 0x000020, "Member 'MaterialButtonView_C_InitializeTickets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'MaterialButtonView_C_InitializeTickets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_MakeLiteralByte_ReturnValue) == 0x00002C, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_GetItemsNum_ReturnValue) == 0x000030, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_GetItemsNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Multiply_IntInt_ReturnValue) == 0x000038, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Max_ReturnValue) == 0x00003C, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_GetItemLevel_ReturnValue) == 0x000040, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_GetStackBItemType_ReturnValue) == 0x000044, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_GetStackBItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, Temp_bool_Variable) == 0x000045, "Member 'MaterialButtonView_C_InitializeTickets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_IsFullyContent_ReturnValue) == 0x000046, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_IsFullyContent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Not_PreBool_ReturnValue) == 0x000047, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_GetCharacterStorage_ReturnValue) == 0x000048, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_GetEquipmentBag_ReturnValue) == 0x000050, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000058, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, K2Node_Select_Default) == 0x000059, "Member 'MaterialButtonView_C_InitializeTickets::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Max_ReturnValue_1) == 0x000060, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_CreateEmptyTemporallyStorage_ReturnValue) == 0x000068, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_CreateEmptyTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Array_Get_Item) == 0x000070, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Array_Length_ReturnValue_1) == 0x000188, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_ContainsByUniqueId_ReturnValue) == 0x00018C, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_ContainsByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_Less_IntInt_ReturnValue) == 0x00018D, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_ContainsByUniqueId_ReturnValue_1) == 0x00018E, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_ContainsByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_BooleanOR_ReturnValue) == 0x00018F, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_GetSBPlayerController_ReturnValue) == 0x000190, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_GetStackBComponent_ReturnValue) == 0x0001A0, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_IsValid_ReturnValue_1) == 0x0001A8, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_InitializeTickets, CallFunc_FindTicketDataByTypeLevel_ReturnValue) == 0x0001AC, "Member 'MaterialButtonView_C_InitializeTickets::CallFunc_FindTicketDataByTypeLevel_ReturnValue' has a wrong offset!");

// Function MaterialButtonView.MaterialButtonView_C.UpdateLackColor
// 0x0088 (0x0088 - 0x0000)
struct MaterialButtonView_C_UpdateLackColor final
{
public:
	class UTextBlock*                             ColorText;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLack;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E73[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0060(0x0028)()
};
static_assert(alignof(MaterialButtonView_C_UpdateLackColor) == 0x000008, "Wrong alignment on MaterialButtonView_C_UpdateLackColor");
static_assert(sizeof(MaterialButtonView_C_UpdateLackColor) == 0x000088, "Wrong size on MaterialButtonView_C_UpdateLackColor");
static_assert(offsetof(MaterialButtonView_C_UpdateLackColor, ColorText) == 0x000000, "Member 'MaterialButtonView_C_UpdateLackColor::ColorText' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateLackColor, IsLack) == 0x000008, "Member 'MaterialButtonView_C_UpdateLackColor::IsLack' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateLackColor, Temp_bool_Variable) == 0x000009, "Member 'MaterialButtonView_C_UpdateLackColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateLackColor, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'MaterialButtonView_C_UpdateLackColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateLackColor, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'MaterialButtonView_C_UpdateLackColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateLackColor, K2Node_Select_Default) == 0x000060, "Member 'MaterialButtonView_C_UpdateLackColor::K2Node_Select_Default' has a wrong offset!");

// Function MaterialButtonView.MaterialButtonView_C.SetData
// 0x0130 (0x0130 - 0x0000)
struct MaterialButtonView_C_SetData final
{
public:
	struct FOwnItemInfo                           Param_TargetItem;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FOwnItemInfo>                   Param_GridView;                                    // 0x0118(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Param_bUseTicket;                                  // 0x0128(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MaterialButtonView_C_SetData) == 0x000008, "Wrong alignment on MaterialButtonView_C_SetData");
static_assert(sizeof(MaterialButtonView_C_SetData) == 0x000130, "Wrong size on MaterialButtonView_C_SetData");
static_assert(offsetof(MaterialButtonView_C_SetData, Param_TargetItem) == 0x000000, "Member 'MaterialButtonView_C_SetData::Param_TargetItem' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_SetData, Param_GridView) == 0x000118, "Member 'MaterialButtonView_C_SetData::Param_GridView' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_SetData, Param_bUseTicket) == 0x000128, "Member 'MaterialButtonView_C_SetData::Param_bUseTicket' has a wrong offset!");

// Function MaterialButtonView.MaterialButtonView_C.UpdateDiscountColor
// 0x0090 (0x0090 - 0x0000)
struct MaterialButtonView_C_UpdateDiscountColor final
{
public:
	class UTextBlock*                             _____;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDiscount;                                        // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E74[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUseMoney_Money;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E75[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0068(0x0028)()
};
static_assert(alignof(MaterialButtonView_C_UpdateDiscountColor) == 0x000008, "Wrong alignment on MaterialButtonView_C_UpdateDiscountColor");
static_assert(sizeof(MaterialButtonView_C_UpdateDiscountColor) == 0x000090, "Wrong size on MaterialButtonView_C_UpdateDiscountColor");
static_assert(offsetof(MaterialButtonView_C_UpdateDiscountColor, _____) == 0x000000, "Member 'MaterialButtonView_C_UpdateDiscountColor::_____' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateDiscountColor, IsDiscount) == 0x000008, "Member 'MaterialButtonView_C_UpdateDiscountColor::IsDiscount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateDiscountColor, Temp_bool_Variable) == 0x000009, "Member 'MaterialButtonView_C_UpdateDiscountColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateDiscountColor, CallFunc_GetUseMoney_Money) == 0x00000C, "Member 'MaterialButtonView_C_UpdateDiscountColor::CallFunc_GetUseMoney_Money' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateDiscountColor, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'MaterialButtonView_C_UpdateDiscountColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateDiscountColor, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'MaterialButtonView_C_UpdateDiscountColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateDiscountColor, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'MaterialButtonView_C_UpdateDiscountColor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_UpdateDiscountColor, K2Node_Select_Default) == 0x000068, "Member 'MaterialButtonView_C_UpdateDiscountColor::K2Node_Select_Default' has a wrong offset!");

// Function MaterialButtonView.MaterialButtonView_C.GetCalculatedItemNum
// 0x00E0 (0x00E0 - 0x0000)
struct MaterialButtonView_C_GetCalculatedItemNum final
{
public:
	int32                                         BaseAmount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SupportItemId;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CalculatedAmount;                                  // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRateEconomyAmount;                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalNumEconomyAmount;                             // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E76[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E77[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  CallFunc_ConvertRewardBoostType_ReturnValue;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E78[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E79[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetStackBEconomyItemRate_EconomyRate;     // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBEconomyItemRate_ReturnValue;     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E7A[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBEconomyItemNum_EconomyNum;       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBEconomyItemNum_ReturnValue;      // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E7B[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MaterialButtonView_C_GetCalculatedItemNum) == 0x000008, "Wrong alignment on MaterialButtonView_C_GetCalculatedItemNum");
static_assert(sizeof(MaterialButtonView_C_GetCalculatedItemNum) == 0x0000E0, "Wrong size on MaterialButtonView_C_GetCalculatedItemNum");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, BaseAmount) == 0x000000, "Member 'MaterialButtonView_C_GetCalculatedItemNum::BaseAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, SupportItemId) == 0x000004, "Member 'MaterialButtonView_C_GetCalculatedItemNum::SupportItemId' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CalculatedAmount) == 0x000008, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CalculatedAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, LocalRateEconomyAmount) == 0x00000C, "Member 'MaterialButtonView_C_GetCalculatedItemNum::LocalRateEconomyAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, LocalNumEconomyAmount) == 0x000010, "Member 'MaterialButtonView_C_GetCalculatedItemNum::LocalNumEconomyAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_GetStackBNum_ReturnValue) == 0x000048, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000050, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000060, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_ConvertRewardBoostType_ReturnValue) == 0x000070, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_ConvertRewardBoostType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000078, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000088, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000098, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000AC, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000B0, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x0000B8, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_GetStackBEconomyItemRate_EconomyRate) == 0x0000C4, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_GetStackBEconomyItemRate_EconomyRate' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_GetStackBEconomyItemRate_ReturnValue) == 0x0000C8, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_GetStackBEconomyItemRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000CC, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_GetStackBEconomyItemNum_EconomyNum) == 0x0000D0, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_GetStackBEconomyItemNum_EconomyNum' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_GetStackBEconomyItemNum_ReturnValue) == 0x0000D4, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_GetStackBEconomyItemNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_FFloor_ReturnValue) == 0x0000D8, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetCalculatedItemNum, CallFunc_IsValid_ReturnValue_1) == 0x0000DC, "Member 'MaterialButtonView_C_GetCalculatedItemNum::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MaterialButtonView.MaterialButtonView_C.CalclateRewardBoostSupportItemNum
// 0x00E0 (0x00E0 - 0x0000)
struct MaterialButtonView_C_CalclateRewardBoostSupportItemNum final
{
public:
	int32                                         BaseAmount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SupportItemId;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CalculatedAmount;                                  // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRateEconomyAmount;                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalNumEconomyAmount;                             // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E7C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E7D[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  CallFunc_ConvertRewardBoostType_ReturnValue;       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E7E[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStackBEconomyItemRate_EconomyRate;     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBEconomyItemRate_ReturnValue;     // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E7F[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBEconomyItemNum_EconomyNum;       // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBEconomyItemNum_ReturnValue;      // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E80[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum) == 0x000008, "Wrong alignment on MaterialButtonView_C_CalclateRewardBoostSupportItemNum");
static_assert(sizeof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum) == 0x0000E0, "Wrong size on MaterialButtonView_C_CalclateRewardBoostSupportItemNum");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, BaseAmount) == 0x000000, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::BaseAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, SupportItemId) == 0x000004, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::SupportItemId' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CalculatedAmount) == 0x000008, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CalculatedAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, LocalRateEconomyAmount) == 0x00000C, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::LocalRateEconomyAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, LocalNumEconomyAmount) == 0x000010, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::LocalNumEconomyAmount' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000048, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000058, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000078, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000088, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x00009C, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBNum_ReturnValue) == 0x0000A0, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000A8, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_ConvertRewardBoostType_ReturnValue) == 0x0000B0, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_ConvertRewardBoostType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_IsValid_ReturnValue) == 0x0000B1, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x0000B8, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBEconomyItemRate_EconomyRate) == 0x0000C0, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBEconomyItemRate_EconomyRate' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBEconomyItemRate_ReturnValue) == 0x0000C4, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBEconomyItemRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBEconomyItemNum_EconomyNum) == 0x0000C8, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBEconomyItemNum_EconomyNum' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBEconomyItemNum_ReturnValue) == 0x0000CC, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBEconomyItemNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000D0, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_FFloor_ReturnValue) == 0x0000D4, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_CalclateRewardBoostSupportItemNum, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'MaterialButtonView_C_CalclateRewardBoostSupportItemNum::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MaterialButtonView.MaterialButtonView_C.GetUseMoney
// 0x0080 (0x0080 - 0x0000)
struct MaterialButtonView_C_GetUseMoney final
{
public:
	int32                                         Money;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardDiscountMoney;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LiquidDiscountMoney;                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BaseMoney;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E81[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E82[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  CallFunc_ConvertRewardBoostType_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E83[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E84[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetStackBMoneyDiscount_DiscountRate;      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBMoneyDiscount_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E85[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E86[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E87[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E88[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FFloor_ReturnValue_1;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MaterialButtonView_C_GetUseMoney) == 0x000008, "Wrong alignment on MaterialButtonView_C_GetUseMoney");
static_assert(sizeof(MaterialButtonView_C_GetUseMoney) == 0x000080, "Wrong size on MaterialButtonView_C_GetUseMoney");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, Money) == 0x000000, "Member 'MaterialButtonView_C_GetUseMoney::Money' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, RewardDiscountMoney) == 0x000004, "Member 'MaterialButtonView_C_GetUseMoney::RewardDiscountMoney' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, LiquidDiscountMoney) == 0x000008, "Member 'MaterialButtonView_C_GetUseMoney::LiquidDiscountMoney' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, BaseMoney) == 0x00000C, "Member 'MaterialButtonView_C_GetUseMoney::BaseMoney' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, Temp_int_Variable) == 0x000010, "Member 'MaterialButtonView_C_GetUseMoney::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, Temp_bool_Variable) == 0x000014, "Member 'MaterialButtonView_C_GetUseMoney::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetStackBNum_ReturnValue) == 0x000020, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_ConvertRewardBoostType_ReturnValue) == 0x000030, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_ConvertRewardBoostType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000038, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetStackBMoneyDiscount_DiscountRate) == 0x000044, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetStackBMoneyDiscount_DiscountRate' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetStackBMoneyDiscount_ReturnValue) == 0x000048, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetStackBMoneyDiscount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00004C, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_FFloor_ReturnValue) == 0x000050, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetNetworkDataCache_IsValid) == 0x000054, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000058, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid) == 0x000060, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue) == 0x000064, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000068, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x00006C, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue) == 0x000070, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, CallFunc_FFloor_ReturnValue_1) == 0x000074, "Member 'MaterialButtonView_C_GetUseMoney::CallFunc_FFloor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MaterialButtonView_C_GetUseMoney, K2Node_Select_Default) == 0x000078, "Member 'MaterialButtonView_C_GetUseMoney::K2Node_Select_Default' has a wrong offset!");

}

