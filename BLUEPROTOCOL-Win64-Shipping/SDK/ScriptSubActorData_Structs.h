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
	 * UserDefinedStruct ScriptSubActorData.ScriptSubActorData
	 * Size -> 0x0088
	 */
	struct FScriptSubActorData
	{
	public:
		struct FDataTableRowHandle                                 ProfileId_19_C22FBCD94ECFC59546C3B386B4DF9382;           // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor
		unsigned char                                              CharacterAsset_6_F981DB5D421104E9F136F3A09297C78A[0x28]; // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              CharacterCreateData_11_D2E56EFE412965E699C5A5B7E46DDF6A[0x28]; // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AnimationSet_22_1A87F1FF4C37DB68F92E4F904BF3831D[0x28];  // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
