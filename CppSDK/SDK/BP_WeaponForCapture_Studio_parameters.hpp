#pragma once

 

// Package: BP_WeaponForCapture_Studio

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ST_WeaponForCapture_Info_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ExecuteUbergraph_BP_WeaponForCapture_Studio
// 0x0270 (0x0270 - 0x0000)
struct BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B5D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B5E[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVisible_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B5F[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsVisible_1;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B60[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InWeaponItemId;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B61[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B62[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0050(0x00B0)()
	int32                                         K2Node_CustomEvent_WeaponID;                       // 0x0100(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsMain;                         // 0x0104(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B63[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBWeapon*>                      K2Node_CustomEvent_Weapons;                        // 0x0108(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_GetWeaponMasterData_IsExists_1;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B64[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue_1;        // 0x0120(0x00B0)()
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B65[0x5];                                     // 0x01D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B66[0x1];                                     // 0x01E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CallFunc_Array_Get_Item;                           // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x01F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B67[0x2];                                     // 0x01F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B68[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B69[0x2];                                     // 0x020A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 WeaponID, bool IsMain, TArray<class ASBWeapon*>& Weapons)> K2Node_CreateDelegate_OutputDelegate;              // 0x020C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 WeaponID, bool IsMain, TArray<class ASBWeapon*>& Weapons)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x022E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x022F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x0233(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B6A[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid_1;               // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B6B[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue_1;           // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid_2;               // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B6C[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue_2;           // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestLoadWeaponAsset_ReturnValue;       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestLoadWeaponAsset_ReturnValue_1;     // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B6D[0x2];                                     // 0x0262(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B6E[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio) == 0x000008, "Wrong alignment on BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio) == 0x000270, "Wrong size on BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, EntryPoint) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_bool_Variable) == 0x000018, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CustomEvent_IsVisible_2) == 0x000020, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CustomEvent_IsVisible_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_Event_EndPlayReason) == 0x000021, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_IsDedicatedServer_ReturnValue) == 0x000022, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000028, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_IsLocallyControlled_ReturnValue) == 0x000032, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_BooleanAND_ReturnValue) == 0x000033, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CustomEvent_IsVisible_1) == 0x000034, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CustomEvent_IsVisible_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CustomEvent_InWeaponItemId) == 0x000038, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CustomEvent_InWeaponItemId' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_IsValid_ReturnValue_1) == 0x00003C, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetMasterDataManager_IsValid_1) == 0x00003D, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000040, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponMasterData_IsExists) == 0x000048, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000050, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CustomEvent_WeaponID) == 0x000100, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CustomEvent_WeaponID' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CustomEvent_IsMain) == 0x000104, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CustomEvent_IsMain' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CustomEvent_Weapons) == 0x000108, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CustomEvent_Weapons' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponMasterData_IsExists_1) == 0x000118, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponMasterData_IsExists_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponMasterData_ReturnValue_1) == 0x000120, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponMasterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0001D0, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001D1, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001D2, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0001D8, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_IsValid_ReturnValue_2) == 0x0001E0, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0001E1, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_BooleanAND_ReturnValue_1) == 0x0001E2, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Array_Length_ReturnValue) == 0x0001E4, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Array_Get_Item) == 0x0001E8, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Array_Length_ReturnValue_1) == 0x0001F0, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Less_IntInt_ReturnValue) == 0x0001F4, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CustomEvent_IsVisible) == 0x0001F5, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_int_Array_Index_Variable_1) == 0x0001F8, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Array_Get_Item_1) == 0x000200, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_IsValid_ReturnValue_3) == 0x000208, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Greater_IntInt_ReturnValue) == 0x000209, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CreateDelegate_OutputDelegate) == 0x00020C, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_CreateDelegate_OutputDelegate_1) == 0x00021C, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_bool_Variable_1) == 0x00022C, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_bool_Variable_2) == 0x00022D, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x00022E, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_bool_Variable_3) == 0x00022F, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_bool_Variable_4) == 0x000230, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_bool_Variable_5) == 0x000231, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_Select_Default) == 0x000232, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, K2Node_Select_Default_1) == 0x000233, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponManager_IsValid) == 0x000234, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponManager_ReturnValue) == 0x000238, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponManager_IsValid_1) == 0x000240, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponManager_ReturnValue_1) == 0x000248, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponManager_IsValid_2) == 0x000250, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_GetWeaponManager_ReturnValue_2) == 0x000258, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_GetWeaponManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_RequestLoadWeaponAsset_ReturnValue) == 0x000260, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_RequestLoadWeaponAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_RequestLoadWeaponAsset_ReturnValue_1) == 0x000261, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_RequestLoadWeaponAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, Temp_int_Loop_Counter_Variable_1) == 0x000264, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Less_IntInt_ReturnValue_1) == 0x000268, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio, CallFunc_Add_IntInt_ReturnValue_1) == 0x00026C, "Member 'BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetAllWeaponVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_WeaponForCapture_Studio_C_SetAllWeaponVisibility final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_SetAllWeaponVisibility) == 0x000001, "Wrong alignment on BP_WeaponForCapture_Studio_C_SetAllWeaponVisibility");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_SetAllWeaponVisibility) == 0x000001, "Wrong size on BP_WeaponForCapture_Studio_C_SetAllWeaponVisibility");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetAllWeaponVisibility, IsVisible) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_SetAllWeaponVisibility::IsVisible' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnLoadWeaponAssetDelegate_����
// 0x0018 (0x0018 - 0x0000)
struct BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____ final
{
public:
	int32                                         WeaponID;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMain;                                            // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B6F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBWeapon*>                      Weapons;                                           // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____) == 0x000008, "Wrong alignment on BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____) == 0x000018, "Wrong size on BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____, WeaponID) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____::WeaponID' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____, IsMain) == 0x000004, "Member 'BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____::IsMain' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____, Weapons) == 0x000008, "Member 'BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____::Weapons' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.LoadWeaponAsset
// 0x0004 (0x0004 - 0x0000)
struct BP_WeaponForCapture_Studio_C_LoadWeaponAsset final
{
public:
	int32                                         InWeaponItemId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_LoadWeaponAsset) == 0x000004, "Wrong alignment on BP_WeaponForCapture_Studio_C_LoadWeaponAsset");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_LoadWeaponAsset) == 0x000004, "Wrong size on BP_WeaponForCapture_Studio_C_LoadWeaponAsset");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_LoadWeaponAsset, InWeaponItemId) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_LoadWeaponAsset::InWeaponItemId' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeaponVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_WeaponForCapture_Studio_C_SetSubWeaponVisibility final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_SetSubWeaponVisibility) == 0x000001, "Wrong alignment on BP_WeaponForCapture_Studio_C_SetSubWeaponVisibility");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_SetSubWeaponVisibility) == 0x000001, "Wrong size on BP_WeaponForCapture_Studio_C_SetSubWeaponVisibility");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeaponVisibility, IsVisible) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeaponVisibility::IsVisible' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetWeaponVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_WeaponForCapture_Studio_C_SetWeaponVisibility final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_SetWeaponVisibility) == 0x000001, "Wrong alignment on BP_WeaponForCapture_Studio_C_SetWeaponVisibility");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_SetWeaponVisibility) == 0x000001, "Wrong size on BP_WeaponForCapture_Studio_C_SetWeaponVisibility");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetWeaponVisibility, IsVisible) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_SetWeaponVisibility::IsVisible' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.DestroyAllChildComponents
// 0x0028 (0x0028 - 0x0000)
struct BP_WeaponForCapture_Studio_C_DestroyAllChildComponents final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B70[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B71[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents) == 0x000008, "Wrong alignment on BP_WeaponForCapture_Studio_C_DestroyAllChildComponents");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents) == 0x000028, "Wrong size on BP_WeaponForCapture_Studio_C_DestroyAllChildComponents");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue_2) == 0x00000A, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue_3) == 0x000021, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue_4) == 0x000022, "Member 'BP_WeaponForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeaponNum
// 0x0008 (0x0008 - 0x0000)
struct BP_WeaponForCapture_Studio_C_SetMainWeaponNum final
{
public:
	int32                                         InWeaponNum;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_SetMainWeaponNum) == 0x000004, "Wrong alignment on BP_WeaponForCapture_Studio_C_SetMainWeaponNum");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_SetMainWeaponNum) == 0x000008, "Wrong size on BP_WeaponForCapture_Studio_C_SetMainWeaponNum");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeaponNum, InWeaponNum) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeaponNum::InWeaponNum' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeaponNum, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeaponNum::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.GetWeaponInfoFromType
// 0x00F8 (0x00F8 - 0x0000)
struct BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType final
{
public:
	ESBWeaponType                                 InWeaponType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B72[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_WeaponForCapture_Info              OutWeaponInfo;                                     // 0x0008(0x0058)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B73[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B74[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B75[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0078(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B76[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_WeaponForCapture_Info              CallFunc_GetDataTableRowFromName_OutRow;           // 0x0098(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType) == 0x000008, "Wrong alignment on BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType) == 0x0000F8, "Wrong size on BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, InWeaponType) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::InWeaponType' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, OutWeaponInfo) == 0x000008, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::OutWeaponInfo' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, Temp_bool_True_if_break_was_hit_Variable) == 0x000060, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, Temp_int_Array_Index_Variable) == 0x000064, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_Not_PreBool_ReturnValue) == 0x000068, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000078, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_Array_Get_Item) == 0x00008C, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000098, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000F0, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_BooleanAND_ReturnValue) == 0x0000F1, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F2, "Member 'BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeapon
// 0x0258 (0x0258 - 0x0000)
struct BP_WeaponForCapture_Studio_C_SetMainWeapon final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B77[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBWeapon*>                      InWeaponAssets;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FRotator>                       TmpWeaponRotations;                                // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        TmpWeaponLocations;                                // 0x0028(0x0010)(Edit, BlueprintVisible)
	float                                         TmpWeaponScale;                                    // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCurrLoopCnt;                                    // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   TmpCurrWeaponComp;                                 // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASBWeapon*>                      TmpWeaponMeshes;                                   // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FST_WeaponForCapture_Info              TmpWeaponInfo;                                     // 0x0058(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B78[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponType                                 CallFunc_GetWeaponTypeByWeaponID_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B79[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_WeaponForCapture_Info              CallFunc_GetWeaponInfoFromType_OutWeaponInfo;      // 0x00E8(0x0058)(HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B7A[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x018C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_9B7B[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WeaponForCapture_C*                 K2Node_DynamicCast_AsBP_Weapon_for_Capture;        // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B7C[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBWeapon*                              CallFunc_Array_Get_Item;                           // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B7D[0x2];                                     // 0x0232(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B7E[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B7F[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_SetMainWeapon) == 0x000008, "Wrong alignment on BP_WeaponForCapture_Studio_C_SetMainWeapon");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_SetMainWeapon) == 0x000258, "Wrong size on BP_WeaponForCapture_Studio_C_SetMainWeapon");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, InWeaponID) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::InWeaponID' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, InWeaponAssets) == 0x000008, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::InWeaponAssets' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, TmpWeaponRotations) == 0x000018, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::TmpWeaponRotations' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, TmpWeaponLocations) == 0x000028, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::TmpWeaponLocations' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, TmpWeaponScale) == 0x000038, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::TmpWeaponScale' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, TmpCurrLoopCnt) == 0x00003C, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::TmpCurrLoopCnt' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, TmpCurrWeaponComp) == 0x000040, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::TmpCurrWeaponComp' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, TmpWeaponMeshes) == 0x000048, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::TmpWeaponMeshes' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, TmpWeaponInfo) == 0x000058, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::TmpWeaponInfo' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, Temp_int_Array_Index_Variable) == 0x0000B0, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_GetWeaponManager_IsValid) == 0x0000B4, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_GetWeaponManager_ReturnValue) == 0x0000B8, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_GetWeaponTypeByWeaponID_ReturnValue) == 0x0000C0, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_GetWeaponTypeByWeaponID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakTransform_Location) == 0x0000C4, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakTransform_Rotation) == 0x0000D0, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakTransform_Scale) == 0x0000DC, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_GetWeaponInfoFromType_OutWeaponInfo) == 0x0000E8, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_GetWeaponInfoFromType_OutWeaponInfo' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakVector_X) == 0x000140, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakVector_Y) == 0x000144, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakVector_Z) == 0x000148, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00014C, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Add_FloatFloat_ReturnValue) == 0x000150, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakVector_X_1) == 0x000154, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakVector_Y_1) == 0x000158, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BreakVector_Z_1) == 0x00015C, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Array_Length_ReturnValue) == 0x000160, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000164, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000168, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Array_Length_ReturnValue_1) == 0x00016C, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000170, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, Temp_int_Loop_Counter_Variable) == 0x00017C, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Array_Length_ReturnValue_2) == 0x000180, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x000184, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x000188, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000189, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00018C, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, K2Node_DynamicCast_AsBP_Weapon_for_Capture) == 0x000218, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::K2Node_DynamicCast_AsBP_Weapon_for_Capture' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, K2Node_DynamicCast_bSuccess) == 0x000220, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Array_Get_Item) == 0x000228, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_IsValid_ReturnValue) == 0x000230, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_IsValid_ReturnValue_1) == 0x000231, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Array_Length_ReturnValue_3) == 0x000234, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Less_IntInt_ReturnValue_2) == 0x000238, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Array_Length_ReturnValue_4) == 0x00023C, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Less_IntInt_ReturnValue_3) == 0x000240, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_Array_Get_Item_1) == 0x000248, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BooleanAND_ReturnValue) == 0x000250, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_IsValid_ReturnValue_2) == 0x000251, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetMainWeapon, CallFunc_BooleanAND_ReturnValue_1) == 0x000252, "Member 'BP_WeaponForCapture_Studio_C_SetMainWeapon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeapon
// 0x01B0 (0x01B0 - 0x0000)
struct BP_WeaponForCapture_Studio_C_SetSubWeapon final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B80[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBWeapon*>                      InWeaponAssets;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UChildActorComponent*                   TmpCurrWeaponComp;                                 // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASBWeapon*>                      TmpWeaponMeshes;                                   // 0x0020(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FST_WeaponForCapture_Info              TmpWeaponInfo;                                     // 0x0030(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B81[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponType                                 CallFunc_GetWeaponTypeByWeaponID_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B82[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_WeaponForCapture_Info              CallFunc_GetWeaponInfoFromType_OutWeaponInfo;      // 0x00A0(0x0058)(HasGetValueTypeHash)
	class ABP_WeaponForCapture_C*                 K2Node_DynamicCast_AsBP_Weapon_for_Capture;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B83[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBWeapon*                              CallFunc_Array_Get_Item;                           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBWeapon*                              CallFunc_Array_Get_Item_1;                         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B84[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x011C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x01A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_SetSubWeapon) == 0x000008, "Wrong alignment on BP_WeaponForCapture_Studio_C_SetSubWeapon");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_SetSubWeapon) == 0x0001B0, "Wrong size on BP_WeaponForCapture_Studio_C_SetSubWeapon");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, InWeaponID) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::InWeaponID' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, InWeaponAssets) == 0x000008, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::InWeaponAssets' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, TmpCurrWeaponComp) == 0x000018, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::TmpCurrWeaponComp' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, TmpWeaponMeshes) == 0x000020, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::TmpWeaponMeshes' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, TmpWeaponInfo) == 0x000030, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::TmpWeaponInfo' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_GetWeaponManager_IsValid) == 0x000088, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_GetWeaponManager_ReturnValue) == 0x000090, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_GetWeaponTypeByWeaponID_ReturnValue) == 0x000098, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_GetWeaponTypeByWeaponID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_GetWeaponInfoFromType_OutWeaponInfo) == 0x0000A0, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_GetWeaponInfoFromType_OutWeaponInfo' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, K2Node_DynamicCast_AsBP_Weapon_for_Capture) == 0x0000F8, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::K2Node_DynamicCast_AsBP_Weapon_for_Capture' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_IsValid_ReturnValue) == 0x000101, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_Array_Get_Item) == 0x000108, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_Array_Get_Item_1) == 0x000110, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00011C, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSubWeapon, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0001A4, "Member 'BP_WeaponForCapture_Studio_C_SetSubWeapon::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSceneCaptureEveryFrameFlag
// 0x0002 (0x0002 - 0x0000)
struct BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag final
{
public:
	bool                                          InIsCaptureEveryFrame;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag) == 0x000001, "Wrong alignment on BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag) == 0x000002, "Wrong size on BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag, InIsCaptureEveryFrame) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag::InIsCaptureEveryFrame' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.CaptureScene
// 0x0001 (0x0001 - 0x0000)
struct BP_WeaponForCapture_Studio_C_CaptureScene final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_CaptureScene) == 0x000001, "Wrong alignment on BP_WeaponForCapture_Studio_C_CaptureScene");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_CaptureScene) == 0x000001, "Wrong size on BP_WeaponForCapture_Studio_C_CaptureScene");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_CaptureScene, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_CaptureScene::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_WeaponForCapture_Studio_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_WeaponForCapture_Studio_C_ReceiveEndPlay");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_WeaponForCapture_Studio_C_ReceiveEndPlay");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct BP_WeaponForCapture_Studio_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B85[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B86[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UChildActorComponent*>           K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_WeaponForCapture_Studio_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_WeaponForCapture_Studio_C_UserConstructionScript");
static_assert(sizeof(BP_WeaponForCapture_Studio_C_UserConstructionScript) == 0x000030, "Wrong size on BP_WeaponForCapture_Studio_C_UserConstructionScript");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_WeaponForCapture_Studio_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_WeaponForCapture_Studio_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_WeaponForCapture_Studio_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_WeaponForCapture_Studio_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_WeaponForCapture_Studio_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'BP_WeaponForCapture_Studio_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_Studio_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000020, "Member 'BP_WeaponForCapture_Studio_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");

}

