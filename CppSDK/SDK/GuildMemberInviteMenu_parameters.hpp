#pragma once

 

// Package: GuildMemberInviteMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.ExecuteUbergraph_GuildMemberInviteMenu
// 0x0BD0 (0x0BD0 - 0x0000)
struct GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_839D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x0028(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_839E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData_1;  // 0x0030(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0428(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_839F[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0430(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A0[0x6];                                     // 0x043A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       K2Node_ComponentBoundEvent_Data_1;                 // 0x0440(0x00D8)()
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0518(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0528(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0530(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Request_GetGuildInviteMemberList_ReturnValue; // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A1[0x3];                                     // 0x0541(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0544(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0548(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A2[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuildMemberData>               CallFunc_GetGuildInviteMemberList_ReturnValue;     // 0x0558(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A3[0x3];                                     // 0x0569(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x056C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A4[0x7];                                     // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0578(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0588(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0598(0x0018)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x05B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x05B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A5[0x6];                                     // 0x05BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x05C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x05C8(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x05D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x05F0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0630(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0640(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0658(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0668(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x066C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A6[0x3];                                     // 0x066D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_3;               // 0x0670(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GetGuildInviteMemberList_ReturnValue_1; // 0x0678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A7[0x7];                                     // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       K2Node_ComponentBoundEvent_Data;                   // 0x0680(0x00D8)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0760(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0768(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0769(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A8[0x6];                                     // 0x076A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0770(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0B68(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83A9[0x4];                                     // 0x0B6C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x0B70(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0B78(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0B88(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0BA0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0BA8(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0BB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0BC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83AA[0x7];                                     // 0x0BC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_2;           // 0x0BC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu) == 0x000008, "Wrong alignment on GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu");
static_assert(sizeof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu) == 0x000BD0, "Wrong size on GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, EntryPoint) == 0x000000, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Create_ReturnValue) == 0x000008, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_bWasSuccessful_1) == 0x000028, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_PlayerProfileDetailMenuData_1) == 0x000030, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_PlayerProfileDetailMenuData_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_RetCode_3) == 0x000428, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetConcernedList_ReturnValue) == 0x000430, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000438, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000439, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_ComponentBoundEvent_Data_1) == 0x000440, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_ComponentBoundEvent_Data_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000518, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetGuildComp_ReturnValue) == 0x000528, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000530, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Request_GetGuildInviteMemberList_ReturnValue) == 0x000540, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Request_GetGuildInviteMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_RetCode_2) == 0x000544, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetGuildComp_ReturnValue_1) == 0x000548, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000550, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetGuildInviteMemberList_ReturnValue) == 0x000558, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetGuildInviteMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000568, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Array_Length_ReturnValue) == 0x00056C, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000570, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x000578, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000588, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000598, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Create_ReturnValue_1) == 0x0005B0, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_Result) == 0x0005B8, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0005B9, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetGuildComp_ReturnValue_2) == 0x0005C0, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x0005C8, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0005D8, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_MakeStruct_FormatArgumentData) == 0x0005F0, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_MakeArray_Array) == 0x000630, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Format_ReturnValue) == 0x000640, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x000658, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_RetCode_1) == 0x000668, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00066C, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetGuildComp_ReturnValue_3) == 0x000670, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetGuildComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Request_GetGuildInviteMemberList_ReturnValue_1) == 0x000678, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Request_GetGuildInviteMemberList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_ComponentBoundEvent_Data) == 0x000680, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000758, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000760, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_DynamicCast_bSuccess) == 0x000768, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_bWasSuccessful) == 0x000769, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000770, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CustomEvent_RetCode) == 0x000B68, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetConcernedList_ReturnValue_1) == 0x000B70, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x000B78, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000B88, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x000BA0, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x000BA8, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000BB8, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, K2Node_DynamicCast_bSuccess_1) == 0x000BC0, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu, CallFunc_GetConcernedList_ReturnValue_2) == 0x000BC8, "Member 'GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu::CallFunc_GetConcernedList_ReturnValue_2' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OpenReportUI_Event
// 0x0408 (0x0408 - 0x0000)
struct GuildMemberInviteMenu_C_OpenReportUI_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83AB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInviteMenu_C_OpenReportUI_Event) == 0x000008, "Wrong alignment on GuildMemberInviteMenu_C_OpenReportUI_Event");
static_assert(sizeof(GuildMemberInviteMenu_C_OpenReportUI_Event) == 0x000408, "Wrong size on GuildMemberInviteMenu_C_OpenReportUI_Event");
static_assert(offsetof(GuildMemberInviteMenu_C_OpenReportUI_Event, bWasSuccessful) == 0x000000, "Member 'GuildMemberInviteMenu_C_OpenReportUI_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_OpenReportUI_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildMemberInviteMenu_C_OpenReportUI_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_OpenReportUI_Event, RetCode) == 0x000400, "Member 'GuildMemberInviteMenu_C_OpenReportUI_Event::RetCode' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature");
static_assert(sizeof(GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature) == 0x0000D8, "Wrong size on GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature");
static_assert(offsetof(GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature, Data) == 0x000000, "Member 'GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature::Data' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGuildCancelInvitation_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event) == 0x000004, "Wrong alignment on GuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event");
static_assert(sizeof(GuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event) == 0x000004, "Wrong size on GuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event");
static_assert(offsetof(GuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event, RetCode) == 0x000000, "Member 'GuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event::RetCode' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnInviteCancel
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberInviteMenu_C_OnInviteCancel final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInviteMenu_C_OnInviteCancel) == 0x000001, "Wrong alignment on GuildMemberInviteMenu_C_OnInviteCancel");
static_assert(sizeof(GuildMemberInviteMenu_C_OnInviteCancel) == 0x000001, "Wrong size on GuildMemberInviteMenu_C_OnInviteCancel");
static_assert(offsetof(GuildMemberInviteMenu_C_OnInviteCancel, Result) == 0x000000, "Member 'GuildMemberInviteMenu_C_OnInviteCancel::Result' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedInviteMemberList_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event) == 0x000004, "Wrong alignment on GuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event");
static_assert(sizeof(GuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event) == 0x000004, "Wrong size on GuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event");
static_assert(offsetof(GuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event, RetCode) == 0x000000, "Member 'GuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event::RetCode' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature");
static_assert(sizeof(GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature) == 0x0000D8, "Wrong size on GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature");
static_assert(offsetof(GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature, Data) == 0x000000, "Member 'GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature::Data' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGetProfile_Event
// 0x0408 (0x0408 - 0x0000)
struct GuildMemberInviteMenu_C_OnCompletedGetProfile_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83AC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInviteMenu_C_OnCompletedGetProfile_Event) == 0x000008, "Wrong alignment on GuildMemberInviteMenu_C_OnCompletedGetProfile_Event");
static_assert(sizeof(GuildMemberInviteMenu_C_OnCompletedGetProfile_Event) == 0x000408, "Wrong size on GuildMemberInviteMenu_C_OnCompletedGetProfile_Event");
static_assert(offsetof(GuildMemberInviteMenu_C_OnCompletedGetProfile_Event, bWasSuccessful) == 0x000000, "Member 'GuildMemberInviteMenu_C_OnCompletedGetProfile_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_OnCompletedGetProfile_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildMemberInviteMenu_C_OnCompletedGetProfile_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_OnCompletedGetProfile_Event, RetCode) == 0x000400, "Member 'GuildMemberInviteMenu_C_OnCompletedGetProfile_Event::RetCode' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildMemberInviteMenu_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInviteMenu_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildMemberInviteMenu_C_GetGuildComp");
static_assert(sizeof(GuildMemberInviteMenu_C_GetGuildComp) == 0x000018, "Wrong size on GuildMemberInviteMenu_C_GetGuildComp");
static_assert(offsetof(GuildMemberInviteMenu_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildMemberInviteMenu_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildMemberInviteMenu_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildMemberInviteMenu_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.UpdateButtons
// 0x0038 (0x0038 - 0x0000)
struct GuildMemberInviteMenu_C_UpdateButtons final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83AD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0010(0x0020)()
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberInviteMenu_C_UpdateButtons) == 0x000008, "Wrong alignment on GuildMemberInviteMenu_C_UpdateButtons");
static_assert(sizeof(GuildMemberInviteMenu_C_UpdateButtons) == 0x000038, "Wrong size on GuildMemberInviteMenu_C_UpdateButtons");
static_assert(offsetof(GuildMemberInviteMenu_C_UpdateButtons, bSelected) == 0x000000, "Member 'GuildMemberInviteMenu_C_UpdateButtons::bSelected' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_UpdateButtons, CallFunc_GetSBPlayerState_ReturnValue) == 0x000008, "Member 'GuildMemberInviteMenu_C_UpdateButtons::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_UpdateButtons, CallFunc_GetPlatformInfo_ReturnValue) == 0x000010, "Member 'GuildMemberInviteMenu_C_UpdateButtons::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInviteMenu_C_UpdateButtons, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000030, "Member 'GuildMemberInviteMenu_C_UpdateButtons::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.CreateSwapBlocker
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberInviteMenu_C_CreateSwapBlocker final
{
public:
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInviteMenu_C_CreateSwapBlocker) == 0x000008, "Wrong alignment on GuildMemberInviteMenu_C_CreateSwapBlocker");
static_assert(sizeof(GuildMemberInviteMenu_C_CreateSwapBlocker) == 0x000008, "Wrong size on GuildMemberInviteMenu_C_CreateSwapBlocker");
static_assert(offsetof(GuildMemberInviteMenu_C_CreateSwapBlocker, CallFunc_Create_ReturnValue) == 0x000000, "Member 'GuildMemberInviteMenu_C_CreateSwapBlocker::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.DeleteSwapBlocker
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberInviteMenu_C_DeleteSwapBlocker final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberInviteMenu_C_DeleteSwapBlocker) == 0x000001, "Wrong alignment on GuildMemberInviteMenu_C_DeleteSwapBlocker");
static_assert(sizeof(GuildMemberInviteMenu_C_DeleteSwapBlocker) == 0x000001, "Wrong size on GuildMemberInviteMenu_C_DeleteSwapBlocker");
static_assert(offsetof(GuildMemberInviteMenu_C_DeleteSwapBlocker, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GuildMemberInviteMenu_C_DeleteSwapBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

