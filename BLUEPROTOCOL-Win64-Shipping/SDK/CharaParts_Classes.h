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
	 * Class CharaParts.CharaPartsMaterialSet
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCharaPartsMaterialSet : public UDataAsset
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharaParts.CharaPartsMaterialsList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCharaPartsMaterialsList : public UDataAsset
	{
	public:
		TArray<struct FCharaPartsMaterials>                        MaterialsList;                                           // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharaParts.CharaPartsColorListBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCharaPartsColorListBase : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharaParts.CharaPartsColorList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCharaPartsColorList : public UCharaPartsColorListBase
	{
	public:
		TArray<struct FCharaPartsColorData>                        ColorList;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharaParts.CharaPartsColorWeaponList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCharaPartsColorWeaponList : public UCharaPartsColorListBase
	{
	public:
		TArray<struct FCharaPartsColorDataWeapon>                  ColorList;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharaParts.CharaPartsOffsetList
	 * Size -> 0x0290 (FullSize[0x02C0] - InheritedSize[0x0030])
	 */
	class UCharaPartsOffsetList : public UDataAsset
	{
	public:
		struct FTransform                                          M000;                                                    // 0x0030(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          M100;                                                    // 0x0060(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          M200;                                                    // 0x0090(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          M300;                                                    // 0x00C0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          M400;                                                    // 0x00F0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          M500;                                                    // 0x0120(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          F000;                                                    // 0x0150(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          F100;                                                    // 0x0180(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          F200;                                                    // 0x01B0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          F300;                                                    // 0x01E0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          F400;                                                    // 0x0210(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          F500;                                                    // 0x0240(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TMap<ECharaPartsBody, struct FTransform>                   CharaPartsMap;                                           // 0x0270(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CharaParts.CharaPartsData
	 * Size -> 0x0330 (FullSize[0x0360] - InheritedSize[0x0030])
	 */
	class UCharaPartsData : public UDataAsset
	{
	public:
		ECharaPartsLocation                                        PartsLocation;                                           // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharaPartsSubLocation                              SubLocation;                                             // 0x0031(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CEY0[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpacityMask;                                             // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrtBoneScale;                                            // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnkleCrtBoneScale;                                       // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreastPhysicsScale;                                      // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HairType;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnderwearType;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I50J[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AnimClass[0x28];                                         // 0x0070(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      StiffnessScale;                                          // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingScale;                                            // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PhysicsAnimClass1[0x28];                                 // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              SubAnimClass1[0x28];                                     // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		ECharaPartsLocation                                        PhysicsAnimClassLocation1;                               // 0x00F0(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharaPartsLocation                                        SubAnimClassLocation1;                                   // 0x00F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFEO[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SubStiffnessScale1;                                      // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubDampingScale1;                                        // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARH1[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PhysicsAnimClass2[0x28];                                 // 0x0100(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              SubAnimClass2[0x28];                                     // 0x0128(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		ECharaPartsLocation                                        PhysicsAnimClassLocation2;                               // 0x0150(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharaPartsLocation                                        SubAnimClassLocation2;                                   // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBQQ[0x2];                                   // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SubStiffnessScale2;                                      // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubDampingScale2;                                        // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultMeshID;                                           // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MeshList[0x10];                                          // 0x0160(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              MeshMirrorList[0x10];                                    // 0x0170(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FCharaPartsCoordinateData>                   CoordinateList;                                          // 0x0180(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UCharaPartsColorListBase*                            ColorListAsset;                                          // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharaPartsColorData>                        ColorList;                                               // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCharaPartsExtraColorData>                   ExtraColorList_DEPRICATED;                               // 0x01A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              MaterialSetList[0x10];                                   // 0x01B8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              MaterialColorListAsset[0x10];                            // 0x01C8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bIsUsingSocksMaterial;                                   // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H56H[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharaPartsOffsetList*                               OffsetListAsset;                                         // 0x01E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FacialAnimationSet[0x28];                                // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FacialPoseAssetEye[0x28];                                // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FacialPoseAssetBrow[0x28];                               // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FacialPoseAssetMouth[0x28];                              // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FacialPoseAssetAdj[0x28];                                // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FacialPoseAssetEyelid[0x28];                             // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FacialPoseAssetDfm[0x28];                                // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HairAnimClass[0x28];                                     // 0x0300(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              TiltPanBlendSpace[0x28];                                 // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UCharaPartsMaterialsList*                            CharaPartsMaterialsList;                                 // 0x0350(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCS4[0x3];                                   // 0x0358(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECharaPartsAccessoryLocation                               AccessoryLocation;                                       // 0x035B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHDK[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FLinearColor GetPartsMaterialColor(int32_t ColorParameterIndex, int32_t HueIndex, int32_t MaterialColorListIndex);
		struct FCharaPartsColorData GetDefaultColor(int32_t Index);
		void GetCheckedSubLocationArray(TArray<ECharaPartsLocation>* CharaPartsLocationArray);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
