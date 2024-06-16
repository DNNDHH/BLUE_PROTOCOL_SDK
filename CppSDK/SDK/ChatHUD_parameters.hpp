#pragma once

 

// Package: ChatHUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "E_ChatWindowChatType_structs.hpp"


namespace SDK::Params
{

// Function ChatHUD.ChatHUD_C.ExecuteUbergraph_ChatHUD
// 0x0640 (0x0640 - 0x0000)
struct ChatHUD_C_ExecuteUbergraph_ChatHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F72[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatSettingWindow_C*                   CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Fixed_C*       CallFunc_Create_ReturnValue_1;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F73[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisibleChatType_result;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTextInputFocus_Resurl;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue_1;               // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F74[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F75[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_CustomEvent_InOtherPC;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue_1;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F76[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdminComponent*                CallFunc_GetSBPlayerAdminComponent_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F77[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      CallFunc_Create_ReturnValue_2;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAdminCommandCallbackRequest                K2Node_CustomEvent_Request;                        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F78[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdminComponent*                CallFunc_GetSBPlayerAdminComponent_ReturnValue_1;  // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdminComponent*                CallFunc_GetSBPlayerAdminComponent_ReturnValue_2;  // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F79[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_OpenGotoBookmarkWindow_ReturnValue;       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_AdminGotoBookmarkWindow_C*         K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F7A[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1;     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdminComponent*                CallFunc_GetSBPlayerAdminComponent_ReturnValue_3;  // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          K2Node_CustomEvent_RequestSlot_2;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          K2Node_CustomEvent_SlotType;                       // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F7B[0x1];                                     // 0x00CF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F7C[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBChatMessage*                         K2Node_CustomEvent_Message_1;                      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_PlayerId;                       // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Name;                           // 0x00F8(0x0018)()
	class FString                                 K2Node_CustomEvent_CharacterId;                    // 0x0110(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              K2Node_CustomEvent_PrivilegeType;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F7D[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBDirectChatSenderLogData             K2Node_MakeStruct_SBDirectChatSenderLogData;       // 0x0138(0x0038)()
	class UWBP_CommonToolTipText_Variable_C*      CallFunc_Create_ReturnValue_3;                     // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F7E[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          K2Node_CustomEvent_RequestSlot_1;                  // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          K2Node_CustomEvent_RequestSlot;                    // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F7F[0x1];                                     // 0x018B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InFilterType;                   // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InDetailFilterType;             // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F80[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F81[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item_1;                         // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Flag;                           // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F82[0x2];                                     // 0x01CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01CC(0x0010)(ZeroConstructor, NoDestructor)
	E_ChatWindowChatType                          CallFunc_GetChatType_ChatType;                     // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F83[0x2];                                     // 0x01DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x01E0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0200(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F84[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0230(0x0018)()
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F85[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item_2;                         // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovable_C*                             CallFunc_Array_Get_Item_3;                         // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetWidget_CreatedUserWidget;              // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatLogWindowTempList_C*               K2Node_DynamicCast_AsChat_Log_Window_Temp_List;    // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F86[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0288(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02B0(0x0018)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  CallFunc_Get_Log_Window_Visible_Status_List_IsVisibleStatusList; // 0x02D0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F87[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTutorialHelpDialogBox_C*               CallFunc_Create_ReturnValue_4;                     // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F88[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x02F4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0304(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4F89[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item_4;                         // 0x0318(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0325(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0326(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F8A[0x1];                                     // 0x0327(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0328(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0338(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F8B[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F8C[0x1];                                     // 0x035B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x035C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x036C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x036D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x036E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F8D[0x1];                                     // 0x036F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBChatMessage*                   K2Node_CustomEvent_Message;                        // 0x0378(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       K2Node_CustomEvent_Mess;                           // 0x0380(0x0070)(ConstParm)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F8E[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0400(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckReceivedMessageSound_Result;         // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0412(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F8F[0x5];                                     // 0x0413(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0418(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBDirectChatSenderLogData             K2Node_MakeStruct_SBDirectChatSenderLogData_1;     // 0x0428(0x0038)()
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0460(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class USBChatMessage* Message, struct FSBChatUIMessage& Mess)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0470(0x0010)(ZeroConstructor, NoDestructor)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0491(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F90[0x6];                                     // 0x0492(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBChatMessage* Message, struct FSBChatUIMessage& Mess)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x04A0(0x0010)(ZeroConstructor, NoDestructor)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F91[0x7];                                     // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x04C8(0x0010)(ZeroConstructor, NoDestructor)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon_1;       // 0x04E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x04EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F92[0x5];                                     // 0x04EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F93[0x4];                                     // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F94[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_CheckUnlock;                    // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F95[0x6];                                     // 0x052A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_3;        // 0x0538(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F96[0x7];                                     // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0548(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBAdminCommandCallbackRequest Request)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0550(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F97[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_4;        // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F98[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_5;        // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F99[0x7];                                     // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_6;        // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9A[0x7];                                     // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_7;        // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9B[0x7];                                     // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_8;        // 0x05B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9C[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_9;        // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9D[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_10;       // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x05E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9E[0x7];                                     // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_11;       // 0x05E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_17;                    // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x05F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9F[0x2];                                     // 0x05F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x05F4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4FA0[0x4];                                     // 0x0604(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_6;        // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_12;       // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_18;                    // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMainMenuOpen_ReturnValue;               // 0x0619(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA1[0x2];                                     // 0x061A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x061C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_14;           // 0x0620(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_ExecuteUbergraph_ChatHUD) == 0x000008, "Wrong alignment on ChatHUD_C_ExecuteUbergraph_ChatHUD");
static_assert(sizeof(ChatHUD_C_ExecuteUbergraph_ChatHUD) == 0x000640, "Wrong size on ChatHUD_C_ExecuteUbergraph_ChatHUD");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, EntryPoint) == 0x000000, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, Temp_int_Loop_Counter_Variable_1) == 0x000008, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Create_ReturnValue) == 0x000018, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Create_ReturnValue_1) == 0x000020, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetIsEnabled_ReturnValue) == 0x000028, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsVisibleChatType_result) == 0x000030, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsVisibleChatType_result' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsTextInputFocus_Resurl) == 0x000031, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsTextInputFocus_Resurl' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetIsEnabled_ReturnValue_1) == 0x000032, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetIsEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x000033, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsInputKeyDown_ReturnValue) == 0x000041, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x000042, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_BooleanOR_ReturnValue) == 0x000043, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_InOtherPC) == 0x000048, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_InOtherPC' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsAnyAnimationPlaying_ReturnValue_1) == 0x000050, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsAnyAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetSBPlayerAdminComponent_ReturnValue) == 0x000058, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetSBPlayerAdminComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Create_ReturnValue_2) == 0x000068, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_Request) == 0x000070, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_Request' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_SwitchEnum_CmpSuccess) == 0x000071, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetSBPlayerAdminComponent_ReturnValue_1) == 0x000078, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetSBPlayerAdminComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetSBPlayerAdminComponent_ReturnValue_2) == 0x000080, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetSBPlayerAdminComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetSBAdminBookmarkMisc_ReturnValue) == 0x000088, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetSBAdminBookmarkMisc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue_2) == 0x000090, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_OpenGotoBookmarkWindow_ReturnValue) == 0x000098, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_OpenGotoBookmarkWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window) == 0x0000A0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsUMG_Admin_Goto_Bookmark_Window' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1) == 0x0000B0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetSBPlayerAdminComponent_ReturnValue_3) == 0x0000B8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetSBPlayerAdminComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Add_ReturnValue) == 0x0000C0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Add_ReturnValue_1) == 0x0000C4, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Add_ReturnValue_2) == 0x0000C8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_RequestSlot_2) == 0x0000CC, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_RequestSlot_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_SlotType) == 0x0000CD, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_SlotType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000CE, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000D0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_Message_1) == 0x0000E0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_Message_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_PlayerId) == 0x0000E8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_PlayerId' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_Name) == 0x0000F8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_CharacterId) == 0x000110, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_PrivilegeType) == 0x000120, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_PrivilegeType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Conv_TextToString_ReturnValue) == 0x000128, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_MakeStruct_SBDirectChatSenderLogData) == 0x000138, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_MakeStruct_SBDirectChatSenderLogData' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Create_ReturnValue_3) == 0x000170, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Length_ReturnValue) == 0x000178, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetUIManager_IsValid) == 0x00017C, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetUIManager_ReturnValue) == 0x000180, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Less_IntInt_ReturnValue) == 0x000188, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_RequestSlot_1) == 0x000189, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_RequestSlot_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_RequestSlot) == 0x00018A, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_RequestSlot' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_InFilterType) == 0x00018C, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_InFilterType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_InDetailFilterType) == 0x000190, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_InDetailFilterType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000194, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000198, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Get_Item_1) == 0x0001A0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate) == 0x0001A8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetPlayerController_ReturnValue_1) == 0x0001B8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001C0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_Flag) == 0x0001C9, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_Flag' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001CC, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetChatType_ChatType) == 0x0001DC, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetChatType_ChatType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001DD, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001E0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001F0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Conv_StringToText_ReturnValue) == 0x000200, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue_3) == 0x000218, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000220, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000230, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, Temp_int_Array_Index_Variable_1) == 0x000248, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Get_Item_2) == 0x000250, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Get_Item_3) == 0x000258, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetWidget_CreatedUserWidget) == 0x000260, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetWidget_CreatedUserWidget' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsChat_Log_Window_Temp_List) == 0x000268, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsChat_Log_Window_Temp_List' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_2) == 0x000270, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000278, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000288, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0002A0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002B0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_AddChild_ReturnValue) == 0x0002C8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Get_Log_Window_Visible_Status_List_IsVisibleStatusList) == 0x0002D0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Get_Log_Window_Visible_Status_List_IsVisibleStatusList' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue_4) == 0x0002E0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Create_ReturnValue_4) == 0x0002E8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue_5) == 0x0002F0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002F4, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_4) == 0x000304, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Get_Item_4) == 0x000318, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Array_Length_ReturnValue_1) == 0x000320, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Less_IntInt_ReturnValue_1) == 0x000324, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, Temp_byte_Variable) == 0x000325, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, Temp_byte_Variable_1) == 0x000326, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_5) == 0x000328, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_6) == 0x000338, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, Temp_bool_Variable) == 0x000348, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000350, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_InUIType) == 0x000358, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_bInVisibility) == 0x000359, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_bInInstantly) == 0x00035A, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_7) == 0x00035C, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00036C, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00036D, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_Select_Default) == 0x00036E, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetGameInstance_ReturnValue) == 0x000370, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_Message) == 0x000378, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_Mess) == 0x000380, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_Mess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBGame_Instance) == 0x0003F0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_3) == 0x0003F8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetPlayerId_ReturnValue) == 0x000400, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_CheckReceivedMessageSound_Result) == 0x000410, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_CheckReceivedMessageSound_Result' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000411, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000412, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000418, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_MakeStruct_SBDirectChatSenderLogData_1) == 0x000428, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_MakeStruct_SBDirectChatSenderLogData_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_8) == 0x000460, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_9) == 0x000470, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetGameState_ReturnValue) == 0x000480, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000488, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_4) == 0x000490, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue_6) == 0x000491, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetGameInstance_ReturnValue_1) == 0x000498, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_10) == 0x0004A0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x0004B0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_5) == 0x0004B8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0004C0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_11) == 0x0004C8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetGameState_ReturnValue_1) == 0x0004D8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBGame_State_Dungeon_1) == 0x0004E0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBGame_State_Dungeon_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_6) == 0x0004E8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue_7) == 0x0004E9, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetUIManager_IsValid_1) == 0x0004EA, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetUIManager_ReturnValue_1) == 0x0004F0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_PlaySE_ReturnValue) == 0x0004F8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetPlayerController_ReturnValue_2) == 0x000500, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetPlayerController_ReturnValue_3) == 0x000508, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000510, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_7) == 0x000518, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x000520, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_8) == 0x000528, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_CheckUnlock) == 0x000529, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_CheckUnlock' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetPlayerController_ReturnValue_4) == 0x000530, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_3) == 0x000538, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_9) == 0x000540, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000548, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_12) == 0x000550, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_MakeLiteralName_ReturnValue) == 0x000560, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000568, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetPlayerController_ReturnValue_5) == 0x000570, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_4) == 0x000578, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_10) == 0x000580, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_5) == 0x000588, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_11) == 0x000590, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_6) == 0x000598, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_6' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_12) == 0x0005A0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_7) == 0x0005A8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_7' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_13) == 0x0005B0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_8) == 0x0005B8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_8' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_14) == 0x0005C0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_9) == 0x0005C8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_9' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_15) == 0x0005D0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_10) == 0x0005D8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_10' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_16) == 0x0005E0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_11) == 0x0005E8, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_11' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_17) == 0x0005F0, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsValid_ReturnValue_8) == 0x0005F1, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_13) == 0x0005F4, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_GetPlayerController_ReturnValue_6) == 0x000608, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_GetPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_AsSBPlayer_Controller_12) == 0x000610, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_AsSBPlayer_Controller_12' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_DynamicCast_bSuccess_18) == 0x000618, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_DynamicCast_bSuccess_18' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_IsMainMenuOpen_ReturnValue) == 0x000619, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_IsMainMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, CallFunc_PostAkEvent_ReturnValue) == 0x00061C, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CreateDelegate_OutputDelegate_14) == 0x000620, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_Sender) == 0x000630, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ExecuteUbergraph_ChatHUD, K2Node_CustomEvent_Param) == 0x000638, "Member 'ChatHUD_C_ExecuteUbergraph_ChatHUD::K2Node_CustomEvent_Param' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.ResultClose
// 0x0010 (0x0010 - 0x0000)
struct ChatHUD_C_ResultClose final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_ResultClose) == 0x000008, "Wrong alignment on ChatHUD_C_ResultClose");
static_assert(sizeof(ChatHUD_C_ResultClose) == 0x000010, "Wrong size on ChatHUD_C_ResultClose");
static_assert(offsetof(ChatHUD_C_ResultClose, Sender) == 0x000000, "Member 'ChatHUD_C_ResultClose::Sender' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResultClose, Param) == 0x000008, "Member 'ChatHUD_C_ResultClose::Param' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OnRequestTutorialHelp
// 0x0001 (0x0001 - 0x0000)
struct ChatHUD_C_OnRequestTutorialHelp final
{
public:
	bool                                          CheckUnlock;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_OnRequestTutorialHelp) == 0x000001, "Wrong alignment on ChatHUD_C_OnRequestTutorialHelp");
static_assert(sizeof(ChatHUD_C_OnRequestTutorialHelp) == 0x000001, "Wrong size on ChatHUD_C_OnRequestTutorialHelp");
static_assert(offsetof(ChatHUD_C_OnRequestTutorialHelp, CheckUnlock) == 0x000000, "Member 'ChatHUD_C_OnRequestTutorialHelp::CheckUnlock' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OnReceivedMessage
// 0x0078 (0x0078 - 0x0000)
struct ChatHUD_C_OnReceivedMessage final
{
public:
	const class USBChatMessage*                   Message;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       Mess;                                              // 0x0008(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ChatHUD_C_OnReceivedMessage) == 0x000008, "Wrong alignment on ChatHUD_C_OnReceivedMessage");
static_assert(sizeof(ChatHUD_C_OnReceivedMessage) == 0x000078, "Wrong size on ChatHUD_C_OnReceivedMessage");
static_assert(offsetof(ChatHUD_C_OnReceivedMessage, Message) == 0x000000, "Member 'ChatHUD_C_OnReceivedMessage::Message' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnReceivedMessage, Mess) == 0x000008, "Member 'ChatHUD_C_OnReceivedMessage::Mess' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OnChangeVisibility
// 0x0003 (0x0003 - 0x0000)
struct ChatHUD_C_OnChangeVisibility final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_OnChangeVisibility) == 0x000001, "Wrong alignment on ChatHUD_C_OnChangeVisibility");
static_assert(sizeof(ChatHUD_C_OnChangeVisibility) == 0x000003, "Wrong size on ChatHUD_C_OnChangeVisibility");
static_assert(offsetof(ChatHUD_C_OnChangeVisibility, InUIType) == 0x000000, "Member 'ChatHUD_C_OnChangeVisibility::InUIType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnChangeVisibility, bInVisibility) == 0x000001, "Member 'ChatHUD_C_OnChangeVisibility::bInVisibility' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnChangeVisibility, bInInstantly) == 0x000002, "Member 'ChatHUD_C_OnChangeVisibility::bInInstantly' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.UpdateCursorMode
// 0x0001 (0x0001 - 0x0000)
struct ChatHUD_C_UpdateCursorMode final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_UpdateCursorMode) == 0x000001, "Wrong alignment on ChatHUD_C_UpdateCursorMode");
static_assert(sizeof(ChatHUD_C_UpdateCursorMode) == 0x000001, "Wrong size on ChatHUD_C_UpdateCursorMode");
static_assert(offsetof(ChatHUD_C_UpdateCursorMode, Flag) == 0x000000, "Member 'ChatHUD_C_UpdateCursorMode::Flag' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.RequestTabClose
// 0x000C (0x000C - 0x0000)
struct ChatHUD_C_RequestTabClose final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InFilterType;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InDetailFilterType;                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_RequestTabClose) == 0x000004, "Wrong alignment on ChatHUD_C_RequestTabClose");
static_assert(sizeof(ChatHUD_C_RequestTabClose) == 0x00000C, "Wrong size on ChatHUD_C_RequestTabClose");
static_assert(offsetof(ChatHUD_C_RequestTabClose, RequestSlot) == 0x000000, "Member 'ChatHUD_C_RequestTabClose::RequestSlot' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_RequestTabClose, InFilterType) == 0x000004, "Member 'ChatHUD_C_RequestTabClose::InFilterType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_RequestTabClose, InDetailFilterType) == 0x000008, "Member 'ChatHUD_C_RequestTabClose::InDetailFilterType' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.RequestTabAdd
// 0x0001 (0x0001 - 0x0000)
struct ChatHUD_C_RequestTabAdd final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_RequestTabAdd) == 0x000001, "Wrong alignment on ChatHUD_C_RequestTabAdd");
static_assert(sizeof(ChatHUD_C_RequestTabAdd) == 0x000001, "Wrong size on ChatHUD_C_RequestTabAdd");
static_assert(offsetof(ChatHUD_C_RequestTabAdd, RequestSlot) == 0x000000, "Member 'ChatHUD_C_RequestTabAdd::RequestSlot' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.RequestDirectChat
// 0x0040 (0x0040 - 0x0000)
struct ChatHUD_C_RequestDirectChat final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CharacterId;                                       // 0x0028(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              PrivilegeType;                                     // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_RequestDirectChat) == 0x000008, "Wrong alignment on ChatHUD_C_RequestDirectChat");
static_assert(sizeof(ChatHUD_C_RequestDirectChat) == 0x000040, "Wrong size on ChatHUD_C_RequestDirectChat");
static_assert(offsetof(ChatHUD_C_RequestDirectChat, PlayerId) == 0x000000, "Member 'ChatHUD_C_RequestDirectChat::PlayerId' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_RequestDirectChat, Param_Name) == 0x000010, "Member 'ChatHUD_C_RequestDirectChat::Param_Name' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_RequestDirectChat, CharacterId) == 0x000028, "Member 'ChatHUD_C_RequestDirectChat::CharacterId' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_RequestDirectChat, PrivilegeType) == 0x000038, "Member 'ChatHUD_C_RequestDirectChat::PrivilegeType' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OnChatRoomMessageReceived
// 0x0008 (0x0008 - 0x0000)
struct ChatHUD_C_OnChatRoomMessageReceived final
{
public:
	class USBChatMessage*                         Message;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_OnChatRoomMessageReceived) == 0x000008, "Wrong alignment on ChatHUD_C_OnChatRoomMessageReceived");
static_assert(sizeof(ChatHUD_C_OnChatRoomMessageReceived) == 0x000008, "Wrong size on ChatHUD_C_OnChatRoomMessageReceived");
static_assert(offsetof(ChatHUD_C_OnChatRoomMessageReceived, Message) == 0x000000, "Member 'ChatHUD_C_OnChatRoomMessageReceived::Message' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.CloseRequestChatLogs
// 0x0001 (0x0001 - 0x0000)
struct ChatHUD_C_CloseRequestChatLogs final
{
public:
	ESBChatLogWindowSlot                          SlotType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_CloseRequestChatLogs) == 0x000001, "Wrong alignment on ChatHUD_C_CloseRequestChatLogs");
static_assert(sizeof(ChatHUD_C_CloseRequestChatLogs) == 0x000001, "Wrong size on ChatHUD_C_CloseRequestChatLogs");
static_assert(offsetof(ChatHUD_C_CloseRequestChatLogs, SlotType) == 0x000000, "Member 'ChatHUD_C_CloseRequestChatLogs::SlotType' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.RequestChatLogAdd
// 0x0001 (0x0001 - 0x0000)
struct ChatHUD_C_RequestChatLogAdd final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_RequestChatLogAdd) == 0x000001, "Wrong alignment on ChatHUD_C_RequestChatLogAdd");
static_assert(sizeof(ChatHUD_C_RequestChatLogAdd) == 0x000001, "Wrong size on ChatHUD_C_RequestChatLogAdd");
static_assert(offsetof(ChatHUD_C_RequestChatLogAdd, RequestSlot) == 0x000000, "Member 'ChatHUD_C_RequestChatLogAdd::RequestSlot' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OnAdminCommandRequest
// 0x0001 (0x0001 - 0x0000)
struct ChatHUD_C_OnAdminCommandRequest final
{
public:
	ESBAdminCommandCallbackRequest                Request;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_OnAdminCommandRequest) == 0x000001, "Wrong alignment on ChatHUD_C_OnAdminCommandRequest");
static_assert(sizeof(ChatHUD_C_OnAdminCommandRequest) == 0x000001, "Wrong size on ChatHUD_C_OnAdminCommandRequest");
static_assert(offsetof(ChatHUD_C_OnAdminCommandRequest, Request) == 0x000000, "Member 'ChatHUD_C_OnAdminCommandRequest::Request' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OpenCursorModeToOtherPCMenu
// 0x0008 (0x0008 - 0x0000)
struct ChatHUD_C_OpenCursorModeToOtherPCMenu final
{
public:
	class ASBPlayerCharacter*                     InOtherPC;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_OpenCursorModeToOtherPCMenu) == 0x000008, "Wrong alignment on ChatHUD_C_OpenCursorModeToOtherPCMenu");
static_assert(sizeof(ChatHUD_C_OpenCursorModeToOtherPCMenu) == 0x000008, "Wrong size on ChatHUD_C_OpenCursorModeToOtherPCMenu");
static_assert(offsetof(ChatHUD_C_OpenCursorModeToOtherPCMenu, InOtherPC) == 0x000000, "Member 'ChatHUD_C_OpenCursorModeToOtherPCMenu::InOtherPC' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.Show
// 0x0260 (0x0260 - 0x0000)
struct ChatHUD_C_Show final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0038(0x0018)()
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0058(0x0020)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA3[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsOccupied)>              K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4FA4[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNotPhotoMode_ReturnValue;               // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA5[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA6[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMeshClimbingComponent*               CallFunc_GetMeshClimbingComponent_ReturnValue;     // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA7[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsNotPhotoMode_ReturnValue_1;             // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNotPhotoMode_ReturnValue_2;             // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNotPhotoMode_ReturnValue_3;             // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA8[0x1];                                     // 0x00E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA9[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x011C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x013C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x014F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FAA[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0154(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4FAB[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FAC[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue_1; // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBInteractionState                           CallFunc_GetCurrentInteractionState_ReturnValue;   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FAD[0x1];                                     // 0x018B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x018C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x019C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x01AC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x01BC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x01CC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_14;           // 0x01DC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_15;           // 0x01EC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_16;           // 0x01FC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_17;           // 0x020C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_18;           // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4FAE[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0243(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0245(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FAF[0x2];                                     // 0x0246(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_19;           // 0x0248(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CanLocalUserChat_ReturnValue;             // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_Show) == 0x000008, "Wrong alignment on ChatHUD_C_Show");
static_assert(sizeof(ChatHUD_C_Show) == 0x000260, "Wrong size on ChatHUD_C_Show");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'ChatHUD_C_Show::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000010, "Member 'ChatHUD_C_Show::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'ChatHUD_C_Show::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000038, "Member 'ChatHUD_C_Show::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetSBPlayerState_ReturnValue) == 0x000050, "Member 'ChatHUD_C_Show::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetPlatformInfo_ReturnValue) == 0x000058, "Member 'ChatHUD_C_Show::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'ChatHUD_C_Show::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_1) == 0x00008C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000A0, "Member 'ChatHUD_C_Show::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsNotPhotoMode_ReturnValue) == 0x0000A8, "Member 'ChatHUD_C_Show::CallFunc_IsNotPhotoMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000B0, "Member 'ChatHUD_C_Show::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'ChatHUD_C_Show::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x0000C0, "Member 'ChatHUD_C_Show::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetMeshClimbingComponent_ReturnValue) == 0x0000C8, "Member 'ChatHUD_C_Show::CallFunc_GetMeshClimbingComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsValid_ReturnValue_1) == 0x0000D0, "Member 'ChatHUD_C_Show::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsValid_ReturnValue_2) == 0x0000D1, "Member 'ChatHUD_C_Show::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D4, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsNotPhotoMode_ReturnValue_1) == 0x0000E4, "Member 'ChatHUD_C_Show::CallFunc_IsNotPhotoMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsNotPhotoMode_ReturnValue_2) == 0x0000E5, "Member 'ChatHUD_C_Show::CallFunc_IsNotPhotoMode_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsNotPhotoMode_ReturnValue_3) == 0x0000E6, "Member 'ChatHUD_C_Show::CallFunc_IsNotPhotoMode_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000E8, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetPlayerController_ReturnValue) == 0x0000F8, "Member 'ChatHUD_C_Show::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000100, "Member 'ChatHUD_C_Show::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_DynamicCast_bSuccess_1) == 0x000108, "Member 'ChatHUD_C_Show::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_MakeLiteralByte_ReturnValue) == 0x000109, "Member 'ChatHUD_C_Show::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_4) == 0x00010C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_5) == 0x00011C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_6) == 0x00012C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_7) == 0x00013C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, Temp_bool_Variable) == 0x00014C, "Member 'ChatHUD_C_Show::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsVisible_ReturnValue) == 0x00014D, "Member 'ChatHUD_C_Show::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_Not_PreBool_ReturnValue) == 0x00014E, "Member 'ChatHUD_C_Show::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_BooleanAND_ReturnValue) == 0x00014F, "Member 'ChatHUD_C_Show::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000150, "Member 'ChatHUD_C_Show::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_8) == 0x000154, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000168, "Member 'ChatHUD_C_Show::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000170, "Member 'ChatHUD_C_Show::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_DynamicCast_bSuccess_2) == 0x000178, "Member 'ChatHUD_C_Show::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000179, "Member 'ChatHUD_C_Show::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetPlayerInteractionComponent_ReturnValue_1) == 0x000180, "Member 'ChatHUD_C_Show::CallFunc_GetPlayerInteractionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetCurrentInteractionState_ReturnValue) == 0x000188, "Member 'ChatHUD_C_Show::CallFunc_GetCurrentInteractionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_Select_Default) == 0x000189, "Member 'ChatHUD_C_Show::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00018A, "Member 'ChatHUD_C_Show::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_9) == 0x00018C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_10) == 0x00019C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_11) == 0x0001AC, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_12) == 0x0001BC, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_13) == 0x0001CC, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_14) == 0x0001DC, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_15) == 0x0001EC, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_16) == 0x0001FC, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_17) == 0x00020C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_18) == 0x00021C, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_GetPlayerController_ReturnValue_1) == 0x000230, "Member 'ChatHUD_C_Show::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000238, "Member 'ChatHUD_C_Show::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_DynamicCast_bSuccess_3) == 0x000240, "Member 'ChatHUD_C_Show::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000241, "Member 'ChatHUD_C_Show::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsValid_ReturnValue_3) == 0x000242, "Member 'ChatHUD_C_Show::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, Temp_bool_Variable_1) == 0x000243, "Member 'ChatHUD_C_Show::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_Select_Default_1) == 0x000244, "Member 'ChatHUD_C_Show::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_IsActive_ReturnValue) == 0x000245, "Member 'ChatHUD_C_Show::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, K2Node_CreateDelegate_OutputDelegate_19) == 0x000248, "Member 'ChatHUD_C_Show::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Show, CallFunc_CanLocalUserChat_ReturnValue) == 0x000258, "Member 'ChatHUD_C_Show::CallFunc_CanLocalUserChat_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.Hide
// 0x00C0 (0x00C0 - 0x0000)
struct ChatHUD_C_Hide final
{
public:
	TDelegate<void(bool IsOccupied)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB0[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMeshClimbingComponent*               CallFunc_GetMeshClimbingComponent_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB2[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB3[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerPhotoModeComponent*            CallFunc_GetPhotoModeComponent_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB4[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB5[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCursorMode_ReturnValue;                 // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB6[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ChatHUD_C_Hide) == 0x000008, "Wrong alignment on ChatHUD_C_Hide");
static_assert(sizeof(ChatHUD_C_Hide) == 0x0000C0, "Wrong size on ChatHUD_C_Hide");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'ChatHUD_C_Hide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'ChatHUD_C_Hide::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, Temp_int_Array_Index_Variable) == 0x000014, "Member 'ChatHUD_C_Hide::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_Array_Get_Item) == 0x000018, "Member 'ChatHUD_C_Hide::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'ChatHUD_C_Hide::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000030, "Member 'ChatHUD_C_Hide::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000038, "Member 'ChatHUD_C_Hide::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'ChatHUD_C_Hide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x000048, "Member 'ChatHUD_C_Hide::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'ChatHUD_C_Hide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_GetMeshClimbingComponent_ReturnValue) == 0x000058, "Member 'ChatHUD_C_Hide::CallFunc_GetMeshClimbingComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'ChatHUD_C_Hide::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_GetPlayerController_ReturnValue) == 0x000068, "Member 'ChatHUD_C_Hide::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000070, "Member 'ChatHUD_C_Hide::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'ChatHUD_C_Hide::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_GetPhotoModeComponent_ReturnValue) == 0x000080, "Member 'ChatHUD_C_Hide::CallFunc_GetPhotoModeComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_IsPhotoMode_ReturnValue) == 0x000088, "Member 'ChatHUD_C_Hide::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'ChatHUD_C_Hide::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'ChatHUD_C_Hide::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'ChatHUD_C_Hide::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_GetPlayerController_ReturnValue_1) == 0x000098, "Member 'ChatHUD_C_Hide::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000A0, "Member 'ChatHUD_C_Hide::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'ChatHUD_C_Hide::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, CallFunc_IsCursorMode_ReturnValue) == 0x0000A9, "Member 'ChatHUD_C_Hide::CallFunc_IsCursorMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Hide, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000AC, "Member 'ChatHUD_C_Hide::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.IsFullChildLogWindows
// 0x0030 (0x0030 - 0x0000)
struct ChatHUD_C_IsFullChildLogWindows final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFull;                                            // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB7[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FB9[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisibleTab_isVisible;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleLog_isVisible;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_IsFullChildLogWindows) == 0x000008, "Wrong alignment on ChatHUD_C_IsFullChildLogWindows");
static_assert(sizeof(ChatHUD_C_IsFullChildLogWindows) == 0x000030, "Wrong size on ChatHUD_C_IsFullChildLogWindows");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, Ret) == 0x000000, "Member 'ChatHUD_C_IsFullChildLogWindows::Ret' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, IsFull) == 0x000001, "Member 'ChatHUD_C_IsFullChildLogWindows::IsFull' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, Temp_bool_True_if_break_was_hit_Variable) == 0x000002, "Member 'ChatHUD_C_IsFullChildLogWindows::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ChatHUD_C_IsFullChildLogWindows::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'ChatHUD_C_IsFullChildLogWindows::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_Array_Get_Item) == 0x000018, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_IsVisibleTab_isVisible) == 0x000024, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_IsVisibleTab_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_Not_PreBool_ReturnValue_1) == 0x000026, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_BooleanAND_ReturnValue) == 0x000027, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_IsVisibleLog_isVisible) == 0x000028, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_IsVisibleLog_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_Not_PreBool_ReturnValue_2) == 0x000029, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsFullChildLogWindows, CallFunc_BooleanAND_ReturnValue_1) == 0x00002A, "Member 'ChatHUD_C_IsFullChildLogWindows::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.AddChatLogWindow
// 0x0050 (0x0050 - 0x0000)
struct ChatHUD_C_AddChatLogWindow final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          WindowSlot;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FBA[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FBB[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FBC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FBD[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue;     // 0x002C(0x0010)(NoDestructor)
	bool                                          CallFunc_IsLoadedChatLogWindowStatus_ReturnValue;  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFullChildLogWindows_Ret;                // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleLog_isVisible;                   // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_AddChatLogWindow) == 0x000008, "Wrong alignment on ChatHUD_C_AddChatLogWindow");
static_assert(sizeof(ChatHUD_C_AddChatLogWindow) == 0x000050, "Wrong size on ChatHUD_C_AddChatLogWindow");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, RequestSlot) == 0x000000, "Member 'ChatHUD_C_AddChatLogWindow::RequestSlot' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, WindowSlot) == 0x000001, "Member 'ChatHUD_C_AddChatLogWindow::WindowSlot' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ChatHUD_C_AddChatLogWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000008, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_Conv_IntToByte_ReturnValue) == 0x000009, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_GetValidValue_ReturnValue) == 0x00000A, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, Temp_bool_True_if_break_was_hit_Variable) == 0x00000B, "Member 'ChatHUD_C_AddChatLogWindow::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'ChatHUD_C_AddChatLogWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_GetConfigSaveManager_IsValid) == 0x000018, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000020, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_GetChatLogWindowSlotData_bIsSuccess) == 0x000028, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_GetChatLogWindowSlotData_bIsSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_GetChatLogWindowSlotData_ReturnValue) == 0x00002C, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_GetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_IsLoadedChatLogWindowStatus_ReturnValue) == 0x00003C, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_IsLoadedChatLogWindowStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003D, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_IsFullChildLogWindows_Ret) == 0x00003E, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_IsFullChildLogWindows_Ret' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00003F, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_Array_Get_Item) == 0x000040, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_IsVisibleLog_isVisible) == 0x00004D, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_IsVisibleLog_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_BooleanAND_ReturnValue) == 0x00004E, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddChatLogWindow, CallFunc_Not_PreBool_ReturnValue_1) == 0x00004F, "Member 'ChatHUD_C_AddChatLogWindow::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.AddTab
// 0x0038 (0x0038 - 0x0000)
struct ChatHUD_C_AddTab final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          WindowSlot;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FBE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FBF[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFullChildLogWindows_Ret;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FC0[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisibleTab_isVisible;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleLog_isVisible;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_AddTab) == 0x000008, "Wrong alignment on ChatHUD_C_AddTab");
static_assert(sizeof(ChatHUD_C_AddTab) == 0x000038, "Wrong size on ChatHUD_C_AddTab");
static_assert(offsetof(ChatHUD_C_AddTab, RequestSlot) == 0x000000, "Member 'ChatHUD_C_AddTab::RequestSlot' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, WindowSlot) == 0x000001, "Member 'ChatHUD_C_AddTab::WindowSlot' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, Temp_bool_True_if_break_was_hit_Variable) == 0x000002, "Member 'ChatHUD_C_AddTab::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000003, "Member 'ChatHUD_C_AddTab::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'ChatHUD_C_AddTab::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ChatHUD_C_AddTab::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'ChatHUD_C_AddTab::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'ChatHUD_C_AddTab::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_GetValidValue_ReturnValue) == 0x000011, "Member 'ChatHUD_C_AddTab::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'ChatHUD_C_AddTab::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'ChatHUD_C_AddTab::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_IsFullChildLogWindows_Ret) == 0x000019, "Member 'ChatHUD_C_AddTab::CallFunc_IsFullChildLogWindows_Ret' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00001A, "Member 'ChatHUD_C_AddTab::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_Array_Get_Item) == 0x000020, "Member 'ChatHUD_C_AddTab::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'ChatHUD_C_AddTab::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_IsVisibleTab_isVisible) == 0x00002C, "Member 'ChatHUD_C_AddTab::CallFunc_IsVisibleTab_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'ChatHUD_C_AddTab::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002E, "Member 'ChatHUD_C_AddTab::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_BooleanAND_ReturnValue) == 0x00002F, "Member 'ChatHUD_C_AddTab::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_IsVisibleLog_isVisible) == 0x000030, "Member 'ChatHUD_C_AddTab::CallFunc_IsVisibleLog_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_Not_PreBool_ReturnValue_2) == 0x000031, "Member 'ChatHUD_C_AddTab::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_AddTab, CallFunc_BooleanAND_ReturnValue_1) == 0x000032, "Member 'ChatHUD_C_AddTab::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.InitChatLogsHUDLayout
// 0x0058 (0x0058 - 0x0000)
struct ChatHUD_C_InitChatLogsHUDLayout final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetWindowSize_retSize;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_GetAnchors_ReturnValue;                   // 0x0038(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_InitChatLogsHUDLayout) == 0x000008, "Wrong alignment on ChatHUD_C_InitChatLogsHUDLayout");
static_assert(sizeof(ChatHUD_C_InitChatLogsHUDLayout) == 0x000058, "Wrong size on ChatHUD_C_InitChatLogsHUDLayout");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ChatHUD_C_InitChatLogsHUDLayout::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ChatHUD_C_InitChatLogsHUDLayout::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_Array_Add_ReturnValue) == 0x00000C, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_Array_Get_Item) == 0x000010, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_GetWindowSize_retSize) == 0x000020, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_GetWindowSize_retSize' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_GetPosition_ReturnValue) == 0x000028, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_Array_Add_ReturnValue_1) == 0x000030, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_Array_Add_ReturnValue_2) == 0x000034, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_GetAnchors_ReturnValue) == 0x000038, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_GetAnchors_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_Array_Add_ReturnValue_3) == 0x00004C, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogsHUDLayout, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'ChatHUD_C_InitChatLogsHUDLayout::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.LoadHudLayout
// 0x0168 (0x0168 - 0x0000)
struct ChatHUD_C_LoadHudLayout final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FC1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FC2[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FC3[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FC4[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindLayoutWindowSizeData_IsFound;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FC5[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_FindLayoutWindowSizeData_ReturnValue;     // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FC6[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item_1;                         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FC7[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FC8[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_3;             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FC9[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindLayoutData_IsFound;                   // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FCA[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               CallFunc_FindLayoutData_Anchors;                   // 0x00F4(0x0010)(NoDestructor)
	int32                                         CallFunc_FindLayoutData_ZOrder;                    // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_FindLayoutData_ReturnValue;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindLayoutData_IsFound_1;                 // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FCB[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               CallFunc_FindLayoutData_Anchors_1;                 // 0x0114(0x0010)(NoDestructor)
	int32                                         CallFunc_FindLayoutData_ZOrder_1;                  // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_FindLayoutData_ReturnValue_1;             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindLayoutData_IsFound_2;                 // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FCC[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               CallFunc_FindLayoutData_Anchors_2;                 // 0x0134(0x0010)(NoDestructor)
	int32                                         CallFunc_FindLayoutData_ZOrder_2;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_FindLayoutData_ReturnValue_2;             // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadHudLayout_ReturnValue;                // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedHudLayoutData_ReturnValue;        // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FCD[0x5];                                     // 0x0153(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadHudLayoutWindowSize_ReturnValue;      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadHudLayout_ReturnValue_1;              // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_LoadHudLayout) == 0x000008, "Wrong alignment on ChatHUD_C_LoadHudLayout");
static_assert(sizeof(ChatHUD_C_LoadHudLayout) == 0x000168, "Wrong size on ChatHUD_C_LoadHudLayout");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ChatHUD_C_LoadHudLayout::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'ChatHUD_C_LoadHudLayout::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, Temp_int_Array_Index_Variable_1) == 0x000024, "Member 'ChatHUD_C_LoadHudLayout::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000030, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetDisplayName_ReturnValue_1) == 0x000038, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_Array_Get_Item) == 0x000048, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetDisplayName_ReturnValue_2) == 0x000058, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetConfigSaveManager_IsValid) == 0x000068, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000070, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutWindowSizeData_IsFound) == 0x000078, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutWindowSizeData_IsFound' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutWindowSizeData_ReturnValue) == 0x00007C, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutWindowSizeData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, Temp_int_Loop_Counter_Variable_1) == 0x000084, "Member 'ChatHUD_C_LoadHudLayout::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_Less_IntInt_ReturnValue) == 0x000088, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_Add_IntInt_ReturnValue_1) == 0x00008C, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x0000A0, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A8, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetDisplayName_ReturnValue_3) == 0x0000B0, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetDisplayName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetPlayerId_ReturnValue) == 0x0000C0, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0000D0, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0000D8, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetPlayerId_ReturnValue_1) == 0x0000E0, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_IsFound) == 0x0000F0, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_IsFound' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_Anchors) == 0x0000F4, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_Anchors' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_ZOrder) == 0x000104, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_ZOrder' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_ReturnValue) == 0x000108, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_IsFound_1) == 0x000110, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_IsFound_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_Anchors_1) == 0x000114, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_Anchors_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_ZOrder_1) == 0x000124, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_ZOrder_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_ReturnValue_1) == 0x000128, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_IsFound_2) == 0x000130, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_IsFound_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_Anchors_2) == 0x000134, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_Anchors_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_ZOrder_2) == 0x000144, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_ZOrder_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_FindLayoutData_ReturnValue_2) == 0x000148, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_FindLayoutData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_LoadHudLayout_ReturnValue) == 0x000150, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_LoadHudLayout_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_IsLoadedHudLayoutData_ReturnValue) == 0x000151, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_IsLoadedHudLayoutData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetConfigSaveManager_IsValid_2) == 0x000152, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000158, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_LoadHudLayoutWindowSize_ReturnValue) == 0x000160, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_LoadHudLayoutWindowSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadHudLayout, CallFunc_LoadHudLayout_ReturnValue_1) == 0x000161, "Member 'ChatHUD_C_LoadHudLayout::CallFunc_LoadHudLayout_ReturnValue_1' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.SaveLayoutData
// 0x0058 (0x0058 - 0x0000)
struct ChatHUD_C_SaveLayoutData final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FCE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FCF[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetZOrder_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_GetAnchors_ReturnValue;                   // 0x0044(0x0010)(NoDestructor)
};
static_assert(alignof(ChatHUD_C_SaveLayoutData) == 0x000008, "Wrong alignment on ChatHUD_C_SaveLayoutData");
static_assert(sizeof(ChatHUD_C_SaveLayoutData) == 0x000058, "Wrong size on ChatHUD_C_SaveLayoutData");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, InWidget) == 0x000000, "Member 'ChatHUD_C_SaveLayoutData::InWidget' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, CallFunc_GetConfigSaveManager_IsValid) == 0x000008, "Member 'ChatHUD_C_SaveLayoutData::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000010, "Member 'ChatHUD_C_SaveLayoutData::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ChatHUD_C_SaveLayoutData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, CallFunc_GetDisplayName_ReturnValue) == 0x000020, "Member 'ChatHUD_C_SaveLayoutData::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000030, "Member 'ChatHUD_C_SaveLayoutData::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, CallFunc_GetPosition_ReturnValue) == 0x000038, "Member 'ChatHUD_C_SaveLayoutData::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, CallFunc_GetZOrder_ReturnValue) == 0x000040, "Member 'ChatHUD_C_SaveLayoutData::CallFunc_GetZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutData, CallFunc_GetAnchors_ReturnValue) == 0x000044, "Member 'ChatHUD_C_SaveLayoutData::CallFunc_GetAnchors_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.SaveHudLayout
// 0x0048 (0x0048 - 0x0000)
struct ChatHUD_C_SaveHudLayout final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FD1[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue;  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyHUDLayout_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveHudLayout_ReturnValue;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveHudLayoutWindowSize_ReturnValue;      // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_SaveHudLayout) == 0x000008, "Wrong alignment on ChatHUD_C_SaveHudLayout");
static_assert(sizeof(ChatHUD_C_SaveHudLayout) == 0x000048, "Wrong size on ChatHUD_C_SaveHudLayout");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ChatHUD_C_SaveHudLayout::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ChatHUD_C_SaveHudLayout::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_GetPlayerId_ReturnValue) == 0x000010, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_GetConfigSaveManager_IsValid) == 0x000020, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000028, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue) == 0x000030, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_IsModifyHUDLayout_ReturnValue) == 0x000031, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_IsModifyHUDLayout_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_SaveHudLayout_ReturnValue) == 0x000032, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_SaveHudLayout_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_SaveHudLayoutWindowSize_ReturnValue) == 0x000033, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_SaveHudLayoutWindowSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_Array_Get_Item) == 0x000038, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveHudLayout, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'ChatHUD_C_SaveHudLayout::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.InitChatLogSlots
// 0x0130 (0x0130 - 0x0000)
struct ChatHUD_C_InitChatLogSlots final
{
public:
	ESBChatLogWindowSlot                          WindowSlot;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InitDetailFilterType;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InitFilterType;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD3[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD4[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD5[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FD6[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD7[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_2;              // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD8[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2; // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD9[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_6;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_3;              // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FDA[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Or_IntInt_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBChatLogWindowSlot RequestSlot, int32 FilterType, int32 DetailFilterType)> K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBChatLogWindowSlot RequestSlot)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBChatLogWindowStatusSave             K2Node_MakeStruct_SBChatLogWindowStatusSave;       // 0x0094(0x0010)(NoDestructor)
	int32                                         CallFunc_Or_IntInt_ReturnValue_1;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FDB[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFullChildLogWindows_Ret;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FDC[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBChatLogWindowSlot SlotType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBChatLogWindowSlot RequestSlot)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FDD[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisibleTab_isVisible;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FDE[0x2];                                     // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FDF[0x2];                                     // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FE0[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedChatLogWindowStatus_ReturnValue;  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_LoadChatLogWindow_ReturnValue;            // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveChatLogWindow_ReturnValue;            // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetChatLogTextSizeIndex_ReturnValue;      // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetChatLogWindowSlotData_ReturnValue;     // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_LoadChatLogWindow_ReturnValue_1;          // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x012E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_InitChatLogSlots) == 0x000008, "Wrong alignment on ChatHUD_C_InitChatLogSlots");
static_assert(sizeof(ChatHUD_C_InitChatLogSlots) == 0x000130, "Wrong size on ChatHUD_C_InitChatLogSlots");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, WindowSlot) == 0x000000, "Member 'ChatHUD_C_InitChatLogSlots::WindowSlot' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, InitDetailFilterType) == 0x000004, "Member 'ChatHUD_C_InitChatLogSlots::InitDetailFilterType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, InitFilterType) == 0x000008, "Member 'ChatHUD_C_InitChatLogSlots::InitFilterType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, Temp_int_Variable) == 0x00000C, "Member 'ChatHUD_C_InitChatLogSlots::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_IntToByte_ReturnValue) == 0x000014, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000015, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, Temp_int_Variable_1) == 0x00001C, "Member 'ChatHUD_C_InitChatLogSlots::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, Temp_int_Variable_2) == 0x000020, "Member 'ChatHUD_C_InitChatLogSlots::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000024, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetValidValue_ReturnValue) == 0x00002C, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x00002D, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000030, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1) == 0x000034, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, K2Node_SwitchEnum_CmpSuccess) == 0x000035, "Member 'ChatHUD_C_InitChatLogSlots::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x000038, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, Temp_int_Variable_3) == 0x00003C, "Member 'ChatHUD_C_InitChatLogSlots::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_IntToByte_ReturnValue_3) == 0x000040, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_IntToByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetValidValue_ReturnValue_1) == 0x000041, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, Temp_int_Variable_4) == 0x000044, "Member 'ChatHUD_C_InitChatLogSlots::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000048, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_IntToByte_ReturnValue_4) == 0x000049, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_IntToByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetValidValue_ReturnValue_2) == 0x00004A, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetValidValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x00004C, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, Temp_int_Variable_5) == 0x000050, "Member 'ChatHUD_C_InitChatLogSlots::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Add_IntInt_ReturnValue_2) == 0x000054, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_IntToByte_ReturnValue_5) == 0x000058, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_IntToByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2) == 0x000059, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_ByteToInt_ReturnValue_4) == 0x00005C, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_ByteToInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, Temp_int_Array_Index_Variable) == 0x000060, "Member 'ChatHUD_C_InitChatLogSlots::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Conv_IntToByte_ReturnValue_6) == 0x000064, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Conv_IntToByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetValidValue_ReturnValue_3) == 0x000065, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetValidValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Or_IntInt_ReturnValue) == 0x000068, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Or_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'ChatHUD_C_InitChatLogSlots::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'ChatHUD_C_InitChatLogSlots::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Add_IntInt_ReturnValue_3) == 0x000080, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'ChatHUD_C_InitChatLogSlots::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, K2Node_MakeStruct_SBChatLogWindowStatusSave) == 0x000094, "Member 'ChatHUD_C_InitChatLogSlots::K2Node_MakeStruct_SBChatLogWindowStatusSave' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Or_IntInt_ReturnValue_1) == 0x0000A4, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Or_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_MakeLiteralInt_ReturnValue) == 0x0000A8, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetPlayerId_ReturnValue) == 0x0000B0, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_IsFullChildLogWindows_Ret) == 0x0000C0, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_IsFullChildLogWindows_Ret' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C4, "Member 'ChatHUD_C_InitChatLogSlots::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000D4, "Member 'ChatHUD_C_InitChatLogSlots::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x0000E4, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E8, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_IsVisibleTab_isVisible) == 0x0000F8, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_IsVisibleTab_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000F9, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Array_Length_ReturnValue) == 0x0000FC, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x000100, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Less_IntInt_ReturnValue_2) == 0x000104, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_Less_IntInt_ReturnValue_3) == 0x000105, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetPlayerId_ReturnValue_1) == 0x000108, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetConfigSaveManager_IsValid) == 0x000118, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000120, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_IsLoadedChatLogWindowStatus_ReturnValue) == 0x000128, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_IsLoadedChatLogWindowStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_LoadChatLogWindow_ReturnValue) == 0x000129, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_LoadChatLogWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_SaveChatLogWindow_ReturnValue) == 0x00012A, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_SaveChatLogWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_SetChatLogTextSizeIndex_ReturnValue) == 0x00012B, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_SetChatLogTextSizeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_SetChatLogWindowSlotData_ReturnValue) == 0x00012C, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_SetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_LoadChatLogWindow_ReturnValue_1) == 0x00012D, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_LoadChatLogWindow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatLogSlots, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00012E, "Member 'ChatHUD_C_InitChatLogSlots::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.SetChatLogsWindow
// 0x0028 (0x0028 - 0x0000)
struct ChatHUD_C_SetChatLogsWindow final
{
public:
	bool                                          InWindow;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FE1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FE2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_SetChatLogsWindow) == 0x000008, "Wrong alignment on ChatHUD_C_SetChatLogsWindow");
static_assert(sizeof(ChatHUD_C_SetChatLogsWindow) == 0x000028, "Wrong size on ChatHUD_C_SetChatLogsWindow");
static_assert(offsetof(ChatHUD_C_SetChatLogsWindow, InWindow) == 0x000000, "Member 'ChatHUD_C_SetChatLogsWindow::InWindow' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SetChatLogsWindow, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ChatHUD_C_SetChatLogsWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SetChatLogsWindow, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'ChatHUD_C_SetChatLogsWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SetChatLogsWindow, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ChatHUD_C_SetChatLogsWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SetChatLogsWindow, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'ChatHUD_C_SetChatLogsWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SetChatLogsWindow, CallFunc_Array_Get_Item) == 0x000018, "Member 'ChatHUD_C_SetChatLogsWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SetChatLogsWindow, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'ChatHUD_C_SetChatLogsWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.Refresh Chat Logs
// 0x0020 (0x0020 - 0x0000)
struct ChatHUD_C_Refresh_Chat_Logs final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_Refresh_Chat_Logs) == 0x000008, "Wrong alignment on ChatHUD_C_Refresh_Chat_Logs");
static_assert(sizeof(ChatHUD_C_Refresh_Chat_Logs) == 0x000020, "Wrong size on ChatHUD_C_Refresh_Chat_Logs");
static_assert(offsetof(ChatHUD_C_Refresh_Chat_Logs, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ChatHUD_C_Refresh_Chat_Logs::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Refresh_Chat_Logs, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ChatHUD_C_Refresh_Chat_Logs::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Refresh_Chat_Logs, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ChatHUD_C_Refresh_Chat_Logs::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Refresh_Chat_Logs, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'ChatHUD_C_Refresh_Chat_Logs::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Refresh_Chat_Logs, CallFunc_Array_Get_Item) == 0x000010, "Member 'ChatHUD_C_Refresh_Chat_Logs::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Refresh_Chat_Logs, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'ChatHUD_C_Refresh_Chat_Logs::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OnDrop
// 0x00B8 (0x00B8 - 0x0000)
struct ChatHUD_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_OnDrop) == 0x000008, "Wrong alignment on ChatHUD_C_OnDrop");
static_assert(sizeof(ChatHUD_C_OnDrop) == 0x0000B8, "Wrong size on ChatHUD_C_OnDrop");
static_assert(offsetof(ChatHUD_C_OnDrop, MyGeometry) == 0x000000, "Member 'ChatHUD_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnDrop, PointerEvent) == 0x000038, "Member 'ChatHUD_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnDrop, Operation) == 0x0000A8, "Member 'ChatHUD_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnDrop, ReturnValue) == 0x0000B0, "Member 'ChatHUD_C_OnDrop::ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OnDragOver
// 0x00B8 (0x00B8 - 0x0000)
struct ChatHUD_C_OnDragOver final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_OnDragOver) == 0x000008, "Wrong alignment on ChatHUD_C_OnDragOver");
static_assert(sizeof(ChatHUD_C_OnDragOver) == 0x0000B8, "Wrong size on ChatHUD_C_OnDragOver");
static_assert(offsetof(ChatHUD_C_OnDragOver, MyGeometry) == 0x000000, "Member 'ChatHUD_C_OnDragOver::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnDragOver, PointerEvent) == 0x000038, "Member 'ChatHUD_C_OnDragOver::PointerEvent' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnDragOver, Operation) == 0x0000A8, "Member 'ChatHUD_C_OnDragOver::Operation' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnDragOver, ReturnValue) == 0x0000B0, "Member 'ChatHUD_C_OnDragOver::ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.SaveLayoutWindowSizeData
// 0x0040 (0x0040 - 0x0000)
struct ChatHUD_C_SaveLayoutWindowSizeData final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FE3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   K2Node_DynamicCast_AsUMG_Chat_Log_Window;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FE4[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetWindowSize_retSize;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_SaveLayoutWindowSizeData) == 0x000008, "Wrong alignment on ChatHUD_C_SaveLayoutWindowSizeData");
static_assert(sizeof(ChatHUD_C_SaveLayoutWindowSizeData) == 0x000040, "Wrong size on ChatHUD_C_SaveLayoutWindowSizeData");
static_assert(offsetof(ChatHUD_C_SaveLayoutWindowSizeData, InWidget) == 0x000000, "Member 'ChatHUD_C_SaveLayoutWindowSizeData::InWidget' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutWindowSizeData, CallFunc_GetConfigSaveManager_IsValid) == 0x000008, "Member 'ChatHUD_C_SaveLayoutWindowSizeData::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutWindowSizeData, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000010, "Member 'ChatHUD_C_SaveLayoutWindowSizeData::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutWindowSizeData, K2Node_DynamicCast_AsUMG_Chat_Log_Window) == 0x000018, "Member 'ChatHUD_C_SaveLayoutWindowSizeData::K2Node_DynamicCast_AsUMG_Chat_Log_Window' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutWindowSizeData, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ChatHUD_C_SaveLayoutWindowSizeData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutWindowSizeData, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'ChatHUD_C_SaveLayoutWindowSizeData::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_SaveLayoutWindowSizeData, CallFunc_GetWindowSize_retSize) == 0x000038, "Member 'ChatHUD_C_SaveLayoutWindowSizeData::CallFunc_GetWindowSize_retSize' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.InitStampEmoteHUDLayout
// 0x0028 (0x0028 - 0x0000)
struct ChatHUD_C_InitStampEmoteHUDLayout final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetZOrderInViewport_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_GetAnchors_ReturnValue;                   // 0x0014(0x0010)(NoDestructor)
};
static_assert(alignof(ChatHUD_C_InitStampEmoteHUDLayout) == 0x000008, "Wrong alignment on ChatHUD_C_InitStampEmoteHUDLayout");
static_assert(sizeof(ChatHUD_C_InitStampEmoteHUDLayout) == 0x000028, "Wrong size on ChatHUD_C_InitStampEmoteHUDLayout");
static_assert(offsetof(ChatHUD_C_InitStampEmoteHUDLayout, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'ChatHUD_C_InitStampEmoteHUDLayout::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitStampEmoteHUDLayout, CallFunc_GetZOrderInViewport_ReturnValue) == 0x000008, "Member 'ChatHUD_C_InitStampEmoteHUDLayout::CallFunc_GetZOrderInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitStampEmoteHUDLayout, CallFunc_GetPosition_ReturnValue) == 0x00000C, "Member 'ChatHUD_C_InitStampEmoteHUDLayout::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitStampEmoteHUDLayout, CallFunc_GetAnchors_ReturnValue) == 0x000014, "Member 'ChatHUD_C_InitStampEmoteHUDLayout::CallFunc_GetAnchors_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.InitChatHUDLayout
// 0x0028 (0x0028 - 0x0000)
struct ChatHUD_C_InitChatHUDLayout final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetZOrderInViewport_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_GetAnchors_ReturnValue;                   // 0x0014(0x0010)(NoDestructor)
};
static_assert(alignof(ChatHUD_C_InitChatHUDLayout) == 0x000008, "Wrong alignment on ChatHUD_C_InitChatHUDLayout");
static_assert(sizeof(ChatHUD_C_InitChatHUDLayout) == 0x000028, "Wrong size on ChatHUD_C_InitChatHUDLayout");
static_assert(offsetof(ChatHUD_C_InitChatHUDLayout, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'ChatHUD_C_InitChatHUDLayout::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatHUDLayout, CallFunc_GetZOrderInViewport_ReturnValue) == 0x000008, "Member 'ChatHUD_C_InitChatHUDLayout::CallFunc_GetZOrderInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatHUDLayout, CallFunc_GetPosition_ReturnValue) == 0x00000C, "Member 'ChatHUD_C_InitChatHUDLayout::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_InitChatHUDLayout, CallFunc_GetAnchors_ReturnValue) == 0x000014, "Member 'ChatHUD_C_InitChatHUDLayout::CallFunc_GetAnchors_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.LoadStampHisoryData
// 0x0040 (0x0040 - 0x0000)
struct ChatHUD_C_LoadStampHisoryData final
{
public:
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FE5[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStampHistoryIdsData_IsFound;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FE6[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetStampHistoryIdsData_ReturnValue;       // 0x0028(0x0010)(ReferenceParm)
	ESBConfigSaveDataResult                       CallFunc_LoadStampHistoryData_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_LoadStampHisoryData) == 0x000008, "Wrong alignment on ChatHUD_C_LoadStampHisoryData");
static_assert(sizeof(ChatHUD_C_LoadStampHisoryData) == 0x000040, "Wrong size on ChatHUD_C_LoadStampHisoryData");
static_assert(offsetof(ChatHUD_C_LoadStampHisoryData, CallFunc_GetPlayerId_ReturnValue) == 0x000000, "Member 'ChatHUD_C_LoadStampHisoryData::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadStampHisoryData, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'ChatHUD_C_LoadStampHisoryData::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadStampHisoryData, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'ChatHUD_C_LoadStampHisoryData::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadStampHisoryData, CallFunc_GetStampHistoryIdsData_IsFound) == 0x000020, "Member 'ChatHUD_C_LoadStampHisoryData::CallFunc_GetStampHistoryIdsData_IsFound' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadStampHisoryData, CallFunc_GetStampHistoryIdsData_ReturnValue) == 0x000028, "Member 'ChatHUD_C_LoadStampHisoryData::CallFunc_GetStampHistoryIdsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_LoadStampHisoryData, CallFunc_LoadStampHistoryData_ReturnValue) == 0x000038, "Member 'ChatHUD_C_LoadStampHisoryData::CallFunc_LoadStampHistoryData_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct ChatHUD_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
};
static_assert(alignof(ChatHUD_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on ChatHUD_C_OnMouseButtonDown");
static_assert(sizeof(ChatHUD_C_OnMouseButtonDown) == 0x000218, "Wrong size on ChatHUD_C_OnMouseButtonDown");
static_assert(offsetof(ChatHUD_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'ChatHUD_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'ChatHUD_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ChatHUD_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'ChatHUD_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.ResetAllLayout
// 0x0058 (0x0058 - 0x0000)
struct ChatHUD_C_ResetAllLayout final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FE7[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item_1;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FE8[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_ResetAllLayout) == 0x000008, "Wrong alignment on ChatHUD_C_ResetAllLayout");
static_assert(sizeof(ChatHUD_C_ResetAllLayout) == 0x000058, "Wrong size on ChatHUD_C_ResetAllLayout");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ChatHUD_C_ResetAllLayout::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ChatHUD_C_ResetAllLayout::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'ChatHUD_C_ResetAllLayout::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000018, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_Array_Get_Item) == 0x000020, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, Temp_int_Loop_Counter_Variable_1) == 0x00002C, "Member 'ChatHUD_C_ResetAllLayout::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_Array_Length_ReturnValue_1) == 0x000040, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000048, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ResetAllLayout, CallFunc_Less_IntInt_ReturnValue_1) == 0x000050, "Member 'ChatHUD_C_ResetAllLayout::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.On_TextSizeComboBox_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0) == 0x000008, "Wrong alignment on ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0");
static_assert(sizeof(ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0) == 0x000038, "Wrong size on ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0");
static_assert(offsetof(ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0, Item) == 0x000000, "Member 'ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.IsActive
// 0x0002 (0x0002 - 0x0000)
struct ChatHUD_C_IsActive final
{
public:
	bool                                          Param_IsActive;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_IsActive) == 0x000001, "Wrong alignment on ChatHUD_C_IsActive");
static_assert(sizeof(ChatHUD_C_IsActive) == 0x000002, "Wrong size on ChatHUD_C_IsActive");
static_assert(offsetof(ChatHUD_C_IsActive, Param_IsActive) == 0x000000, "Member 'ChatHUD_C_IsActive::Param_IsActive' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_IsActive, CallFunc_IsActive_ReturnValue) == 0x000001, "Member 'ChatHUD_C_IsActive::CallFunc_IsActive_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.ForceClose
// 0x0018 (0x0018 - 0x0000)
struct ChatHUD_C_ForceClose final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_ForceClose) == 0x000008, "Wrong alignment on ChatHUD_C_ForceClose");
static_assert(sizeof(ChatHUD_C_ForceClose) == 0x000018, "Wrong size on ChatHUD_C_ForceClose");
static_assert(offsetof(ChatHUD_C_ForceClose, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'ChatHUD_C_ForceClose::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ForceClose, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000008, "Member 'ChatHUD_C_ForceClose::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_ForceClose, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ChatHUD_C_ForceClose::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.UpdateMouseCursorIcon
// 0x0030 (0x0030 - 0x0000)
struct ChatHUD_C_UpdateMouseCursorIcon final
{
public:
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClimbing_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FE9[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTextInputFocus_Resurl;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCursorMode_ReturnValue;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_UpdateMouseCursorIcon) == 0x000008, "Wrong alignment on ChatHUD_C_UpdateMouseCursorIcon");
static_assert(sizeof(ChatHUD_C_UpdateMouseCursorIcon) == 0x000030, "Wrong size on ChatHUD_C_UpdateMouseCursorIcon");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000000, "Member 'ChatHUD_C_UpdateMouseCursorIcon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000008, "Member 'ChatHUD_C_UpdateMouseCursorIcon::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ChatHUD_C_UpdateMouseCursorIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, CallFunc_IsClimbing_ReturnValue) == 0x000011, "Member 'ChatHUD_C_UpdateMouseCursorIcon::CallFunc_IsClimbing_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'ChatHUD_C_UpdateMouseCursorIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'ChatHUD_C_UpdateMouseCursorIcon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000020, "Member 'ChatHUD_C_UpdateMouseCursorIcon::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'ChatHUD_C_UpdateMouseCursorIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, CallFunc_IsTextInputFocus_Resurl) == 0x000029, "Member 'ChatHUD_C_UpdateMouseCursorIcon::CallFunc_IsTextInputFocus_Resurl' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, CallFunc_IsCursorMode_ReturnValue) == 0x00002A, "Member 'ChatHUD_C_UpdateMouseCursorIcon::CallFunc_IsCursorMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateMouseCursorIcon, CallFunc_BooleanAND_ReturnValue) == 0x00002B, "Member 'ChatHUD_C_UpdateMouseCursorIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.CheckReceivedMessageSound
// 0x0028 (0x0028 - 0x0000)
struct ChatHUD_C_CheckReceivedMessageSound final
{
public:
	ESBChatLogType                                LogType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCloseArea;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Result;                                            // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogType                                Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckLogWindowFilter_Result;              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckLogWindowFilter_Result_1;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckLogWindowFilter_Result_2;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FEA[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedChatLogWindowStatus_ReturnValue;  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBConfigureSaveData_ChatSound         CallFunc_GetChatSoundData_ReturnValue;             // 0x0019(0x0005)(ConstParm, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_CheckReceivedMessageSound) == 0x000008, "Wrong alignment on ChatHUD_C_CheckReceivedMessageSound");
static_assert(sizeof(ChatHUD_C_CheckReceivedMessageSound) == 0x000028, "Wrong size on ChatHUD_C_CheckReceivedMessageSound");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, LogType) == 0x000000, "Member 'ChatHUD_C_CheckReceivedMessageSound::LogType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, IsCloseArea) == 0x000001, "Member 'ChatHUD_C_CheckReceivedMessageSound::IsCloseArea' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, Result) == 0x000002, "Member 'ChatHUD_C_CheckReceivedMessageSound::Result' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, Temp_byte_Variable) == 0x000003, "Member 'ChatHUD_C_CheckReceivedMessageSound::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000004, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_BooleanOR_ReturnValue) == 0x000005, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_CheckLogWindowFilter_Result) == 0x000006, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_CheckLogWindowFilter_Result' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_CheckLogWindowFilter_Result_1) == 0x000007, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_CheckLogWindowFilter_Result_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_CheckLogWindowFilter_Result_2) == 0x000008, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_CheckLogWindowFilter_Result_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, Temp_bool_Variable) == 0x000009, "Member 'ChatHUD_C_CheckReceivedMessageSound::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_BooleanOR_ReturnValue_1) == 0x00000A, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_BooleanOR_ReturnValue_2) == 0x00000B, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, Temp_bool_Variable_1) == 0x00000C, "Member 'ChatHUD_C_CheckReceivedMessageSound::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, Temp_bool_Variable_2) == 0x00000D, "Member 'ChatHUD_C_CheckReceivedMessageSound::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_GetConfigSaveManager_IsValid) == 0x00000E, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000010, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_IsLoadedChatLogWindowStatus_ReturnValue) == 0x000018, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_IsLoadedChatLogWindowStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_GetChatSoundData_ReturnValue) == 0x000019, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_GetChatSoundData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, K2Node_Select_Default) == 0x00001E, "Member 'ChatHUD_C_CheckReceivedMessageSound::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_BooleanAND_ReturnValue) == 0x00001F, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckReceivedMessageSound, CallFunc_BooleanAND_ReturnValue_1) == 0x000020, "Member 'ChatHUD_C_CheckReceivedMessageSound::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.CheckLogWindowFilter
// 0x0090 (0x0090 - 0x0000)
struct ChatHUD_C_CheckLogWindowFilter final
{
public:
	ESBChatLogType                                LogType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          NewParam;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FEB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogType                                Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FEC[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FED[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   K2Node_Select_Default_1;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess;      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FEE[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue;     // 0x005C(0x0010)(NoDestructor)
	bool                                          CallFunc_IsVisibleTab_isVisible;                   // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleLog_isVisible;                   // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FEF[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess_1;    // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FF0[0x1];                                     // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue_1;   // 0x0078(0x0010)(NoDestructor)
	int32                                         CallFunc_And_IntInt_ReturnValue_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_CheckLogWindowFilter) == 0x000008, "Wrong alignment on ChatHUD_C_CheckLogWindowFilter");
static_assert(sizeof(ChatHUD_C_CheckLogWindowFilter) == 0x000090, "Wrong size on ChatHUD_C_CheckLogWindowFilter");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, LogType) == 0x000000, "Member 'ChatHUD_C_CheckLogWindowFilter::LogType' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, NewParam) == 0x000001, "Member 'ChatHUD_C_CheckLogWindowFilter::NewParam' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Result) == 0x000002, "Member 'ChatHUD_C_CheckLogWindowFilter::Result' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_byte_Variable) == 0x000003, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_object_Variable) == 0x000008, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_object_Variable_1) == 0x000010, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_byte_Variable_1) == 0x000018, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable) == 0x00001C, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable_1) == 0x000020, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable_2) == 0x000024, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable_3) == 0x000028, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable_4) == 0x00002C, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable_5) == 0x000030, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable_6) == 0x000034, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable_7) == 0x000038, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, Temp_int_Variable_8) == 0x00003C, "Member 'ChatHUD_C_CheckLogWindowFilter::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, K2Node_Select_Default) == 0x000040, "Member 'ChatHUD_C_CheckLogWindowFilter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_GetConfigSaveManager_IsValid) == 0x000044, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000048, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, K2Node_Select_Default_1) == 0x000050, "Member 'ChatHUD_C_CheckLogWindowFilter::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_GetChatLogWindowSlotData_bIsSuccess) == 0x000058, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_GetChatLogWindowSlotData_bIsSuccess' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_GetChatLogWindowSlotData_ReturnValue) == 0x00005C, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_GetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_IsVisibleTab_isVisible) == 0x00006C, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_IsVisibleTab_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_IsVisibleLog_isVisible) == 0x00006D, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_IsVisibleLog_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_And_IntInt_ReturnValue) == 0x000070, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_BooleanOR_ReturnValue) == 0x000074, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_Greater_IntInt_ReturnValue) == 0x000075, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_GetChatLogWindowSlotData_bIsSuccess_1) == 0x000076, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_GetChatLogWindowSlotData_bIsSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_GetChatLogWindowSlotData_ReturnValue_1) == 0x000078, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_GetChatLogWindowSlotData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_And_IntInt_ReturnValue_1) == 0x000088, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_And_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_CheckLogWindowFilter, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00008C, "Member 'ChatHUD_C_CheckLogWindowFilter::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.UpdateUnread
// 0x0020 (0x0020 - 0x0000)
struct ChatHUD_C_UpdateUnread final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_UpdateUnread) == 0x000008, "Wrong alignment on ChatHUD_C_UpdateUnread");
static_assert(sizeof(ChatHUD_C_UpdateUnread) == 0x000020, "Wrong size on ChatHUD_C_UpdateUnread");
static_assert(offsetof(ChatHUD_C_UpdateUnread, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ChatHUD_C_UpdateUnread::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateUnread, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ChatHUD_C_UpdateUnread::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateUnread, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ChatHUD_C_UpdateUnread::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateUnread, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'ChatHUD_C_UpdateUnread::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateUnread, CallFunc_Array_Get_Item) == 0x000010, "Member 'ChatHUD_C_UpdateUnread::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_UpdateUnread, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'ChatHUD_C_UpdateUnread::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.Get Log Window Visible Status List
// 0x0048 (0x0048 - 0x0000)
struct ChatHUD_C_Get_Log_Window_Visible_Status_List final
{
public:
	TArray<bool>                                  IsVisibleStatusList;                               // 0x0000(0x0010)(Parm, OutParm)
	TArray<bool>                                  TmpList;                                           // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FF1[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FF2[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleTab_isVisible;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleLog_isVisible;                   // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHUD_C_Get_Log_Window_Visible_Status_List) == 0x000008, "Wrong alignment on ChatHUD_C_Get_Log_Window_Visible_Status_List");
static_assert(sizeof(ChatHUD_C_Get_Log_Window_Visible_Status_List) == 0x000048, "Wrong size on ChatHUD_C_Get_Log_Window_Visible_Status_List");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, IsVisibleStatusList) == 0x000000, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::IsVisibleStatusList' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, TmpList) == 0x000010, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::TmpList' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, Temp_bool_True_if_break_was_hit_Variable) == 0x000020, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, Temp_int_Array_Index_Variable) == 0x000024, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_Array_Get_Item) == 0x000038, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_IsVisibleTab_isVisible) == 0x000041, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_IsVisibleTab_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_IsVisibleLog_isVisible) == 0x000043, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_IsVisibleLog_isVisible' has a wrong offset!");
static_assert(offsetof(ChatHUD_C_Get_Log_Window_Visible_Status_List, CallFunc_BooleanOR_ReturnValue) == 0x000044, "Member 'ChatHUD_C_Get_Log_Window_Visible_Status_List::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function ChatHUD.ChatHUD_C.SetFishHUD
// 0x0008 (0x0008 - 0x0000)
struct ChatHUD_C_SetFishHUD final
{
public:
	class UFishingHUD_C*                          HUD;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHUD_C_SetFishHUD) == 0x000008, "Wrong alignment on ChatHUD_C_SetFishHUD");
static_assert(sizeof(ChatHUD_C_SetFishHUD) == 0x000008, "Wrong size on ChatHUD_C_SetFishHUD");
static_assert(offsetof(ChatHUD_C_SetFishHUD, HUD) == 0x000000, "Member 'ChatHUD_C_SetFishHUD::HUD' has a wrong offset!");

}

