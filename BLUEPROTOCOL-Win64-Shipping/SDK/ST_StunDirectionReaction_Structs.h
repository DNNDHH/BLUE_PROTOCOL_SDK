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
	 * UserDefinedStruct ST_StunDirectionReaction.ST_StunDirectionReaction
	 * Size -> 0x0003
	 */
	struct FST_StunDirectionReaction
	{
	public:
		E_DamageReaction                                           Down_34_C79A995A4D5D3089096919AE6852EDD6;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_DamageReaction                                           KnockBack_37_EE35851F4675CAE5FBBC54BEAC8A0364;           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_DamageReaction                                           Up_39_C5E242D84EBADDF39D0712AB17B3B4A1;                  // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
