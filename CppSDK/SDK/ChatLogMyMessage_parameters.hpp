#pragma once

 

// Package: ChatLogMyMessage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ChatLogMyMessage.ChatLogMyMessage_C.ExecuteUbergraph_ChatLogMyMessage
// 0x0100 (0x0100 - 0x0000)
struct ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FAB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FAC[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFloatStampIcon_C*               CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	int32                                         CallFunc_IsStampMessage_RetStampID;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FAD[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_IsStampMessage_OutMessage;                // 0x0060(0x0018)()
	bool                                          CallFunc_IsStampMessage_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FAE[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0080(0x0018)()
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FAF[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C0(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage) == 0x000008, "Wrong alignment on ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage");
static_assert(sizeof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage) == 0x000100, "Wrong size on ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, EntryPoint) == 0x000000, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, K2Node_CustomEvent_URL) == 0x000008, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_DownloadImage_ReturnValue) == 0x000018, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsValid_ReturnValue_2) == 0x000022, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsValid_ReturnValue_3) == 0x000023, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsValid_ReturnValue_4) == 0x000024, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_Create_ReturnValue) == 0x000028, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000030, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsStampMessage_RetStampID) == 0x000058, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsStampMessage_RetStampID' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsStampMessage_OutMessage) == 0x000060, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsStampMessage_OutMessage' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsStampMessage_ReturnValue) == 0x000078, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsStampMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_GetText_ReturnValue) == 0x000080, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_IsVisible_ReturnValue) == 0x000098, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A0, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000B0, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C0, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, K2Node_CreateDelegate_OutputDelegate) == 0x0000D8, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_GetDesiredSize_ReturnValue) == 0x0000E8, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_BreakVector2D_X) == 0x0000F0, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_BreakVector2D_Y) == 0x0000F4, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000F8, "Member 'ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function ChatLogMyMessage.ChatLogMyMessage_C.DonwloadFaceImage_Event
// 0x0010 (0x0010 - 0x0000)
struct ChatLogMyMessage_C_DonwloadFaceImage_Event final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogMyMessage_C_DonwloadFaceImage_Event) == 0x000008, "Wrong alignment on ChatLogMyMessage_C_DonwloadFaceImage_Event");
static_assert(sizeof(ChatLogMyMessage_C_DonwloadFaceImage_Event) == 0x000010, "Wrong size on ChatLogMyMessage_C_DonwloadFaceImage_Event");
static_assert(offsetof(ChatLogMyMessage_C_DonwloadFaceImage_Event, URL) == 0x000000, "Member 'ChatLogMyMessage_C_DonwloadFaceImage_Event::URL' has a wrong offset!");

// Function ChatLogMyMessage.ChatLogMyMessage_C.Init
// 0x01A8 (0x01A8 - 0x0000)
struct ChatLogMyMessage_C_Init final
{
public:
	struct FSBChatUIMessage                       InMessLog;                                         // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsEndInit;                                         // 0x0070(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCursorStampHit;                                  // 0x0071(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCloseArea;                                       // 0x0072(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FB0[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           MessBGColor;                                       // 0x0074(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogType                                ChatType;                                          // 0x0084(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FB1[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              Timestamp;                                         // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0090(0x0018)(Edit, BlueprintVisible)
	class FText                                   Param_Name;                                        // 0x00A8(0x0018)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FB2[0x1];                                     // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FB3[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChatLogTextSize_ReturnValue;           // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChatLogTextSizeIndex_ReturnValue;      // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FB4[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsStampMessage_RetStampID;                // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_IsStampMessage_OutMessage;                // 0x0108(0x0018)()
	bool                                          CallFunc_IsStampMessage_ReturnValue;               // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FB5[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0128(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0178(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FB6[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogMyMessage_C_Init) == 0x000008, "Wrong alignment on ChatLogMyMessage_C_Init");
static_assert(sizeof(ChatLogMyMessage_C_Init) == 0x0001A8, "Wrong size on ChatLogMyMessage_C_Init");
static_assert(offsetof(ChatLogMyMessage_C_Init, InMessLog) == 0x000000, "Member 'ChatLogMyMessage_C_Init::InMessLog' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, IsEndInit) == 0x000070, "Member 'ChatLogMyMessage_C_Init::IsEndInit' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, IsCursorStampHit) == 0x000071, "Member 'ChatLogMyMessage_C_Init::IsCursorStampHit' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, IsCloseArea) == 0x000072, "Member 'ChatLogMyMessage_C_Init::IsCloseArea' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, MessBGColor) == 0x000074, "Member 'ChatLogMyMessage_C_Init::MessBGColor' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, ChatType) == 0x000084, "Member 'ChatLogMyMessage_C_Init::ChatType' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Timestamp) == 0x000088, "Member 'ChatLogMyMessage_C_Init::Timestamp' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Message) == 0x000090, "Member 'ChatLogMyMessage_C_Init::Message' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Param_Name) == 0x0000A8, "Member 'ChatLogMyMessage_C_Init::Param_Name' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Temp_bool_Variable) == 0x0000C0, "Member 'ChatLogMyMessage_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Temp_byte_Variable) == 0x0000C1, "Member 'ChatLogMyMessage_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Temp_byte_Variable_1) == 0x0000C2, "Member 'ChatLogMyMessage_C_Init::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Temp_int_Variable) == 0x0000C4, "Member 'ChatLogMyMessage_C_Init::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Temp_struct_Variable) == 0x0000C8, "Member 'ChatLogMyMessage_C_Init::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Temp_struct_Variable_1) == 0x0000D0, "Member 'ChatLogMyMessage_C_Init::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, Temp_struct_Variable_2) == 0x0000D8, "Member 'ChatLogMyMessage_C_Init::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_GetConfigSaveManager_IsValid) == 0x0000E0, "Member 'ChatLogMyMessage_C_Init::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000E8, "Member 'ChatLogMyMessage_C_Init::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_GetChatLogTextSize_ReturnValue) == 0x0000F0, "Member 'ChatLogMyMessage_C_Init::CallFunc_GetChatLogTextSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_GetChatLogTextSizeIndex_ReturnValue) == 0x0000F4, "Member 'ChatLogMyMessage_C_Init::CallFunc_GetChatLogTextSizeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, K2Node_Select_Default) == 0x0000F8, "Member 'ChatLogMyMessage_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, K2Node_SwitchEnum_CmpSuccess) == 0x000100, "Member 'ChatLogMyMessage_C_Init::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_IsStampMessage_RetStampID) == 0x000104, "Member 'ChatLogMyMessage_C_Init::CallFunc_IsStampMessage_RetStampID' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_IsStampMessage_OutMessage) == 0x000108, "Member 'ChatLogMyMessage_C_Init::CallFunc_IsStampMessage_OutMessage' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_IsStampMessage_ReturnValue) == 0x000120, "Member 'ChatLogMyMessage_C_Init::CallFunc_IsStampMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, K2Node_SwitchEnum_CmpSuccess_1) == 0x000121, "Member 'ChatLogMyMessage_C_Init::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, K2Node_MakeStruct_FormatArgumentData) == 0x000128, "Member 'ChatLogMyMessage_C_Init::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, K2Node_MakeArray_Array) == 0x000168, "Member 'ChatLogMyMessage_C_Init::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_Format_ReturnValue) == 0x000178, "Member 'ChatLogMyMessage_C_Init::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, K2Node_Select_Default_1) == 0x000190, "Member 'ChatLogMyMessage_C_Init::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_Init, CallFunc_GetFaceImageURL_ReturnValue) == 0x000198, "Member 'ChatLogMyMessage_C_Init::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");

// Function ChatLogMyMessage.ChatLogMyMessage_C.ZeroPadding
// 0x0068 (0x0068 - 0x0000)
struct ChatLogMyMessage_C_ZeroPadding final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FB7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RetValue;                                          // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(ChatLogMyMessage_C_ZeroPadding) == 0x000008, "Wrong alignment on ChatLogMyMessage_C_ZeroPadding");
static_assert(sizeof(ChatLogMyMessage_C_ZeroPadding) == 0x000068, "Wrong size on ChatLogMyMessage_C_ZeroPadding");
static_assert(offsetof(ChatLogMyMessage_C_ZeroPadding, InValue) == 0x000000, "Member 'ChatLogMyMessage_C_ZeroPadding::InValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ZeroPadding, RetValue) == 0x000008, "Member 'ChatLogMyMessage_C_ZeroPadding::RetValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ZeroPadding, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'ChatLogMyMessage_C_ZeroPadding::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ZeroPadding, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'ChatLogMyMessage_C_ZeroPadding::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ZeroPadding, CallFunc_Right_ReturnValue) == 0x000040, "Member 'ChatLogMyMessage_C_ZeroPadding::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_ZeroPadding, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'ChatLogMyMessage_C_ZeroPadding::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ChatLogMyMessage.ChatLogMyMessage_C.SetStamp
// 0x00A8 (0x00A8 - 0x0000)
struct ChatLogMyMessage_C_SetStamp final
{
public:
	int32                                         InStampId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndInit;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FB8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InText;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UChatLogFloatStampIcon_C*               CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FB9[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FBA[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6FBB[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0090(0x0018)()
};
static_assert(alignof(ChatLogMyMessage_C_SetStamp) == 0x000008, "Wrong alignment on ChatLogMyMessage_C_SetStamp");
static_assert(sizeof(ChatLogMyMessage_C_SetStamp) == 0x0000A8, "Wrong size on ChatLogMyMessage_C_SetStamp");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, InStampId) == 0x000000, "Member 'ChatLogMyMessage_C_SetStamp::InStampId' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, IsEndInit) == 0x000004, "Member 'ChatLogMyMessage_C_SetStamp::IsEndInit' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, InText) == 0x000008, "Member 'ChatLogMyMessage_C_SetStamp::InText' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, CallFunc_Create_ReturnValue) == 0x000020, "Member 'ChatLogMyMessage_C_SetStamp::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, Temp_bool_Variable) == 0x000028, "Member 'ChatLogMyMessage_C_SetStamp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'ChatLogMyMessage_C_SetStamp::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000048, "Member 'ChatLogMyMessage_C_SetStamp::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'ChatLogMyMessage_C_SetStamp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000060, "Member 'ChatLogMyMessage_C_SetStamp::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, CallFunc_GetTextFromAsset_ReturnValue) == 0x000068, "Member 'ChatLogMyMessage_C_SetStamp::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'ChatLogMyMessage_C_SetStamp::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetStamp, K2Node_Select_Default) == 0x000090, "Member 'ChatLogMyMessage_C_SetStamp::K2Node_Select_Default' has a wrong offset!");

// Function ChatLogMyMessage.ChatLogMyMessage_C.GetFloatStampPoint
// 0x0050 (0x0050 - 0x0000)
struct ChatLogMyMessage_C_GetFloatStampPoint final
{
public:
	struct FVector2D                              NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0008(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogMyMessage_C_GetFloatStampPoint) == 0x000004, "Wrong alignment on ChatLogMyMessage_C_GetFloatStampPoint");
static_assert(sizeof(ChatLogMyMessage_C_GetFloatStampPoint) == 0x000050, "Wrong size on ChatLogMyMessage_C_GetFloatStampPoint");
static_assert(offsetof(ChatLogMyMessage_C_GetFloatStampPoint, NewParam) == 0x000000, "Member 'ChatLogMyMessage_C_GetFloatStampPoint::NewParam' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_GetFloatStampPoint, CallFunc_GetCachedGeometry_ReturnValue) == 0x000008, "Member 'ChatLogMyMessage_C_GetFloatStampPoint::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_GetFloatStampPoint, CallFunc_LocalToViewport_PixelPosition) == 0x000040, "Member 'ChatLogMyMessage_C_GetFloatStampPoint::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_GetFloatStampPoint, CallFunc_LocalToViewport_ViewportPosition) == 0x000048, "Member 'ChatLogMyMessage_C_GetFloatStampPoint::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");

// Function ChatLogMyMessage.ChatLogMyMessage_C.OnMouseButtonDown
// 0x0220 (0x0220 - 0x0000)
struct ChatLogMyMessage_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogMyMessage_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on ChatLogMyMessage_C_OnMouseButtonDown");
static_assert(sizeof(ChatLogMyMessage_C_OnMouseButtonDown) == 0x000220, "Wrong size on ChatLogMyMessage_C_OnMouseButtonDown");
static_assert(offsetof(ChatLogMyMessage_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'ChatLogMyMessage_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'ChatLogMyMessage_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ChatLogMyMessage_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_OnMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'ChatLogMyMessage_C_OnMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_OnMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000218, "Member 'ChatLogMyMessage_C_OnMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");

// Function ChatLogMyMessage.ChatLogMyMessage_C.SetClipboardCopy
// 0x0005 (0x0005 - 0x0000)
struct ChatLogMyMessage_C_SetClipboardCopy final
{
public:
	bool                                          IsCopy;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogMyMessage_C_SetClipboardCopy) == 0x000001, "Wrong alignment on ChatLogMyMessage_C_SetClipboardCopy");
static_assert(sizeof(ChatLogMyMessage_C_SetClipboardCopy) == 0x000005, "Wrong size on ChatLogMyMessage_C_SetClipboardCopy");
static_assert(offsetof(ChatLogMyMessage_C_SetClipboardCopy, IsCopy) == 0x000000, "Member 'ChatLogMyMessage_C_SetClipboardCopy::IsCopy' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetClipboardCopy, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'ChatLogMyMessage_C_SetClipboardCopy::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetClipboardCopy, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'ChatLogMyMessage_C_SetClipboardCopy::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetClipboardCopy, Temp_bool_Variable) == 0x000003, "Member 'ChatLogMyMessage_C_SetClipboardCopy::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogMyMessage_C_SetClipboardCopy, K2Node_Select_Default) == 0x000004, "Member 'ChatLogMyMessage_C_SetClipboardCopy::K2Node_Select_Default' has a wrong offset!");

}

