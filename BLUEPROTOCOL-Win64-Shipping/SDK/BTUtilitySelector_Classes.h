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
	 * Class BTUtilitySelector.BTComposite_UtilitySelector
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTComposite_UtilitySelector : public UBTCompositeNode
	{
	public:
		EUtilitySelectionMode                                      SelectionMode;                                           // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_97V8[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityBase
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityBase : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityBiasBase
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityBiasBase : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityBiasCooldown
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityBiasCooldown : public UBTDecorator_UtilityBiasBase
	{
	public:
		float                                                      CooldownTime;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Bias;                                                    // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EUtilityBiasCooldownType                                   Function;                                                // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B4AV[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityBiasLastSelected
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityBiasLastSelected : public UBTDecorator_UtilityBiasBase
	{
	public:
		float                                                      Bias;                                                    // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U3YN[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityBlackboardBase
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityBlackboardBase : public UBTDecorator_UtilityBase
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityBlackboard
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UBTDecorator_UtilityBlackboard : public UBTDecorator_UtilityBlackboardBase
	{
	public:
		float                                                      MinValue;                                                // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxValue;                                                // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EUtilityEvaluateType                                       Evaluation;                                              // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInverse : 1;                                            // 0x0099(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6KFK[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleX;                                                  // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScaleY;                                                  // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      offsetY;                                                 // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityConstant
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityConstant : public UBTDecorator_UtilityBase
	{
	public:
		float                                                      UtilityValue;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YI2S[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityCurve
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTDecorator_UtilityCurve : public UBTDecorator_UtilityBlackboardBase
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityOperationBase
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityOperationBase : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityOperationAverage
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityOperationAverage : public UBTDecorator_UtilityOperationBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityOperationMax
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityOperationMax : public UBTDecorator_UtilityOperationBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BTUtilitySelector.BTDecorator_UtilityOperationMin
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_UtilityOperationMin : public UBTDecorator_UtilityOperationBase
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
