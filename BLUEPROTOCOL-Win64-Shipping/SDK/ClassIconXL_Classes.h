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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass ClassIconXL.ClassIconXL_C
	 * Size -> 0x0001 (FullSize[0x0291] - InheritedSize[0x0290])
	 */
	class UClassIconXL_C : public USBClassIcon
	{
	public:
		bool                                                       bWithoutText;                                            // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		class UTexture2D* GetIconTexture();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
