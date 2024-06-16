#pragma once

 

// Package: ChatSettingWindow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ChatSettingWindow.ChatSettingWindow_C.ExecuteUbergraph_ChatSettingWindow
// 0x0240 (0x0240 - 0x0000)
struct ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EE8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetOpenChatModeKeyTextbyMouseAndKeyboard_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EE9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EEA[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EEB[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveChatLogWindow_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EEC[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipText_Fixed_C*         CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0088(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00B0(0x0018)()
	class UWBP_CommonToolTipText_Fixed_C*         CallFunc_Create_ReturnValue_1;                     // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSelectBtnId_5;                // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSelectBtnId_4;                // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSelectBtnId_3;                // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EED[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSelectBtnId_2;                // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSelectBtnId_1;                // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EEE[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSelectBtnId;                  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EEF[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetChatLogTextSizeIndex_ReturnValue;      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF0[0x2];                                     // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0104(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF1[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_1;            // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_2;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF2[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetChatLogWindowSlotData_ReturnValue;     // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF3[0x2];                                     // 0x0156(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_3;            // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_4;            // 0x0168(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_5;            // 0x0178(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF4[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_5;           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF5[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_5;       // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetChatLogWindowSlotData_ReturnValue_1;   // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF6[0x2];                                     // 0x01AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetChatLogWindowSlotData_ReturnValue_2;   // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF7[0x2];                                     // 0x01B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_6;           // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF8[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_6;       // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetDirectMode_ReturnValue;                // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF9[0x2];                                     // 0x01DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_6;            // 0x01DC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_7;            // 0x01EC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_8;            // 0x01FC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_9;            // 0x020C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_10;           // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSelectBtnId)>          K2Node_CreateDelegate_OutputDelegate_11;           // 0x022C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow) == 0x000008, "Wrong alignment on ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow");
static_assert(sizeof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow) == 0x000240, "Wrong size on ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, EntryPoint) == 0x000000, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetOpenChatModeKeyTextbyMouseAndKeyboard_ReturnValue) == 0x000008, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetOpenChatModeKeyTextbyMouseAndKeyboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, Temp_int_Variable) == 0x000018, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, Temp_int_Variable_1) == 0x000038, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, Temp_int_Variable_2) == 0x00003C, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, Temp_int_Variable_3) == 0x000040, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetPlayerId_ReturnValue) == 0x000048, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_IsValid) == 0x000058, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000060, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_SaveChatLogWindow_ReturnValue) == 0x000068, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_SaveChatLogWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetTextFromAsset_ReturnValue) == 0x000070, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_Create_ReturnValue) == 0x000080, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000088, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000A0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000B0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_Create_ReturnValue_1) == 0x0000C8, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CustomEvent_InSelectBtnId_5) == 0x0000D0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CustomEvent_InSelectBtnId_5' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CustomEvent_InSelectBtnId_4) == 0x0000D4, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CustomEvent_InSelectBtnId_4' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CustomEvent_InSelectBtnId_3) == 0x0000D8, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CustomEvent_InSelectBtnId_3' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_Select_Default) == 0x0000DC, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000E0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CustomEvent_InSelectBtnId_2) == 0x0000E4, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CustomEvent_InSelectBtnId_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CustomEvent_InSelectBtnId_1) == 0x0000E8, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CustomEvent_InSelectBtnId_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000EC, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000ED, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CustomEvent_InSelectBtnId) == 0x0000F0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CustomEvent_InSelectBtnId' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0000F4, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0000F8, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000100, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_SetChatLogTextSizeIndex_ReturnValue) == 0x000101, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_SetChatLogTextSizeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000104, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_IsValid_2) == 0x000114, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000118, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000120, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_2) == 0x000130, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_IsValid_3) == 0x000140, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x000148, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_Array_Length_ReturnValue) == 0x000150, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000154, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_SetChatLogWindowSlotData_ReturnValue) == 0x000155, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_SetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_3) == 0x000158, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_4) == 0x000168, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_5) == 0x000178, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_IsValid_4) == 0x000188, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x000190, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_IsValid_5) == 0x000198, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_IsValid_5' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_ReturnValue_5) == 0x0001A0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_Array_Length_ReturnValue_1) == 0x0001A8, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0001AC, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_SetChatLogWindowSlotData_ReturnValue_1) == 0x0001AD, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_SetChatLogWindowSlotData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_Array_Length_ReturnValue_2) == 0x0001B0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x0001B4, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_SetChatLogWindowSlotData_ReturnValue_2) == 0x0001B5, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_SetChatLogWindowSlotData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001B8, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_IsValid_6) == 0x0001C0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_IsValid_6' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_GetConfigSaveManager_ReturnValue_6) == 0x0001C8, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_GetConfigSaveManager_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0001D0, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_DynamicCast_bSuccess) == 0x0001D8, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, CallFunc_SetDirectMode_ReturnValue) == 0x0001D9, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::CallFunc_SetDirectMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001DC, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_7) == 0x0001EC, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_8) == 0x0001FC, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_9) == 0x00020C, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_10) == 0x00021C, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow, K2Node_CreateDelegate_OutputDelegate_11) == 0x00022C, "Member 'ChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Sub2
// 0x0004 (0x0004 - 0x0000)
struct ChatSettingWindow_C_OnChange_Sub2 final
{
public:
	int32                                         InSelectBtnId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatSettingWindow_C_OnChange_Sub2) == 0x000004, "Wrong alignment on ChatSettingWindow_C_OnChange_Sub2");
static_assert(sizeof(ChatSettingWindow_C_OnChange_Sub2) == 0x000004, "Wrong size on ChatSettingWindow_C_OnChange_Sub2");
static_assert(offsetof(ChatSettingWindow_C_OnChange_Sub2, InSelectBtnId) == 0x000000, "Member 'ChatSettingWindow_C_OnChange_Sub2::InSelectBtnId' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Sub1
// 0x0004 (0x0004 - 0x0000)
struct ChatSettingWindow_C_OnChange_Sub1 final
{
public:
	int32                                         InSelectBtnId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatSettingWindow_C_OnChange_Sub1) == 0x000004, "Wrong alignment on ChatSettingWindow_C_OnChange_Sub1");
static_assert(sizeof(ChatSettingWindow_C_OnChange_Sub1) == 0x000004, "Wrong size on ChatSettingWindow_C_OnChange_Sub1");
static_assert(offsetof(ChatSettingWindow_C_OnChange_Sub1, InSelectBtnId) == 0x000000, "Member 'ChatSettingWindow_C_OnChange_Sub1::InSelectBtnId' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Main
// 0x0004 (0x0004 - 0x0000)
struct ChatSettingWindow_C_OnChange_Main final
{
public:
	int32                                         InSelectBtnId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatSettingWindow_C_OnChange_Main) == 0x000004, "Wrong alignment on ChatSettingWindow_C_OnChange_Main");
static_assert(sizeof(ChatSettingWindow_C_OnChange_Main) == 0x000004, "Wrong size on ChatSettingWindow_C_OnChange_Main");
static_assert(offsetof(ChatSettingWindow_C_OnChange_Main, InSelectBtnId) == 0x000000, "Member 'ChatSettingWindow_C_OnChange_Main::InSelectBtnId' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.OnChange_StartKey
// 0x0004 (0x0004 - 0x0000)
struct ChatSettingWindow_C_OnChange_StartKey final
{
public:
	int32                                         InSelectBtnId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatSettingWindow_C_OnChange_StartKey) == 0x000004, "Wrong alignment on ChatSettingWindow_C_OnChange_StartKey");
static_assert(sizeof(ChatSettingWindow_C_OnChange_StartKey) == 0x000004, "Wrong size on ChatSettingWindow_C_OnChange_StartKey");
static_assert(offsetof(ChatSettingWindow_C_OnChange_StartKey, InSelectBtnId) == 0x000000, "Member 'ChatSettingWindow_C_OnChange_StartKey::InSelectBtnId' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Time
// 0x0004 (0x0004 - 0x0000)
struct ChatSettingWindow_C_OnChange_Time final
{
public:
	int32                                         InSelectBtnId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatSettingWindow_C_OnChange_Time) == 0x000004, "Wrong alignment on ChatSettingWindow_C_OnChange_Time");
static_assert(sizeof(ChatSettingWindow_C_OnChange_Time) == 0x000004, "Wrong size on ChatSettingWindow_C_OnChange_Time");
static_assert(offsetof(ChatSettingWindow_C_OnChange_Time, InSelectBtnId) == 0x000000, "Member 'ChatSettingWindow_C_OnChange_Time::InSelectBtnId' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Size
// 0x0004 (0x0004 - 0x0000)
struct ChatSettingWindow_C_OnChange_Size final
{
public:
	int32                                         InSelectBtnId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatSettingWindow_C_OnChange_Size) == 0x000004, "Wrong alignment on ChatSettingWindow_C_OnChange_Size");
static_assert(sizeof(ChatSettingWindow_C_OnChange_Size) == 0x000004, "Wrong size on ChatSettingWindow_C_OnChange_Size");
static_assert(offsetof(ChatSettingWindow_C_OnChange_Size, InSelectBtnId) == 0x000000, "Member 'ChatSettingWindow_C_OnChange_Size::InSelectBtnId' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.ShowWindow
// 0x00D0 (0x00D0 - 0x0000)
struct ChatSettingWindow_C_ShowWindow final
{
public:
	TArray<bool>                                  LogVisibleStatusList;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UChatSettingRadioBtn_C*>         TmpRadioBtnList;                                   // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFA[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFB[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EFC[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EFD[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDirectMode_ReturnValue;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess;      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EFE[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue;     // 0x0054(0x0010)(NoDestructor)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLogDispTimeType_ReturnValue;           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChatLogTextSizeIndex_ReturnValue;      // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFF[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatSettingRadioBtn_C*                 CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F00[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UChatSettingRadioBtn_C*>         K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F01[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_Array_Get_Item_2;                         // 0x00B0(0x0010)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F02[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatSettingWindow_C_ShowWindow) == 0x000008, "Wrong alignment on ChatSettingWindow_C_ShowWindow");
static_assert(sizeof(ChatSettingWindow_C_ShowWindow) == 0x0000D0, "Wrong size on ChatSettingWindow_C_ShowWindow");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, LogVisibleStatusList) == 0x000000, "Member 'ChatSettingWindow_C_ShowWindow::LogVisibleStatusList' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, TmpRadioBtnList) == 0x000010, "Member 'ChatSettingWindow_C_ShowWindow::TmpRadioBtnList' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, Temp_int_Variable) == 0x000020, "Member 'ChatSettingWindow_C_ShowWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, Temp_int_Variable_1) == 0x000024, "Member 'ChatSettingWindow_C_ShowWindow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Conv_IntToByte_ReturnValue) == 0x000028, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_GetValidValue_ReturnValue) == 0x000030, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000031, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000038, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Array_Get_Item) == 0x000039, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00003C, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_GetConfigSaveManager_IsValid) == 0x000040, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000048, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_IsDirectMode_ReturnValue) == 0x000050, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_IsDirectMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_GetChatLogWindowSlotData_bIsSuccess) == 0x000051, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_GetChatLogWindowSlotData_bIsSuccess' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_GetChatLogWindowSlotData_ReturnValue) == 0x000054, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_GetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_SelectInt_ReturnValue) == 0x000064, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_GetLogDispTimeType_ReturnValue) == 0x000068, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_GetLogDispTimeType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_GetChatLogTextSizeIndex_ReturnValue) == 0x00006C, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_GetChatLogTextSizeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, K2Node_MakeArray_Array) == 0x000088, "Member 'ChatSettingWindow_C_ShowWindow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000098, "Member 'ChatSettingWindow_C_ShowWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_MakeLiteralInt_ReturnValue) == 0x0000A8, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000AC, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_Array_Get_Item_2) == 0x0000B0, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_BooleanAND_ReturnValue) == 0x0000C0, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_SelectInt_ReturnValue_1) == 0x0000C4, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x0000C8, "Member 'ChatSettingWindow_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.HideWindow
// 0x0008 (0x0008 - 0x0000)
struct ChatSettingWindow_C_HideWindow final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatSettingWindow_C_HideWindow) == 0x000008, "Wrong alignment on ChatSettingWindow_C_HideWindow");
static_assert(sizeof(ChatSettingWindow_C_HideWindow) == 0x000008, "Wrong size on ChatSettingWindow_C_HideWindow");
static_assert(offsetof(ChatSettingWindow_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ChatSettingWindow_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ChatSettingWindow.ChatSettingWindow_C.SetVisible
// 0x0007 (0x0007 - 0x0000)
struct ChatSettingWindow_C_SetVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatSettingWindow_C_SetVisible) == 0x000001, "Wrong alignment on ChatSettingWindow_C_SetVisible");
static_assert(sizeof(ChatSettingWindow_C_SetVisible) == 0x000007, "Wrong size on ChatSettingWindow_C_SetVisible");
static_assert(offsetof(ChatSettingWindow_C_SetVisible, Param_IsVisible) == 0x000000, "Member 'ChatSettingWindow_C_SetVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_SetVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'ChatSettingWindow_C_SetVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_SetVisible, Temp_bool_Variable) == 0x000002, "Member 'ChatSettingWindow_C_SetVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_SetVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000003, "Member 'ChatSettingWindow_C_SetVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_SetVisible, K2Node_Select_Default) == 0x000004, "Member 'ChatSettingWindow_C_SetVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_SetVisible, CallFunc_IsVisible_ReturnValue) == 0x000005, "Member 'ChatSettingWindow_C_SetVisible::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatSettingWindow_C_SetVisible, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000006, "Member 'ChatSettingWindow_C_SetVisible::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

