#pragma once

 

// Package: EquipStatusView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function EquipStatusView.EquipStatusView_C.ExecuteUbergraph_EquipStatusView
// 0x0120 (0x0120 - 0x0000)
struct EquipStatusView_C_ExecuteUbergraph_EquipStatusView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0008(0x0088)(HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A85[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo_1;                 // 0x0098(0x0088)(HasGetValueTypeHash)
};
static_assert(alignof(EquipStatusView_C_ExecuteUbergraph_EquipStatusView) == 0x000008, "Wrong alignment on EquipStatusView_C_ExecuteUbergraph_EquipStatusView");
static_assert(sizeof(EquipStatusView_C_ExecuteUbergraph_EquipStatusView) == 0x000120, "Wrong size on EquipStatusView_C_ExecuteUbergraph_EquipStatusView");
static_assert(offsetof(EquipStatusView_C_ExecuteUbergraph_EquipStatusView, EntryPoint) == 0x000000, "Member 'EquipStatusView_C_ExecuteUbergraph_EquipStatusView::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_ExecuteUbergraph_EquipStatusView, CallFunc_FTrunc_ReturnValue) == 0x000004, "Member 'EquipStatusView_C_ExecuteUbergraph_EquipStatusView::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_ExecuteUbergraph_EquipStatusView, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'EquipStatusView_C_ExecuteUbergraph_EquipStatusView::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_ExecuteUbergraph_EquipStatusView, CallFunc_FTrunc_ReturnValue_1) == 0x000090, "Member 'EquipStatusView_C_ExecuteUbergraph_EquipStatusView::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_ExecuteUbergraph_EquipStatusView, K2Node_MakeStruct_SlateFontInfo_1) == 0x000098, "Member 'EquipStatusView_C_ExecuteUbergraph_EquipStatusView::K2Node_MakeStruct_SlateFontInfo_1' has a wrong offset!");

// Function EquipStatusView.EquipStatusView_C.SetValue
// 0x0120 (0x0120 - 0x0000)
struct EquipStatusView_C_SetValue final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipStatusView_C_SetValue) == 0x000008, "Wrong alignment on EquipStatusView_C_SetValue");
static_assert(sizeof(EquipStatusView_C_SetValue) == 0x000120, "Wrong size on EquipStatusView_C_SetValue");
static_assert(offsetof(EquipStatusView_C_SetValue, Info) == 0x000000, "Member 'EquipStatusView_C_SetValue::Info' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetValue, K2Node_SwitchEnum_CmpSuccess) == 0x000118, "Member 'EquipStatusView_C_SetValue::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EquipStatusView.EquipStatusView_C.SetImagine
// 0x01D8 (0x01D8 - 0x0000)
struct EquipStatusView_C_SetImagine final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Temp_int_Variable;                                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParams_ReturnValue; // 0x0128(0x006C)(NoDestructor)
	int32                                         K2Node_Select_Default;                             // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0198(0x0018)()
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array;                            // 0x01B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A86[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipStatusView_C_SetImagine) == 0x000008, "Wrong alignment on EquipStatusView_C_SetImagine");
static_assert(sizeof(EquipStatusView_C_SetImagine) == 0x0001D8, "Wrong size on EquipStatusView_C_SetImagine");
static_assert(offsetof(EquipStatusView_C_SetImagine, Info) == 0x000000, "Member 'EquipStatusView_C_SetImagine::Info' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, Temp_int_Variable) == 0x000118, "Member 'EquipStatusView_C_SetImagine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, Temp_int_Array_Index_Variable) == 0x00011C, "Member 'EquipStatusView_C_SetImagine::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, Temp_int_Loop_Counter_Variable) == 0x000120, "Member 'EquipStatusView_C_SetImagine::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, CallFunc_Add_IntInt_ReturnValue) == 0x000124, "Member 'EquipStatusView_C_SetImagine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, CallFunc_CalculatedStackBImagineParams_ReturnValue) == 0x000128, "Member 'EquipStatusView_C_SetImagine::CallFunc_CalculatedStackBImagineParams_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, K2Node_Select_Default) == 0x000194, "Member 'EquipStatusView_C_SetImagine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, CallFunc_Conv_IntToText_ReturnValue) == 0x000198, "Member 'EquipStatusView_C_SetImagine::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, K2Node_MakeArray_Array) == 0x0001B0, "Member 'EquipStatusView_C_SetImagine::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, CallFunc_Array_Length_ReturnValue) == 0x0001C0, "Member 'EquipStatusView_C_SetImagine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, CallFunc_Array_Get_Item) == 0x0001C8, "Member 'EquipStatusView_C_SetImagine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetImagine, CallFunc_Less_IntInt_ReturnValue) == 0x0001D0, "Member 'EquipStatusView_C_SetImagine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function EquipStatusView.EquipStatusView_C.SetWeapon
// 0x0190 (0x0190 - 0x0000)
struct EquipStatusView_C_SetWeapon final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USBRuntimeTextBlock*                    Temp_object_Variable;                              // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Temp_object_Variable_1;                            // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Temp_object_Variable_2;                            // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Temp_object_Variable_3;                            // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               Temp_byte_Variable;                                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A87[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A88[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A89[0x1];                                     // 0x014F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalculatedStackBWeaponParam_ReturnValue;  // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0158(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A8A[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A8B[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    K2Node_Select_Default;                             // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipStatusView_C_SetWeapon) == 0x000008, "Wrong alignment on EquipStatusView_C_SetWeapon");
static_assert(sizeof(EquipStatusView_C_SetWeapon) == 0x000190, "Wrong size on EquipStatusView_C_SetWeapon");
static_assert(offsetof(EquipStatusView_C_SetWeapon, Info) == 0x000000, "Member 'EquipStatusView_C_SetWeapon::Info' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, Temp_object_Variable) == 0x000118, "Member 'EquipStatusView_C_SetWeapon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, Temp_object_Variable_1) == 0x000120, "Member 'EquipStatusView_C_SetWeapon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, Temp_object_Variable_2) == 0x000128, "Member 'EquipStatusView_C_SetWeapon::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, Temp_object_Variable_3) == 0x000130, "Member 'EquipStatusView_C_SetWeapon::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, Temp_byte_Variable) == 0x000138, "Member 'EquipStatusView_C_SetWeapon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, Temp_int_Variable) == 0x00013C, "Member 'EquipStatusView_C_SetWeapon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, Temp_int_Variable_1) == 0x000140, "Member 'EquipStatusView_C_SetWeapon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_Conv_IntToByte_ReturnValue) == 0x000144, "Member 'EquipStatusView_C_SetWeapon::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x000148, "Member 'EquipStatusView_C_SetWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_GetValidValue_ReturnValue) == 0x00014C, "Member 'EquipStatusView_C_SetWeapon::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00014D, "Member 'EquipStatusView_C_SetWeapon::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00014E, "Member 'EquipStatusView_C_SetWeapon::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_CalculatedStackBWeaponParam_ReturnValue) == 0x000150, "Member 'EquipStatusView_C_SetWeapon::CallFunc_CalculatedStackBWeaponParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000154, "Member 'EquipStatusView_C_SetWeapon::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_Conv_IntToText_ReturnValue) == 0x000158, "Member 'EquipStatusView_C_SetWeapon::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, K2Node_SwitchEnum_CmpSuccess) == 0x000170, "Member 'EquipStatusView_C_SetWeapon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_MakeLiteralBool_ReturnValue) == 0x000171, "Member 'EquipStatusView_C_SetWeapon::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_MakeLiteralInt_ReturnValue) == 0x000174, "Member 'EquipStatusView_C_SetWeapon::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x000178, "Member 'EquipStatusView_C_SetWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, K2Node_Select_Default) == 0x000180, "Member 'EquipStatusView_C_SetWeapon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetWeapon, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'EquipStatusView_C_SetWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipStatusView.EquipStatusView_C.SetPrevData
// 0x0120 (0x0120 - 0x0000)
struct EquipStatusView_C_SetPrevData final
{
public:
	struct FOwnItemInfo                           Param_OwnItemInfo;                                 // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipStatusView_C_SetPrevData) == 0x000008, "Wrong alignment on EquipStatusView_C_SetPrevData");
static_assert(sizeof(EquipStatusView_C_SetPrevData) == 0x000120, "Wrong size on EquipStatusView_C_SetPrevData");
static_assert(offsetof(EquipStatusView_C_SetPrevData, Param_OwnItemInfo) == 0x000000, "Member 'EquipStatusView_C_SetPrevData::Param_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevData, K2Node_SwitchEnum_CmpSuccess) == 0x000118, "Member 'EquipStatusView_C_SetPrevData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EquipStatusView.EquipStatusView_C.SetPrevDataImagine
// 0x03B8 (0x03B8 - 0x0000)
struct EquipStatusView_C_SetPrevDataImagine final
{
public:
	struct FOwnItemInfo                           PrevInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FImagineParameter                      LocalNowParams;                                    // 0x0118(0x006C)(Edit, BlueprintVisible, NoDestructor)
	struct FImagineParameter                      LocalPrevParams;                                   // 0x0184(0x006C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParams_ReturnValue; // 0x01F4(0x006C)(NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A8C[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A8D[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0270(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0298(0x0028)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x02CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x02CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x02CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x02CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;             // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_4;            // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x02D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A8E[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_2;                           // 0x02D8(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x0300(0x0028)()
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array;                            // 0x0328(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParams_ReturnValue_1; // 0x0338(0x006C)(NoDestructor)
	uint8                                         Pad_5A8F[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipStatusView_C_SetPrevDataImagine) == 0x000008, "Wrong alignment on EquipStatusView_C_SetPrevDataImagine");
static_assert(sizeof(EquipStatusView_C_SetPrevDataImagine) == 0x0003B8, "Wrong size on EquipStatusView_C_SetPrevDataImagine");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, PrevInfo) == 0x000000, "Member 'EquipStatusView_C_SetPrevDataImagine::PrevInfo' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, LocalNowParams) == 0x000118, "Member 'EquipStatusView_C_SetPrevDataImagine::LocalNowParams' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, LocalPrevParams) == 0x000184, "Member 'EquipStatusView_C_SetPrevDataImagine::LocalPrevParams' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, Temp_int_Variable) == 0x0001F0, "Member 'EquipStatusView_C_SetPrevDataImagine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_CalculatedStackBImagineParams_ReturnValue) == 0x0001F4, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_CalculatedStackBImagineParams_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, Temp_bool_Variable) == 0x000260, "Member 'EquipStatusView_C_SetPrevDataImagine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, Temp_int_Variable_1) == 0x000264, "Member 'EquipStatusView_C_SetPrevDataImagine::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, Temp_int_Array_Index_Variable) == 0x000268, "Member 'EquipStatusView_C_SetPrevDataImagine::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, Temp_bool_Variable_1) == 0x00026C, "Member 'EquipStatusView_C_SetPrevDataImagine::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, K2Node_MakeStruct_SlateColor) == 0x000270, "Member 'EquipStatusView_C_SetPrevDataImagine::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, K2Node_MakeStruct_SlateColor_1) == 0x000298, "Member 'EquipStatusView_C_SetPrevDataImagine::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, Temp_int_Loop_Counter_Variable) == 0x0002C0, "Member 'EquipStatusView_C_SetPrevDataImagine::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Add_IntInt_ReturnValue) == 0x0002C4, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Greater_IntInt_ReturnValue) == 0x0002C8, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0002C9, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0002CA, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0002CB, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0002CC, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0002CD, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Greater_IntInt_ReturnValue_3) == 0x0002CE, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x0002CF, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Greater_IntInt_ReturnValue_4) == 0x0002D0, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Greater_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_NotEqual_IntInt_ReturnValue_4) == 0x0002D1, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_NotEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, K2Node_Select_Default) == 0x0002D2, "Member 'EquipStatusView_C_SetPrevDataImagine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, K2Node_Select_Default_1) == 0x0002D3, "Member 'EquipStatusView_C_SetPrevDataImagine::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, K2Node_Select_Default_2) == 0x0002D8, "Member 'EquipStatusView_C_SetPrevDataImagine::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, K2Node_Select_Default_3) == 0x000300, "Member 'EquipStatusView_C_SetPrevDataImagine::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, K2Node_MakeArray_Array) == 0x000328, "Member 'EquipStatusView_C_SetPrevDataImagine::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_CalculatedStackBImagineParams_ReturnValue_1) == 0x000338, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_CalculatedStackBImagineParams_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Array_Get_Item) == 0x0003A8, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Array_Length_ReturnValue) == 0x0003B0, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusView_C_SetPrevDataImagine, CallFunc_Less_IntInt_ReturnValue) == 0x0003B4, "Member 'EquipStatusView_C_SetPrevDataImagine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

