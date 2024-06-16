#pragma once

 

// Package: WeaponAssetView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WeaponAssetView.WeaponAssetView_C.ExecuteUbergraph_WeaponAssetView
// 0x00C0 (0x00C0 - 0x0000)
struct WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_689F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0008(0x00B0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView) == 0x000008, "Wrong alignment on WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView");
static_assert(sizeof(WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView) == 0x0000C0, "Wrong size on WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView");
static_assert(offsetof(WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView, EntryPoint) == 0x000000, "Member 'WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView, CallFunc_FindImagineMaster_bIsValid) == 0x000004, "Member 'WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView, CallFunc_FindImagineMaster_ImagineMaster) == 0x000008, "Member 'WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WeaponAssetView.WeaponAssetView_C.SetInfo
// 0x0120 (0x0120 - 0x0000)
struct WeaponAssetView_C_SetInfo final
{
public:
	struct FOwnItemInfo                           Param_Info;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponAssetView_C_SetInfo) == 0x000008, "Wrong alignment on WeaponAssetView_C_SetInfo");
static_assert(sizeof(WeaponAssetView_C_SetInfo) == 0x000120, "Wrong size on WeaponAssetView_C_SetInfo");
static_assert(offsetof(WeaponAssetView_C_SetInfo, Param_Info) == 0x000000, "Member 'WeaponAssetView_C_SetInfo::Param_Info' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000118, "Member 'WeaponAssetView_C_SetInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WeaponAssetView.WeaponAssetView_C.SetupParameterWeapon
// 0x0218 (0x0218 - 0x0000)
struct WeaponAssetView_C_SetupParameterWeapon final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Level;                                             // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WeaponID;                                          // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68A0[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68A1[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0137(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculatedStackBWeaponParam_ReturnValue;  // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0140(0x0018)()
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68A2[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Temp_object_Variable;                              // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0178(0x0018)()
	ESBWeaponStatus                               Temp_byte_Variable;                                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68A3[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    K2Node_Select_Default;                             // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68A4[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01A8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01F8(0x0018)()
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponAssetView_C_SetupParameterWeapon) == 0x000008, "Wrong alignment on WeaponAssetView_C_SetupParameterWeapon");
static_assert(sizeof(WeaponAssetView_C_SetupParameterWeapon) == 0x000218, "Wrong size on WeaponAssetView_C_SetupParameterWeapon");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, OwnItemInfo) == 0x000000, "Member 'WeaponAssetView_C_SetupParameterWeapon::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, Level) == 0x000118, "Member 'WeaponAssetView_C_SetupParameterWeapon::Level' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, WeaponID) == 0x00011C, "Member 'WeaponAssetView_C_SetupParameterWeapon::WeaponID' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000120, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, Temp_int_Variable) == 0x000124, "Member 'WeaponAssetView_C_SetupParameterWeapon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_Conv_IntToByte_ReturnValue) == 0x000128, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_GetValidValue_ReturnValue) == 0x000129, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, Temp_int_Variable_1) == 0x00012C, "Member 'WeaponAssetView_C_SetupParameterWeapon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x000130, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000134, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, K2Node_SwitchEnum_CmpSuccess) == 0x000135, "Member 'WeaponAssetView_C_SetupParameterWeapon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000136, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000137, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000138, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_CalculatedStackBWeaponParam_ReturnValue) == 0x00013C, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_CalculatedStackBWeaponParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_Conv_IntToText_ReturnValue) == 0x000140, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_GetItemLevel_ReturnValue) == 0x000158, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000160, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, Temp_object_Variable) == 0x000170, "Member 'WeaponAssetView_C_SetupParameterWeapon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_Conv_StringToText_ReturnValue) == 0x000178, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, Temp_byte_Variable) == 0x000190, "Member 'WeaponAssetView_C_SetupParameterWeapon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, K2Node_Select_Default) == 0x000198, "Member 'WeaponAssetView_C_SetupParameterWeapon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_GetLevelStatus_ReturnValue) == 0x0001A0, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_IsValid_ReturnValue) == 0x0001A4, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, K2Node_MakeStruct_FormatArgumentData) == 0x0001A8, "Member 'WeaponAssetView_C_SetupParameterWeapon::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, K2Node_MakeArray_Array) == 0x0001E8, "Member 'WeaponAssetView_C_SetupParameterWeapon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_Format_ReturnValue) == 0x0001F8, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_MakeLiteralInt_ReturnValue) == 0x000210, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupParameterWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x000214, "Member 'WeaponAssetView_C_SetupParameterWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponAssetView.WeaponAssetView_C.SetDiffVisibility
// 0x0009 (0x0009 - 0x0000)
struct WeaponAssetView_C_SetDiffVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAssetView_C_SetDiffVisibility) == 0x000001, "Wrong alignment on WeaponAssetView_C_SetDiffVisibility");
static_assert(sizeof(WeaponAssetView_C_SetDiffVisibility) == 0x000009, "Wrong size on WeaponAssetView_C_SetDiffVisibility");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, Visible) == 0x000000, "Member 'WeaponAssetView_C_SetDiffVisibility::Visible' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WeaponAssetView_C_SetDiffVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WeaponAssetView_C_SetDiffVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, Temp_bool_Variable) == 0x000003, "Member 'WeaponAssetView_C_SetDiffVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, Temp_bool_Variable_1) == 0x000004, "Member 'WeaponAssetView_C_SetDiffVisibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000005, "Member 'WeaponAssetView_C_SetDiffVisibility::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, K2Node_Select_Default) == 0x000006, "Member 'WeaponAssetView_C_SetDiffVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000007, "Member 'WeaponAssetView_C_SetDiffVisibility::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetDiffVisibility, K2Node_Select_Default_1) == 0x000008, "Member 'WeaponAssetView_C_SetDiffVisibility::K2Node_Select_Default_1' has a wrong offset!");

// Function WeaponAssetView.WeaponAssetView_C.SetUpName
// 0x0028 (0x0028 - 0x0000)
struct WeaponAssetView_C_SetUpName final
{
public:
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WeaponAssetView_C_SetUpName) == 0x000008, "Wrong alignment on WeaponAssetView_C_SetUpName");
static_assert(sizeof(WeaponAssetView_C_SetUpName) == 0x000028, "Wrong size on WeaponAssetView_C_SetUpName");
static_assert(offsetof(WeaponAssetView_C_SetUpName, CallFunc_GetNameText_ReturnValue) == 0x000000, "Member 'WeaponAssetView_C_SetUpName::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetUpName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WeaponAssetView_C_SetUpName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponAssetView.WeaponAssetView_C.UpdateDiffValue
// 0x0198 (0x0198 - 0x0000)
struct WeaponAssetView_C_UpdateDiffValue final
{
public:
	struct FSBStackBWeaponParam                   StackAddParam;                                     // 0x0000(0x0030)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponStatus                               Temp_byte_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68A5[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               Temp_byte_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68A6[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68A7[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68A8[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68A9[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0070(0x0028)()
	struct FSBStackBWeaponParam                   CallFunc_CalcStackBWeaponDiffParam_ReturnValue;    // 0x0098(0x0030)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00C8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00F0(0x0028)()
	class USBRuntimeTextBlock*                    K2Node_Select_Default;                             // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68AA[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68AB[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_2;                           // 0x0130(0x0028)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0158(0x0018)()
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x0170(0x0028)()
};
static_assert(alignof(WeaponAssetView_C_UpdateDiffValue) == 0x000008, "Wrong alignment on WeaponAssetView_C_UpdateDiffValue");
static_assert(sizeof(WeaponAssetView_C_UpdateDiffValue) == 0x000198, "Wrong size on WeaponAssetView_C_UpdateDiffValue");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, StackAddParam) == 0x000000, "Member 'WeaponAssetView_C_UpdateDiffValue::StackAddParam' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_bool_Variable) == 0x000030, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_bool_Variable_1) == 0x000031, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_byte_Variable) == 0x000032, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_object_Variable) == 0x000038, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_byte_Variable_1) == 0x000040, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_int_Variable) == 0x000044, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_int_Variable_1) == 0x000048, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_MakeLiteralInt_ReturnValue) == 0x00004C, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_int_Variable_2) == 0x000050, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, Temp_int_Variable_3) == 0x000054, "Member 'WeaponAssetView_C_UpdateDiffValue::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_Conv_IntToByte_ReturnValue) == 0x000058, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_GetValidValue_ReturnValue) == 0x000060, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000061, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000062, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000064, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'WeaponAssetView_C_UpdateDiffValue::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_Less_IntInt_ReturnValue) == 0x000069, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, K2Node_MakeStruct_SlateColor) == 0x000070, "Member 'WeaponAssetView_C_UpdateDiffValue::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_CalcStackBWeaponDiffParam_ReturnValue) == 0x000098, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_CalcStackBWeaponDiffParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, K2Node_MakeStruct_SlateColor_1) == 0x0000C8, "Member 'WeaponAssetView_C_UpdateDiffValue::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, K2Node_MakeStruct_SlateColor_2) == 0x0000F0, "Member 'WeaponAssetView_C_UpdateDiffValue::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, K2Node_Select_Default) == 0x000118, "Member 'WeaponAssetView_C_UpdateDiffValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, K2Node_Select_Default_1) == 0x000124, "Member 'WeaponAssetView_C_UpdateDiffValue::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_Greater_IntInt_ReturnValue) == 0x000128, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000129, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, K2Node_Select_Default_2) == 0x000130, "Member 'WeaponAssetView_C_UpdateDiffValue::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000158, "Member 'WeaponAssetView_C_UpdateDiffValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_UpdateDiffValue, K2Node_Select_Default_3) == 0x000170, "Member 'WeaponAssetView_C_UpdateDiffValue::K2Node_Select_Default_3' has a wrong offset!");

// Function WeaponAssetView.WeaponAssetView_C.SetBaseInfo
// 0x0118 (0x0118 - 0x0000)
struct WeaponAssetView_C_SetBaseInfo final
{
public:
	struct FOwnItemInfo                           Param_BaseInfo;                                    // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponAssetView_C_SetBaseInfo) == 0x000008, "Wrong alignment on WeaponAssetView_C_SetBaseInfo");
static_assert(sizeof(WeaponAssetView_C_SetBaseInfo) == 0x000118, "Wrong size on WeaponAssetView_C_SetBaseInfo");
static_assert(offsetof(WeaponAssetView_C_SetBaseInfo, Param_BaseInfo) == 0x000000, "Member 'WeaponAssetView_C_SetBaseInfo::Param_BaseInfo' has a wrong offset!");

// Function WeaponAssetView.WeaponAssetView_C.SetupMasterData
// 0x0280 (0x0280 - 0x0000)
struct WeaponAssetView_C_SetupMasterData final
{
public:
	struct FOwnItemInfo                           Param_Info;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBWeaponMasterData                    LocalMasterData;                                   // 0x0118(0x00B0)(Edit, BlueprintVisible)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68AC[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x01D0(0x00B0)()
};
static_assert(alignof(WeaponAssetView_C_SetupMasterData) == 0x000008, "Wrong alignment on WeaponAssetView_C_SetupMasterData");
static_assert(sizeof(WeaponAssetView_C_SetupMasterData) == 0x000280, "Wrong size on WeaponAssetView_C_SetupMasterData");
static_assert(offsetof(WeaponAssetView_C_SetupMasterData, Param_Info) == 0x000000, "Member 'WeaponAssetView_C_SetupMasterData::Param_Info' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupMasterData, LocalMasterData) == 0x000118, "Member 'WeaponAssetView_C_SetupMasterData::LocalMasterData' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001C8, "Member 'WeaponAssetView_C_SetupMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupMasterData, CallFunc_FindWeaponMaster_bIsValid) == 0x0001C9, "Member 'WeaponAssetView_C_SetupMasterData::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponAssetView_C_SetupMasterData, CallFunc_FindWeaponMaster_WeaponMaster) == 0x0001D0, "Member 'WeaponAssetView_C_SetupMasterData::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");

}

