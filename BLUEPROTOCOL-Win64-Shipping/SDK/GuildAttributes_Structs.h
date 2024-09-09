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
	 * UserDefinedStruct GuildAttributes.GuildAttributes
	 * Size -> 0x0030
	 */
	struct FGuildAttributes
	{
	public:
		unsigned char                                              Icon_2_2BA25C46492E790AE593A1855ADB44E8[0x28];           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EGuildAttribute                                            Attribute_5_04CFF23F446804C47ABE4299BFFB6C58;            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QCRT[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextID_8_DABD7063410626BBA80294B9B5616B73;               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
