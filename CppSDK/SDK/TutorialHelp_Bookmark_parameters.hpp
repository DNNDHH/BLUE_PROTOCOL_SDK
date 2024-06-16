#pragma once

 

// Package: TutorialHelp_Bookmark

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "ST_TutorialExtendData_structs.hpp"
#include "ST_TutorialExtendDataMain_structs.hpp"


namespace SDK::Params
{

// Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.ExecuteUbergraph_TutorialHelp_Bookmark
// 0x0190 (0x0190 - 0x0000)
struct TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC1[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InPage;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTutorialHelpData                    K2Node_CustomEvent_InData;                         // 0x0028(0x0058)(ConstParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC2[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AC3[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTutorialHelpText_ReturnValue;          // 0x00B8(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AC4[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC5[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC6[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x00FC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OpenUrl_ReturnValue;                      // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLooping_ReturnValue;                   // 0x010E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x010F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC7[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InId;                           // 0x0114(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InSubMode;                      // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindTurotialHelpData_bFind;               // 0x011E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AC8[0x1];                                     // 0x011F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_FindTurotialHelpData_Ret;                 // 0x0120(0x0058)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0186(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AC9[0x1];                                     // 0x0187(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x018E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark) == 0x000008, "Wrong alignment on TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark");
static_assert(sizeof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark) == 0x000190, "Wrong size on TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, EntryPoint) == 0x000000, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::EntryPoint' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_byte_Variable) == 0x000004, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_object_Variable) == 0x000010, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_byte_Variable_1) == 0x000021, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_CustomEvent_InPage) == 0x000024, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_CustomEvent_InPage' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_CustomEvent_InData) == 0x000028, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_CustomEvent_InData' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Subtract_IntInt_ReturnValue) == 0x000080, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000088, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000B0, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000B1, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_SwitchEnum_CmpSuccess) == 0x0000B2, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_GetTutorialHelpText_ReturnValue) == 0x0000B8, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_GetTutorialHelpText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_PlaySE_ReturnValue) == 0x0000D0, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_bool_Variable) == 0x0000D4, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Concat_StrStr_ReturnValue) == 0x0000D8, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_byte_Variable_2) == 0x0000E8, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000F0, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_byte_Variable_3) == 0x0000F8, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_CreateDelegate_OutputDelegate) == 0x0000FC, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_bool_Variable_1) == 0x00010C, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_OpenUrl_ReturnValue) == 0x00010D, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_OpenUrl_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_SetLooping_ReturnValue) == 0x00010E, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_SetLooping_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_Select_Default) == 0x00010F, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_Select_Default_1) == 0x000110, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_CustomEvent_InId) == 0x000114, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_CustomEvent_InId' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_CustomEvent_InSubMode) == 0x00011C, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_CustomEvent_InSubMode' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Play_ReturnValue) == 0x00011D, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_FindTurotialHelpData_bFind) == 0x00011E, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_FindTurotialHelpData_bFind' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_FindTurotialHelpData_Ret) == 0x000120, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_FindTurotialHelpData_Ret' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Array_Length_ReturnValue) == 0x000178, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00017C, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Add_IntInt_ReturnValue) == 0x000180, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_byte_Variable_4) == 0x000184, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_byte_Variable_5) == 0x000185, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Not_PreBool_ReturnValue) == 0x000186, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_PlaySE_ReturnValue_1) == 0x000188, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, Temp_bool_Variable_2) == 0x00018C, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, K2Node_Select_Default_2) == 0x00018D, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark, CallFunc_Not_PreBool_ReturnValue_1) == 0x00018E, "Member 'TutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Init
// 0x000C (0x000C - 0x0000)
struct TutorialHelp_Bookmark_C_Init final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSubMode;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TutorialHelp_Bookmark_C_Init) == 0x000004, "Wrong alignment on TutorialHelp_Bookmark_C_Init");
static_assert(sizeof(TutorialHelp_Bookmark_C_Init) == 0x00000C, "Wrong size on TutorialHelp_Bookmark_C_Init");
static_assert(offsetof(TutorialHelp_Bookmark_C_Init, InId) == 0x000000, "Member 'TutorialHelp_Bookmark_C_Init::InId' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_Init, InSubMode) == 0x000008, "Member 'TutorialHelp_Bookmark_C_Init::InSubMode' has a wrong offset!");

// Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.SetHelpData2
// 0x0060 (0x0060 - 0x0000)
struct TutorialHelp_Bookmark_C_SetHelpData2 final
{
public:
	int32                                         InPage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ACA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    InData;                                            // 0x0008(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TutorialHelp_Bookmark_C_SetHelpData2) == 0x000008, "Wrong alignment on TutorialHelp_Bookmark_C_SetHelpData2");
static_assert(sizeof(TutorialHelp_Bookmark_C_SetHelpData2) == 0x000060, "Wrong size on TutorialHelp_Bookmark_C_SetHelpData2");
static_assert(offsetof(TutorialHelp_Bookmark_C_SetHelpData2, InPage) == 0x000000, "Member 'TutorialHelp_Bookmark_C_SetHelpData2::InPage' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_SetHelpData2, InData) == 0x000008, "Member 'TutorialHelp_Bookmark_C_SetHelpData2::InData' has a wrong offset!");

// Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnLoaded_053AD1B74FF9010B3058FCA29708A05E
// 0x0008 (0x0008 - 0x0000)
struct TutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E) == 0x000008, "Wrong alignment on TutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E");
static_assert(sizeof(TutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E) == 0x000008, "Wrong size on TutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E");
static_assert(offsetof(TutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E, Loaded) == 0x000000, "Member 'TutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E::Loaded' has a wrong offset!");

// Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.FindTurotialHelpData
// 0x0170 (0x0170 - 0x0000)
struct TutorialHelp_Bookmark_C_FindTurotialHelpData final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFind;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ACB[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    Ret;                                               // 0x0010(0x0058)(Parm, OutParm)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ACC[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ACD[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable;                            // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ACE[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0080(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ACF[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00E0(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD0[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD1[0x2];                                     // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD2[0x2];                                     // 0x010E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD3[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    K2Node_MakeStruct_SBTutorialHelpData;              // 0x0118(0x0058)()
};
static_assert(alignof(TutorialHelp_Bookmark_C_FindTurotialHelpData) == 0x000008, "Wrong alignment on TutorialHelp_Bookmark_C_FindTurotialHelpData");
static_assert(sizeof(TutorialHelp_Bookmark_C_FindTurotialHelpData) == 0x000170, "Wrong size on TutorialHelp_Bookmark_C_FindTurotialHelpData");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, InId) == 0x000000, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::InId' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, bFind) == 0x000008, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::bFind' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, Ret) == 0x000010, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::Ret' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, Temp_bool_True_if_break_was_hit_Variable) == 0x000068, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, Temp_int_Array_Index_Variable) == 0x00006C, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_Not_PreBool_ReturnValue) == 0x000070, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, Temp_wildcard_Variable) == 0x000074, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_GetClassType_ReturnValue) == 0x00007C, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D8, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000E0, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000F0, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_Array_Get_Item) == 0x0000F4, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000104, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000105, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, Temp_int_Loop_Counter_Variable) == 0x000108, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_BooleanOR_ReturnValue) == 0x00010C, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_Less_IntInt_ReturnValue) == 0x00010D, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_Add_IntInt_ReturnValue) == 0x000110, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, CallFunc_BooleanAND_ReturnValue) == 0x000114, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_FindTurotialHelpData, K2Node_MakeStruct_SBTutorialHelpData) == 0x000118, "Member 'TutorialHelp_Bookmark_C_FindTurotialHelpData::K2Node_MakeStruct_SBTutorialHelpData' has a wrong offset!");

// Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.UpdatePageButton
// 0x0058 (0x0058 - 0x0000)
struct TutorialHelp_Bookmark_C_UpdatePageButton final
{
public:
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD4[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(TutorialHelp_Bookmark_C_UpdatePageButton) == 0x000008, "Wrong alignment on TutorialHelp_Bookmark_C_UpdatePageButton");
static_assert(sizeof(TutorialHelp_Bookmark_C_UpdatePageButton) == 0x000058, "Wrong size on TutorialHelp_Bookmark_C_UpdatePageButton");
static_assert(offsetof(TutorialHelp_Bookmark_C_UpdatePageButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000000, "Member 'TutorialHelp_Bookmark_C_UpdatePageButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_UpdatePageButton, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000001, "Member 'TutorialHelp_Bookmark_C_UpdatePageButton::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_UpdatePageButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000002, "Member 'TutorialHelp_Bookmark_C_UpdatePageButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_UpdatePageButton, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'TutorialHelp_Bookmark_C_UpdatePageButton::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_UpdatePageButton, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000018, "Member 'TutorialHelp_Bookmark_C_UpdatePageButton::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_UpdatePageButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'TutorialHelp_Bookmark_C_UpdatePageButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_UpdatePageButton, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'TutorialHelp_Bookmark_C_UpdatePageButton::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.ISCurrentPageEnd
// 0x0002 (0x0002 - 0x0000)
struct TutorialHelp_Bookmark_C_ISCurrentPageEnd final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TutorialHelp_Bookmark_C_ISCurrentPageEnd) == 0x000001, "Wrong alignment on TutorialHelp_Bookmark_C_ISCurrentPageEnd");
static_assert(sizeof(TutorialHelp_Bookmark_C_ISCurrentPageEnd) == 0x000002, "Wrong size on TutorialHelp_Bookmark_C_ISCurrentPageEnd");
static_assert(offsetof(TutorialHelp_Bookmark_C_ISCurrentPageEnd, NewParam) == 0x000000, "Member 'TutorialHelp_Bookmark_C_ISCurrentPageEnd::NewParam' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_ISCurrentPageEnd, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000001, "Member 'TutorialHelp_Bookmark_C_ISCurrentPageEnd::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.SetErrorData
// 0x0058 (0x0058 - 0x0000)
struct TutorialHelp_Bookmark_C_SetErrorData final
{
public:
	class FName                                   HelpId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(TutorialHelp_Bookmark_C_SetErrorData) == 0x000008, "Wrong alignment on TutorialHelp_Bookmark_C_SetErrorData");
static_assert(sizeof(TutorialHelp_Bookmark_C_SetErrorData) == 0x000058, "Wrong size on TutorialHelp_Bookmark_C_SetErrorData");
static_assert(offsetof(TutorialHelp_Bookmark_C_SetErrorData, HelpId) == 0x000000, "Member 'TutorialHelp_Bookmark_C_SetErrorData::HelpId' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_SetErrorData, CallFunc_Conv_NameToString_ReturnValue) == 0x000008, "Member 'TutorialHelp_Bookmark_C_SetErrorData::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_SetErrorData, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'TutorialHelp_Bookmark_C_SetErrorData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_SetErrorData, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'TutorialHelp_Bookmark_C_SetErrorData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelp_Bookmark_C_SetErrorData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'TutorialHelp_Bookmark_C_SetErrorData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

