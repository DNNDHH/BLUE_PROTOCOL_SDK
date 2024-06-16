#pragma once

 

// Package: LibraryMenu_Bookmark

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_TutorialExtendData_structs.hpp"
#include "ST_TutorialExtendDataMain_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.OnClickDetail__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Bookmark_C_OnClickDetail__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Bookmark_C_OnClickDetail__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Bookmark_C_OnClickDetail__DelegateSignature");
static_assert(sizeof(LibraryMenu_Bookmark_C_OnClickDetail__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Bookmark_C_OnClickDetail__DelegateSignature");
static_assert(offsetof(LibraryMenu_Bookmark_C_OnClickDetail__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_Bookmark_C_OnClickDetail__DelegateSignature::Param_Index' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.ExecuteUbergraph_LibraryMenu_Bookmark
// 0x0758 (0x0758 - 0x0000)
struct LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTutorialTerm_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46A4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46A5[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A6[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable;                            // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46A7[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A8[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0050(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46A9[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46AA[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46AB[0x2];                                     // 0x00D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_5;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46AC[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_6;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46AD[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x00F0(0x0010)(ReferenceParm)
	class FName                                   Temp_wildcard_Variable_1;                          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x0110(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46AE[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46AF[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46B0[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x0190(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46B1[0x2];                                     // 0x01A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item_2;                         // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46B2[0x2];                                     // 0x01B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue_1;               // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_2;        // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x01BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_3;        // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46B3[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames_1;       // 0x01C8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_3;                         // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46B4[0x2];                                     // 0x01E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable_2;                          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue_2;               // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B5[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x01F8(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46B6[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_5;         // 0x0258(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_5;    // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46B7[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item_4;                         // 0x026C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x027D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x027E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x027F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46B8[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MainPage;                             // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ListIndex;                      // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B9[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_NewParam;               // 0x02B8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46BA[0x6];                                     // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSerchKeyword_SerchKeyword;             // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46BB[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46BC[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0310(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46BD[0x2];                                     // 0x031A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46BE[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46BF[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable_3;                          // 0x032C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C0[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_6;         // 0x0340(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_6;    // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46C1[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46C2[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue_1;   // 0x0370(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item_5;                         // 0x0378(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue_1;       // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x0385(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46C3[0x2];                                     // 0x0386(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C4[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow_7;         // 0x0390(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_7;    // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x03E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x03EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x03EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue_3;               // 0x03EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x03ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46C5[0x2];                                     // 0x03EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x03F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46C6[0x3];                                     // 0x03F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_Array_Get_Item_6;                         // 0x03F8(0x0058)()
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0454(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46C7[0x3];                                     // 0x0455(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C8[0x4];                                     // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_ListItem_C*                CallFunc_Create_ReturnValue;                       // 0x0460(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0468(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0470(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_6;                  // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0484(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x0494(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46C9[0x3];                                     // 0x0495(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46CA[0x3];                                     // 0x049D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x04A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x04B0(0x0018)()
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46CB[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Map_Find_Value;                           // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46CC[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x04E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x04F8(0x0218)()
	class FName                                   CallFunc_Map_Find_Value_1;                         // 0x0710(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadListItem_ReturnValue;               // 0x0719(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46CD[0x2];                                     // 0x071A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_ItemIndex;              // 0x071C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedID_Output;                     // 0x0720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46CE[0x4];                                     // 0x0724(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0728(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadBookmarkList_ReturnValue;          // 0x0738(0x0010)(ReferenceParm)
	TArray<struct FSBTutorialHelpData>            CallFunc_SortTutorialHelpDataArray_ReturnValue;    // 0x0748(0x0010)(ReferenceParm)
};
static_assert(alignof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark");
static_assert(sizeof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark) == 0x000758, "Wrong size on LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, EntryPoint) == 0x000000, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_ValidTutorialTerm_ReturnValue) == 0x000004, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_ValidTutorialTerm_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetClassType_ReturnValue) == 0x000021, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_wildcard_Variable) == 0x000024, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Loop_Counter_Variable_2) == 0x00002C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000040, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000050, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000A8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Array_Index_Variable_1) == 0x0000AC, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanAND_ReturnValue) == 0x0000B0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Array_Index_Variable_2) == 0x0000B4, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Loop_Counter_Variable_3) == 0x0000B8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000BC, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Array_Index_Variable_3) == 0x0000C0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Array_Index_Variable_4) == 0x0000C4, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D4, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000D5, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Array_Index_Variable_5) == 0x0000D8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanOR_ReturnValue) == 0x0000DC, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Loop_Counter_Variable_4) == 0x0000E0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000E4, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Array_Index_Variable_6) == 0x0000E8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Array_Index_Variable_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_bool_True_if_break_was_hit_Variable_1) == 0x0000EC, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000ED, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0000F0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_wildcard_Variable_1) == 0x000100, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_wildcard_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Get_Item_1) == 0x000108, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x000110, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x000168, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000169, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Conv_NameToString_ReturnValue) == 0x000170, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_IsEventTermActive_ReturnValue) == 0x000180, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000184, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanOR_ReturnValue_1) == 0x000188, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_OutRow_3) == 0x000190, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_OutRow_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_ReturnValue_3) == 0x0001A0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanAND_ReturnValue_1) == 0x0001A1, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Length_ReturnValue_1) == 0x0001A4, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Get_Item_2) == 0x0001A8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Less_IntInt_ReturnValue) == 0x0001B4, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001B5, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Length_ReturnValue_2) == 0x0001B8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetClassType_ReturnValue_1) == 0x0001BC, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetClassType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_bool_True_if_break_was_hit_Variable_2) == 0x0001BD, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_bool_True_if_break_was_hit_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001BE, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanOR_ReturnValue_2) == 0x0001BF, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001C0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_bool_True_if_break_was_hit_Variable_3) == 0x0001C1, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_bool_True_if_break_was_hit_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowNames_OutRowNames_1) == 0x0001C8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowNames_OutRowNames_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Get_Item_3) == 0x0001D8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Length_ReturnValue_3) == 0x0001E0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Not_PreBool_ReturnValue_3) == 0x0001E4, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001E5, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_wildcard_Variable_2) == 0x0001E8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_wildcard_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetClassType_ReturnValue_2) == 0x0001F0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetClassType_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_OutRow_4) == 0x0001F8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_OutRow_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_ReturnValue_4) == 0x000250, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_OutRow_5) == 0x000258, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_OutRow_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_ReturnValue_5) == 0x000268, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Get_Item_4) == 0x00026C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Length_ReturnValue_4) == 0x000278, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Less_IntInt_ReturnValue_2) == 0x00027C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00027D, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanAND_ReturnValue_2) == 0x00027E, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00027F, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanOR_ReturnValue_3) == 0x000280, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_Event_InBookMarkType) == 0x000288, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_Event_MainPage) == 0x000298, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_Event_SubPage) == 0x00029C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0002A0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_CustomEvent_ListIndex) == 0x0002B0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_CustomEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_ComponentBoundEvent_NewParam) == 0x0002B8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_ComponentBoundEvent_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002D0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002D1, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0002D8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetSerchKeyword_SerchKeyword) == 0x0002E0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetSerchKeyword_SerchKeyword' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetController_ReturnValue) == 0x0002F0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Contains_ReturnValue) == 0x0002F8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000300, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_DynamicCast_bSuccess) == 0x000308, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000310, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000318, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000319, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Loop_Counter_Variable_5) == 0x00031C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Less_IntInt_ReturnValue_3) == 0x000320, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Add_IntInt_ReturnValue_5) == 0x000324, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanAND_ReturnValue_3) == 0x000328, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_wildcard_Variable_3) == 0x00032C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_wildcard_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000338, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_OutRow_6) == 0x000340, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_OutRow_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_ReturnValue_6) == 0x000350, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetController_ReturnValue_1) == 0x000358, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000360, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_DynamicCast_bSuccess_1) == 0x000368, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetCharacterLogComponent_ReturnValue_1) == 0x000370, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetCharacterLogComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Get_Item_5) == 0x000378, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_IsUnlockTutorialHelp_ReturnValue_1) == 0x000384, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_IsUnlockTutorialHelp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x000385, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Length_ReturnValue_5) == 0x000388, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_OutRow_7) == 0x000390, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_OutRow_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetDataTableRowFromName_ReturnValue_7) == 0x0003E8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetDataTableRowFromName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Less_IntInt_ReturnValue_4) == 0x0003E9, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanAND_ReturnValue_4) == 0x0003EA, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanAND_ReturnValue_5) == 0x0003EB, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetClassType_ReturnValue_3) == 0x0003EC, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetClassType_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0003ED, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_AddUnique_ReturnValue) == 0x0003F0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanOR_ReturnValue_4) == 0x0003F4, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Get_Item_6) == 0x0003F8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Length_ReturnValue_6) == 0x000450, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Less_IntInt_ReturnValue_5) == 0x000454, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Array_Add_ReturnValue) == 0x000458, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Create_ReturnValue) == 0x000460, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000468, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_MakeStruct_Margin) == 0x000470, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, Temp_int_Loop_Counter_Variable_6) == 0x000480, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::Temp_int_Loop_Counter_Variable_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_CreateDelegate_OutputDelegate) == 0x000484, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Less_IntInt_ReturnValue_6) == 0x000494, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Add_IntInt_ReturnValue_6) == 0x000498, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_BooleanAND_ReturnValue_6) == 0x00049C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0004A0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Conv_StringToText_ReturnValue) == 0x0004B0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetLibrarySaveManager_IsValid) == 0x0004C8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x0004D0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Map_Find_Value) == 0x0004D8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Map_Find_ReturnValue) == 0x0004E0, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetPlayerId_ReturnValue) == 0x0004E8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_LoadLibraryData_ReturnValue) == 0x0004F8, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Map_Find_Value_1) == 0x000710, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_Map_Find_ReturnValue_1) == 0x000718, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_IsReadListItem_ReturnValue) == 0x000719, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_IsReadListItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, K2Node_ComponentBoundEvent_ItemIndex) == 0x00071C, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::K2Node_ComponentBoundEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetSelectedID_Output) == 0x000720, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetSelectedID_Output' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetCharacterId_ReturnValue) == 0x000728, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_GetReadBookmarkList_ReturnValue) == 0x000738, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_GetReadBookmarkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark, CallFunc_SortTutorialHelpDataArray_ReturnValue) == 0x000748, "Member 'LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark::CallFunc_SortTutorialHelpDataArray_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature final
{
public:
	class FText                                   NewParam;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature");
static_assert(sizeof(LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature");
static_assert(offsetof(LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature, NewParam) == 0x000000, "Member 'LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature::NewParam' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.ClickListItem
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Bookmark_C_ClickListItem final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Bookmark_C_ClickListItem) == 0x000004, "Wrong alignment on LibraryMenu_Bookmark_C_ClickListItem");
static_assert(sizeof(LibraryMenu_Bookmark_C_ClickListItem) == 0x000004, "Wrong size on LibraryMenu_Bookmark_C_ClickListItem");
static_assert(offsetof(LibraryMenu_Bookmark_C_ClickListItem, ListIndex) == 0x000000, "Member 'LibraryMenu_Bookmark_C_ClickListItem::ListIndex' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Bookmark_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Bookmark_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on LibraryMenu_Bookmark_C_OnSubMenuUpdate");
static_assert(sizeof(LibraryMenu_Bookmark_C_OnSubMenuUpdate) == 0x000008, "Wrong size on LibraryMenu_Bookmark_C_OnSubMenuUpdate");
static_assert(offsetof(LibraryMenu_Bookmark_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'LibraryMenu_Bookmark_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'LibraryMenu_Bookmark_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_Bookmark_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Bookmark_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(LibraryMenu_Bookmark_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on LibraryMenu_Bookmark_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(LibraryMenu_Bookmark_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'LibraryMenu_Bookmark_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.CreateCategoryList
// 0x0068 (0x0068 - 0x0000)
struct LibraryMenu_Bookmark_C_CreateCategoryList final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46CF[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D0[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D1[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllRead_ReturnValue;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D2[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIndex_ReturnValue;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D3[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIndex_ReturnValue_1;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsReadCategory_readId;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadCategory_isRead;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D4[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D5[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Bookmark_C_CreateCategoryList) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_CreateCategoryList");
static_assert(sizeof(LibraryMenu_Bookmark_C_CreateCategoryList) == 0x000068, "Wrong size on LibraryMenu_Bookmark_C_CreateCategoryList");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, Temp_int_Variable) == 0x000000, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, Temp_int_Variable_1) == 0x000004, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000008, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_GetValidValue_ReturnValue) == 0x000010, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000011, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000018, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00001C, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, Temp_int_Array_Index_Variable) == 0x000020, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_IsAllRead_ReturnValue) == 0x00002C, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_IsAllRead_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Not_PreBool_ReturnValue) == 0x00002D, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Array_Get_Item) == 0x000030, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_GetIndex_ReturnValue) == 0x000038, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_GetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_GetIndex_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_GetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_IsReadCategory_readId) == 0x000044, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_IsReadCategory_readId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_IsReadCategory_isRead) == 0x000048, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_IsReadCategory_isRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000049, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Not_PreBool_ReturnValue_1) == 0x00004A, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_MakeLiteralInt_ReturnValue) == 0x00004C, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_CreateCategoryList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000058, "Member 'LibraryMenu_Bookmark_C_CreateCategoryList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.IsAllReadCategory
// 0x0218 (0x0218 - 0x0000)
struct LibraryMenu_Bookmark_C_IsAllReadCategory final
{
public:
	int32                                         CategoryIndex;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CharacterLogComponent;                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           BookmarkNameList;                                  // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CatId;                                             // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_wildcard_Variable;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D7[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0040(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D8[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00A0(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D9[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46DA[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable_1;                          // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue_1;               // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46DB[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x00C8(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46DC[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x0128(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46DD[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46DE[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0158(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46DF[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item_1;                         // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x018E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46E0[0x1];                                     // 0x018F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46E1[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E2[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46E3[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadBookmarkList_ReturnValue;          // 0x01C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsReadNameList_ReturnValue;               // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46E4[0x6];                                     // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E5[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46E6[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Bookmark_C_IsAllReadCategory) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_IsAllReadCategory");
static_assert(sizeof(LibraryMenu_Bookmark_C_IsAllReadCategory) == 0x000218, "Wrong size on LibraryMenu_Bookmark_C_IsAllReadCategory");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CategoryIndex) == 0x000000, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CategoryIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, ReturnValue) == 0x000004, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CharacterLogComponent) == 0x000008, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CharacterLogComponent' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, BookmarkNameList) == 0x000010, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::BookmarkNameList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CatId) == 0x000020, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CatId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_int_Array_Index_Variable) == 0x000024, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_wildcard_Variable) == 0x000030, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetClassType_ReturnValue) == 0x000038, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowFromName_OutRow) == 0x000040, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000098, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000A0, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000B0, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Array_Length_ReturnValue) == 0x0000B4, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_BooleanAND_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_bool_True_if_break_was_hit_Variable) == 0x0000B9, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Not_PreBool_ReturnValue) == 0x0000BA, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_wildcard_Variable_1) == 0x0000BC, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_wildcard_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetClassType_ReturnValue_1) == 0x0000C4, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetClassType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x0000C8, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x000120, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowFromName_OutRow_3) == 0x000128, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowFromName_OutRow_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowFromName_ReturnValue_3) == 0x000138, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowFromName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Array_Get_Item) == 0x00013C, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000148, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Array_Length_ReturnValue_1) == 0x00014C, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000151, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_BooleanAND_ReturnValue_1) == 0x000152, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000153, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_BooleanOR_ReturnValue) == 0x000154, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000158, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_int_Loop_Counter_Variable_1) == 0x000168, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Array_Length_ReturnValue_2) == 0x00016C, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Less_IntInt_ReturnValue_1) == 0x000170, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Add_IntInt_ReturnValue_1) == 0x000174, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_int_Array_Index_Variable_1) == 0x000178, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_int_Loop_Counter_Variable_2) == 0x00017C, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Array_Get_Item_1) == 0x000180, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Less_IntInt_ReturnValue_2) == 0x00018C, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00018D, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00018E, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Add_IntInt_ReturnValue_2) == 0x000190, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_BooleanOR_ReturnValue_1) == 0x000194, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_int_Array_Index_Variable_2) == 0x000198, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetCharacterId_ReturnValue) == 0x0001A0, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Array_Get_Item_2) == 0x0001B0, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, Temp_bool_True_if_break_was_hit_Variable_1) == 0x0001B8, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001B9, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_BooleanAND_ReturnValue_2) == 0x0001BA, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetLibrarySaveManager_IsValid) == 0x0001BB, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x0001C0, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetReadBookmarkList_ReturnValue) == 0x0001C8, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetReadBookmarkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_IsReadNameList_ReturnValue) == 0x0001D8, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_IsReadNameList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x0001D9, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001E0, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetController_ReturnValue) == 0x0001E8, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_Array_Add_ReturnValue) == 0x0001F0, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001F8, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, K2Node_DynamicCast_bSuccess) == 0x000200, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000208, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000210, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllReadCategory, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000211, "Member 'LibraryMenu_Bookmark_C_IsAllReadCategory::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.IsReadListItem
// 0x0270 (0x0270 - 0x0000)
struct LibraryMenu_Bookmark_C_IsReadListItem final
{
public:
	class FName                                   ItemName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46E7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46E8[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0040(0x0218)()
	TArray<class FName>                           CallFunc_GetReadBookmarkList_ReturnValue;          // 0x0258(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsReadName_ReturnValue;                   // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Bookmark_C_IsReadListItem) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_IsReadListItem");
static_assert(sizeof(LibraryMenu_Bookmark_C_IsReadListItem) == 0x000270, "Wrong size on LibraryMenu_Bookmark_C_IsReadListItem");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, ItemName) == 0x000000, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::ItemName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, ReturnValue) == 0x000008, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, CallFunc_GetPlayerId_ReturnValue) == 0x000010, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, CallFunc_GetLibrarySaveManager_IsValid) == 0x000020, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000028, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, CallFunc_GetCharacterId_ReturnValue) == 0x000030, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, CallFunc_LoadLibraryData_ReturnValue) == 0x000040, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, CallFunc_GetReadBookmarkList_ReturnValue) == 0x000258, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::CallFunc_GetReadBookmarkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadListItem, CallFunc_IsReadName_ReturnValue) == 0x000268, "Member 'LibraryMenu_Bookmark_C_IsReadListItem::CallFunc_IsReadName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.UpdateNewIcon
// 0x0160 (0x0160 - 0x0000)
struct LibraryMenu_Bookmark_C_UpdateNewIcon final
{
public:
	int32                                         Dimension_1;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46EA[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_wildcard_Variable;                            // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46EB[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0040(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46EC[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Map_Find_Value;                           // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46ED[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46EE[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00B0(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46EF[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsReadCategory_readId;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadCategory_isRead;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F0[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIndex_ReturnValue;                     // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F1[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllRead_ReturnValue;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F2[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F3[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsReadCategory_readId_1;                  // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadCategory_isRead_1;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F4[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIndex_ReturnValue_1;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46F5[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46F6[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItem_C*                K2Node_DynamicCast_AsLibrary_Menu_List_Item;       // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F7[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F8[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetReadBookmarkList_ReturnValue;          // 0x0148(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsReadName_ReturnValue;                   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Bookmark_C_UpdateNewIcon) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_UpdateNewIcon");
static_assert(sizeof(LibraryMenu_Bookmark_C_UpdateNewIcon) == 0x000160, "Wrong size on LibraryMenu_Bookmark_C_UpdateNewIcon");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, Dimension_1) == 0x000000, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::Dimension_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetCharacterId_ReturnValue_1) == 0x000018, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetClassType_ReturnValue) == 0x00002C, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, Temp_wildcard_Variable) == 0x000034, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000040, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000098, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Map_Find_Value) == 0x00009C, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Map_Find_ReturnValue) == 0x0000A4, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000B0, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000C0, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_IsReadCategory_readId) == 0x0000C4, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_IsReadCategory_readId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_IsReadCategory_isRead) == 0x0000C8, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_IsReadCategory_isRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Not_PreBool_ReturnValue) == 0x0000C9, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetIndex_ReturnValue) == 0x0000CC, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0000D4, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, Temp_int_Array_Index_Variable) == 0x0000D8, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_IsAllRead_ReturnValue) == 0x0000DC, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_IsAllRead_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Array_Get_Item) == 0x0000E0, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000EC, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000ED, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000EE, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_BooleanOR_ReturnValue) == 0x0000EF, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x0000F0, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_IsReadCategory_readId_1) == 0x0000F4, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_IsReadCategory_readId_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_IsReadCategory_isRead_1) == 0x0000F8, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_IsReadCategory_isRead_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000F9, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Not_PreBool_ReturnValue_3) == 0x0000FA, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_BooleanAND_ReturnValue) == 0x0000FB, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000FC, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x0000FD, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetIndex_ReturnValue_1) == 0x000100, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000104, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000108, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetChildAt_ReturnValue) == 0x000110, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetPlayerId_ReturnValue) == 0x000118, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, K2Node_DynamicCast_AsLibrary_Menu_List_Item) == 0x000128, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::K2Node_DynamicCast_AsLibrary_Menu_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetLibrarySaveManager_IsValid) == 0x000131, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000138, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_SaveLibraryData_ReturnValue) == 0x000140, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_GetReadBookmarkList_ReturnValue) == 0x000148, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_GetReadBookmarkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_UpdateNewIcon, CallFunc_IsReadName_ReturnValue) == 0x000158, "Member 'LibraryMenu_Bookmark_C_UpdateNewIcon::CallFunc_IsReadName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.IsReadCategory
// 0x03A0 (0x03A0 - 0x0000)
struct LibraryMenu_Bookmark_C_IsReadCategory final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CategoryType;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReadId;                                            // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRead;                                            // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F9[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CheckList;                                         // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           ReadedList;                                        // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         CategoryId;                                        // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46FA[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsReadCategory_readId;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadCategory_isRead;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46FB[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46FC[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46FD[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46FE[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46FF[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00D0(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4700[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTutorialTerm_ReturnValue;            // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4701[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4702[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4703[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4704[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item_1;                         // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4705[0x1];                                     // 0x013B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadNameList_ReturnValue;               // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllRead_ReturnValue;                    // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4706[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4707[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadBookmarkList_ReturnValue;          // 0x0178(0x0010)(ReferenceParm)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0188(0x0218)()
};
static_assert(alignof(LibraryMenu_Bookmark_C_IsReadCategory) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_IsReadCategory");
static_assert(sizeof(LibraryMenu_Bookmark_C_IsReadCategory) == 0x0003A0, "Wrong size on LibraryMenu_Bookmark_C_IsReadCategory");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, ID) == 0x000000, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::ID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CategoryType) == 0x000004, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CategoryType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, ReadId) == 0x000008, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::ReadId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, IsRead) == 0x00000C, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::IsRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CheckList) == 0x000010, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CheckList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, ReadedList) == 0x000020, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::ReadedList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CategoryId) == 0x000030, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetClassType_ReturnValue) == 0x000034, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_IsReadCategory_readId) == 0x000038, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_IsReadCategory_readId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_IsReadCategory_isRead) == 0x00003C, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_IsReadCategory_isRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00003D, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003E, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, Temp_wildcard_Variable) == 0x000040, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, Temp_bool_True_if_break_was_hit_Variable) == 0x000048, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Not_PreBool_ReturnValue) == 0x0000A9, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Conv_NameToString_ReturnValue) == 0x0000B0, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_IsEventTermActive_ReturnValue) == 0x0000C1, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000C4, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_BooleanOR_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000D0, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000E0, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, Temp_int_Loop_Counter_Variable) == 0x0000E4, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Array_Length_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Add_IntInt_ReturnValue) == 0x0000EC, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, Temp_int_Array_Index_Variable) == 0x0000F0, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_ValidTutorialTerm_ReturnValue) == 0x0000F4, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_ValidTutorialTerm_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetCharacterId_ReturnValue) == 0x0000F8, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, Temp_int_Loop_Counter_Variable_1) == 0x000108, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Less_IntInt_ReturnValue) == 0x00010C, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Array_Get_Item) == 0x000110, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_BooleanAND_ReturnValue) == 0x000118, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Array_Length_ReturnValue_1) == 0x00011C, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Add_IntInt_ReturnValue_1) == 0x000120, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Less_IntInt_ReturnValue_1) == 0x000124, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, Temp_int_Array_Index_Variable_1) == 0x000128, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Array_Get_Item_1) == 0x00012C, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000138, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000139, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_BooleanOR_ReturnValue_1) == 0x00013A, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_Array_AddUnique_ReturnValue) == 0x00013C, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetPlayerController_ReturnValue) == 0x000140, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000148, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000151, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_IsReadNameList_ReturnValue) == 0x000152, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_IsReadNameList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_IsAllRead_ReturnValue) == 0x000153, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_IsAllRead_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetPlayerId_ReturnValue) == 0x000158, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetLibrarySaveManager_IsValid) == 0x000168, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000170, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_GetReadBookmarkList_ReturnValue) == 0x000178, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_GetReadBookmarkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsReadCategory, CallFunc_LoadLibraryData_ReturnValue) == 0x000188, "Member 'LibraryMenu_Bookmark_C_IsReadCategory::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.IsAllRead
// 0x0268 (0x0268 - 0x0000)
struct LibraryMenu_Bookmark_C_IsAllRead final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4708[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4709[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadBookmarkList_ReturnValue;          // 0x0038(0x0010)(ReferenceParm)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0048(0x0218)()
	bool                                          CallFunc_IsReadNameList_ReturnValue;               // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Bookmark_C_IsAllRead) == 0x000008, "Wrong alignment on LibraryMenu_Bookmark_C_IsAllRead");
static_assert(sizeof(LibraryMenu_Bookmark_C_IsAllRead) == 0x000268, "Wrong size on LibraryMenu_Bookmark_C_IsAllRead");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllRead, ReturnValue) == 0x000000, "Member 'LibraryMenu_Bookmark_C_IsAllRead::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllRead, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'LibraryMenu_Bookmark_C_IsAllRead::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllRead, CallFunc_GetPlayerId_ReturnValue) == 0x000018, "Member 'LibraryMenu_Bookmark_C_IsAllRead::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllRead, CallFunc_GetLibrarySaveManager_IsValid) == 0x000028, "Member 'LibraryMenu_Bookmark_C_IsAllRead::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllRead, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000030, "Member 'LibraryMenu_Bookmark_C_IsAllRead::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllRead, CallFunc_GetReadBookmarkList_ReturnValue) == 0x000038, "Member 'LibraryMenu_Bookmark_C_IsAllRead::CallFunc_GetReadBookmarkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllRead, CallFunc_LoadLibraryData_ReturnValue) == 0x000048, "Member 'LibraryMenu_Bookmark_C_IsAllRead::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_IsAllRead, CallFunc_IsReadNameList_ReturnValue) == 0x000260, "Member 'LibraryMenu_Bookmark_C_IsAllRead::CallFunc_IsReadNameList_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.TermRequest
// 0x0002 (0x0002 - 0x0000)
struct LibraryMenu_Bookmark_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Bookmark_C_TermRequest) == 0x000001, "Wrong alignment on LibraryMenu_Bookmark_C_TermRequest");
static_assert(sizeof(LibraryMenu_Bookmark_C_TermRequest) == 0x000002, "Wrong size on LibraryMenu_Bookmark_C_TermRequest");
static_assert(offsetof(LibraryMenu_Bookmark_C_TermRequest, InReason) == 0x000000, "Member 'LibraryMenu_Bookmark_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Bookmark_C_TermRequest, ReturnValue) == 0x000001, "Member 'LibraryMenu_Bookmark_C_TermRequest::ReturnValue' has a wrong offset!");

}

