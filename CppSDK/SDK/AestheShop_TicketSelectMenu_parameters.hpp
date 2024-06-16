#pragma once

 

// Package: AestheShop_TicketSelectMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnClose__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature final
{
public:
	bool                                          InIsCourseDecided;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B61[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InTicketTokenId;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InUseTicketNum;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature) == 0x000004, "Wrong alignment on AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature) == 0x00000C, "Wrong size on AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature, InIsCourseDecided) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature::InIsCourseDecided' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature, InTicketTokenId) == 0x000004, "Member 'AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature, InUseTicketNum) == 0x000008, "Member 'AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature::InUseTicketNum' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.ExecuteUbergraph_AestheShop_TicketSelectMenu
// 0x01F8 (0x01F8 - 0x0000)
struct AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCourseId_OutCourseId;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B62[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B63[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B64[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0090(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00A8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00D0(0x0028)()
	TDelegate<void(int32 InCourseId, int32 InTicketTokenId, int32 InHoldTicketTokenAmount)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B65[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B66[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAestheShop_TicketListItem_C*           K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item; // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B67[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAestheShop_TicketListItem_C*           K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item_1; // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B68[0x2];                                     // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InCourseId;                     // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InTicketTokenId;                // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InHoldTicketTokenAmount;        // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B69[0x2];                                     // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckIfCourseIsUsable_OutIsUsable;        // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B6A[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B6B[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBAestheShopComponent*                 CallFunc_GetAestheShopComponent_ReturnValue;       // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B6C[0x2];                                     // 0x019A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x019C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B6D[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B6E[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_3;            // 0x01B4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7B6F[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01E0(0x0018)()
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu) == 0x000008, "Wrong alignment on AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu) == 0x0001F8, "Wrong size on AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, EntryPoint) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, Temp_int_Variable) == 0x000018, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetCourseId_OutCourseId) == 0x00001C, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetCourseId_OutCourseId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_Event_IsDesignTime) == 0x000034, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_IsValid_ReturnValue) == 0x000035, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetChildrenCount_ReturnValue) == 0x000038, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000050, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CustomEvent_Result_1) == 0x000070, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000078, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_MakeStruct_SlateColor) == 0x0000A8, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_MakeStruct_SlateColor_1) == 0x0000D0, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F8, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, Temp_int_Variable_1) == 0x000108, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetChildAt_ReturnValue) == 0x000110, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetChildAt_ReturnValue_1) == 0x000118, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_IsValid_ReturnValue_2) == 0x000121, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item) == 0x000128, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item_1) == 0x000138, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_DynamicCast_bSuccess_1) == 0x000140, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000141, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x000144, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000148, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CustomEvent_InCourseId) == 0x00014C, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CustomEvent_InCourseId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CustomEvent_InTicketTokenId) == 0x000150, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CustomEvent_InTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CustomEvent_InHoldTicketTokenAmount) == 0x000154, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CustomEvent_InHoldTicketTokenAmount' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000158, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00015C, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00015D, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000160, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_CheckIfCourseIsUsable_OutIsUsable) == 0x000168, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_CheckIfCourseIsUsable_OutIsUsable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_DynamicCast_AsSBCreation_Character) == 0x000170, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_DynamicCast_bSuccess_2) == 0x000178, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetController_ReturnValue) == 0x000180, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetAestheShopComponent_ReturnValue) == 0x000188, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetAestheShopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000190, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_DynamicCast_bSuccess_3) == 0x000198, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_IsValid_ReturnValue_3) == 0x000199, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CustomEvent_RetCode) == 0x00019C, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001A0, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Create_ReturnValue) == 0x0001A8, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CustomEvent_Result) == 0x0001B0, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001B4, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Create_ReturnValue_1) == 0x0001C8, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001D0, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001E0, "Member 'AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.AdventureBoardError_Event
// 0x0001 (0x0001 - 0x0000)
struct AestheShop_TicketSelectMenu_C_AdventureBoardError_Event final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_AdventureBoardError_Event) == 0x000001, "Wrong alignment on AestheShop_TicketSelectMenu_C_AdventureBoardError_Event");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_AdventureBoardError_Event) == 0x000001, "Wrong size on AestheShop_TicketSelectMenu_C_AdventureBoardError_Event");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_AdventureBoardError_Event, Result) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_AdventureBoardError_Event::Result' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCheckStatus
// 0x0004 (0x0004 - 0x0000)
struct AestheShop_TicketSelectMenu_C_OnCheckStatus final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_OnCheckStatus) == 0x000004, "Wrong alignment on AestheShop_TicketSelectMenu_C_OnCheckStatus");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_OnCheckStatus) == 0x000004, "Wrong size on AestheShop_TicketSelectMenu_C_OnCheckStatus");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_OnCheckStatus, RetCode) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_OnCheckStatus::RetCode' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseListItemSelected����
// 0x000C (0x000C - 0x0000)
struct AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____ final
{
public:
	int32                                         InCourseId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTicketTokenId;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InHoldTicketTokenAmount;                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____) == 0x000004, "Wrong alignment on AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____) == 0x00000C, "Wrong size on AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____, InCourseId) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____::InCourseId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____, InTicketTokenId) == 0x000004, "Member 'AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____, InHoldTicketTokenAmount) == 0x000008, "Member 'AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____::InHoldTicketTokenAmount' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnEndLastConfirmDialog
// 0x0001 (0x0001 - 0x0000)
struct AestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog) == 0x000001, "Wrong alignment on AestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog) == 0x000001, "Wrong size on AestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog, Result) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog::Result' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AestheShop_TicketSelectMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_PreConstruct) == 0x000001, "Wrong alignment on AestheShop_TicketSelectMenu_C_PreConstruct");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_PreConstruct) == 0x000001, "Wrong size on AestheShop_TicketSelectMenu_C_PreConstruct");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Close
// 0x0098 (0x0098 - 0x0000)
struct AestheShop_TicketSelectMenu_C_Close final
{
public:
	int32                                         TmpUseTicketNum;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B70[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAestheShopCourseMasterData>  TmpCourseMasterDatas;                              // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B71[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCourseMasterData          CallFunc_Array_Get_Item;                           // 0x0028(0x0050)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B72[0x1];                                     // 0x007F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBAestheShopCourseMasterData>  CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue; // 0x0088(0x0010)(ReferenceParm)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_Close) == 0x000008, "Wrong alignment on AestheShop_TicketSelectMenu_C_Close");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_Close) == 0x000098, "Wrong size on AestheShop_TicketSelectMenu_C_Close");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, TmpUseTicketNum) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_Close::TmpUseTicketNum' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, TmpCourseMasterDatas) == 0x000008, "Member 'AestheShop_TicketSelectMenu_C_Close::TmpCourseMasterDatas' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, Temp_int_Array_Index_Variable) == 0x000018, "Member 'AestheShop_TicketSelectMenu_C_Close::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'AestheShop_TicketSelectMenu_C_Close::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'AestheShop_TicketSelectMenu_C_Close::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, CallFunc_Array_Get_Item) == 0x000028, "Member 'AestheShop_TicketSelectMenu_C_Close::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'AestheShop_TicketSelectMenu_C_Close::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'AestheShop_TicketSelectMenu_C_Close::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00007D, "Member 'AestheShop_TicketSelectMenu_C_Close::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, CallFunc_GetMasterDataManager_IsValid) == 0x00007E, "Member 'AestheShop_TicketSelectMenu_C_Close::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'AestheShop_TicketSelectMenu_C_Close::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_Close, CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue) == 0x000088, "Member 'AestheShop_TicketSelectMenu_C_Close::CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetListItemSelected
// 0x0048 (0x0048 - 0x0000)
struct AestheShop_TicketSelectMenu_C_SetListItemSelected final
{
public:
	int32                                         InTicketTokenId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsSelected;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B73[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAestheShop_TicketListItem_C*           TmpListItem;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTicketTokenId_OutTicketTokenId;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B74[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B75[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAestheShop_TicketListItem_C*           K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B76[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_SetListItemSelected) == 0x000008, "Wrong alignment on AestheShop_TicketSelectMenu_C_SetListItemSelected");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_SetListItemSelected) == 0x000048, "Wrong size on AestheShop_TicketSelectMenu_C_SetListItemSelected");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, InTicketTokenId) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, InIsSelected) == 0x000004, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::InIsSelected' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, TmpListItem) == 0x000008, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::TmpListItem' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, Temp_int_Variable) == 0x000010, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_GetTicketTokenId_OutTicketTokenId) == 0x000018, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_GetTicketTokenId_OutTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item) == 0x000030, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::K2Node_DynamicCast_AsAesthe_Shop_Ticket_List_Item' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_GetChildrenCount_ReturnValue) == 0x00003C, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_IsValid_ReturnValue_1) == 0x000044, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetListItemSelected, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000045, "Member 'AestheShop_TicketSelectMenu_C_SetListItemSelected::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CreateCourseItemList
// 0x0278 (0x0278 - 0x0000)
struct AestheShop_TicketSelectMenu_C_CreateCourseItemList final
{
public:
	class FString                                 LocalEventTermId;                                  // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalTokenId;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      LocalToken;                                        // 0x0014(0x000C)(Edit, BlueprintVisible, NoDestructor)
	TArray<struct FSBEventTermsData>              LocalTerms;                                        // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpHoldTicketNum;                                  // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpTicketTokenId;                                  // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCourseId;                                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpLoopIndex;                                      // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharacterToken>              TmpHoldTokens;                                     // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<struct FMasterToken>                   TmpTokenMasterDatas;                               // 0x0050(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBAestheShopCourseMasterData>  TmpCourseMasterDatas;                              // 0x0060(0x0010)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B77[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      CallFunc_Array_Get_Item;                           // 0x00A0(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B78[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B79[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventTermsData                      CallFunc_Array_Get_Item_1;                         // 0x00C0(0x0030)(NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B7A[0x2];                                     // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAestheShop_TicketListItem_C*           CallFunc_Create_ReturnValue;                       // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B7B[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventScheduler*                      CallFunc_GetEventScheduler_ReturnValue;            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B7C[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventTermsMasterData                CallFunc_GetMasterDataBP_OutMaster;                // 0x0130(0x0020)()
	bool                                          CallFunc_GetMasterDataBP_ReturnValue;              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B7D[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCourseMasterData          CallFunc_Array_Get_Item_2;                         // 0x0158(0x0050)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B7E[0x1];                                     // 0x01AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMasterToken>                   CallFunc_GetMasterTokenArray_ReturnValue;          // 0x01B0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B7F[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAestheShopCourseMasterData>  CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue; // 0x01C8(0x0010)(ReferenceParm)
	struct FSBAestheShopCourseMasterData          CallFunc_Array_Get_Item_3;                         // 0x01D8(0x0050)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetHoldTicketTokenAmount_OutIsValid;      // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B80[0x2];                                     // 0x022E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetHoldTicketTokenAmount_OutAmount;       // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B81[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterToken>              CallFunc_GetTokenList_ReturnValue;                 // 0x0240(0x0010)(ReferenceParm)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InCourseId, int32 InTicketTokenId, int32 InHoldTicketTokenAmount)> K2Node_CreateDelegate_OutputDelegate;              // 0x0258(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B82[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_CreateCourseItemList) == 0x000008, "Wrong alignment on AestheShop_TicketSelectMenu_C_CreateCourseItemList");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_CreateCourseItemList) == 0x000278, "Wrong size on AestheShop_TicketSelectMenu_C_CreateCourseItemList");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, LocalEventTermId) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::LocalEventTermId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, LocalTokenId) == 0x000010, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::LocalTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, LocalToken) == 0x000014, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::LocalToken' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, LocalTerms) == 0x000020, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::LocalTerms' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, TmpHoldTicketNum) == 0x000030, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::TmpHoldTicketNum' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, TmpTicketTokenId) == 0x000034, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::TmpTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, TmpCourseId) == 0x000038, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::TmpCourseId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, TmpLoopIndex) == 0x00003C, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::TmpLoopIndex' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, TmpHoldTokens) == 0x000040, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::TmpHoldTokens' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, TmpTokenMasterDatas) == 0x000050, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::TmpTokenMasterDatas' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, TmpCourseMasterDatas) == 0x000060, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::TmpCourseMasterDatas' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, TmpMasterDataManager) == 0x000070, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_int_Array_Index_Variable) == 0x000080, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_int_Loop_Counter_Variable_1) == 0x00008C, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000090, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_int_Loop_Counter_Variable_2) == 0x000094, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000098, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_int_Array_Index_Variable_1) == 0x00009C, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Length_ReturnValue_1) == 0x0000AC, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_bool_True_if_break_was_hit_Variable) == 0x0000B1, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Not_PreBool_ReturnValue) == 0x0000B2, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_IsEventTermActive_ReturnValue) == 0x0000B3, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000B4, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_int_Array_Index_Variable_2) == 0x0000B8, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Get_Item_1) == 0x0000C0, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_int_Variable) == 0x0000F0, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F4, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_bool_Variable) == 0x0000F5, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, K2Node_MakeStruct_Margin) == 0x0000F8, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetSBGameInstance_ReturnValue) == 0x000108, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Create_ReturnValue) == 0x000110, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_IsValid_ReturnValue) == 0x000118, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetEventScheduler_ReturnValue) == 0x000120, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetEventScheduler_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, Temp_int_Variable_1) == 0x000128, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_IsValid_ReturnValue_1) == 0x00012C, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetMasterDataBP_OutMaster) == 0x000130, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetMasterDataBP_OutMaster' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetMasterDataBP_ReturnValue) == 0x000150, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetMasterDataBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Get_Item_2) == 0x000158, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Length_ReturnValue_2) == 0x0001A8, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001AC, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001AD, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_BooleanAND_ReturnValue) == 0x0001AE, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetMasterTokenArray_ReturnValue) == 0x0001B0, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetMasterTokenArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001C0, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue) == 0x0001C8, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Get_Item_3) == 0x0001D8, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Length_ReturnValue_3) == 0x000228, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Less_IntInt_ReturnValue_2) == 0x00022C, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetHoldTicketTokenAmount_OutIsValid) == 0x00022D, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetHoldTicketTokenAmount_OutIsValid' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetHoldTicketTokenAmount_OutAmount) == 0x000230, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetHoldTicketTokenAmount_OutAmount' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, K2Node_Select_Default) == 0x000234, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_Array_Add_ReturnValue) == 0x000238, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetTokenList_ReturnValue) == 0x000240, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetTokenList_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_AddChild_ReturnValue) == 0x000250, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, K2Node_CreateDelegate_OutputDelegate) == 0x000258, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetMasterDataManager_IsValid) == 0x000268, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CreateCourseItemList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000270, "Member 'AestheShop_TicketSelectMenu_C_CreateCourseItemList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CheckIfCourseIsUsable
// 0x00B0 (0x00B0 - 0x0000)
struct AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable final
{
public:
	int32                                         InTicketTokenId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InHoldTicketNum;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsUsable;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B83[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAestheShopCourseMasterData>  TmpCourseMasterDatas;                              // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpHoldTicketNum;                                  // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpTicketTokenId;                                  // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B84[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCourseMasterData          CallFunc_Array_Get_Item;                           // 0x0038(0x0050)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B85[0x1];                                     // 0x008F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBAestheShopCourseMasterData>  CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue; // 0x0098(0x0010)(ReferenceParm)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable) == 0x000008, "Wrong alignment on AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable) == 0x0000B0, "Wrong size on AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, InTicketTokenId) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, InHoldTicketNum) == 0x000004, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::InHoldTicketNum' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, OutIsUsable) == 0x000008, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::OutIsUsable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, TmpCourseMasterDatas) == 0x000010, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::TmpCourseMasterDatas' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, TmpHoldTicketNum) == 0x000020, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::TmpHoldTicketNum' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, TmpTicketTokenId) == 0x000024, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::TmpTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, Temp_int_Array_Index_Variable) == 0x000028, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_Array_Get_Item) == 0x000038, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00008D, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_GetMasterDataManager_IsValid) == 0x00008E, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue) == 0x000098, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_BP_GetAestheShopCourseMasterDataArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable, CallFunc_BooleanAND_ReturnValue) == 0x0000A9, "Member 'AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetHoldTicketTokenAmount
// 0x0050 (0x0050 - 0x0000)
struct AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount final
{
public:
	TArray<struct FSBCharacterToken>              InHoldTicketTokens;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InTicketTokenId;                                   // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B86[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutAmount;                                         // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpTicketTokenId;                                  // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharacterToken>              TmpHoldTicketTokens;                               // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      CallFunc_Array_Get_Item;                           // 0x003C(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount) == 0x000008, "Wrong alignment on AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount) == 0x000050, "Wrong size on AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, InHoldTicketTokens) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::InHoldTicketTokens' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, InTicketTokenId) == 0x000010, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, OutIsValid) == 0x000014, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::OutIsValid' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, OutAmount) == 0x000018, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::OutAmount' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, TmpTicketTokenId) == 0x00001C, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::TmpTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, TmpHoldTicketTokens) == 0x000020, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::TmpHoldTicketTokens' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, Temp_int_Array_Index_Variable) == 0x000030, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, CallFunc_Array_Get_Item) == 0x00003C, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004D, "Member 'AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetupCourseDetail
// 0x0004 (0x0004 - 0x0000)
struct AestheShop_TicketSelectMenu_C_SetupCourseDetail final
{
public:
	int32                                         InCourseId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_SetupCourseDetail) == 0x000004, "Wrong alignment on AestheShop_TicketSelectMenu_C_SetupCourseDetail");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_SetupCourseDetail) == 0x000004, "Wrong size on AestheShop_TicketSelectMenu_C_SetupCourseDetail");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetupCourseDetail, InCourseId) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_SetupCourseDetail::InCourseId' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetCourseDetailVisibility
// 0x0005 (0x0005 - 0x0000)
struct AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility) == 0x000001, "Wrong alignment on AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility) == 0x000005, "Wrong size on AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility, Param_IsVisible) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility, Temp_bool_Variable) == 0x000001, "Member 'AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility, Temp_byte_Variable) == 0x000002, "Member 'AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility, K2Node_Select_Default) == 0x000004, "Member 'AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility::K2Node_Select_Default' has a wrong offset!");

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetTicketTokenNameTextId
// 0x00A0 (0x00A0 - 0x0000)
struct AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId final
{
public:
	TArray<struct FMasterToken>                   InTokenMasterDataArray;                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InTicketTokenId;                                   // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B87[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       OutTextId;                                         // 0x0018(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B88[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMasterToken>                   TmpTokenMasterDatas;                               // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpTicketTokenId;                                  // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterToken                           CallFunc_Array_Get_Item;                           // 0x0040(0x0058)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId) == 0x000008, "Wrong alignment on AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId");
static_assert(sizeof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId) == 0x0000A0, "Wrong size on AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, InTokenMasterDataArray) == 0x000000, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::InTokenMasterDataArray' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, InTicketTokenId) == 0x000010, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, OutIsValid) == 0x000014, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::OutIsValid' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, OutTextId) == 0x000018, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::OutTextId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, TmpTokenMasterDatas) == 0x000020, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::TmpTokenMasterDatas' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, TmpTicketTokenId) == 0x000030, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::TmpTicketTokenId' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, Temp_int_Array_Index_Variable) == 0x000034, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, CallFunc_Array_Get_Item) == 0x000040, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00009D, "Member 'AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

