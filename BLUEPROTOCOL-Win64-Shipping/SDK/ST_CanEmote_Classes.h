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
	 * BlueprintGeneratedClass ST_CanEmote.ST_CanEmote_C
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UST_CanEmote_C : public UASTransition_BlueprintBase
	{
	public:
		TArray<class FName>                                        Anim_Tags;                                               // 0x0050(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        ForbidAnimTags;                                          // 0x0060(0x0010) Edit, BlueprintVisible

	public:
		bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
