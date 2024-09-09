#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DestroyDecal
	 */
	struct UBP_EF_Comp_Decal_C_DestroyDecal_Params
	{	};

	/**
	 * Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.GetOwnerCharacter
	 */
	struct UBP_EF_Comp_Decal_C_GetOwnerCharacter_Params
	{
	public:
		class AActor*                                              OwnerCharacter;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalEndCTRL
	 */
	struct UBP_EF_Comp_Decal_C_DecalEndCTRL_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalAnimCTRL
	 */
	struct UBP_EF_Comp_Decal_C_DecalAnimCTRL_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalScaleCTRL
	 */
	struct UBP_EF_Comp_Decal_C_DecalScaleCTRL_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.SpawnDecal
	 */
	struct UBP_EF_Comp_Decal_C_SpawnDecal_Params
	{
	public:
		class USceneComponent*                                     EffectComp;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InitialLifeTime;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttackCollision;                                         // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CollisionScale;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBEffectVisibleType                                       VisibleType;                                             // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BC7C[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UDecalComponent*>                             DecalComponent;                                          // 0x0028(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		float                                                      DestroyOderTime;                                         // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DestroyGrace;                                            // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
