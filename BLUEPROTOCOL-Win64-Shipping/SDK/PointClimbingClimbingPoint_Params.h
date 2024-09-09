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
	 * Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation2D
	 */
	struct UPointClimbingClimbingPoint_C_SetPointLocation2D_Params
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation
	 */
	struct UPointClimbingClimbingPoint_C_SetPointLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QN6O[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.PreConstruct
	 */
	struct UPointClimbingClimbingPoint_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.ExecuteUbergraph_PointClimbingClimbingPoint
	 */
	struct UPointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
