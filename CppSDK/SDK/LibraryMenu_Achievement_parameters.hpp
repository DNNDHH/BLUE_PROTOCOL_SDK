#pragma once

 

// Package: LibraryMenu_Achievement

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateNewIcon__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature final
{
public:
	int32                                         MenuButtonListId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature");
static_assert(sizeof(LibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature, MenuButtonListId) == 0x000000, "Member 'LibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature::MenuButtonListId' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ExecuteUbergraph_LibraryMenu_Achievement
// 0x0380 (0x0380 - 0x0000)
struct LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FFC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_3;                       // 0x0048(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FFD[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             K2Node_CustomEvent_AchievementList;                // 0x0050(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(bool Result, TArray<struct FSBAchievementInfo>& AchievementList)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetAchievementId_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FFE[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailListAttachmentAcceptedResult_C*    CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_2;                       // 0x00A0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FFF[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAchievementId_ReturnValue_1;           // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6000[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue;       // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6001[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x00D5(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6002[0x2];                                     // 0x00D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x00D8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0100(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0110(0x0018)()
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_9;            // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0139(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6003[0x2];                                     // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x013C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAchievementRewardData               K2Node_CustomEvent_AchievementRewardData;          // 0x0140(0x0070)(ConstParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6004[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAchievementId_ReturnValue_2;           // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        K2Node_ComponentBoundEvent_InMasterReward;         // 0x01BC(0x0014)(NoDestructor)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x01D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6005[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6006[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue_1;                     // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ItemIndex;              // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIndex_ReturnValue;                     // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0210(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0238(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0260(0x0028)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6007[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_AchievementListItem_C*     K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item; // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x02A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6008[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode, struct FSBAchievementRewardData& AchievementRewardData)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x02B0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x02C0(0x0010)(ZeroConstructor, NoDestructor)
	class UMailAttachmentsAcceptWindow_C*         CallFunc_Create_ReturnValue_2;                     // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue_1;                  // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidTokenOverflow_ReturnValue;           // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6009[0x5];                                     // 0x02DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x02E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMailData>                    K2Node_ComponentBoundEvent_outRewardsData;         // 0x02E8(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_ComponentBoundEvent_outRewardsIds;          // 0x02F8(0x0010)(ReferenceParm)
	TArray<struct FSBMailData>                    CallFunc_GetAchievementReward_outMailData;         // 0x0308(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsOverflow_ReturnValue;                   // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVanishment_ReturnValue;                 // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_600A[0x6];                                     // 0x031A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue_1;    // 0x0320(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_600B[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue_2;    // 0x0330(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_12;           // 0x0338(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue_3;    // 0x0348(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue_4;    // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRunRequiredDataInfoList_ReturnValue;    // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_600C[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue_5;    // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue_6;    // 0x0368(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharacterAchievementDataInfo> CallFunc_GetDataInfoListCache_ReturnValue;         // 0x0370(0x0010)(ReferenceParm)
};
static_assert(alignof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement");
static_assert(sizeof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement) == 0x000380, "Wrong size on LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, EntryPoint) == 0x000000, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementComponent_ReturnValue) == 0x000008, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_Result_3) == 0x000048, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_AchievementList) == 0x000050, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_AchievementList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_3) == 0x000060, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementId_ReturnValue) == 0x000070, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Create_ReturnValue) == 0x000078, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_5) == 0x000090, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_Result_2) == 0x0000A0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementId_ReturnValue_1) == 0x0000A4, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_ComponentBoundEvent_SelectedItem) == 0x0000A8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_ComponentBoundEvent_SelectionType) == 0x0000B8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetSelectedOptionIndex_ReturnValue) == 0x0000BC, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetSelectedOptionIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetValidValue_ReturnValue) == 0x0000C1, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000C4, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000D4, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_Result_1) == 0x0000D5, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_RetCode_2) == 0x0000D8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000DC, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000EC, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_RetCode_1) == 0x0000FC, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetSBRetMessage_ReturnValue) == 0x000100, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Conv_StringToText_ReturnValue) == 0x000110, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_9) == 0x000128, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_MakeLiteralByte_ReturnValue) == 0x000138, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_Result) == 0x000139, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_RetCode) == 0x00013C, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_AchievementRewardData) == 0x000140, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_AchievementRewardData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001B0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_BooleanAND_ReturnValue) == 0x0001B1, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Not_PreBool_ReturnValue) == 0x0001B2, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001B3, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_IsValid_ReturnValue) == 0x0001B4, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementId_ReturnValue_2) == 0x0001B8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_ComponentBoundEvent_InMasterReward) == 0x0001BC, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_ComponentBoundEvent_InMasterReward' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAllChildren_ReturnValue) == 0x0001D0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001E0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Array_Length_ReturnValue) == 0x0001E4, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Less_IntInt_ReturnValue) == 0x0001E8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetOwningPlayer_ReturnValue) == 0x0001F0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Create_ReturnValue_1) == 0x0001F8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CustomEvent_Sender) == 0x000200, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_ComponentBoundEvent_ItemIndex) == 0x000208, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_ComponentBoundEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetIndex_ReturnValue) == 0x00020C, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_MakeStruct_SlateColor) == 0x000210, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_MakeStruct_SlateColor_1) == 0x000238, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_MakeStruct_SlateColor_2) == 0x000260, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, Temp_int_Array_Index_Variable) == 0x000288, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Array_Get_Item) == 0x000290, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item) == 0x000298, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_DynamicCast_bSuccess) == 0x0002A0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002A1, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_IsValid_ReturnValue_1) == 0x0002A2, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetUIManager_IsValid) == 0x0002A3, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetUIManager_ReturnValue) == 0x0002A8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_10) == 0x0002B0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_11) == 0x0002C0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_Create_ReturnValue_2) == 0x0002D0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_IsChecked_ReturnValue) == 0x0002D8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_IsChecked_ReturnValue_1) == 0x0002D9, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_IsChecked_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_ValidTokenOverflow_ReturnValue) == 0x0002DA, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_ValidTokenOverflow_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_SBUtcNow_ReturnValue) == 0x0002E0, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_ComponentBoundEvent_outRewardsData) == 0x0002E8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_ComponentBoundEvent_outRewardsData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_ComponentBoundEvent_outRewardsIds) == 0x0002F8, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_ComponentBoundEvent_outRewardsIds' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementReward_outMailData) == 0x000308, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementReward_outMailData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_IsOverflow_ReturnValue) == 0x000318, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_IsOverflow_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_IsVanishment_ReturnValue) == 0x000319, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_IsVanishment_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementComponent_ReturnValue_1) == 0x000320, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_BooleanOR_ReturnValue) == 0x000328, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementComponent_ReturnValue_2) == 0x000330, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, K2Node_CreateDelegate_OutputDelegate_12) == 0x000338, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementComponent_ReturnValue_3) == 0x000348, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementComponent_ReturnValue_4) == 0x000350, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_IsRunRequiredDataInfoList_ReturnValue) == 0x000358, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_IsRunRequiredDataInfoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementComponent_ReturnValue_5) == 0x000360, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementComponent_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetAchievementComponent_ReturnValue_6) == 0x000368, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetAchievementComponent_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement, CallFunc_GetDataInfoListCache_ReturnValue) == 0x000370, "Member 'LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement::CallFunc_GetDataInfoListCache_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature final
{
public:
	TArray<struct FSBMailData>                    OutRewardsData;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 OutRewardsIds;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature");
static_assert(sizeof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature) == 0x000020, "Wrong size on LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature");
static_assert(offsetof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature, OutRewardsData) == 0x000000, "Member 'LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature::OutRewardsData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature, OutRewardsIds) == 0x000010, "Member 'LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature::OutRewardsIds' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnCloseDetailMenu
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Achievement_C_OnCloseDetailMenu final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_OnCloseDetailMenu) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_OnCloseDetailMenu");
static_assert(sizeof(LibraryMenu_Achievement_C_OnCloseDetailMenu) == 0x000008, "Wrong size on LibraryMenu_Achievement_C_OnCloseDetailMenu");
static_assert(offsetof(LibraryMenu_Achievement_C_OnCloseDetailMenu, Sender) == 0x000000, "Member 'LibraryMenu_Achievement_C_OnCloseDetailMenu::Sender' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature
// 0x0014 (0x0014 - 0x0000)
struct LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature final
{
public:
	struct FSBMasterReward                        InMasterReward;                                    // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature");
static_assert(sizeof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature) == 0x000014, "Wrong size on LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature");
static_assert(offsetof(LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature, InMasterReward) == 0x000000, "Member 'LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature::InMasterReward' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetAchievementRewardsDelegate_Event
// 0x0078 (0x0078 - 0x0000)
struct LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_600D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAchievementRewardData               AchievementRewardData;                             // 0x0008(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event");
static_assert(sizeof(LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event) == 0x000078, "Wrong size on LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event");
static_assert(offsetof(LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event, Result) == 0x000000, "Member 'LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event, RetCode) == 0x000004, "Member 'LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event::RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event, AchievementRewardData) == 0x000008, "Member 'LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event::AchievementRewardData' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CallErrorMessage
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Achievement_C_CallErrorMessage final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_CallErrorMessage) == 0x000004, "Wrong alignment on LibraryMenu_Achievement_C_CallErrorMessage");
static_assert(sizeof(LibraryMenu_Achievement_C_CallErrorMessage) == 0x000004, "Wrong size on LibraryMenu_Achievement_C_CallErrorMessage");
static_assert(offsetof(LibraryMenu_Achievement_C_CallErrorMessage, RetCode) == 0x000000, "Member 'LibraryMenu_Achievement_C_CallErrorMessage::RetCode' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDataDelegate_Event
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_600E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event) == 0x000004, "Wrong alignment on LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event");
static_assert(sizeof(LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event) == 0x000008, "Wrong size on LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event");
static_assert(offsetof(LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event, Result) == 0x000000, "Member 'LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event, RetCode) == 0x000004, "Member 'LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event::RetCode' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnSaveAchievementSelectedDelegate_Event
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event) == 0x000001, "Wrong alignment on LibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event");
static_assert(sizeof(LibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event) == 0x000001, "Wrong size on LibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event");
static_assert(offsetof(LibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event, Result) == 0x000000, "Member 'LibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event::Result' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDelegate
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Achievement_C_OnLoadAchievementDelegate final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_600F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             AchievementList;                                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LibraryMenu_Achievement_C_OnLoadAchievementDelegate) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_OnLoadAchievementDelegate");
static_assert(sizeof(LibraryMenu_Achievement_C_OnLoadAchievementDelegate) == 0x000018, "Wrong size on LibraryMenu_Achievement_C_OnLoadAchievementDelegate");
static_assert(offsetof(LibraryMenu_Achievement_C_OnLoadAchievementDelegate, Result) == 0x000000, "Member 'LibraryMenu_Achievement_C_OnLoadAchievementDelegate::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_OnLoadAchievementDelegate, AchievementList) == 0x000008, "Member 'LibraryMenu_Achievement_C_OnLoadAchievementDelegate::AchievementList' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize
// 0x0058 (0x0058 - 0x0000)
struct LibraryMenu_Achievement_C_Initialize final
{
public:
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6010[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6011[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6012[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6013[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_Initialize) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_Initialize");
static_assert(sizeof(LibraryMenu_Achievement_C_Initialize) == 0x000058, "Wrong size on LibraryMenu_Achievement_C_Initialize");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_MakeLiteralInt_ReturnValue) == 0x000000, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, Temp_int_Variable) == 0x000004, "Member 'LibraryMenu_Achievement_C_Initialize::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, Temp_int_Variable_1) == 0x000008, "Member 'LibraryMenu_Achievement_C_Initialize::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000024, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Conv_StringToName_ReturnValue) == 0x000038, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000048, "Member 'LibraryMenu_Achievement_C_Initialize::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize_RankProgress
// 0x01D0 (0x01D0 - 0x0000)
struct LibraryMenu_Achievement_C_Initialize_RankProgress final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CategoryId;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_CategoryId;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPossession;                                      // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6014[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 RankProgressGetCount;                              // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class ULibraryMenu_AchievementProgressIcon_C*> RankProgressList;                                  // 0x0020(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          IsCategorySet;                                     // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6015[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CheckLargeCategoryId;                              // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6016[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6017[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6018[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	struct FSBAchievementLargeCategoryInfo        K2Node_MakeStruct_SBAchievementLargeCategoryInfo;  // 0x0080(0x0018)()
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6019[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_AchievementProgressIcon_C* CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_601A[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULibraryMenu_AchievementProgressIcon_C*> K2Node_MakeArray_Array_1;                          // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Variable_1;                               // 0x00D0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_601B[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_601C[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAchievementLargeCategoryInfo        CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_601D[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterDataByNoId_IsExists;  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_601E[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterDataByNoId_ReturnValue; // 0x0128(0x0078)()
	int32                                         CallFunc_GetAchievementNum_ReturnValue;            // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementPossession_NewParam;         // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_601F[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        CallFunc_GetCharacterAchievementData_Data;         // 0x01B0(0x0018)(NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_Initialize_RankProgress) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_Initialize_RankProgress");
static_assert(sizeof(LibraryMenu_Achievement_C_Initialize_RankProgress) == 0x0001D0, "Wrong size on LibraryMenu_Achievement_C_Initialize_RankProgress");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Rank) == 0x000000, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Rank' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, M_CategoryId) == 0x000004, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::M_CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, L_CategoryId) == 0x000008, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::L_CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, IsPossession) == 0x00000C, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::IsPossession' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, RankProgressGetCount) == 0x000010, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::RankProgressGetCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, RankProgressList) == 0x000020, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::RankProgressList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, IsCategorySet) == 0x000030, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::IsCategorySet' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CheckLargeCategoryId) == 0x000034, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CheckLargeCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_int_Array_Index_Variable) == 0x000038, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_int_Loop_Counter_Variable_2) == 0x00004C, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Add_IntInt_ReturnValue_2) == 0x000050, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_bool_True_if_break_was_hit_Variable) == 0x000054, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_int_Array_Index_Variable_1) == 0x000058, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Not_PreBool_ReturnValue) == 0x00005C, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_int_Array_Index_Variable_2) == 0x000060, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_int_Variable) == 0x000064, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Add_IntInt_ReturnValue_3) == 0x000068, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, K2Node_MakeArray_Array) == 0x000070, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, K2Node_MakeStruct_SBAchievementLargeCategoryInfo) == 0x000080, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::K2Node_MakeStruct_SBAchievementLargeCategoryInfo' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_AddUnique_ReturnValue) == 0x000098, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Get_Item) == 0x00009C, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000A0, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000BC, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, K2Node_MakeArray_Array_1) == 0x0000C0, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, Temp_int_Variable_1) == 0x0000D0, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Length_ReturnValue_2) == 0x0000D4, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Add_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000DC, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Add_ReturnValue_1) == 0x0000E0, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Length_ReturnValue_3) == 0x000100, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Find_ReturnValue) == 0x000104, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Less_IntInt_ReturnValue_3) == 0x000108, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000109, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_BooleanAND_ReturnValue) == 0x00010A, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00010B, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Array_Length_ReturnValue_4) == 0x00010C, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000110, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_GetMasterDataManager_IsValid) == 0x000111, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_GetMasterDataManager_ReturnValue) == 0x000118, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_GetAchievementMasterDataByNoId_IsExists) == 0x000120, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_GetAchievementMasterDataByNoId_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_GetAchievementMasterDataByNoId_ReturnValue) == 0x000128, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_GetAchievementMasterDataByNoId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_GetAchievementNum_ReturnValue) == 0x0001A0, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_GetAchievementNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001A4, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_IsAchievementPossession_NewParam) == 0x0001A8, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_IsAchievementPossession_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001A9, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_GetCharacterAchievementData_Data) == 0x0001B0, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_GetCharacterAchievementData_Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Initialize_RankProgress, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0001C8, "Member 'LibraryMenu_Achievement_C_Initialize_RankProgress::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Create Category List
// 0x02A0 (0x02A0 - 0x0000)
struct LibraryMenu_Achievement_C_Create_Category_List final
{
public:
	int32                                         M_CategoryId;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_CategoryId;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckedCategoryID;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectLargeCategoryId;                             // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 EnabledMediumCategoryList;                         // 0x0010(0x0010)(Edit, BlueprintVisible)
	class FString                                 Text;                                              // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TextId;                                            // 0x0034(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6020[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6021[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0050(0x0018)()
	class FString                                 CallFunc_GetGroupName_ReturnValue;                 // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLargeCategoryName_ReturnValue;         // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6022[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6023[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue;      // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAchievementSelectCategory           CallFunc_GetAchievementCategory_ReturnValue;       // 0x00D0(0x000C)(NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6024[0x2];                                     // 0x00DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00E0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0108(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6025[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList; // 0x0148(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetIndex_ReturnValue;                     // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6026[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6027[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0178(0x0018)()
	bool                                          CallFunc_GetAchievementMasterDataByNoId_IsExists;  // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6028[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterDataByNoId_ReturnValue; // 0x0198(0x0078)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;          // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementPossession_NewParam;         // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6029[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0234(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_602A[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRead_ReturnValue;                       // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_602B[0x6];                                     // 0x0252(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        CallFunc_GetCharacterAchievementData_Data;         // 0x0258(0x0018)(NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_602C[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievementNum_ReturnValue;            // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_602D[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_Create_Category_List) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_Create_Category_List");
static_assert(sizeof(LibraryMenu_Achievement_C_Create_Category_List) == 0x0002A0, "Wrong size on LibraryMenu_Achievement_C_Create_Category_List");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, M_CategoryId) == 0x000000, "Member 'LibraryMenu_Achievement_C_Create_Category_List::M_CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, L_CategoryId) == 0x000004, "Member 'LibraryMenu_Achievement_C_Create_Category_List::L_CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CheckedCategoryID) == 0x000008, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CheckedCategoryID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, SelectLargeCategoryId) == 0x00000C, "Member 'LibraryMenu_Achievement_C_Create_Category_List::SelectLargeCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, EnabledMediumCategoryList) == 0x000010, "Member 'LibraryMenu_Achievement_C_Create_Category_List::EnabledMediumCategoryList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, Text) == 0x000020, "Member 'LibraryMenu_Achievement_C_Create_Category_List::Text' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, Count) == 0x000030, "Member 'LibraryMenu_Achievement_C_Create_Category_List::Count' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, TextId) == 0x000034, "Member 'LibraryMenu_Achievement_C_Create_Category_List::TextId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, Temp_bool_Variable) == 0x00003C, "Member 'LibraryMenu_Achievement_C_Create_Category_List::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, Temp_int_Variable) == 0x000040, "Member 'LibraryMenu_Achievement_C_Create_Category_List::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Not_PreBool_ReturnValue) == 0x000048, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, Temp_int_Variable_1) == 0x00004C, "Member 'LibraryMenu_Achievement_C_Create_Category_List::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_IntToText_ReturnValue) == 0x000050, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetGroupName_ReturnValue) == 0x000068, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetGroupName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_TextToString_ReturnValue) == 0x000078, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetLargeCategoryName_ReturnValue) == 0x000088, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetLargeCategoryName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000B0, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C0, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C4, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, Temp_bool_Variable_1) == 0x0000C5, "Member 'LibraryMenu_Achievement_C_Create_Category_List::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetAchievementComponent_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetAchievementCategory_ReturnValue) == 0x0000D0, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetAchievementCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000DC, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_BooleanAND_ReturnValue) == 0x0000DD, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000E0, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000F8, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000108, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_TextToString_ReturnValue_2) == 0x000120, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000130, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_StringToInt_ReturnValue) == 0x000140, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList) == 0x000148, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetIndex_ReturnValue) == 0x000158, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00015C, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Array_Add_ReturnValue) == 0x000160, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, Temp_int_Variable_2) == 0x000164, "Member 'LibraryMenu_Achievement_C_Create_Category_List::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetMasterDataManager_IsValid) == 0x000168, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetMasterDataManager_ReturnValue) == 0x000170, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000178, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetAchievementMasterDataByNoId_IsExists) == 0x000190, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetAchievementMasterDataByNoId_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetAchievementMasterDataByNoId_ReturnValue) == 0x000198, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetAchievementMasterDataByNoId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_TextToString_ReturnValue_3) == 0x000210, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_TextToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000220, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_IsAchievementPossession_NewParam) == 0x000230, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_IsAchievementPossession_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_StringToName_ReturnValue) == 0x000234, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Not_PreBool_ReturnValue_2) == 0x00023C, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000240, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_BooleanOR_ReturnValue) == 0x000250, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_IsRead_ReturnValue) == 0x000251, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_IsRead_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetCharacterAchievementData_Data) == 0x000258, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetCharacterAchievementData_Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000270, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000280, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Conv_StringToInt_ReturnValue_1) == 0x000284, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Conv_StringToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_GetAchievementNum_ReturnValue) == 0x000288, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_GetAchievementNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Subtract_IntInt_ReturnValue) == 0x00028C, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000290, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_Add_IntInt_ReturnValue_2) == 0x000294, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000298, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_BooleanAND_ReturnValue_1) == 0x000299, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Create_Category_List, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x00029A, "Member 'LibraryMenu_Achievement_C_Create_Category_List::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CreateItemList
// 0x0210 (0x0210 - 0x0000)
struct LibraryMenu_Achievement_C_CreateItemList final
{
public:
	int32                                         InSelectId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_602E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ReadAchievementIdList;                             // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Count;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCategoryID_outLargeCategoryId;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCategoryID_outMediumCategoryId;        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_602F[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6030[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_AchievementListItem_C*     CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievementId_ReturnValue;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6031[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList; // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6032[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6033[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsChecked, int32 ListIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAchievementMasterData                 CallFunc_Array_Get_Item;                           // 0x0080(0x0078)()
	bool                                          CallFunc_CheckLimitedTime_Result;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLimitedTime_outValue;                  // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6034[0x5];                                     // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        CallFunc_GetCharacterAchievementData_Data;         // 0x0100(0x0018)(NoDestructor)
	bool                                          CallFunc_IsRead_ReturnValue;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6035[0x1];                                     // 0x011B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6036[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetAchievementMasterDataByNoId_IsExists;  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6037[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterDataByNoId_ReturnValue; // 0x0148(0x0078)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCategory_Result;                     // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAchievementPossession_NewParam;         // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6038[0x1];                                     // 0x01C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        CallFunc_GetCharacterAchievementData_Data_1;       // 0x01C8(0x0018)(NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6039[0x1];                                     // 0x01E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAchievementNum_ReturnValue;            // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_603A[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_603B[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_CreateItemList) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_CreateItemList");
static_assert(sizeof(LibraryMenu_Achievement_C_CreateItemList) == 0x000210, "Wrong size on LibraryMenu_Achievement_C_CreateItemList");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, InSelectId) == 0x000000, "Member 'LibraryMenu_Achievement_C_CreateItemList::InSelectId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, ReadAchievementIdList) == 0x000008, "Member 'LibraryMenu_Achievement_C_CreateItemList::ReadAchievementIdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Count) == 0x000018, "Member 'LibraryMenu_Achievement_C_CreateItemList::Count' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'LibraryMenu_Achievement_C_CreateItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetCategoryID_outLargeCategoryId) == 0x000020, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetCategoryID_outLargeCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetCategoryID_outMediumCategoryId) == 0x000024, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetCategoryID_outMediumCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Temp_bool_Variable) == 0x000028, "Member 'LibraryMenu_Achievement_C_CreateItemList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Temp_int_Variable) == 0x00002C, "Member 'LibraryMenu_Achievement_C_CreateItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Temp_bool_True_if_break_was_hit_Variable) == 0x000034, "Member 'LibraryMenu_Achievement_C_CreateItemList::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Not_PreBool_ReturnValue) == 0x000035, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Create_ReturnValue) == 0x000038, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetAchievementId_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetAchievementId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Temp_bool_Variable_1) == 0x000044, "Member 'LibraryMenu_Achievement_C_CreateItemList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList) == 0x000048, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'LibraryMenu_Achievement_C_CreateItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Temp_int_Variable_1) == 0x000074, "Member 'LibraryMenu_Achievement_C_CreateItemList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000078, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Array_Get_Item) == 0x000080, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_CheckLimitedTime_Result) == 0x0000F8, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_CheckLimitedTime_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_SetLimitedTime_outValue) == 0x0000F9, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_SetLimitedTime_outValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000FA, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetCharacterAchievementData_Data) == 0x000100, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetCharacterAchievementData_Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_IsRead_ReturnValue) == 0x000118, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_IsRead_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000119, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Not_PreBool_ReturnValue_1) == 0x00011A, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Array_Length_ReturnValue_1) == 0x00011C, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetMasterDataManager_IsValid) == 0x000120, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000128, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000130, "Member 'LibraryMenu_Achievement_C_CreateItemList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetAchievementMasterDataByNoId_IsExists) == 0x000140, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetAchievementMasterDataByNoId_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetAchievementMasterDataByNoId_ReturnValue) == 0x000148, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetAchievementMasterDataByNoId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Array_Add_ReturnValue) == 0x0001C0, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_CheckCategory_Result) == 0x0001C4, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_CheckCategory_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_IsAchievementPossession_NewParam) == 0x0001C5, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_IsAchievementPossession_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001C6, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetCharacterAchievementData_Data_1) == 0x0001C8, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetCharacterAchievementData_Data_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_BooleanOR_ReturnValue) == 0x0001E0, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, K2Node_Select_Default) == 0x0001E1, "Member 'LibraryMenu_Achievement_C_CreateItemList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001E2, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_GetAchievementNum_ReturnValue) == 0x0001E4, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_GetAchievementNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001E8, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001EC, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Temp_int_Variable_2) == 0x0001F0, "Member 'LibraryMenu_Achievement_C_CreateItemList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001F4, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, K2Node_Select_Default_1) == 0x0001F8, "Member 'LibraryMenu_Achievement_C_CreateItemList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, Temp_int_Loop_Counter_Variable) == 0x0001FC, "Member 'LibraryMenu_Achievement_C_CreateItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Less_IntInt_ReturnValue) == 0x000200, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000204, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CreateItemList, CallFunc_BooleanAND_ReturnValue) == 0x000208, "Member 'LibraryMenu_Achievement_C_CreateItemList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ClickListItem
// 0x00E0 (0x00E0 - 0x0000)
struct LibraryMenu_Achievement_C_ClickListItem final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUpdateNewIcon;                                   // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_603C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_603D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList; // 0x0030(0x0010)(ReferenceParm)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_603E[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_Array_Get_Item;                           // 0x0048(0x0078)()
	struct FSBCharacterAchievementDataInfo        CallFunc_GetCharacterAchievementData_Data;         // 0x00C0(0x0018)(NoDestructor)
	bool                                          CallFunc_IsRead_ReturnValue;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_ClickListItem) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_ClickListItem");
static_assert(sizeof(LibraryMenu_Achievement_C_ClickListItem) == 0x0000E0, "Wrong size on LibraryMenu_Achievement_C_ClickListItem");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, ListIndex) == 0x000000, "Member 'LibraryMenu_Achievement_C_ClickListItem::ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, IsUpdateNewIcon) == 0x000004, "Member 'LibraryMenu_Achievement_C_ClickListItem::IsUpdateNewIcon' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_GetPlayerId_ReturnValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_GetLibrarySaveManager_IsValid) == 0x000020, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList) == 0x000030, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_Get_Read_Achievement_Id_List_ReadAchievementIdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_SaveLibraryData_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_Array_Get_Item) == 0x000048, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_GetCharacterAchievementData_Data) == 0x0000C0, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_GetCharacterAchievementData_Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_ClickListItem, CallFunc_IsRead_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_Achievement_C_ClickListItem::CallFunc_IsRead_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievementId
// 0x0098 (0x0098 - 0x0000)
struct LibraryMenu_Achievement_C_SetAchievementId final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_603F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ListIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6040[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAchievementMasterData                 CallFunc_Array_Get_Item;                           // 0x0018(0x0078)()
	int32                                         K2Node_Select_Default;                             // 0x0090(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_SetAchievementId) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_SetAchievementId");
static_assert(sizeof(LibraryMenu_Achievement_C_SetAchievementId) == 0x000098, "Wrong size on LibraryMenu_Achievement_C_SetAchievementId");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievementId, IsChecked) == 0x000000, "Member 'LibraryMenu_Achievement_C_SetAchievementId::IsChecked' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievementId, ListIndex) == 0x000004, "Member 'LibraryMenu_Achievement_C_SetAchievementId::ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievementId, Temp_bool_Variable) == 0x000008, "Member 'LibraryMenu_Achievement_C_SetAchievementId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievementId, Temp_int_Variable) == 0x00000C, "Member 'LibraryMenu_Achievement_C_SetAchievementId::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievementId, CallFunc_GetAchievementComponent_ReturnValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_SetAchievementId::CallFunc_GetAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievementId, CallFunc_Array_Get_Item) == 0x000018, "Member 'LibraryMenu_Achievement_C_SetAchievementId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievementId, K2Node_Select_Default) == 0x000090, "Member 'LibraryMenu_Achievement_C_SetAchievementId::K2Node_Select_Default' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Get Read Achievement Id List
// 0x0258 (0x0258 - 0x0000)
struct LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List final
{
public:
	TArray<int32>                                 ReadAchievementIdList;                             // 0x0000(0x0010)(Parm, OutParm)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6041[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetReadAchievementIdList_ReturnValue;     // 0x0030(0x0010)(ReferenceParm)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0040(0x0218)()
};
static_assert(alignof(LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List");
static_assert(sizeof(LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List) == 0x000258, "Wrong size on LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List");
static_assert(offsetof(LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List, ReadAchievementIdList) == 0x000000, "Member 'LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List::ReadAchievementIdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List, CallFunc_GetPlayerId_ReturnValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List, CallFunc_GetLibrarySaveManager_IsValid) == 0x000020, "Member 'LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List, CallFunc_GetReadAchievementIdList_ReturnValue) == 0x000030, "Member 'LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List::CallFunc_GetReadAchievementIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List, CallFunc_LoadLibraryData_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateSelectCategoryNewIcon
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon final
{
public:
	bool                                          CallFunc_CheckItemListNewIcon_Result;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon) == 0x000001, "Wrong alignment on LibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon");
static_assert(sizeof(LibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon) == 0x000001, "Wrong size on LibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon, CallFunc_CheckItemListNewIcon_Result) == 0x000000, "Member 'LibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon::CallFunc_CheckItemListNewIcon_Result' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckCategory
// 0x0080 (0x0080 - 0x0000)
struct LibraryMenu_Achievement_C_CheckCategory final
{
public:
	struct FAchievementMasterData                 MasterData;                                        // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Result;                                            // 0x0078(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_CheckCategory) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_CheckCategory");
static_assert(sizeof(LibraryMenu_Achievement_C_CheckCategory) == 0x000080, "Wrong size on LibraryMenu_Achievement_C_CheckCategory");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckCategory, MasterData) == 0x000000, "Member 'LibraryMenu_Achievement_C_CheckCategory::MasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckCategory, Result) == 0x000078, "Member 'LibraryMenu_Achievement_C_CheckCategory::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckCategory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000079, "Member 'LibraryMenu_Achievement_C_CheckCategory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckCategory, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00007A, "Member 'LibraryMenu_Achievement_C_CheckCategory::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckCategory, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00007B, "Member 'LibraryMenu_Achievement_C_CheckCategory::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.On_ComboBox_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0");
static_assert(sizeof(LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0) == 0x000038, "Wrong size on LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0");
static_assert(offsetof(LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0, Item) == 0x000000, "Member 'LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCharacterAchievementData
// 0x0080 (0x0080 - 0x0000)
struct LibraryMenu_Achievement_C_GetCharacterAchievementData final
{
public:
	int32                                         AchievementId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6042[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        Data;                                              // 0x0008(0x0018)(Parm, OutParm, NoDestructor)
	int32                                         Idx;                                               // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6043[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterAchievementDataInfo        K2Node_MakeStruct_SBCharacterAchievementDataInfo;  // 0x0030(0x0018)(NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6044[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterAchievementDataInfo        CallFunc_FindCharacterAchievementData_ReturnValue; // 0x0060(0x0018)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_GetCharacterAchievementData) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_GetCharacterAchievementData");
static_assert(sizeof(LibraryMenu_Achievement_C_GetCharacterAchievementData) == 0x000080, "Wrong size on LibraryMenu_Achievement_C_GetCharacterAchievementData");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, AchievementId) == 0x000000, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::AchievementId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, Data) == 0x000008, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, Idx) == 0x000020, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::Idx' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, K2Node_MakeStruct_SBCharacterAchievementDataInfo) == 0x000030, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::K2Node_MakeStruct_SBCharacterAchievementDataInfo' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000048, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000058, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, CallFunc_FindCharacterAchievementData_ReturnValue) == 0x000060, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::CallFunc_FindCharacterAchievementData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCharacterAchievementData, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'LibraryMenu_Achievement_C_GetCharacterAchievementData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievedDate
// 0x0068 (0x0068 - 0x0000)
struct LibraryMenu_Achievement_C_SetAchievedDate final
{
public:
	int32                                         AchievementId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6045[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              InDateTime;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                         AchievementDataListIndex;                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6046[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6047[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6048[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        CallFunc_Array_Get_Item;                           // 0x0030(0x0018)(NoDestructor)
	struct FSBCharacterAchievementDataInfo        CallFunc_Array_Get_Item_1;                         // 0x0048(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_SetAchievedDate) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_SetAchievedDate");
static_assert(sizeof(LibraryMenu_Achievement_C_SetAchievedDate) == 0x000068, "Wrong size on LibraryMenu_Achievement_C_SetAchievedDate");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, AchievementId) == 0x000000, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::AchievementId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, InDateTime) == 0x000008, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::InDateTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, AchievementDataListIndex) == 0x000010, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::AchievementDataListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, Temp_int_Array_Index_Variable) == 0x000018, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_Not_PreBool_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_Array_Get_Item) == 0x000030, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000064, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_Less_IntInt_ReturnValue) == 0x000065, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetAchievedDate, CallFunc_BooleanAND_ReturnValue) == 0x000066, "Member 'LibraryMenu_Achievement_C_SetAchievedDate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetGroupName
// 0x0060 (0x0060 - 0x0000)
struct LibraryMenu_Achievement_C_GetGroupName final
{
public:
	int32                                         InInt;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6049[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_604A[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_GetGroupName) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_GetGroupName");
static_assert(sizeof(LibraryMenu_Achievement_C_GetGroupName) == 0x000060, "Wrong size on LibraryMenu_Achievement_C_GetGroupName");
static_assert(offsetof(LibraryMenu_Achievement_C_GetGroupName, InInt) == 0x000000, "Member 'LibraryMenu_Achievement_C_GetGroupName::InInt' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetGroupName, ReturnValue) == 0x000008, "Member 'LibraryMenu_Achievement_C_GetGroupName::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetGroupName, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'LibraryMenu_Achievement_C_GetGroupName::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetGroupName, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_GetGroupName::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetGroupName, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'LibraryMenu_Achievement_C_GetGroupName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetGroupName, CallFunc_Right_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_GetGroupName::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetGroupName, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_Achievement_C_GetGroupName::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetLargeCategoryName
// 0x0040 (0x0040 - 0x0000)
struct LibraryMenu_Achievement_C_GetLargeCategoryName final
{
public:
	int32                                         InInt;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_604B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGroupName_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_GetLargeCategoryName) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_GetLargeCategoryName");
static_assert(sizeof(LibraryMenu_Achievement_C_GetLargeCategoryName) == 0x000040, "Wrong size on LibraryMenu_Achievement_C_GetLargeCategoryName");
static_assert(offsetof(LibraryMenu_Achievement_C_GetLargeCategoryName, InInt) == 0x000000, "Member 'LibraryMenu_Achievement_C_GetLargeCategoryName::InInt' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetLargeCategoryName, ReturnValue) == 0x000008, "Member 'LibraryMenu_Achievement_C_GetLargeCategoryName::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetLargeCategoryName, CallFunc_GetGroupName_ReturnValue) == 0x000018, "Member 'LibraryMenu_Achievement_C_GetLargeCategoryName::CallFunc_GetGroupName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetLargeCategoryName, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_GetLargeCategoryName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetLargeCategoryName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000030, "Member 'LibraryMenu_Achievement_C_GetLargeCategoryName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCategoryID
// 0x0068 (0x0068 - 0x0000)
struct LibraryMenu_Achievement_C_GetCategoryID final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutLargeCategoryId;                                // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutMediumCategoryId;                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_604C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_604D[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_GetCategoryID) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_GetCategoryID");
static_assert(sizeof(LibraryMenu_Achievement_C_GetCategoryID) == 0x000068, "Wrong size on LibraryMenu_Achievement_C_GetCategoryID");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, Value) == 0x000000, "Member 'LibraryMenu_Achievement_C_GetCategoryID::Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, OutLargeCategoryId) == 0x000004, "Member 'LibraryMenu_Achievement_C_GetCategoryID::OutLargeCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, OutMediumCategoryId) == 0x000008, "Member 'LibraryMenu_Achievement_C_GetCategoryID::OutMediumCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_GetCategoryID::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_GetCategoryID::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, CallFunc_Split_LeftS) == 0x000038, "Member 'LibraryMenu_Achievement_C_GetCategoryID::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, CallFunc_Split_RightS) == 0x000048, "Member 'LibraryMenu_Achievement_C_GetCategoryID::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, CallFunc_Split_ReturnValue) == 0x000058, "Member 'LibraryMenu_Achievement_C_GetCategoryID::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, CallFunc_Conv_StringToInt_ReturnValue) == 0x00005C, "Member 'LibraryMenu_Achievement_C_GetCategoryID::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetCategoryID, CallFunc_Conv_StringToInt_ReturnValue_1) == 0x000060, "Member 'LibraryMenu_Achievement_C_GetCategoryID::CallFunc_Conv_StringToInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Set Reward Btn
// 0x00D0 (0x00D0 - 0x0000)
struct LibraryMenu_Achievement_C_Set_Reward_Btn final
{
public:
	TArray<struct FAchievementMasterData>         NewLocalVar_0;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_604E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_604F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6050[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        CallFunc_Array_Get_Item;                           // 0x0028(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAchievementMaster_bIsValid;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6051[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_FindAchievementMaster_AchievementMaster;  // 0x0050(0x0078)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_Set_Reward_Btn) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_Set_Reward_Btn");
static_assert(sizeof(LibraryMenu_Achievement_C_Set_Reward_Btn) == 0x0000D0, "Wrong size on LibraryMenu_Achievement_C_Set_Reward_Btn");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, NewLocalVar_0) == 0x000000, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, Temp_bool_True_if_break_was_hit_Variable) == 0x000010, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, Temp_int_Array_Index_Variable) == 0x000014, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_Array_Get_Item) == 0x000028, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_Not_PreBool_ReturnValue_1) == 0x000045, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_BooleanAND_ReturnValue) == 0x000046, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000047, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_FindAchievementMaster_bIsValid) == 0x000048, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_FindAchievementMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_FindAchievementMaster_AchievementMaster) == 0x000050, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_FindAchievementMaster_AchievementMaster' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000CC, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_Set_Reward_Btn, CallFunc_Greater_IntInt_ReturnValue) == 0x0000CD, "Member 'LibraryMenu_Achievement_C_Set_Reward_Btn::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementReward
// 0x0330 (0x0330 - 0x0000)
struct LibraryMenu_Achievement_C_GetAchievementReward final
{
public:
	TArray<struct FSBMailData>                    OutMailData;                                       // 0x0000(0x0010)(Parm, OutParm)
	TArray<class FString>                         TmpRewardIDList;                                   // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpObjectNum;                                      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpMasterDataIndex;                                // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   TmpMasterData;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpAchievementNum;                                 // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6052[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMailData>                    TmpMailDatas;                                      // 0x0038(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6053[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBCharacterAchievementDataInfo        CallFunc_GetCharacterAchievementData_Data;         // 0x0068(0x0018)(NoDestructor)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6054[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAchievementMasterDataByNoId_IsExists;  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6055[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterDataByNoId_ReturnValue; // 0x00A0(0x0078)()
	bool                                          CallFunc_FindMasterReward_IsExists;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6056[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x011C(0x0014)(NoDestructor)
	struct FSBMailAttachment                      K2Node_MakeStruct_SBMailAttachment;                // 0x0130(0x0040)()
	struct FSBMailData                            K2Node_MakeStruct_SBMailData;                      // 0x0170(0x0190)()
	int32                                         CallFunc_GetAchievementNum_ReturnValue;            // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6057[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6058[0x3];                                     // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6059[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_GetAchievementReward) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_GetAchievementReward");
static_assert(sizeof(LibraryMenu_Achievement_C_GetAchievementReward) == 0x000330, "Wrong size on LibraryMenu_Achievement_C_GetAchievementReward");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, OutMailData) == 0x000000, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::OutMailData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, TmpRewardIDList) == 0x000010, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::TmpRewardIDList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, TmpObjectNum) == 0x000020, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::TmpObjectNum' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, TmpMasterDataIndex) == 0x000024, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::TmpMasterDataIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, TmpMasterData) == 0x000028, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::TmpMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, TmpAchievementNum) == 0x000030, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::TmpAchievementNum' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, TmpMailDatas) == 0x000038, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::TmpMailDatas' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, Temp_int_Array_Index_Variable) == 0x000048, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, Temp_int_Variable) == 0x00004C, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Array_Get_Item) == 0x000058, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_GetCharacterAchievementData_Data) == 0x000068, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_GetCharacterAchievementData_Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Conv_StringToName_ReturnValue) == 0x000080, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Not_PreBool_ReturnValue) == 0x00008C, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00008D, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00008E, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x00008F, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_BooleanAND_ReturnValue) == 0x000090, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_BooleanAND_ReturnValue_1) == 0x000091, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Array_Length_ReturnValue_1) == 0x000094, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Greater_IntInt_ReturnValue) == 0x000098, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_GetAchievementMasterDataByNoId_IsExists) == 0x000099, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_GetAchievementMasterDataByNoId_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_GetAchievementMasterDataByNoId_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_GetAchievementMasterDataByNoId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_FindMasterReward_IsExists) == 0x000118, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_FindMasterReward_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_FindMasterReward_ReturnValue) == 0x00011C, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, K2Node_MakeStruct_SBMailAttachment) == 0x000130, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::K2Node_MakeStruct_SBMailAttachment' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, K2Node_MakeStruct_SBMailData) == 0x000170, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::K2Node_MakeStruct_SBMailData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_GetAchievementNum_ReturnValue) == 0x000300, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_GetAchievementNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Array_Add_ReturnValue) == 0x000304, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Subtract_IntInt_ReturnValue) == 0x000308, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00030C, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, Temp_int_Loop_Counter_Variable) == 0x000310, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Array_Add_ReturnValue_1) == 0x000314, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Less_IntInt_ReturnValue) == 0x000318, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_Add_IntInt_ReturnValue_1) == 0x00031C, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_GetMasterDataManager_IsValid) == 0x000320, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementReward, CallFunc_GetMasterDataManager_ReturnValue) == 0x000328, "Member 'LibraryMenu_Achievement_C_GetAchievementReward::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckAllAchievement
// 0x00E8 (0x00E8 - 0x0000)
struct LibraryMenu_Achievement_C_CheckAllAchievement final
{
public:
	TArray<struct FAchievementMasterData>         OutItemListInfo;                                   // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FAchievementMasterData>         TmpItemListInfo;                                   // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_605A[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_605B[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterDataByNoId_IsExists;  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_605C[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterDataByNoId_ReturnValue; // 0x0040(0x0078)()
	int32                                         CallFunc_GetAchievementNum_ReturnValue;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAchievementPossession_NewParam;         // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_605D[0x1];                                     // 0x00C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        CallFunc_GetCharacterAchievementData_Data;         // 0x00C8(0x0018)(NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_CheckAllAchievement) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_CheckAllAchievement");
static_assert(sizeof(LibraryMenu_Achievement_C_CheckAllAchievement) == 0x0000E8, "Wrong size on LibraryMenu_Achievement_C_CheckAllAchievement");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, OutItemListInfo) == 0x000000, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::OutItemListInfo' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, TmpItemListInfo) == 0x000010, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::TmpItemListInfo' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, Temp_int_Variable) == 0x000020, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, Temp_bool_Variable) == 0x000024, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_GetMasterDataManager_IsValid) == 0x00002C, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_GetAchievementMasterDataByNoId_IsExists) == 0x000038, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_GetAchievementMasterDataByNoId_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_GetAchievementMasterDataByNoId_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_GetAchievementMasterDataByNoId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_GetAchievementNum_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_GetAchievementNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_Array_Add_ReturnValue) == 0x0000BC, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C4, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_IsAchievementPossession_NewParam) == 0x0000C5, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_IsAchievementPossession_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_Not_PreBool_ReturnValue) == 0x0000C6, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_GetCharacterAchievementData_Data) == 0x0000C8, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_GetCharacterAchievementData_Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_BooleanOR_ReturnValue) == 0x0000E0, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, K2Node_Select_Default) == 0x0000E1, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_CheckAllAchievement, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000E2, "Member 'LibraryMenu_Achievement_C_CheckAllAchievement::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateCharacterAchievementDataInfo
// 0x0060 (0x0060 - 0x0000)
struct LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo final
{
public:
	class USBPlayerAchievementComponent*          TmpAchievementComponent;                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_605E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterAchievementDataInfo        CallFunc_FindCharacterAchievementData_ReturnValue; // 0x0028(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_605F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterAchievementDataInfo        K2Node_MakeStruct_SBCharacterAchievementDataInfo;  // 0x0048(0x0018)(NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo");
static_assert(sizeof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo) == 0x000060, "Wrong size on LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, TmpAchievementComponent) == 0x000000, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::TmpAchievementComponent' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, Temp_int_Array_Index_Variable) == 0x000008, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, CallFunc_GetAchievementComponent_ReturnValue) == 0x000018, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::CallFunc_GetAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, CallFunc_Array_Get_Item) == 0x000020, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, CallFunc_FindCharacterAchievementData_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::CallFunc_FindCharacterAchievementData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo, K2Node_MakeStruct_SBCharacterAchievementDataInfo) == 0x000048, "Member 'LibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo::K2Node_MakeStruct_SBCharacterAchievementDataInfo' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetLimitedTime
// 0x00A0 (0x00A0 - 0x0000)
struct LibraryMenu_Achievement_C_SetLimitedTime final
{
public:
	class FString                                 TermId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          OutValue;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6060[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetNowDate_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue;     // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6061[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventScheduler*                      CallFunc_GetEventScheduler_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventTermsMasterData                CallFunc_GetMasterDataBP_OutMaster;                // 0x0040(0x0020)()
	bool                                          CallFunc_GetMasterDataBP_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6062[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventTermsData                      CallFunc_Array_Get_Item;                           // 0x0068(0x0030)(NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_SetLimitedTime) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_SetLimitedTime");
static_assert(sizeof(LibraryMenu_Achievement_C_SetLimitedTime) == 0x0000A0, "Wrong size on LibraryMenu_Achievement_C_SetLimitedTime");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, TermId) == 0x000000, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::TermId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, OutValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::OutValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_GetNowDate_ReturnValue) == 0x000018, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_GetNowDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000020, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000028, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000029, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_Greater_DateTimeDateTime_ReturnValue) == 0x00002A, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_Greater_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_GetSBGameInstance_ReturnValue) == 0x000030, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_GetEventScheduler_ReturnValue) == 0x000038, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_GetEventScheduler_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_GetMasterDataBP_OutMaster) == 0x000040, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_GetMasterDataBP_OutMaster' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_GetMasterDataBP_ReturnValue) == 0x000060, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_GetMasterDataBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_Array_Get_Item) == 0x000068, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_SetLimitedTime, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000098, "Member 'LibraryMenu_Achievement_C_SetLimitedTime::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementComponent
// 0x0028 (0x0028 - 0x0000)
struct LibraryMenu_Achievement_C_GetAchievementComponent final
{
public:
	class USBPlayerAchievementComponent*          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6063[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Achievement_C_GetAchievementComponent) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_GetAchievementComponent");
static_assert(sizeof(LibraryMenu_Achievement_C_GetAchievementComponent) == 0x000028, "Wrong size on LibraryMenu_Achievement_C_GetAchievementComponent");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementComponent, ReturnValue) == 0x000000, "Member 'LibraryMenu_Achievement_C_GetAchievementComponent::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementComponent, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_Achievement_C_GetAchievementComponent::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementComponent, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'LibraryMenu_Achievement_C_GetAchievementComponent::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementComponent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_Achievement_C_GetAchievementComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_GetAchievementComponent, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000020, "Member 'LibraryMenu_Achievement_C_GetAchievementComponent::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.IsAchievementPossession
// 0x0040 (0x0040 - 0x0000)
struct LibraryMenu_Achievement_C_IsAchievementPossession final
{
public:
	int32                                         InFindAchievementId;                               // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         B;                                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewParam;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6064[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetAchievementComponent_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterAchievementDataInfo        CallFunc_FindCharacterAchievementData_ReturnValue; // 0x0020(0x0018)(NoDestructor)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Achievement_C_IsAchievementPossession) == 0x000008, "Wrong alignment on LibraryMenu_Achievement_C_IsAchievementPossession");
static_assert(sizeof(LibraryMenu_Achievement_C_IsAchievementPossession) == 0x000040, "Wrong size on LibraryMenu_Achievement_C_IsAchievementPossession");
static_assert(offsetof(LibraryMenu_Achievement_C_IsAchievementPossession, InFindAchievementId) == 0x000000, "Member 'LibraryMenu_Achievement_C_IsAchievementPossession::InFindAchievementId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_IsAchievementPossession, B) == 0x000004, "Member 'LibraryMenu_Achievement_C_IsAchievementPossession::B' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_IsAchievementPossession, NewParam) == 0x000008, "Member 'LibraryMenu_Achievement_C_IsAchievementPossession::NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_IsAchievementPossession, CallFunc_DateTimeMinValue_ReturnValue) == 0x000010, "Member 'LibraryMenu_Achievement_C_IsAchievementPossession::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_IsAchievementPossession, CallFunc_GetAchievementComponent_ReturnValue) == 0x000018, "Member 'LibraryMenu_Achievement_C_IsAchievementPossession::CallFunc_GetAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_IsAchievementPossession, CallFunc_FindCharacterAchievementData_ReturnValue) == 0x000020, "Member 'LibraryMenu_Achievement_C_IsAchievementPossession::CallFunc_FindCharacterAchievementData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Achievement_C_IsAchievementPossession, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x000038, "Member 'LibraryMenu_Achievement_C_IsAchievementPossession::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");

}

