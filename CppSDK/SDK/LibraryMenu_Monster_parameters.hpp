#pragma once

 

// Package: LibraryMenu_Monster

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.AllReadMonster__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Monster_C_AllReadMonster__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_AllReadMonster__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Monster_C_AllReadMonster__DelegateSignature");
static_assert(sizeof(LibraryMenu_Monster_C_AllReadMonster__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Monster_C_AllReadMonster__DelegateSignature");
static_assert(offsetof(LibraryMenu_Monster_C_AllReadMonster__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_C_AllReadMonster__DelegateSignature::Param_Index' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ExecuteUbergraph_LibraryMenu_Monster
// 0x02B0 (0x02B0 - 0x0000)
struct LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EnemyId;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FFD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MainPage;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Visible_1;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FFE[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EnemyCharacterId;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBLibraryEnemyViewSetting                    K2Node_CustomEvent_ViewSetting;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyWeaponSetting                  K2Node_CustomEvent_WeaponSetting;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FFF[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7000[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      CallFunc_GetCaptureModel_EnemyCharacter;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7001[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index, class FName EnemyId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBLibraryEnemySetting                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0080(0x0060)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7002[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      CallFunc_GetCaptureModel_EnemyCharacter_1;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HumanoidEnemyBase_C*                K2Node_DynamicCast_AsBP_Humanoid_Enemy_Base;       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7003[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7004[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7005[0x1];                                     // 0x011B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Visible)>                 K2Node_CreateDelegate_OutputDelegate_2;            // 0x011C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x013C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0178(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   K2Node_ComponentBoundEvent_NewParam;               // 0x0190(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7006[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x01B8(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7007[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLibraryEnemyData>            CallFunc_GetLibraryEnemyList_EnemyList;            // 0x01D8(0x0010)(ReferenceParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7008[0x5];                                     // 0x01FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7009[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0218(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_700A[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_ItemIndex;              // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedID_Output;                     // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       CallFunc_Conv_SBTextTableHashToInt_ReturnValue;    // 0x0234(0x0004)(NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x0240(0x0010)(ZeroConstructor, NoDestructor)
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue_1;   // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0258(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0280(0x0028)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_700B[0x2];                                     // 0x02AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster");
static_assert(sizeof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster) == 0x0002B0, "Wrong size on LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, EntryPoint) == 0x000000, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_Index) == 0x000004, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_EnemyId) == 0x000008, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_EnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_PlaySE_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_Event_InBookMarkType) == 0x000018, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_Event_MainPage) == 0x000028, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_Event_SubPage) == 0x00002C, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_Enable) == 0x000030, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_Visible_1) == 0x000031, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_Visible_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_EnemyCharacterId) == 0x000038, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_EnemyCharacterId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_ViewSetting) == 0x000048, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_ViewSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_WeaponSetting) == 0x000049, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_WeaponSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetCaptureModel_EnemyCharacter) == 0x000060, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetCaptureModel_EnemyCharacter' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_Greater_IntInt_ReturnValue) == 0x00006C, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000E0, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_PlayAnimation_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetCaptureModel_EnemyCharacter_1) == 0x0000F0, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetCaptureModel_EnemyCharacter_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_DynamicCast_AsBP_Humanoid_Enemy_Base) == 0x0000F8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_DynamicCast_AsBP_Humanoid_Enemy_Base' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_Array_Length_ReturnValue_1) == 0x000104, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000108, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_PlayAnimation_ReturnValue_1) == 0x000110, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_BooleanOR_ReturnValue) == 0x000118, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_BooleanAND_ReturnValue) == 0x000119, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00011A, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CreateDelegate_OutputDelegate_2) == 0x00011C, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CreateDelegate_OutputDelegate_3) == 0x00012C, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_Event_MyGeometry) == 0x00013C, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_Event_InDeltaTime) == 0x000174, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_Event_Animation) == 0x000178, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CreateDelegate_OutputDelegate_4) == 0x000180, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_ComponentBoundEvent_NewParam) == 0x000190, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_ComponentBoundEvent_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_IsValid_ReturnValue) == 0x0001A8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_IsValid_ReturnValue_1) == 0x0001A9, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetPlayerController_ReturnValue) == 0x0001B0, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001B8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001C8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_DynamicCast_bSuccess_1) == 0x0001D0, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetLibraryEnemyList_EnemyList) == 0x0001D8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetLibraryEnemyList_EnemyList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_PlayAnimation_ReturnValue_2) == 0x0001E8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_PlayAnimation_ReturnValue_3) == 0x0001F0, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001F8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0001F9, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x0001FA, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetSBPlayerController_ReturnValue) == 0x000200, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_Result) == 0x000208, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000210, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CreateDelegate_OutputDelegate_6) == 0x000218, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CustomEvent_Visible) == 0x000228, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_ComponentBoundEvent_ItemIndex) == 0x00022C, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_ComponentBoundEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetSelectedID_Output) == 0x000230, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetSelectedID_Output' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_Conv_SBTextTableHashToInt_ReturnValue) == 0x000234, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_Conv_SBTextTableHashToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000238, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_CreateDelegate_OutputDelegate_7) == 0x000240, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_GetCharacterLogComponent_ReturnValue_1) == 0x000250, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_GetCharacterLogComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_MakeStruct_SlateColor) == 0x000258, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, K2Node_MakeStruct_SlateColor_1) == 0x000280, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_Not_PreBool_ReturnValue) == 0x0002A8, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_BooleanAND_ReturnValue_1) == 0x0002A9, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0002AC, "Member 'LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListSelect
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_Monster_C_AreaListSelect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EnemyId;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_AreaListSelect) == 0x000004, "Wrong alignment on LibraryMenu_Monster_C_AreaListSelect");
static_assert(sizeof(LibraryMenu_Monster_C_AreaListSelect) == 0x00000C, "Wrong size on LibraryMenu_Monster_C_AreaListSelect");
static_assert(offsetof(LibraryMenu_Monster_C_AreaListSelect, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_C_AreaListSelect::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_AreaListSelect, EnemyId) == 0x000004, "Member 'LibraryMenu_Monster_C_AreaListSelect::EnemyId' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListVisibleChange
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Monster_C_AreaListVisibleChange final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_AreaListVisibleChange) == 0x000001, "Wrong alignment on LibraryMenu_Monster_C_AreaListVisibleChange");
static_assert(sizeof(LibraryMenu_Monster_C_AreaListVisibleChange) == 0x000001, "Wrong size on LibraryMenu_Monster_C_AreaListVisibleChange");
static_assert(offsetof(LibraryMenu_Monster_C_AreaListVisibleChange, Visible) == 0x000000, "Member 'LibraryMenu_Monster_C_AreaListVisibleChange::Visible' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnEnemyDataLoaded
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Monster_C_OnEnemyDataLoaded final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_OnEnemyDataLoaded) == 0x000001, "Wrong alignment on LibraryMenu_Monster_C_OnEnemyDataLoaded");
static_assert(sizeof(LibraryMenu_Monster_C_OnEnemyDataLoaded) == 0x000001, "Wrong size on LibraryMenu_Monster_C_OnEnemyDataLoaded");
static_assert(offsetof(LibraryMenu_Monster_C_OnEnemyDataLoaded, Result) == 0x000000, "Member 'LibraryMenu_Monster_C_OnEnemyDataLoaded::Result' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature final
{
public:
	class FText                                   NewParam;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature");
static_assert(sizeof(LibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature");
static_assert(offsetof(LibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature, NewParam) == 0x000000, "Member 'LibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature::NewParam' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Monster_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_OnAnimationFinished) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_OnAnimationFinished");
static_assert(sizeof(LibraryMenu_Monster_C_OnAnimationFinished) == 0x000008, "Wrong size on LibraryMenu_Monster_C_OnAnimationFinished");
static_assert(offsetof(LibraryMenu_Monster_C_OnAnimationFinished, Animation) == 0x000000, "Member 'LibraryMenu_Monster_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.Tick
// 0x003C (0x003C - 0x0000)
struct LibraryMenu_Monster_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_Tick) == 0x000004, "Wrong alignment on LibraryMenu_Monster_C_Tick");
static_assert(sizeof(LibraryMenu_Monster_C_Tick) == 0x00003C, "Wrong size on LibraryMenu_Monster_C_Tick");
static_assert(offsetof(LibraryMenu_Monster_C_Tick, MyGeometry) == 0x000000, "Member 'LibraryMenu_Monster_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_Tick, InDeltaTime) == 0x000038, "Member 'LibraryMenu_Monster_C_Tick::InDeltaTime' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelLoadRequest
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Monster_C_ModelLoadRequest final
{
public:
	class FString                                 EnemyCharacterId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBLibraryEnemyViewSetting                    ViewSetting;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyWeaponSetting                  WeaponSetting;                                     // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_ModelLoadRequest) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_ModelLoadRequest");
static_assert(sizeof(LibraryMenu_Monster_C_ModelLoadRequest) == 0x000018, "Wrong size on LibraryMenu_Monster_C_ModelLoadRequest");
static_assert(offsetof(LibraryMenu_Monster_C_ModelLoadRequest, EnemyCharacterId) == 0x000000, "Member 'LibraryMenu_Monster_C_ModelLoadRequest::EnemyCharacterId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelLoadRequest, ViewSetting) == 0x000010, "Member 'LibraryMenu_Monster_C_ModelLoadRequest::ViewSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelLoadRequest, WeaponSetting) == 0x000011, "Member 'LibraryMenu_Monster_C_ModelLoadRequest::WeaponSetting' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelVisibility
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Monster_C_SetModelVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_SetModelVisibility) == 0x000001, "Wrong alignment on LibraryMenu_Monster_C_SetModelVisibility");
static_assert(sizeof(LibraryMenu_Monster_C_SetModelVisibility) == 0x000001, "Wrong size on LibraryMenu_Monster_C_SetModelVisibility");
static_assert(offsetof(LibraryMenu_Monster_C_SetModelVisibility, Visible) == 0x000000, "Member 'LibraryMenu_Monster_C_SetModelVisibility::Visible' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelControllEnabled
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Monster_C_SetModelControllEnabled final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_SetModelControllEnabled) == 0x000001, "Wrong alignment on LibraryMenu_Monster_C_SetModelControllEnabled");
static_assert(sizeof(LibraryMenu_Monster_C_SetModelControllEnabled) == 0x000001, "Wrong size on LibraryMenu_Monster_C_SetModelControllEnabled");
static_assert(offsetof(LibraryMenu_Monster_C_SetModelControllEnabled, Enable) == 0x000000, "Member 'LibraryMenu_Monster_C_SetModelControllEnabled::Enable' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Monster_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on LibraryMenu_Monster_C_OnSubMenuUpdate");
static_assert(sizeof(LibraryMenu_Monster_C_OnSubMenuUpdate) == 0x000008, "Wrong size on LibraryMenu_Monster_C_OnSubMenuUpdate");
static_assert(offsetof(LibraryMenu_Monster_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'LibraryMenu_Monster_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'LibraryMenu_Monster_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(LibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on LibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(LibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'LibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateCategoryList
// 0x00D0 (0x00D0 - 0x0000)
struct LibraryMenu_Monster_C_CreateCategoryList final
{
public:
	TArray<struct FSBTextTableHash>               CategoryIndexData;                                 // 0x0000(0x0010)(Edit, BlueprintVisible)
	class FString                                 CategoryText;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       RaceId;                                            // 0x0020(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                         NewLocalVar_0;                                     // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_700C[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_700D[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_700E[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       CallFunc_Conv_SBTextTableHashToInt_ReturnValue;    // 0x0044(0x0004)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       CallFunc_Array_Get_Item;                           // 0x0058(0x0004)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_IntToSBTextTableHash_ReturnValue;    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_IntToSBTextTableHash_ReturnValue_1;  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       CallFunc_IsReadCategory_readId;                    // 0x0064(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadCategory_isRead;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEnable_SBTextTableHash_ReturnValue;    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_700F[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7010[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIndex_ReturnValue;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIndex_ReturnValue_1;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7011[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetLibraryEnemyRaceIndexList_IndexList;   // 0x0080(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7012[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_IntToSBTextTableHash_ReturnValue_2;  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEnable_SBTextTableHash_ReturnValue_1;  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7013[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnemyRaceIdName_ReturnValue;           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllRead_ReturnValue;                    // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_CreateCategoryList) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_CreateCategoryList");
static_assert(sizeof(LibraryMenu_Monster_C_CreateCategoryList) == 0x0000D0, "Wrong size on LibraryMenu_Monster_C_CreateCategoryList");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CategoryIndexData) == 0x000000, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CategoryIndexData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CategoryText) == 0x000010, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CategoryText' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, RaceId) == 0x000020, "Member 'LibraryMenu_Monster_C_CreateCategoryList::RaceId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, NewLocalVar_0) == 0x000024, "Member 'LibraryMenu_Monster_C_CreateCategoryList::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, Temp_int_Variable) == 0x000028, "Member 'LibraryMenu_Monster_C_CreateCategoryList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, Temp_int_Variable_1) == 0x00002C, "Member 'LibraryMenu_Monster_C_CreateCategoryList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_GetValidValue_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000039, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Conv_SBTextTableHashToInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Conv_SBTextTableHashToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000048, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'LibraryMenu_Monster_C_CreateCategoryList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'LibraryMenu_Monster_C_CreateCategoryList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000054, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Array_Get_Item) == 0x000058, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Conv_IntToSBTextTableHash_ReturnValue) == 0x00005C, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Conv_IntToSBTextTableHash_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Conv_IntToSBTextTableHash_ReturnValue_1) == 0x000060, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Conv_IntToSBTextTableHash_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_IsReadCategory_readId) == 0x000064, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_IsReadCategory_readId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_IsReadCategory_isRead) == 0x000068, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_IsReadCategory_isRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_NotEnable_SBTextTableHash_ReturnValue) == 0x000069, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_NotEnable_SBTextTableHash_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Not_PreBool_ReturnValue) == 0x00006A, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_GetIndex_ReturnValue) == 0x000074, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_GetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_GetIndex_ReturnValue_1) == 0x000078, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_GetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_GetLibraryEnemyRaceIndexList_IndexList) == 0x000080, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_GetLibraryEnemyRaceIndexList_IndexList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Array_AddUnique_ReturnValue) == 0x000094, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Greater_IntInt_ReturnValue) == 0x000098, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Conv_IntToSBTextTableHash_ReturnValue_2) == 0x00009C, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Conv_IntToSBTextTableHash_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_NotEnable_SBTextTableHash_ReturnValue_1) == 0x0000A0, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_NotEnable_SBTextTableHash_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_GetEnemyRaceIdName_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_GetEnemyRaceIdName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_MakeLiteralInt_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000CC, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_IsAllRead_ReturnValue) == 0x0000CD, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_IsAllRead_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateCategoryList, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000CE, "Member 'LibraryMenu_Monster_C_CreateCategoryList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsAllRead
// 0x02C8 (0x02C8 - 0x0000)
struct LibraryMenu_Monster_C_IsAllRead final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7014[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemyData                    EnemyData;                                         // 0x0008(0x0028)(Edit, BlueprintVisible)
	bool                                          BreakFlag;                                         // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7015[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7016[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7017[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7018[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryEnemyData                    CallFunc_Array_Get_Item;                           // 0x0050(0x0028)()
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7019[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadMonsterIdList_ReturnValue;         // 0x0098(0x0010)(ReferenceParm)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x00A8(0x0218)()
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_IsAllRead) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_IsAllRead");
static_assert(sizeof(LibraryMenu_Monster_C_IsAllRead) == 0x0002C8, "Wrong size on LibraryMenu_Monster_C_IsAllRead");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, ReturnValue) == 0x000000, "Member 'LibraryMenu_Monster_C_IsAllRead::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, EnemyData) == 0x000008, "Member 'LibraryMenu_Monster_C_IsAllRead::EnemyData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, BreakFlag) == 0x000030, "Member 'LibraryMenu_Monster_C_IsAllRead::BreakFlag' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, Temp_bool_True_if_break_was_hit_Variable) == 0x000031, "Member 'LibraryMenu_Monster_C_IsAllRead::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_Not_PreBool_ReturnValue_1) == 0x000039, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'LibraryMenu_Monster_C_IsAllRead::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'LibraryMenu_Monster_C_IsAllRead::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_Array_Get_Item) == 0x000050, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_GetPlayerId_ReturnValue) == 0x000078, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_GetLibrarySaveManager_IsValid) == 0x000088, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000090, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_GetReadMonsterIdList_ReturnValue) == 0x000098, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_GetReadMonsterIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_LoadLibraryData_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_Array_Find_ReturnValue) == 0x0002C0, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsAllRead, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002C4, "Member 'LibraryMenu_Monster_C_IsAllRead::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsReadCategory
// 0x03A8 (0x03A8 - 0x0000)
struct LibraryMenu_Monster_C_IsReadCategory final
{
public:
	struct FSBTextTableHash                       ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       RaceId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       ReadId;                                            // 0x0008(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRead;                                            // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_701A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemyIndividualData          WorkEnemyDa;                                       // 0x0010(0x00E8)(Edit, BlueprintVisible)
	bool                                          ReadFlag;                                          // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_701B[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 RefIndexList;                                      // 0x0100(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           CheckList;                                         // 0x0110(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           ReadedList;                                        // 0x0120(0x0010)(Edit, BlueprintVisible)
	struct FSBTextTableHash                       CategoryId;                                        // 0x0130(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEnable_SBTextTableHash_ReturnValue;    // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_701C[0x1];                                     // 0x0137(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetLibraryEnemyRaceIndexList_IndexList;   // 0x0140(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllRead_ReturnValue;                    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_701D[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_701E[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadMonsterIdList_ReturnValue;         // 0x0180(0x0010)(ReferenceParm)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0190(0x0218)()
};
static_assert(alignof(LibraryMenu_Monster_C_IsReadCategory) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_IsReadCategory");
static_assert(sizeof(LibraryMenu_Monster_C_IsReadCategory) == 0x0003A8, "Wrong size on LibraryMenu_Monster_C_IsReadCategory");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, ID) == 0x000000, "Member 'LibraryMenu_Monster_C_IsReadCategory::ID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, RaceId) == 0x000004, "Member 'LibraryMenu_Monster_C_IsReadCategory::RaceId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, ReadId) == 0x000008, "Member 'LibraryMenu_Monster_C_IsReadCategory::ReadId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, IsRead) == 0x00000C, "Member 'LibraryMenu_Monster_C_IsReadCategory::IsRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, WorkEnemyDa) == 0x000010, "Member 'LibraryMenu_Monster_C_IsReadCategory::WorkEnemyDa' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, ReadFlag) == 0x0000F8, "Member 'LibraryMenu_Monster_C_IsReadCategory::ReadFlag' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, LoopEnd) == 0x0000FC, "Member 'LibraryMenu_Monster_C_IsReadCategory::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, RefIndexList) == 0x000100, "Member 'LibraryMenu_Monster_C_IsReadCategory::RefIndexList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CheckList) == 0x000110, "Member 'LibraryMenu_Monster_C_IsReadCategory::CheckList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, ReadedList) == 0x000120, "Member 'LibraryMenu_Monster_C_IsReadCategory::ReadedList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CategoryId) == 0x000130, "Member 'LibraryMenu_Monster_C_IsReadCategory::CategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_NotEnable_SBTextTableHash_ReturnValue) == 0x000134, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_NotEnable_SBTextTableHash_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, Temp_bool_Variable) == 0x000135, "Member 'LibraryMenu_Monster_C_IsReadCategory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_Not_PreBool_ReturnValue) == 0x000136, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_Array_LastIndex_ReturnValue) == 0x000138, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, Temp_int_Variable) == 0x00013C, "Member 'LibraryMenu_Monster_C_IsReadCategory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_GetLibraryEnemyRaceIndexList_IndexList) == 0x000140, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_GetLibraryEnemyRaceIndexList_IndexList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_Add_IntInt_ReturnValue) == 0x000150, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_Array_Find_ReturnValue) == 0x000154, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_IsAllRead_ReturnValue) == 0x000159, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_IsAllRead_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00015A, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_BooleanAND_ReturnValue) == 0x00015B, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_GetPlayerId_ReturnValue) == 0x000160, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_GetLibrarySaveManager_IsValid) == 0x000170, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000178, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_GetReadMonsterIdList_ReturnValue) == 0x000180, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_GetReadMonsterIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_IsReadCategory, CallFunc_LoadLibraryData_ReturnValue) == 0x000190, "Member 'LibraryMenu_Monster_C_IsReadCategory::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.SaveEnemyReadId
// 0x0278 (0x0278 - 0x0000)
struct LibraryMenu_Monster_C_SaveEnemyReadId final
{
public:
	class FName                                   EnemyId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SaveAdd;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_701F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7020[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7021[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetReadMonsterIdList_ReturnValue;         // 0x0048(0x0010)(ReferenceParm)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0058(0x0218)()
	bool                                          CallFunc_IsReadName_ReturnValue;                   // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_SaveEnemyReadId) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_SaveEnemyReadId");
static_assert(sizeof(LibraryMenu_Monster_C_SaveEnemyReadId) == 0x000278, "Wrong size on LibraryMenu_Monster_C_SaveEnemyReadId");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, EnemyId) == 0x000000, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::EnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, SaveAdd) == 0x000008, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::SaveAdd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, CallFunc_GetPlayerId_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, CallFunc_GetPlayerId_ReturnValue_1) == 0x000020, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, CallFunc_GetLibrarySaveManager_IsValid) == 0x000030, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, CallFunc_SaveLibraryData_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, CallFunc_GetReadMonsterIdList_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::CallFunc_GetReadMonsterIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, CallFunc_LoadLibraryData_ReturnValue) == 0x000058, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_SaveEnemyReadId, CallFunc_IsReadName_ReturnValue) == 0x000270, "Member 'LibraryMenu_Monster_C_SaveEnemyReadId::CallFunc_IsReadName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateAppearanceList
// 0x0368 (0x0368 - 0x0000)
struct LibraryMenu_Monster_C_CreateAppearanceList final
{
public:
	class FString                                 SearchWord;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           EnemyIDList;                                       // 0x0010(0x0010)(Edit, BlueprintVisible)
	class FString                                 WorkEnemyName;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItem_C*                Widget;                                            // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7022[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7023[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnemyName_ReturnValue;                 // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7024[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSerchKeyword_SerchKeyword;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	class ULibraryMenu_ListItem_C*                CallFunc_Create_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7025[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadMonsterIdList_ReturnValue;         // 0x00C8(0x0010)(ReferenceParm)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x00D8(0x0218)()
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7026[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x02F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0308(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7027[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7028[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0330(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLibraryEnemyData>            CallFunc_GetLibraryEnemyList_EnemyList;            // 0x0338(0x0010)(ReferenceParm)
	class UScrollBox*                             K2Node_DynamicCast_AsScroll_Box;                   // 0x0348(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7029[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetLibraryEnemyRaceIndexList_IndexList;   // 0x0358(0x0010)(ReferenceParm)
};
static_assert(alignof(LibraryMenu_Monster_C_CreateAppearanceList) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_CreateAppearanceList");
static_assert(sizeof(LibraryMenu_Monster_C_CreateAppearanceList) == 0x000368, "Wrong size on LibraryMenu_Monster_C_CreateAppearanceList");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, SearchWord) == 0x000000, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::SearchWord' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, EnemyIDList) == 0x000010, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::EnemyIDList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, WorkEnemyName) == 0x000020, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::WorkEnemyName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, Widget) == 0x000030, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::Widget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, LoopEnd) == 0x000038, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_Array_LastIndex_ReturnValue) == 0x00003C, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, Temp_int_Variable) == 0x000040, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetEnemyName_ReturnValue) == 0x000050, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetEnemyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_Contains_ReturnValue) == 0x000060, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetSerchKeyword_SerchKeyword) == 0x000068, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetSerchKeyword_SerchKeyword' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_Create_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetPlayerId_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetLibrarySaveManager_IsValid) == 0x0000B8, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetReadMonsterIdList_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetReadMonsterIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_LoadLibraryData_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_Array_Find_ReturnValue) == 0x0002F0, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002F4, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, K2Node_MakeStruct_Margin) == 0x0002F8, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000308, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000310, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetPlayerController_ReturnValue) == 0x000318, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000320, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, K2Node_DynamicCast_bSuccess) == 0x000328, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetParent_ReturnValue) == 0x000330, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetLibraryEnemyList_EnemyList) == 0x000338, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetLibraryEnemyList_EnemyList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, K2Node_DynamicCast_AsScroll_Box) == 0x000348, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::K2Node_DynamicCast_AsScroll_Box' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, K2Node_DynamicCast_bSuccess_1) == 0x000350, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_CreateAppearanceList, CallFunc_GetLibraryEnemyRaceIndexList_IndexList) == 0x000358, "Member 'LibraryMenu_Monster_C_CreateAppearanceList::CallFunc_GetLibraryEnemyRaceIndexList_IndexList' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAppearanceListClick
// 0x0090 (0x0090 - 0x0000)
struct LibraryMenu_Monster_C_OnAppearanceListClick final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReadCheck;                                         // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_702A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemyData                    TargetData;                                        // 0x0008(0x0028)(Edit, BlueprintVisible)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnemyName_ReturnValue;                 // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BossFlagCheck_Boss;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BossFlagCheck_Unique;                     // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_702B[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveEnemyReadId_SaveAdd;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_702C[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItem_C*                K2Node_DynamicCast_AsLibrary_Menu_List_Item;       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_702D[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_OnAppearanceListClick) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_OnAppearanceListClick");
static_assert(sizeof(LibraryMenu_Monster_C_OnAppearanceListClick) == 0x000090, "Wrong size on LibraryMenu_Monster_C_OnAppearanceListClick");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, ListIndex) == 0x000000, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, ReadCheck) == 0x000004, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::ReadCheck' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, TargetData) == 0x000008, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::TargetData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_Conv_NameToString_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_GetEnemyName_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_GetEnemyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_BossFlagCheck_Boss) == 0x000050, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_BossFlagCheck_Boss' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_BossFlagCheck_Unique) == 0x000051, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_BossFlagCheck_Unique' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_SaveEnemyReadId_SaveAdd) == 0x000060, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_SaveEnemyReadId_SaveAdd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_GetChildAt_ReturnValue) == 0x000068, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, K2Node_DynamicCast_AsLibrary_Menu_List_Item) == 0x000070, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::K2Node_DynamicCast_AsLibrary_Menu_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_PlayAnimation_ReturnValue_1) == 0x000080, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_OnAppearanceListClick, CallFunc_NotEqual_NameName_ReturnValue) == 0x000088, "Member 'LibraryMenu_Monster_C_OnAppearanceListClick::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateSearchVisibility
// 0x0080 (0x0080 - 0x0000)
struct LibraryMenu_Monster_C_UpdateSearchVisibility final
{
public:
	class FText                                   SearchWord;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 EnemyName;                                         // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_702E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SearchWordData;                                    // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_702F[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnemyName_ReturnValue;                 // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_UpdateSearchVisibility) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_UpdateSearchVisibility");
static_assert(sizeof(LibraryMenu_Monster_C_UpdateSearchVisibility) == 0x000080, "Wrong size on LibraryMenu_Monster_C_UpdateSearchVisibility");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, SearchWord) == 0x000000, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::SearchWord' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, EnemyName) == 0x000018, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::EnemyName' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, LoopEnd) == 0x000028, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, SearchWordData) == 0x000030, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::SearchWordData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000050, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, CallFunc_Contains_ReturnValue) == 0x000051, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, CallFunc_Array_LastIndex_ReturnValue) == 0x000054, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, Temp_int_Variable) == 0x000058, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, CallFunc_GetChildAt_ReturnValue) == 0x000060, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, CallFunc_GetEnemyName_ReturnValue) == 0x000068, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::CallFunc_GetEnemyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateSearchVisibility, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000078, "Member 'LibraryMenu_Monster_C_UpdateSearchVisibility::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelPartsChange
// 0x0070 (0x0070 - 0x0000)
struct LibraryMenu_Monster_C_ModelPartsChange final
{
public:
	class ASBEnemyCharacter*                      TargetModel;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7030[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7031[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnemyName_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7032[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7033[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Xor_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7034[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BossFlagCheck_Boss;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BossFlagCheck_Unique;                     // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7035[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      CallFunc_GetCaptureModel_EnemyCharacter;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_ModelPartsChange) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_ModelPartsChange");
static_assert(sizeof(LibraryMenu_Monster_C_ModelPartsChange) == 0x000070, "Wrong size on LibraryMenu_Monster_C_ModelPartsChange");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, TargetModel) == 0x000000, "Member 'LibraryMenu_Monster_C_ModelPartsChange::TargetModel' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_GetEnemyName_ReturnValue) == 0x000018, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_GetEnemyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Percent_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Array_Length_ReturnValue_1) == 0x000030, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Xor_IntInt_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Xor_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Array_Length_ReturnValue_2) == 0x00003C, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_Conv_NameToString_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_BossFlagCheck_Boss) == 0x000058, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_BossFlagCheck_Boss' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_BossFlagCheck_Unique) == 0x000059, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_BossFlagCheck_Unique' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_GetCaptureModel_EnemyCharacter) == 0x000060, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_GetCaptureModel_EnemyCharacter' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ModelPartsChange, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'LibraryMenu_Monster_C_ModelPartsChange::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BossFlagCheck
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_Monster_C_BossFlagCheck final
{
public:
	class FName                                   EnemyId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Boss;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Unique;                                            // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7036[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBossEnemy_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNamedEnemy_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_BossFlagCheck) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_BossFlagCheck");
static_assert(sizeof(LibraryMenu_Monster_C_BossFlagCheck) == 0x000030, "Wrong size on LibraryMenu_Monster_C_BossFlagCheck");
static_assert(offsetof(LibraryMenu_Monster_C_BossFlagCheck, EnemyId) == 0x000000, "Member 'LibraryMenu_Monster_C_BossFlagCheck::EnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_BossFlagCheck, Boss) == 0x000008, "Member 'LibraryMenu_Monster_C_BossFlagCheck::Boss' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_BossFlagCheck, Unique) == 0x000009, "Member 'LibraryMenu_Monster_C_BossFlagCheck::Unique' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_BossFlagCheck, CallFunc_GetMasterDataManager_IsValid) == 0x00000A, "Member 'LibraryMenu_Monster_C_BossFlagCheck::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_BossFlagCheck, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_C_BossFlagCheck::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_BossFlagCheck, CallFunc_Conv_NameToString_ReturnValue) == 0x000018, "Member 'LibraryMenu_Monster_C_BossFlagCheck::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_BossFlagCheck, CallFunc_IsBossEnemy_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_C_BossFlagCheck::CallFunc_IsBossEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_BossFlagCheck, CallFunc_IsNamedEnemy_ReturnValue) == 0x000029, "Member 'LibraryMenu_Monster_C_BossFlagCheck::CallFunc_IsNamedEnemy_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateCategoryListMark
// 0x0098 (0x0098 - 0x0000)
struct LibraryMenu_Monster_C_UpdateCategoryListMark final
{
public:
	TArray<struct FSBTextTableHash>               IndexData;                                         // 0x0000(0x0010)(Edit, BlueprintVisible)
	struct FSBTextTableHash                       RaceId;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7037[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7038[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7039[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       CallFunc_Conv_SBTextTableHashToInt_ReturnValue;    // 0x0030(0x0004)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       CallFunc_Array_Get_Item;                           // 0x0044(0x0004)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_IntToSBTextTableHash_ReturnValue;    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_703A[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       CallFunc_IsReadCategory_readId;                    // 0x0054(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadCategory_isRead;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_703B[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_IntToSBTextTableHash_ReturnValue_1;  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEnable_SBTextTableHash_ReturnValue;    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_703C[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEnable_SBTextTableHash_ReturnValue_1;  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_703D[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIndex_ReturnValue;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIndex_ReturnValue_1;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetLibraryEnemyRaceIndexList_IndexList;   // 0x0078(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_703E[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllRead_ReturnValue;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_C_UpdateCategoryListMark) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_UpdateCategoryListMark");
static_assert(sizeof(LibraryMenu_Monster_C_UpdateCategoryListMark) == 0x000098, "Wrong size on LibraryMenu_Monster_C_UpdateCategoryListMark");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, IndexData) == 0x000000, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::IndexData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, RaceId) == 0x000010, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::RaceId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, Temp_int_Variable) == 0x000014, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, Temp_int_Variable_1) == 0x000018, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Conv_IntToByte_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_GetValidValue_ReturnValue) == 0x000024, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000025, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002C, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Conv_SBTextTableHashToInt_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Conv_SBTextTableHashToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000034, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, Temp_int_Array_Index_Variable) == 0x000038, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Array_Get_Item) == 0x000044, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Conv_IntToSBTextTableHash_ReturnValue) == 0x00004C, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Conv_IntToSBTextTableHash_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_IsReadCategory_readId) == 0x000054, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_IsReadCategory_readId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_IsReadCategory_isRead) == 0x000058, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_IsReadCategory_isRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Conv_IntToSBTextTableHash_ReturnValue_1) == 0x00005C, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Conv_IntToSBTextTableHash_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_NotEnable_SBTextTableHash_ReturnValue) == 0x000060, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_NotEnable_SBTextTableHash_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Array_AddUnique_ReturnValue) == 0x000064, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_NotEnable_SBTextTableHash_ReturnValue_1) == 0x000068, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_NotEnable_SBTextTableHash_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_GetIndex_ReturnValue) == 0x00006C, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_GetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_GetIndex_ReturnValue_1) == 0x000070, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_GetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_MakeLiteralInt_ReturnValue) == 0x000074, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_GetLibraryEnemyRaceIndexList_IndexList) == 0x000078, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_GetLibraryEnemyRaceIndexList_IndexList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Less_IntInt_ReturnValue_1) == 0x000088, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Array_Length_ReturnValue_1) == 0x00008C, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Greater_IntInt_ReturnValue) == 0x000090, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_IsAllRead_ReturnValue) == 0x000091, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_IsAllRead_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_UpdateCategoryListMark, CallFunc_Not_PreBool_ReturnValue_1) == 0x000092, "Member 'LibraryMenu_Monster_C_UpdateCategoryListMark::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ChangeDetailEnemyId
// 0x0120 (0x0120 - 0x0000)
struct LibraryMenu_Monster_C_ChangeDetailEnemyId final
{
public:
	class FName                                   EnemyId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BossFlagCheck_Boss;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BossFlagCheck_Unique;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_703F[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7040[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEnemyParamMasterData_IsExists;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7041[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnemyParamMasterData                  CallFunc_GetEnemyParamMasterData_ReturnValue;      // 0x0038(0x00D8)()
	class FString                                 CallFunc_GetEnemyName_ReturnValue;                 // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_ChangeDetailEnemyId) == 0x000008, "Wrong alignment on LibraryMenu_Monster_C_ChangeDetailEnemyId");
static_assert(sizeof(LibraryMenu_Monster_C_ChangeDetailEnemyId) == 0x000120, "Wrong size on LibraryMenu_Monster_C_ChangeDetailEnemyId");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, EnemyId) == 0x000000, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::EnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, CallFunc_BossFlagCheck_Boss) == 0x000008, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::CallFunc_BossFlagCheck_Boss' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, CallFunc_BossFlagCheck_Unique) == 0x000009, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::CallFunc_BossFlagCheck_Unique' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, CallFunc_GetEnemyParamMasterData_IsExists) == 0x000030, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::CallFunc_GetEnemyParamMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, CallFunc_GetEnemyParamMasterData_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::CallFunc_GetEnemyParamMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_ChangeDetailEnemyId, CallFunc_GetEnemyName_ReturnValue) == 0x000110, "Member 'LibraryMenu_Monster_C_ChangeDetailEnemyId::CallFunc_GetEnemyName_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.TermRequest
// 0x0002 (0x0002 - 0x0000)
struct LibraryMenu_Monster_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_C_TermRequest) == 0x000001, "Wrong alignment on LibraryMenu_Monster_C_TermRequest");
static_assert(sizeof(LibraryMenu_Monster_C_TermRequest) == 0x000002, "Wrong size on LibraryMenu_Monster_C_TermRequest");
static_assert(offsetof(LibraryMenu_Monster_C_TermRequest, InReason) == 0x000000, "Member 'LibraryMenu_Monster_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_C_TermRequest, ReturnValue) == 0x000001, "Member 'LibraryMenu_Monster_C_TermRequest::ReturnValue' has a wrong offset!");

}

