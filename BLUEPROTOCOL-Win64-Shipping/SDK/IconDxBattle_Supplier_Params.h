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
	 * Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.PlayAnimCircle
	 */
	struct UIconDxBattle_Supplier_C_PlayAnimCircle_Params
	{	};

	/**
	 * Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.OnSetInside
	 */
	struct UIconDxBattle_Supplier_C_OnSetInside_Params
	{
	public:
		bool                                                       IsInSide;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F9SN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.Construct
	 */
	struct UIconDxBattle_Supplier_C_Construct_Params
	{	};

	/**
	 * Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.ExecuteUbergraph_IconDxBattle_Supplier
	 */
	struct UIconDxBattle_Supplier_C_ExecuteUbergraph_IconDxBattle_Supplier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
