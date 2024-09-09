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
	 * Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateArrowVisible
	 */
	struct UEngramCannonHUD_TargetSite_C_UpdateArrowVisible_Params
	{	};

	/**
	 * Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateWidgetLocation
	 */
	struct UEngramCannonHUD_TargetSite_C_UpdateWidgetLocation_Params
	{
	public:
		class UWidget*                                             WidgetObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveSpeed;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdatePoint
	 */
	struct UEngramCannonHUD_TargetSite_C_UpdatePoint_Params
	{	};

	/**
	 * Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.InitPoint
	 */
	struct UEngramCannonHUD_TargetSite_C_InitPoint_Params
	{	};

	/**
	 * Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Get Camera Foward Point
	 */
	struct UEngramCannonHUD_TargetSite_C_GetCameraFowardPoint_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Construct
	 */
	struct UEngramCannonHUD_TargetSite_C_Construct_Params
	{	};

	/**
	 * Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Tick
	 */
	struct UEngramCannonHUD_TargetSite_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.ExecuteUbergraph_EngramCannonHUD_TargetSite
	 */
	struct UEngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
