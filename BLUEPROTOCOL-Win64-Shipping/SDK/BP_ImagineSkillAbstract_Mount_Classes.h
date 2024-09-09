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
	 * BlueprintGeneratedClass BP_ImagineSkillAbstract_Mount.BP_ImagineSkillAbstract_Mount_C
	 * Size -> 0x0029 (FullSize[0x06E1] - InheritedSize[0x06B8])
	 */
	class UBP_ImagineSkillAbstract_Mount_C : public USBImagineMountSkillInfo
	{
	public:
		unsigned char                                              VoiceEvent[0x28];                                        // 0x06B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ESBAkEventLOD                                              VoiceLOD;                                                // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
