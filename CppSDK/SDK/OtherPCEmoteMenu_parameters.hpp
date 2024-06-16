#pragma once

 

// Package: OtherPCEmoteMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ExecuteUbergraph_OtherPCEmoteMenu
// 0x0268 (0x0268 - 0x0000)
struct OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C24[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStampCategoryButton_C*                 CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C25[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C26[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEmotionMenu_Item_C*                    K2Node_CustomEvent_InSelectedItem;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C27[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEmotion_OutEmotion;                    // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C28[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x00B0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C29[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C2A[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C2B[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 CallFunc_Create_ReturnValue_1;                     // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C2C[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C2D[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C2E[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C2F[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item_1;          // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C30[0x1];                                     // 0x015B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInit;                          // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C31[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C32[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C33[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLimitedTimeGroupInfo>        CallFunc_GetLimitedTimeGroupInfo_ReturnValue;      // 0x0188(0x0010)(ReferenceParm)
	TDelegate<void(class UEmotionMenu_Item_C* InSelectedItem)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0198(0x0010)(ZeroConstructor, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x01A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C34[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item_2;          // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C35[0x1];                                     // 0x01FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0200(0x0010)(ZeroConstructor, NoDestructor)
	class UTutorialHelpDialogBox_C*               CallFunc_Create_ReturnValue_2;                     // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UEmotionMenu_Item_C* InSelectedItem)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0218(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_2;       // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_3;                 // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C36[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item_3;          // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C37[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_2;           // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0250(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu");
static_assert(sizeof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu) == 0x000268, "Wrong size on OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, EntryPoint) == 0x000000, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, Temp_int_Variable) == 0x000008, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Create_ReturnValue) == 0x000018, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, Temp_int_Variable_1) == 0x000020, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Add_IntInt_ReturnValue_2) == 0x000024, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000030, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000040, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000058, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x00005C, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x00006C, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Array_Length_ReturnValue) == 0x00007C, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CustomEvent_InSelectedItem) == 0x000080, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CustomEvent_InSelectedItem' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetChildrenCount_ReturnValue) == 0x000088, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetEmotion_OutEmotion) == 0x000090, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetEmotion_OutEmotion' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000A0, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_PlaySE_ReturnValue_1) == 0x0000A4, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000A8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_Event_Animation) == 0x0000B0, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000B8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_PlayAnimation_ReturnValue) == 0x0000C0, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, Temp_int_Array_Index_Variable) == 0x0000D0, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetChildrenCount_ReturnValue_1) == 0x0000D4, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000E8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetChildAt_ReturnValue) == 0x0000F0, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x0000F8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_PlaySE_ReturnValue_2) == 0x000104, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Create_ReturnValue_1) == 0x000108, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Array_Length_ReturnValue_1) == 0x000110, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000114, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Conv_StringToName_ReturnValue) == 0x000118, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000120, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, Temp_int_Loop_Counter_Variable) == 0x000128, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Less_IntInt_ReturnValue) == 0x00012C, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Add_IntInt_ReturnValue_3) == 0x000130, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000138, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, Temp_int_Variable_2) == 0x000140, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_IsValid_ReturnValue) == 0x000144, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetChildAt_ReturnValue_1) == 0x000148, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_AsEmotion_Menu_Item_1) == 0x000150, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_AsEmotion_Menu_Item_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_bSuccess_2) == 0x000158, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000159, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00015A, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Add_IntInt_ReturnValue_4) == 0x00015C, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CustomEvent_bInit) == 0x000160, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CustomEvent_bInit' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x000168, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CustomEvent_Index) == 0x000170, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_AsSBPlayer_State) == 0x000178, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_bSuccess_3) == 0x000180, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetLimitedTimeGroupInfo_ReturnValue) == 0x000188, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetLimitedTimeGroupInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000198, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_MakeStruct_Margin) == 0x0001A8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_MakeStruct_Margin_1) == 0x0001B8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0001C8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x0001D0, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, Temp_int_Variable_3) == 0x0001D8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Array_Length_ReturnValue_2) == 0x0001DC, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetChildAt_ReturnValue_2) == 0x0001E0, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0001E8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_AsEmotion_Menu_Item_2) == 0x0001F0, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_AsEmotion_Menu_Item_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_bSuccess_4) == 0x0001F8, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0001F9, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0001FA, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Add_IntInt_ReturnValue_5) == 0x0001FC, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000200, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Create_ReturnValue_2) == 0x000210, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x000218, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_2) == 0x000228, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetChildAt_ReturnValue_3) == 0x000230, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetChildAt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_IsValid_ReturnValue_1) == 0x000238, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_AsEmotion_Menu_Item_3) == 0x000240, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_AsEmotion_Menu_Item_3' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_DynamicCast_bSuccess_5) == 0x000248, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_GetChildrenCount_ReturnValue_2) == 0x00024C, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_GetChildrenCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x000250, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000260, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000264, "Member 'OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CustomEvent
// 0x0004 (0x0004 - 0x0000)
struct OtherPCEmoteMenu_C_CustomEvent final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCEmoteMenu_C_CustomEvent) == 0x000004, "Wrong alignment on OtherPCEmoteMenu_C_CustomEvent");
static_assert(sizeof(OtherPCEmoteMenu_C_CustomEvent) == 0x000004, "Wrong size on OtherPCEmoteMenu_C_CustomEvent");
static_assert(offsetof(OtherPCEmoteMenu_C_CustomEvent, Param_Index) == 0x000000, "Member 'OtherPCEmoteMenu_C_CustomEvent::Param_Index' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmotionList
// 0x0001 (0x0001 - 0x0000)
struct OtherPCEmoteMenu_C_UpdateEmotionList final
{
public:
	bool                                          bInit;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCEmoteMenu_C_UpdateEmotionList) == 0x000001, "Wrong alignment on OtherPCEmoteMenu_C_UpdateEmotionList");
static_assert(sizeof(OtherPCEmoteMenu_C_UpdateEmotionList) == 0x000001, "Wrong size on OtherPCEmoteMenu_C_UpdateEmotionList");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmotionList, bInit) == 0x000000, "Member 'OtherPCEmoteMenu_C_UpdateEmotionList::bInit' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct OtherPCEmoteMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCEmoteMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_OnAnimationFinished");
static_assert(sizeof(OtherPCEmoteMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on OtherPCEmoteMenu_C_OnAnimationFinished");
static_assert(offsetof(OtherPCEmoteMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'OtherPCEmoteMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnSelect
// 0x0008 (0x0008 - 0x0000)
struct OtherPCEmoteMenu_C_OnSelect final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCEmoteMenu_C_OnSelect) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_OnSelect");
static_assert(sizeof(OtherPCEmoteMenu_C_OnSelect) == 0x000008, "Wrong size on OtherPCEmoteMenu_C_OnSelect");
static_assert(offsetof(OtherPCEmoteMenu_C_OnSelect, InSelectedItem) == 0x000000, "Member 'OtherPCEmoteMenu_C_OnSelect::InSelectedItem' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CreateEmptySlot
// 0x0058 (0x0058 - 0x0000)
struct OtherPCEmoteMenu_C_CreateEmptySlot final
{
public:
	class UGridPanel*                             InGridPanel;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSlotCount;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginLeft;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginTop;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C38[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEmotionMenu_Item_C*                    CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C39[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C3A[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C3B[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCEmoteMenu_C_CreateEmptySlot) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_CreateEmptySlot");
static_assert(sizeof(OtherPCEmoteMenu_C_CreateEmptySlot) == 0x000058, "Wrong size on OtherPCEmoteMenu_C_CreateEmptySlot");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, InGridPanel) == 0x000000, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::InGridPanel' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, InSlotCount) == 0x000008, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::InSlotCount' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, MarginLeft) == 0x00000C, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::MarginLeft' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, MarginTop) == 0x000010, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::MarginTop' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, K2Node_MakeStruct_Margin) == 0x00001C, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, Temp_int_Variable) == 0x00002C, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_Create_ReturnValue) == 0x000030, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_Percent_IntInt_ReturnValue) == 0x000038, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_AddChildToGrid_ReturnValue) == 0x000040, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000048, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_Divide_IntInt_ReturnValue) == 0x00004C, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000050, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000051, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmptySlot, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'OtherPCEmoteMenu_C_CreateEmptySlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CreateEmotionList
// 0x0070 (0x0070 - 0x0000)
struct OtherPCEmoteMenu_C_CreateEmotionList final
{
public:
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C3C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1;  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C3D[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C3E[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C3F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue; // 0x0030(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue; // 0x0040(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_ReturnValue;           // 0x0050(0x0010)(ReferenceParm)
	TArray<class FString>                         K2Node_Select_Default;                             // 0x0060(0x0010)(ReferenceParm)
};
static_assert(alignof(OtherPCEmoteMenu_C_CreateEmotionList) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_CreateEmotionList");
static_assert(sizeof(OtherPCEmoteMenu_C_CreateEmotionList) == 0x000070, "Wrong size on OtherPCEmoteMenu_C_CreateEmotionList");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000000, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, Temp_bool_Variable) == 0x00000D, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1) == 0x00000E, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000010, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, K2Node_DynamicCast_AsSBPlayer_State) == 0x000020, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue) == 0x000030, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_GetUnlockEmoteData_LimitedTimeOnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue) == 0x000040, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_GetUnlockEmoteData_LimitedTimeExcluding_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, CallFunc_GetUnlockEmoteData_ReturnValue) == 0x000050, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::CallFunc_GetUnlockEmoteData_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_CreateEmotionList, K2Node_Select_Default) == 0x000060, "Member 'OtherPCEmoteMenu_C_CreateEmotionList::K2Node_Select_Default' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ClearEmotionSlot
// 0x0028 (0x0028 - 0x0000)
struct OtherPCEmoteMenu_C_ClearEmotionSlot final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C40[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C41[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCEmoteMenu_C_ClearEmotionSlot) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_ClearEmotionSlot");
static_assert(sizeof(OtherPCEmoteMenu_C_ClearEmotionSlot) == 0x000028, "Wrong size on OtherPCEmoteMenu_C_ClearEmotionSlot");
static_assert(offsetof(OtherPCEmoteMenu_C_ClearEmotionSlot, Temp_int_Variable) == 0x000000, "Member 'OtherPCEmoteMenu_C_ClearEmotionSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ClearEmotionSlot, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'OtherPCEmoteMenu_C_ClearEmotionSlot::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ClearEmotionSlot, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'OtherPCEmoteMenu_C_ClearEmotionSlot::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ClearEmotionSlot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'OtherPCEmoteMenu_C_ClearEmotionSlot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ClearEmotionSlot, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x000018, "Member 'OtherPCEmoteMenu_C_ClearEmotionSlot::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ClearEmotionSlot, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'OtherPCEmoteMenu_C_ClearEmotionSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ClearEmotionSlot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'OtherPCEmoteMenu_C_ClearEmotionSlot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_ClearEmotionSlot, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'OtherPCEmoteMenu_C_ClearEmotionSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.SetRootVisible
// 0x0001 (0x0001 - 0x0000)
struct OtherPCEmoteMenu_C_SetRootVisible final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCEmoteMenu_C_SetRootVisible) == 0x000001, "Wrong alignment on OtherPCEmoteMenu_C_SetRootVisible");
static_assert(sizeof(OtherPCEmoteMenu_C_SetRootVisible) == 0x000001, "Wrong size on OtherPCEmoteMenu_C_SetRootVisible");
static_assert(offsetof(OtherPCEmoteMenu_C_SetRootVisible, InVisible) == 0x000000, "Member 'OtherPCEmoteMenu_C_SetRootVisible::InVisible' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Update Category
// 0x0030 (0x0030 - 0x0000)
struct OtherPCEmoteMenu_C_Update_Category final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C42[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 K2Node_DynamicCast_AsStamp_Category_Button;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C43[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C44[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCEmoteMenu_C_Update_Category) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_Update_Category");
static_assert(sizeof(OtherPCEmoteMenu_C_Update_Category) == 0x000030, "Wrong size on OtherPCEmoteMenu_C_Update_Category");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, Temp_int_Variable) == 0x000000, "Member 'OtherPCEmoteMenu_C_Update_Category::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'OtherPCEmoteMenu_C_Update_Category::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'OtherPCEmoteMenu_C_Update_Category::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'OtherPCEmoteMenu_C_Update_Category::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, K2Node_DynamicCast_AsStamp_Category_Button) == 0x000010, "Member 'OtherPCEmoteMenu_C_Update_Category::K2Node_DynamicCast_AsStamp_Category_Button' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'OtherPCEmoteMenu_C_Update_Category::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, CallFunc_GetChildrenCount_ReturnValue) == 0x00001C, "Member 'OtherPCEmoteMenu_C_Update_Category::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'OtherPCEmoteMenu_C_Update_Category::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'OtherPCEmoteMenu_C_Update_Category::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Update_Category, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'OtherPCEmoteMenu_C_Update_Category::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.GetPlayerCharacter
// 0x0020 (0x0020 - 0x0000)
struct OtherPCEmoteMenu_C_GetPlayerCharacter final
{
public:
	class ASBPlayerCharacter*                     ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C45[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCEmoteMenu_C_GetPlayerCharacter) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_GetPlayerCharacter");
static_assert(sizeof(OtherPCEmoteMenu_C_GetPlayerCharacter) == 0x000020, "Wrong size on OtherPCEmoteMenu_C_GetPlayerCharacter");
static_assert(offsetof(OtherPCEmoteMenu_C_GetPlayerCharacter, ReturnValue) == 0x000000, "Member 'OtherPCEmoteMenu_C_GetPlayerCharacter::ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_GetPlayerCharacter, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'OtherPCEmoteMenu_C_GetPlayerCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_GetPlayerCharacter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'OtherPCEmoteMenu_C_GetPlayerCharacter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_GetPlayerCharacter, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'OtherPCEmoteMenu_C_GetPlayerCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmoteIconEnable
// 0x0048 (0x0048 - 0x0000)
struct OtherPCEmoteMenu_C_UpdateEmoteIconEnable final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C46[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C47[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEmotion_OutEmotion;                    // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Enable_Emote_Icon_bIsEnable;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C48[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_UpdateEmoteIconEnable");
static_assert(sizeof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable) == 0x000048, "Wrong size on OtherPCEmoteMenu_C_UpdateEmoteIconEnable");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, Temp_int_Variable) == 0x000000, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x000018, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, CallFunc_GetEmotion_OutEmotion) == 0x000028, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::CallFunc_GetEmotion_OutEmotion' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, CallFunc_Conv_StringToName_ReturnValue) == 0x000038, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, CallFunc_Is_Enable_Emote_Icon_bIsEnable) == 0x000040, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::CallFunc_Is_Enable_Emote_Icon_bIsEnable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_UpdateEmoteIconEnable, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'OtherPCEmoteMenu_C_UpdateEmoteIconEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Is Enable Emote Icon
// 0x0020 (0x0020 - 0x0000)
struct OtherPCEmoteMenu_C_Is_Enable_Emote_Icon final
{
public:
	class FName                                   InputPin;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnable;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C49[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue;  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCEmoteMenu_C_Is_Enable_Emote_Icon) == 0x000008, "Wrong alignment on OtherPCEmoteMenu_C_Is_Enable_Emote_Icon");
static_assert(sizeof(OtherPCEmoteMenu_C_Is_Enable_Emote_Icon) == 0x000020, "Wrong size on OtherPCEmoteMenu_C_Is_Enable_Emote_Icon");
static_assert(offsetof(OtherPCEmoteMenu_C_Is_Enable_Emote_Icon, InputPin) == 0x000000, "Member 'OtherPCEmoteMenu_C_Is_Enable_Emote_Icon::InputPin' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Is_Enable_Emote_Icon, bIsEnable) == 0x000008, "Member 'OtherPCEmoteMenu_C_Is_Enable_Emote_Icon::bIsEnable' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Is_Enable_Emote_Icon, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000010, "Member 'OtherPCEmoteMenu_C_Is_Enable_Emote_Icon::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Is_Enable_Emote_Icon, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'OtherPCEmoteMenu_C_Is_Enable_Emote_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCEmoteMenu_C_Is_Enable_Emote_Icon, CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue) == 0x000019, "Member 'OtherPCEmoteMenu_C_Is_Enable_Emote_Icon::CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue' has a wrong offset!");

}

