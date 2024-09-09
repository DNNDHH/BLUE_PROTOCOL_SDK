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
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.FindDecalsMaterial
	 */
	struct URandomLightMaterialScheduleComponent_C_FindDecalsMaterial_Params
	{
	public:
		class UDecalComponent*                                     DecalComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstance*                                   TargetMaterial;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Idx;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TJEU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.CalcPreviewFade
	 */
	struct URandomLightMaterialScheduleComponent_C_CalcPreviewFade_Params
	{
	public:
		float                                                      NowTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeStart;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Sw;                                                      // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Available;                                               // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UKDC[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Rate;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitEditorPreview
	 */
	struct URandomLightMaterialScheduleComponent_C_InitEditorPreview_Params
	{
	public:
		bool                                                       Sw;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OEQE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.EditorPreview
	 */
	struct URandomLightMaterialScheduleComponent_C_EditorPreview_Params
	{
	public:
		float                                                      TimeRate;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Preview;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0CHA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.OnRep_ScheduledMaterialLight
	 */
	struct URandomLightMaterialScheduleComponent_C_OnRep_ScheduledMaterialLight_Params
	{	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ReceiveBeginPlay
	 */
	struct URandomLightMaterialScheduleComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.SpawnScheduledMaterialActors
	 */
	struct URandomLightMaterialScheduleComponent_C_SpawnScheduledMaterialActors_Params
	{	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterials
	 */
	struct URandomLightMaterialScheduleComponent_C_RewriteMaterials_Params
	{	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.SetRandomSchedule
	 */
	struct URandomLightMaterialScheduleComponent_C_SetRandomSchedule_Params
	{	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterialsCore
	 */
	struct URandomLightMaterialScheduleComponent_C_RewriteMaterialsCore_Params
	{
	public:
		class UStaticMeshComponent*                                MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstance*                                   TargetMaterial;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Idx;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitializeRandomLightMaterials
	 */
	struct URandomLightMaterialScheduleComponent_C_InitializeRandomLightMaterials_Params
	{	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ExecuteUbergraph_RandomLightMaterialScheduleComponent
	 */
	struct URandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.Loop Up__DelegateSignature
	 */
	struct URandomLightMaterialScheduleComponent_C_LoopUp__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
