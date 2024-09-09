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
	 * Function ElementGauge.ElementGauge_C.OnBind
	 */
	struct UElementGauge_C_OnBind_Params
	{
	public:
		class ASBCharacter*                                        InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElementGauge.ElementGauge_C.OnUnbind
	 */
	struct UElementGauge_C_OnUnbind_Params
	{
	public:
		class ASBCharacter*                                        InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElementGauge.ElementGauge_C.CustomEvent_1
	 */
	struct UElementGauge_C_CustomEvent_1_Params
	{
	public:
		ESBAttribute                                               ElementType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElementGauge.ElementGauge_C.CustomEvent_2
	 */
	struct UElementGauge_C_CustomEvent_2_Params
	{
	public:
		ESBAttribute                                               ElementType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElementGauge.ElementGauge_C.ExecuteUbergraph_ElementGauge
	 */
	struct UElementGauge_C_ExecuteUbergraph_ElementGauge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
