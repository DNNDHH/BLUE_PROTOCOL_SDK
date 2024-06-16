#pragma once

 

// Package: CertificationWindow_Sub

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnRequest__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CertificationWindow_Sub_C_OnRequest__DelegateSignature final
{
public:
	int32                                         Year;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_Sub_C_OnRequest__DelegateSignature) == 0x000004, "Wrong alignment on CertificationWindow_Sub_C_OnRequest__DelegateSignature");
static_assert(sizeof(CertificationWindow_Sub_C_OnRequest__DelegateSignature) == 0x000008, "Wrong size on CertificationWindow_Sub_C_OnRequest__DelegateSignature");
static_assert(offsetof(CertificationWindow_Sub_C_OnRequest__DelegateSignature, Year) == 0x000000, "Member 'CertificationWindow_Sub_C_OnRequest__DelegateSignature::Year' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_OnRequest__DelegateSignature, Month) == 0x000004, "Member 'CertificationWindow_Sub_C_OnRequest__DelegateSignature::Month' has a wrong offset!");

// Function CertificationWindow_Sub.CertificationWindow_Sub_C.ExecuteUbergraph_CertificationWindow_Sub
// 0x0060 (0x0060 - 0x0000)
struct CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPaymentLimitMasterData              K2Node_CustomEvent_Data;                           // 0x0004(0x0010)(NoDestructor)
	uint8                                         Pad_5589[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTextId_AgeLimit_Text;                  // 0x0018(0x0018)()
	class FText                                   CallFunc_GetTextId_ValueLimit_Text;                // 0x0030(0x0018)()
	class FText                                   CallFunc_GetTextId_Monthly_Text;                   // 0x0048(0x0018)()
};
static_assert(alignof(CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub) == 0x000008, "Wrong alignment on CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub");
static_assert(sizeof(CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub) == 0x000060, "Wrong size on CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub");
static_assert(offsetof(CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub, EntryPoint) == 0x000000, "Member 'CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub::EntryPoint' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub, K2Node_CustomEvent_Data) == 0x000004, "Member 'CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub, CallFunc_GetTextId_AgeLimit_Text) == 0x000018, "Member 'CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub::CallFunc_GetTextId_AgeLimit_Text' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub, CallFunc_GetTextId_ValueLimit_Text) == 0x000030, "Member 'CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub::CallFunc_GetTextId_ValueLimit_Text' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub, CallFunc_GetTextId_Monthly_Text) == 0x000048, "Member 'CertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub::CallFunc_GetTextId_Monthly_Text' has a wrong offset!");

// Function CertificationWindow_Sub.CertificationWindow_Sub_C.SetText_MasterData
// 0x0010 (0x0010 - 0x0000)
struct CertificationWindow_Sub_C_SetText_MasterData final
{
public:
	struct FSBPaymentLimitMasterData              Data;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CertificationWindow_Sub_C_SetText_MasterData) == 0x000004, "Wrong alignment on CertificationWindow_Sub_C_SetText_MasterData");
static_assert(sizeof(CertificationWindow_Sub_C_SetText_MasterData) == 0x000010, "Wrong size on CertificationWindow_Sub_C_SetText_MasterData");
static_assert(offsetof(CertificationWindow_Sub_C_SetText_MasterData, Data) == 0x000000, "Member 'CertificationWindow_Sub_C_SetText_MasterData::Data' has a wrong offset!");

// Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_AgeLimit
// 0x0220 (0x0220 - 0x0000)
struct CertificationWindow_Sub_C_GetTextId_AgeLimit final
{
public:
	int32                                         Lower;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Upper;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
	int32                                         L_Up;                                              // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Low;                                             // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00B8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00F8(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0108(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0148(0x0010)(ReferenceParm)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558A[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0170(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0198(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01C8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01F0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0208(0x0018)()
};
static_assert(alignof(CertificationWindow_Sub_C_GetTextId_AgeLimit) == 0x000008, "Wrong alignment on CertificationWindow_Sub_C_GetTextId_AgeLimit");
static_assert(sizeof(CertificationWindow_Sub_C_GetTextId_AgeLimit) == 0x000220, "Wrong size on CertificationWindow_Sub_C_GetTextId_AgeLimit");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, Lower) == 0x000000, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::Lower' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, Upper) == 0x000004, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::Upper' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, Text) == 0x000008, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::Text' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, L_Up) == 0x000020, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::L_Up' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, L_Low) == 0x000024, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::L_Low' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, K2Node_MakeArray_Array) == 0x000068, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000B8, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, K2Node_MakeArray_Array_1) == 0x0000F8, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, K2Node_MakeStruct_FormatArgumentData_3) == 0x000108, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, K2Node_MakeArray_Array_2) == 0x000148, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000158, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000159, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000160, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_Conv_StringToText_ReturnValue) == 0x000170, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000188, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_Format_ReturnValue) == 0x000198, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001B0, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_Format_ReturnValue_1) == 0x0001C8, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0001E0, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001F0, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_AgeLimit, CallFunc_Format_ReturnValue_2) == 0x000208, "Member 'CertificationWindow_Sub_C_GetTextId_AgeLimit::CallFunc_Format_ReturnValue_2' has a wrong offset!");

// Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_ValueLimit
// 0x00E0 (0x00E0 - 0x0000)
struct CertificationWindow_Sub_C_GetTextId_ValueLimit final
{
public:
	int32                                         Upper;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558B[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
};
static_assert(alignof(CertificationWindow_Sub_C_GetTextId_ValueLimit) == 0x000008, "Wrong alignment on CertificationWindow_Sub_C_GetTextId_ValueLimit");
static_assert(sizeof(CertificationWindow_Sub_C_GetTextId_ValueLimit) == 0x0000E0, "Wrong size on CertificationWindow_Sub_C_GetTextId_ValueLimit");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, Upper) == 0x000000, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::Upper' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, Value) == 0x000004, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::Value' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, Text) == 0x000008, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::Text' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, K2Node_MakeArray_Array) == 0x000088, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000098, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000B8, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_ValueLimit, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'CertificationWindow_Sub_C_GetTextId_ValueLimit::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_Monthly
// 0x0050 (0x0050 - 0x0000)
struct CertificationWindow_Sub_C_GetTextId_Monthly final
{
public:
	int32                                         Upper;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_558C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558D[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(CertificationWindow_Sub_C_GetTextId_Monthly) == 0x000008, "Wrong alignment on CertificationWindow_Sub_C_GetTextId_Monthly");
static_assert(sizeof(CertificationWindow_Sub_C_GetTextId_Monthly) == 0x000050, "Wrong size on CertificationWindow_Sub_C_GetTextId_Monthly");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_Monthly, Upper) == 0x000000, "Member 'CertificationWindow_Sub_C_GetTextId_Monthly::Upper' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_Monthly, Text) == 0x000008, "Member 'CertificationWindow_Sub_C_GetTextId_Monthly::Text' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_Monthly, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'CertificationWindow_Sub_C_GetTextId_Monthly::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_Monthly, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000030, "Member 'CertificationWindow_Sub_C_GetTextId_Monthly::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_Sub_C_GetTextId_Monthly, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'CertificationWindow_Sub_C_GetTextId_Monthly::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

