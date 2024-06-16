#pragma once

 

// Package: BP_DungeonFunctionLibrary

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.GetPlayerStartLocation
// 0x0078 (0x0078 - 0x0000)
struct BP_DungeonFunctionLibrary_C_GetPlayerStartLocation final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                           PlayerStart;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistFromStart;                                     // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63B9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStart*                           TmpPlayerStart;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpDist;                                           // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerStart*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0x0038(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                           CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63BA[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation) == 0x000008, "Wrong alignment on BP_DungeonFunctionLibrary_C_GetPlayerStartLocation");
static_assert(sizeof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation) == 0x000078, "Wrong size on BP_DungeonFunctionLibrary_C_GetPlayerStartLocation");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, Pawn) == 0x000000, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::Pawn' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, __WorldContext) == 0x000008, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, PlayerStart) == 0x000010, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::PlayerStart' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, DistFromStart) == 0x000018, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::DistFromStart' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, TmpPlayerStart) == 0x000020, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::TmpPlayerStart' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, TmpDist) == 0x000028, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::TmpDist' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_GetAllActorsOfClass_OutActors) == 0x000038, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, Temp_int_Array_Index_Variable) == 0x000048, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_Vector_Distance_ReturnValue) == 0x000068, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_GetPlayerStartLocation, CallFunc_Less_FloatFloat_ReturnValue) == 0x000074, "Member 'BP_DungeonFunctionLibrary_C_GetPlayerStartLocation::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.ResetPlayerAction
// 0x0010 (0x0010 - 0x0000)
struct BP_DungeonFunctionLibrary_C_ResetPlayerAction final
{
public:
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DungeonFunctionLibrary_C_ResetPlayerAction) == 0x000008, "Wrong alignment on BP_DungeonFunctionLibrary_C_ResetPlayerAction");
static_assert(sizeof(BP_DungeonFunctionLibrary_C_ResetPlayerAction) == 0x000010, "Wrong size on BP_DungeonFunctionLibrary_C_ResetPlayerAction");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_ResetPlayerAction, PlayerCharacter) == 0x000000, "Member 'BP_DungeonFunctionLibrary_C_ResetPlayerAction::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_ResetPlayerAction, __WorldContext) == 0x000008, "Member 'BP_DungeonFunctionLibrary_C_ResetPlayerAction::__WorldContext' has a wrong offset!");

// Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.Find Class Actor
// 0x0050 (0x0050 - 0x0000)
struct BP_DungeonFunctionLibrary_C_Find_Class_Actor final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TargetClass;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ActorObject;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63BB[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63BC[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DungeonFunctionLibrary_C_Find_Class_Actor) == 0x000008, "Wrong alignment on BP_DungeonFunctionLibrary_C_Find_Class_Actor");
static_assert(sizeof(BP_DungeonFunctionLibrary_C_Find_Class_Actor) == 0x000050, "Wrong size on BP_DungeonFunctionLibrary_C_Find_Class_Actor");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, Object) == 0x000000, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::Object' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, TargetClass) == 0x000008, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::TargetClass' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, __WorldContext) == 0x000010, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, ActorObject) == 0x000018, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::ActorObject' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, Num) == 0x000020, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::Num' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DungeonFunctionLibrary_C_Find_Class_Actor, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'BP_DungeonFunctionLibrary_C_Find_Class_Actor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

