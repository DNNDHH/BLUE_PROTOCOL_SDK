#pragma once

 

// Package: ChatLogOtherMessageTempList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.Init
// 0x0290 (0x0290 - 0x0000)
struct ChatLogOtherMessageTempList_C_Init final
{
public:
	struct FSBChatUIMessage                       InMessLog;                                         // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBChatLogOption                              Option;                                            // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F9E[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           MessBGColor;                                       // 0x0074(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogType                                ChatType;                                          // 0x0084(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F9F[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              Timestamp;                                         // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0090(0x0018)(Edit, BlueprintVisible)
	ESBChatLogOption                              Temp_byte_Variable;                                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FA0[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x00AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x00BC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x00CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x00DC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x00EC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x00FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_6;                            // 0x010C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_7;                            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_8;                            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_9;                            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FA1[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChatLogTextSizeIndex_ReturnValue;      // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChatLogTextSize_ReturnValue;           // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0168(0x0028)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_2;        // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FA2[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FA3[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_ZeroPadding_RetValue;                     // 0x01B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01D0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_ZeroPadding_RetValue_1;                   // 0x0210(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0228(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0268(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0278(0x0018)()
};
static_assert(alignof(ChatLogOtherMessageTempList_C_Init) == 0x000008, "Wrong alignment on ChatLogOtherMessageTempList_C_Init");
static_assert(sizeof(ChatLogOtherMessageTempList_C_Init) == 0x000290, "Wrong size on ChatLogOtherMessageTempList_C_Init");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, InMessLog) == 0x000000, "Member 'ChatLogOtherMessageTempList_C_Init::InMessLog' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Option) == 0x000070, "Member 'ChatLogOtherMessageTempList_C_Init::Option' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, MessBGColor) == 0x000074, "Member 'ChatLogOtherMessageTempList_C_Init::MessBGColor' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, ChatType) == 0x000084, "Member 'ChatLogOtherMessageTempList_C_Init::ChatType' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Timestamp) == 0x000088, "Member 'ChatLogOtherMessageTempList_C_Init::Timestamp' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Message) == 0x000090, "Member 'ChatLogOtherMessageTempList_C_Init::Message' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_byte_Variable) == 0x0000A8, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable) == 0x0000AC, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_1) == 0x0000BC, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_2) == 0x0000CC, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_3) == 0x0000DC, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_4) == 0x0000EC, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_5) == 0x0000FC, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_6) == 0x00010C, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_int_Variable) == 0x00011C, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_7) == 0x000120, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_8) == 0x000128, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_8' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, Temp_struct_Variable_9) == 0x000130, "Member 'ChatLogOtherMessageTempList_C_Init::Temp_struct_Variable_9' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_GetConfigSaveManager_IsValid) == 0x000138, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000140, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_GetChatLogTextSizeIndex_ReturnValue) == 0x000148, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_GetChatLogTextSizeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_GetChatLogTextSize_ReturnValue) == 0x00014C, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_GetChatLogTextSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, K2Node_Select_Default) == 0x000150, "Member 'ChatLogOtherMessageTempList_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, K2Node_Select_Default_1) == 0x000158, "Member 'ChatLogOtherMessageTempList_C_Init::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, K2Node_MakeStruct_SlateColor) == 0x000168, "Member 'ChatLogOtherMessageTempList_C_Init::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, K2Node_SwitchEnum_CmpSuccess) == 0x000190, "Member 'ChatLogOtherMessageTempList_C_Init::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000191, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_NotEqual_FloatFloat_ReturnValue_1) == 0x000192, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_NotEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_NotEqual_FloatFloat_ReturnValue_2) == 0x000193, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_NotEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BooleanOR_ReturnValue) == 0x000194, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BreakDateTime_Year) == 0x000198, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BreakDateTime_Month) == 0x00019C, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BreakDateTime_Day) == 0x0001A0, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BreakDateTime_Hour) == 0x0001A4, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BreakDateTime_Minute) == 0x0001A8, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BreakDateTime_Second) == 0x0001AC, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BreakDateTime_Millisecond) == 0x0001B0, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_BooleanOR_ReturnValue_1) == 0x0001B4, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_ZeroPadding_RetValue) == 0x0001B8, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_ZeroPadding_RetValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, K2Node_MakeStruct_FormatArgumentData) == 0x0001D0, "Member 'ChatLogOtherMessageTempList_C_Init::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_ZeroPadding_RetValue_1) == 0x000210, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_ZeroPadding_RetValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, K2Node_MakeStruct_FormatArgumentData_1) == 0x000228, "Member 'ChatLogOtherMessageTempList_C_Init::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, K2Node_MakeArray_Array) == 0x000268, "Member 'ChatLogOtherMessageTempList_C_Init::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_Init, CallFunc_Format_ReturnValue) == 0x000278, "Member 'ChatLogOtherMessageTempList_C_Init::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.ZeroPadding
// 0x0068 (0x0068 - 0x0000)
struct ChatLogOtherMessageTempList_C_ZeroPadding final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FA4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RetValue;                                          // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(ChatLogOtherMessageTempList_C_ZeroPadding) == 0x000008, "Wrong alignment on ChatLogOtherMessageTempList_C_ZeroPadding");
static_assert(sizeof(ChatLogOtherMessageTempList_C_ZeroPadding) == 0x000068, "Wrong size on ChatLogOtherMessageTempList_C_ZeroPadding");
static_assert(offsetof(ChatLogOtherMessageTempList_C_ZeroPadding, InValue) == 0x000000, "Member 'ChatLogOtherMessageTempList_C_ZeroPadding::InValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_ZeroPadding, RetValue) == 0x000008, "Member 'ChatLogOtherMessageTempList_C_ZeroPadding::RetValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_ZeroPadding, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'ChatLogOtherMessageTempList_C_ZeroPadding::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_ZeroPadding, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'ChatLogOtherMessageTempList_C_ZeroPadding::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_ZeroPadding, CallFunc_Right_ReturnValue) == 0x000040, "Member 'ChatLogOtherMessageTempList_C_ZeroPadding::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherMessageTempList_C_ZeroPadding, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'ChatLogOtherMessageTempList_C_ZeroPadding::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

