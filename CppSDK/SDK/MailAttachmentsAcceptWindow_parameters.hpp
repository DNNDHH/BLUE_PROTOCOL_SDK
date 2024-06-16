#pragma once

 

// Package: MailAttachmentsAcceptWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "EAcceptWindowType_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.ExecuteUbergraph_MailAttachmentsAcceptWindow
// 0x0268 (0x0268 - 0x0000)
struct MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAcceptWindowType                             Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F09[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F0A[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAcceptWindowType                             Temp_byte_Variable_6;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F0B[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_8;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F0C[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailList_attachment_C*                 CallFunc_Create_ReturnValue_1;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F0D[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F0E[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailAttachmentAcceptHead_C*            CallFunc_Create_ReturnValue_2;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F0F[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F10[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMailData>                    K2Node_CustomEvent_MailDatas;                      // 0x00B8(0x0010)(ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F11[0x1];                                     // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F12[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00E0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0108(0x0028)()
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F13[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F14[0x1];                                     // 0x014B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0150(0x0018)()
	bool                                          CallFunc_CheckEquip_Equip;                         // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F15[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEquip_Equip_1;                       // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F16[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0178(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F17[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F18[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAccountTypeMail_ReturnValue;            // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTransferMail_ReturnValue;               // 0x01CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F19[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x01D0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x01F8(0x0028)()
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F1A[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_4;                           // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_5;                           // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F1B[0x2];                                     // 0x0236(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_17;                              // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F1C[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F1D[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow) == 0x000268, "Wrong size on MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, EntryPoint) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_bool_Variable) == 0x000004, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable) == 0x000005, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_1) == 0x000006, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_1) == 0x00000C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_2) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_3) == 0x000014, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_4) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_5) == 0x00001C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_6) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_7) == 0x000024, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_bool_Variable_1) == 0x000028, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_2) == 0x000029, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_3) == 0x00002A, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_bool_Variable_2) == 0x00002B, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_4) == 0x00002C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_5) == 0x00002D, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Create_ReturnValue) == 0x000030, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_6) == 0x000038, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_8) == 0x00004C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_9) == 0x000050, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_10) == 0x000054, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_11) == 0x000058, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_12) == 0x00005C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_13) == 0x000060, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_14) == 0x000064, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_15) == 0x000068, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Create_ReturnValue_1) == 0x000070, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_16) == 0x000078, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00008C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_7) == 0x000094, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Create_ReturnValue_2) == 0x000098, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000A0, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_PlaySE_ReturnValue) == 0x0000A4, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_Event_IsDesignTime) == 0x0000A8, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_AddChild_ReturnValue) == 0x0000B0, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_CustomEvent_MailDatas) == 0x0000B8, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_CustomEvent_MailDatas' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000C8, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_bool_Variable_3) == 0x0000C9, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_8) == 0x0000CA, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_MakeStruct_Margin) == 0x0000CC, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_MakeStruct_SlateColor) == 0x0000E0, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_MakeStruct_SlateColor_1) == 0x000108, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x000130, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_ComponentBoundEvent_bIsChecked) == 0x000131, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_ComponentBoundEvent_SelectedItem) == 0x000138, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_ComponentBoundEvent_SelectionType) == 0x000148, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_byte_Variable_9) == 0x000149, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_SwitchEnum_CmpSuccess) == 0x00014A, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Array_Length_ReturnValue) == 0x00014C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Conv_IntToText_ReturnValue) == 0x000150, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_CheckEquip_Equip) == 0x000168, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_CheckEquip_Equip' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_SwitchEnum_CmpSuccess_1) == 0x000169, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Array_Length_ReturnValue_1) == 0x00016C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_CheckEquip_Equip_1) == 0x000170, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_CheckEquip_Equip_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000178, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_Select_Default) == 0x000190, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_GetCharacterName_ReturnValue) == 0x000198, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_bool_Variable_4) == 0x0001A8, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B0, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_Select_Default_1) == 0x0001C8, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_IsAccountTypeMail_ReturnValue) == 0x0001C9, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_IsAccountTypeMail_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_Select_Default_2) == 0x0001CA, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_IsTransferMail_ReturnValue) == 0x0001CB, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_IsTransferMail_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_Select_Default_3) == 0x0001CC, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_MakeStruct_SlateColor_2) == 0x0001D0, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_MakeStruct_SlateColor_3) == 0x0001F8, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_CustomEvent_Sender) == 0x000220, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_IsValid_ReturnValue) == 0x000228, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_Select_Default_4) == 0x00022C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_Select_Default_5) == 0x000230, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000234, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, K2Node_Select_Default_6) == 0x000235, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, Temp_int_Variable_17) == 0x000238, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_IsValid_ReturnValue_1) == 0x00023C, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Percent_IntInt_ReturnValue) == 0x000240, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Divide_IntInt_ReturnValue) == 0x000244, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_AddChildToGrid_ReturnValue) == 0x000248, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000250, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_Add_IntInt_ReturnValue_1) == 0x000254, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000258, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow, CallFunc_PlayAnimation_ReturnValue_1) == 0x000260, "Member 'MailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnCloseDetail
// 0x0008 (0x0008 - 0x0000)
struct MailAttachmentsAcceptWindow_C_OnCloseDetail final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_OnCloseDetail) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_OnCloseDetail");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_OnCloseDetail) == 0x000008, "Wrong size on MailAttachmentsAcceptWindow_C_OnCloseDetail");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_OnCloseDetail, Sender) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_OnCloseDetail::Sender' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on MailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on MailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on MailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on MailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetMailData
// 0x0010 (0x0010 - 0x0000)
struct MailAttachmentsAcceptWindow_C_SetMailData final
{
public:
	TArray<struct FSBMailData>                    Param_MailDatas;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_SetMailData) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_SetMailData");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_SetMailData) == 0x000010, "Wrong size on MailAttachmentsAcceptWindow_C_SetMailData");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetMailData, Param_MailDatas) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_SetMailData::Param_MailDatas' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MailAttachmentsAcceptWindow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_PreConstruct) == 0x000001, "Wrong alignment on MailAttachmentsAcceptWindow_C_PreConstruct");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_PreConstruct) == 0x000001, "Wrong size on MailAttachmentsAcceptWindow_C_PreConstruct");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateAttachmentGrid
// 0x01F8 (0x01F8 - 0x0000)
struct MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid final
{
public:
	int32                                         AddNum;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F1E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailList_attachment_C*                 CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetOverflowIconStatus_IconStatus;         // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetOverflowIconStatus_MarkFlag;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F1F[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailData                            CallFunc_Array_Get_Item;                           // 0x0060(0x0190)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid) == 0x0001F8, "Wrong size on MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, AddNum) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::AddNum' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, Temp_int_Variable) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, K2Node_MakeStruct_Margin) == 0x000014, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_GetOverflowIconStatus_IconStatus) == 0x000030, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_GetOverflowIconStatus_IconStatus' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_GetOverflowIconStatus_MarkFlag) == 0x000040, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_GetOverflowIconStatus_MarkFlag' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_Percent_IntInt_ReturnValue) == 0x000048, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_Divide_IntInt_ReturnValue) == 0x00004C, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_AddChildToGrid_ReturnValue) == 0x000050, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_Array_Get_Item) == 0x000060, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid, CallFunc_Less_IntInt_ReturnValue) == 0x0001F0, "Member 'MailAttachmentsAcceptWindow_C_GenerateAttachmentGrid::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateStorageList
// 0x03E8 (0x03E8 - 0x0000)
struct MailAttachmentsAcceptWindow_C_GenerateStorageList final
{
public:
	struct FSBMailAttachment                      Attachment;                                        // 0x0000(0x0040)(Edit, BlueprintVisible)
	class UMailAttachmentAcceptHead_C*            Storage;                                           // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNo;                                         // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F20[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, class UMailAttachmentAcceptHead_C*> StorageData;                                       // 0x0050(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	ESBRewardItemType                             Temp_byte_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F21[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F22[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_12;                              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailAttachmentAcceptHead_C*            CallFunc_Create_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F23[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMailAttachmentAcceptHead_C*>    CallFunc_Map_Values_Values;                        // 0x0108(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F24[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailAttachmentAcceptHead_C*            CallFunc_Array_Get_Item;                           // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F25[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F26[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailAttachmentAcceptHead_C*            CallFunc_Map_Find_Value;                           // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F27[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailData                            CallFunc_Array_Get_Item_1;                         // 0x0158(0x0190)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F28[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLotteryTypeRewardStorageType_ReturnValue; // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F29[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x02F8(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F2A[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x03D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F2B[0x2];                                     // 0x03E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_GenerateStorageList) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_GenerateStorageList");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_GenerateStorageList) == 0x0003E8, "Wrong size on MailAttachmentsAcceptWindow_C_GenerateStorageList");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Attachment) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Attachment' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Storage) == 0x000040, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Storage' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, StorageNo) == 0x000048, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::StorageNo' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, StorageData) == 0x000050, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::StorageData' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_byte_Variable) == 0x0000A0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable) == 0x0000A4, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_1) == 0x0000A8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_2) == 0x0000AC, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_3) == 0x0000B0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_4) == 0x0000B4, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_5) == 0x0000B8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_6) == 0x0000BC, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_7) == 0x0000C0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_8) == 0x0000C4, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_9) == 0x0000C8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_10) == 0x0000CC, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_11) == 0x0000D0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_bool_Variable) == 0x0000D4, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_12) == 0x0000D8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_13) == 0x0000DC, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Create_ReturnValue) == 0x0000E0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Array_Index_Variable) == 0x0000E8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Loop_Counter_Variable) == 0x0000EC, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Array_Index_Variable_1) == 0x0000F4, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_14) == 0x0000F8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Variable_15) == 0x0000FC, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_bool_Variable_1) == 0x000100, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, Temp_int_Loop_Counter_Variable_1) == 0x000104, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Map_Values_Values) == 0x000108, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000118, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Array_Get_Item) == 0x000120, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Array_Length_ReturnValue) == 0x000128, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Less_IntInt_ReturnValue) == 0x00012C, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_MakeLiteralInt_ReturnValue) == 0x000130, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000134, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000138, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, K2Node_Select_Default) == 0x00013C, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_AddChild_ReturnValue) == 0x000140, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Map_Find_Value) == 0x000148, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Map_Find_ReturnValue) == 0x000150, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Array_Get_Item_1) == 0x000158, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Array_Length_ReturnValue_1) == 0x0002E8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002EC, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_GetLotteryTypeRewardStorageType_ReturnValue) == 0x0002F0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_GetLotteryTypeRewardStorageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_FindItemMaster_bIsValid) == 0x0002F4, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_FindItemMaster_ItemMaster) == 0x0002F8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0003C8, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, K2Node_Select_Default_1) == 0x0003CC, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0003D0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0003E0, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, CallFunc_Map_Contains_ReturnValue) == 0x0003E1, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateStorageList, K2Node_Select_Default_2) == 0x0003E4, "Member 'MailAttachmentsAcceptWindow_C_GenerateStorageList::K2Node_Select_Default_2' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateMailIds
// 0x01D0 (0x01D0 - 0x0000)
struct MailAttachmentsAcceptWindow_C_GenerateMailIds final
{
public:
	TArray<class FString>                         List1;                                             // 0x0000(0x0010)(Parm, OutParm)
	TArray<class FString>                         List;                                              // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F2C[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailData                            CallFunc_Array_Get_Item;                           // 0x0030(0x0190)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F2D[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_GenerateMailIds) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_GenerateMailIds");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_GenerateMailIds) == 0x0001D0, "Wrong size on MailAttachmentsAcceptWindow_C_GenerateMailIds");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, List1) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::List1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, List) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::List' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, Temp_int_Array_Index_Variable) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, CallFunc_Array_Get_Item) == 0x000030, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, CallFunc_Array_Length_ReturnValue) == 0x0001C0, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, CallFunc_Less_IntInt_ReturnValue) == 0x0001C4, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateMailIds, CallFunc_Array_AddUnique_ReturnValue) == 0x0001C8, "Member 'MailAttachmentsAcceptWindow_C_GenerateMailIds::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateAcceptButtonEnable
// 0x0028 (0x0028 - 0x0000)
struct MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F2E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsBagCapacityOver_OverType;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBagCapacityOver_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AcceptFlagCheck_AcceptFlag;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F2F[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPurchaseTokenVanishment_ReturnValue;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_1;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable) == 0x000004, "Wrong alignment on MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable) == 0x000028, "Wrong size on MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, Temp_bool_Variable) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, Temp_bool_Variable_1) == 0x000001, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, Temp_bool_Variable_2) == 0x000002, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, Temp_bool_Variable_3) == 0x000003, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_IsBagCapacityOver_OverType) == 0x00000C, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_IsBagCapacityOver_OverType' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_IsBagCapacityOver_ReturnValue) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_IsBagCapacityOver_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_AcceptFlagCheck_AcceptFlag) == 0x000011, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_AcceptFlagCheck_AcceptFlag' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_And_IntInt_ReturnValue) == 0x000014, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_IsPurchaseTokenVanishment_ReturnValue) == 0x000019, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_IsPurchaseTokenVanishment_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_IsVisible_ReturnValue) == 0x00001B, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_IsVisible_ReturnValue_1) == 0x00001C, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_IsChecked_ReturnValue) == 0x00001D, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_IsChecked_ReturnValue_1) == 0x00001E, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_IsChecked_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, K2Node_Select_Default) == 0x00001F, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, K2Node_Select_Default_1) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_BooleanAND_ReturnValue_1) == 0x000022, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_BooleanAND_ReturnValue_2) == 0x000023, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable, CallFunc_BooleanAND_ReturnValue_3) == 0x000024, "Member 'MailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckStorageCapacities
// 0x02E8 (0x02E8 - 0x0000)
struct MailAttachmentsAcceptWindow_C_CheckStorageCapacities final
{
public:
	int32                                         TmpAmount;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsCity;                                         // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F30[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F31[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F32[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F33[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F34[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBRewardItemType>                     K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F35[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMailData                            CallFunc_Array_Get_Item;                           // 0x0058(0x0190)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F36[0x2];                                     // 0x01EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLotteryTypeRewardStorageType_ReturnValue; // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F37[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x01F8(0x00D0)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F38[0x1];                                     // 0x02CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F39[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F3A[0x1];                                     // 0x02DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_CheckStorageCapacities");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities) == 0x0002E8, "Wrong size on MailAttachmentsAcceptWindow_C_CheckStorageCapacities");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, TmpAmount) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::TmpAmount' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, TmpIsCity) == 0x000004, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::TmpIsCity' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, Temp_bool_True_if_break_was_hit_Variable) == 0x000005, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, Temp_int_Array_Index_Variable) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, Temp_bool_Variable) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Add_IntInt_ReturnValue_2) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Add_IntInt_ReturnValue_3) == 0x000024, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, Temp_bool_Variable_1) == 0x000028, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_GetMasterDataManager_IsValid) == 0x000029, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, Temp_bool_Variable_2) == 0x000038, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, K2Node_MakeArray_Array) == 0x000040, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000050, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Array_Get_Item) == 0x000058, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Less_IntInt_ReturnValue) == 0x0001E8, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_BooleanAND_ReturnValue) == 0x0001E9, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_GetLotteryTypeRewardStorageType_ReturnValue) == 0x0001EC, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_GetLotteryTypeRewardStorageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_GetItemMasterData_IsExists) == 0x0001F0, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_GetItemMasterData_ReturnValue) == 0x0001F8, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002C8, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002C9, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002CA, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, K2Node_Select_Default) == 0x0002CC, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0002D0, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, K2Node_Select_Default_1) == 0x0002D4, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002D8, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0002D9, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Array_Contains_ReturnValue) == 0x0002DA, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, K2Node_Select_Default_2) == 0x0002DC, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckStorageCapacities, CallFunc_Add_IntInt_ReturnValue_4) == 0x0002E0, "Member 'MailAttachmentsAcceptWindow_C_CheckStorageCapacities::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateVisibleList
// 0x0058 (0x0058 - 0x0000)
struct MailAttachmentsAcceptWindow_C_GenerateVisibleList final
{
public:
	class FName                                   Temp_name_Variable;                                // 0x0000(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F3B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBMailAttachmentViewType                     Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F3C[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0034(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F3D[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_GenerateVisibleList) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_GenerateVisibleList");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_GenerateVisibleList) == 0x000058, "Wrong size on MailAttachmentsAcceptWindow_C_GenerateVisibleList");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, Temp_name_Variable) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, Temp_name_Variable_1) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, Temp_name_Variable_2) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, Temp_int_Variable) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, Temp_int_Variable_1) == 0x00001C, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_GetValidValue_ReturnValue) == 0x000028, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000029, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00002A, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002B, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, Temp_byte_Variable) == 0x000030, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, K2Node_Select_Default) == 0x000034, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_BooleanOR_ReturnValue) == 0x00003C, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_MakeLiteralInt_ReturnValue) == 0x000050, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GenerateVisibleList, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'MailAttachmentsAcceptWindow_C_GenerateVisibleList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateViewType
// 0x0048 (0x0048 - 0x0000)
struct MailAttachmentsAcceptWindow_C_UpdateViewType final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBMailAttachmentViewType                     ViewType;                                          // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F3E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F3F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBMailAttachmentViewType                     CallFunc_Map_Find_Value;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F40[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailList_attachment_C*                 K2Node_DynamicCast_AsMail_List_Attachment;         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F41[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_UpdateViewType) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_UpdateViewType");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_UpdateViewType) == 0x000048, "Wrong size on MailAttachmentsAcceptWindow_C_UpdateViewType");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, Type) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::Type' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, ViewType) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::ViewType' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, Temp_int_Variable) == 0x000014, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, CallFunc_Map_Find_Value) == 0x000028, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, CallFunc_Map_Find_ReturnValue) == 0x000029, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, K2Node_DynamicCast_AsMail_List_Attachment) == 0x000030, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::K2Node_DynamicCast_AsMail_List_Attachment' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, CallFunc_GetChildrenCount_ReturnValue) == 0x00003C, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateViewType, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000044, "Member 'MailAttachmentsAcceptWindow_C_UpdateViewType::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateCheckBoxVisibility
// 0x0038 (0x0038 - 0x0000)
struct MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility final
{
public:
	bool                                          PurchaseVanish;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F42[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcMailOverflowAttachmentsItemSaleValue_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CheckLimitOver_selectValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility) == 0x000038, "Wrong size on MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility, PurchaseVanish) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility::PurchaseVanish' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility, CallFunc_CalcMailOverflowAttachmentsItemSaleValue_ReturnValue) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility::CallFunc_CalcMailOverflowAttachmentsItemSaleValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility, CallFunc_CheckLimitOver_selectValue) == 0x000014, "Member 'MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility::CallFunc_CheckLimitOver_selectValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility, K2Node_SwitchInteger_CmpSuccess) == 0x000030, "Member 'MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000031, "Member 'MailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.On_Cmb_ViewType_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0) == 0x000038, "Wrong size on MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0, Item) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckEquip
// 0x03B0 (0x03B0 - 0x0000)
struct MailAttachmentsAcceptWindow_C_CheckEquip final
{
public:
	bool                                          Equip;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F43[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CostumeData;                                       // 0x0008(0x0088)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEquip;                                           // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F44[0x1];                                     // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F45[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEquipableGender                              Temp_byte_Variable;                                // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_1;                              // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetPlayerGender_OutGender;                // 0x00AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F46[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEquipableGender                              Temp_byte_Variable_2;                              // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F47[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_3;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              K2Node_Select_Default;                             // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F48[0x2];                                     // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailData                            CallFunc_Array_Get_Item;                           // 0x00D0(0x0190)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F49[0x2];                                     // 0x0266(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0268(0x0088)()
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F4A[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x02F8(0x00B0)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_CheckEquip) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_CheckEquip");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_CheckEquip) == 0x0003B0, "Wrong size on MailAttachmentsAcceptWindow_C_CheckEquip");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, Equip) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::Equip' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CostumeData) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CostumeData' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, MasterDataManager) == 0x000090, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::MasterDataManager' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, IsEquip) == 0x000098, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::IsEquip' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_Greater_IntInt_ReturnValue) == 0x00009A, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, Temp_int_Loop_Counter_Variable) == 0x00009C, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, Temp_bool_True_if_break_was_hit_Variable) == 0x0000A4, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_Not_PreBool_ReturnValue) == 0x0000AC, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, Temp_byte_Variable) == 0x0000AD, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, Temp_byte_Variable_1) == 0x0000AE, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_GetPlayerGender_OutGender) == 0x0000AF, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_GetPlayerGender_OutGender' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_GetClassType_ReturnValue) == 0x0000B0, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000B4, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_BooleanOR_ReturnValue) == 0x0000B9, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, Temp_byte_Variable_2) == 0x0000BA, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_GetMasterDataManager_IsValid) == 0x0000BB, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000C0, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, Temp_byte_Variable_3) == 0x0000C8, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, K2Node_Select_Default) == 0x0000C9, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000CA, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_GetPlayerClassType_ClassType) == 0x0000CB, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_BooleanOR_ReturnValue_1) == 0x0000CC, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_BooleanAND_ReturnValue) == 0x0000CD, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_Array_Length_ReturnValue) == 0x000260, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_Less_IntInt_ReturnValue) == 0x000264, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000265, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000268, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_BooleanAND_ReturnValue_1) == 0x0002F0, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_GetWeaponMasterData_IsExists) == 0x0002F1, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0002F8, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, K2Node_SwitchEnum_CmpSuccess) == 0x0003A8, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckEquip, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0003A9, "Member 'MailAttachmentsAcceptWindow_C_CheckEquip::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetAcceptWindowTitle
// 0x0001 (0x0001 - 0x0000)
struct MailAttachmentsAcceptWindow_C_SetAcceptWindowTitle final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_SetAcceptWindowTitle) == 0x000001, "Wrong alignment on MailAttachmentsAcceptWindow_C_SetAcceptWindowTitle");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_SetAcceptWindowTitle) == 0x000001, "Wrong size on MailAttachmentsAcceptWindow_C_SetAcceptWindowTitle");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetAcceptWindowTitle, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_SetAcceptWindowTitle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetWarningText
// 0x0138 (0x0138 - 0x0000)
struct MailAttachmentsAcceptWindow_C_SetWarningText final
{
public:
	int32                                         CallFunc_IsBagCapacityOver_OverType;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBagCapacityOver_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F4B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_IsPurchaseTokenVanishment_ReturnValue;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F4C[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00A0(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F4D[0x2];                                     // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F4E[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x00E0(0x0018)()
	bool                                          CallFunc_IsChecked_ReturnValue_1;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F4F[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F50[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetItemBag_ReturnValue;                   // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F51[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue_1;                // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F52[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue_2;                // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_SetWarningText) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_SetWarningText");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_SetWarningText) == 0x000138, "Wrong size on MailAttachmentsAcceptWindow_C_SetWarningText");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_IsBagCapacityOver_OverType) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_IsBagCapacityOver_OverType' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_IsBagCapacityOver_ReturnValue) == 0x000004, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_IsBagCapacityOver_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetVisibility_ReturnValue) == 0x000005, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000006, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetVisibility_ReturnValue_1) == 0x000007, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_IsPurchaseTokenVanishment_ReturnValue) == 0x000038, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_IsPurchaseTokenVanishment_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000040, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000068, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000078, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000088, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000A0, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Not_PreBool_ReturnValue) == 0x0000B8, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_IsChecked_ReturnValue) == 0x0000B9, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_BooleanAND_ReturnValue) == 0x0000BA, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000BB, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000BC, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_BooleanAND_ReturnValue_1) == 0x0000BD, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000C0, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_And_IntInt_ReturnValue) == 0x0000C4, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000C8, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000C9, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x0000D0, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0000E0, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_IsChecked_ReturnValue_1) == 0x0000F8, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_IsChecked_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Not_PreBool_ReturnValue_3) == 0x0000F9, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_BooleanAND_ReturnValue_2) == 0x0000FA, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_BooleanAND_ReturnValue_3) == 0x0000FB, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetEquipmentBag_ReturnValue) == 0x000100, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetCapacity_ReturnValue) == 0x000108, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetItemBag_ReturnValue) == 0x000110, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetItemBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Less_IntInt_ReturnValue) == 0x000118, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetCapacity_ReturnValue_1) == 0x00011C, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetCapacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetCharacterStorage_ReturnValue) == 0x000120, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Less_IntInt_ReturnValue_1) == 0x000128, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_GetCapacity_ReturnValue_2) == 0x00012C, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_GetCapacity_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_Less_IntInt_ReturnValue_2) == 0x000130, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_BooleanOR_ReturnValue) == 0x000131, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_SetWarningText, CallFunc_BooleanOR_ReturnValue_1) == 0x000132, "Member 'MailAttachmentsAcceptWindow_C_SetWarningText::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.AcceptFlagCheck
// 0x0030 (0x0030 - 0x0000)
struct MailAttachmentsAcceptWindow_C_AcceptFlagCheck final
{
public:
	bool                                          AcceptFlag;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CheckFlag;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F53[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F54[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailAttachmentAcceptHead_C*            K2Node_DynamicCast_AsMail_Attachment_Accept_Head;  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAccepted_Accept;                        // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_AcceptFlagCheck");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck) == 0x000030, "Wrong size on MailAttachmentsAcceptWindow_C_AcceptFlagCheck");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, AcceptFlag) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::AcceptFlag' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, CheckFlag) == 0x000001, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::CheckFlag' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, Temp_int_Variable) == 0x000004, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, CallFunc_GetChildrenCount_ReturnValue) == 0x00000C, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, K2Node_DynamicCast_AsMail_Attachment_Accept_Head) == 0x000020, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::K2Node_DynamicCast_AsMail_Attachment_Accept_Head' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000029, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, CallFunc_IsAccepted_Accept) == 0x00002A, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::CallFunc_IsAccepted_Accept' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_AcceptFlagCheck, CallFunc_BooleanAND_ReturnValue) == 0x00002B, "Member 'MailAttachmentsAcceptWindow_C_AcceptFlagCheck::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckLimitOver
// 0x0058 (0x0058 - 0x0000)
struct MailAttachmentsAcceptWindow_C_CheckLimitOver final
{
public:
	TArray<struct FSBMailData>                    MailData;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         SelectValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F55[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMailData>                    TmpMailData;                                       // 0x0018(0x0010)(Edit, BlueprintVisible)
	bool                                          PurchaseVanish;                                    // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F56[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F57[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOverflow_ReturnValue;                   // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVanishment_ReturnValue;                 // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPurchaseTokenVanishment_ReturnValue;    // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F58[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsBagCapacityOver_OverType;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBagCapacityOver_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F59[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F5A[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_CheckLimitOver) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_CheckLimitOver");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_CheckLimitOver) == 0x000058, "Wrong size on MailAttachmentsAcceptWindow_C_CheckLimitOver");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, MailData) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::MailData' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, SelectValue) == 0x000010, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::SelectValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, TmpMailData) == 0x000018, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::TmpMailData' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, PurchaseVanish) == 0x000028, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::PurchaseVanish' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_MakeLiteralByte_ReturnValue) == 0x000029, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, Temp_bool_Variable) == 0x00002A, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, Temp_int_Variable) == 0x00002C, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, Temp_int_Variable_1) == 0x000030, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000034, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000035, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000038, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_IsOverflow_ReturnValue) == 0x00003C, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_IsOverflow_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_IsVanishment_ReturnValue) == 0x00003D, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_IsVanishment_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_IsPurchaseTokenVanishment_ReturnValue) == 0x00003E, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_IsPurchaseTokenVanishment_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_IsBagCapacityOver_OverType) == 0x000040, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_IsBagCapacityOver_OverType' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_IsBagCapacityOver_ReturnValue) == 0x000044, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_IsBagCapacityOver_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_And_IntInt_ReturnValue) == 0x000048, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00004C, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_Not_PreBool_ReturnValue) == 0x00004D, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_BooleanAND_ReturnValue) == 0x00004E, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, Temp_bool_Variable_1) == 0x00004F, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_Not_PreBool_ReturnValue_1) == 0x000050, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, K2Node_Select_Default) == 0x000051, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, CallFunc_BooleanAND_ReturnValue_1) == 0x000052, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_CheckLimitOver, K2Node_Select_Default_1) == 0x000054, "Member 'MailAttachmentsAcceptWindow_C_CheckLimitOver::K2Node_Select_Default_1' has a wrong offset!");

// Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GetMailDatas
// 0x0010 (0x0010 - 0x0000)
struct MailAttachmentsAcceptWindow_C_GetMailDatas final
{
public:
	TArray<struct FSBMailData>                    Param_MailDatas;                                   // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(MailAttachmentsAcceptWindow_C_GetMailDatas) == 0x000008, "Wrong alignment on MailAttachmentsAcceptWindow_C_GetMailDatas");
static_assert(sizeof(MailAttachmentsAcceptWindow_C_GetMailDatas) == 0x000010, "Wrong size on MailAttachmentsAcceptWindow_C_GetMailDatas");
static_assert(offsetof(MailAttachmentsAcceptWindow_C_GetMailDatas, Param_MailDatas) == 0x000000, "Member 'MailAttachmentsAcceptWindow_C_GetMailDatas::Param_MailDatas' has a wrong offset!");

}

