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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SBAnimNode.FSBCustomBoneScaleAxisSwapType
	 */
	enum class EFSBCustomBoneScaleAxisSwapType : uint8_t
	{
		FSBCustomBoneScaleAxisSwapTypeNoSwap                             = 0,
		FSBCustomBoneScaleAxisSwapTypeToYXZ                              = 1,
		FSBCustomBoneScaleAxisSwapTypeToXZY                              = 2,
		FSBCustomBoneScaleAxisSwapTypeToZYX                              = 3,
		FSBCustomBoneScaleAxisSwapTypeToYZX                              = 4,
		FSBCustomBoneScaleAxisSwapTypeToZXY                              = 5,
		FSBCustomBoneScaleAxisSwapTypeNum                                = 6,
		FSBCustomBoneScaleAxisSwapTypeFSBCustomBoneScaleAxisSwapType_MAX = 7
	};

	/**
	 * Enum SBAnimNode.ECharaCreateBoneScaleType
	 */
	enum class ECharaCreateBoneScaleType : uint8_t
	{
		XYZ_Scale = 0,
		YZ_Scale  = 1,
		X_Scale   = 2,
		Y_Scale   = 3,
		Z_Scale   = 4,
		MAX       = 5
	};

	/**
	 * Enum SBAnimNode.ECharaCreateBoneScaleID
	 */
	enum class ECharaCreateBoneScaleID : uint8_t
	{
		Root_J                 = 0,
		Hip_J__offset          = 1,
		HLP_Spine1__offset     = 2,
		Spine1_J               = 3,
		Spine1_J__offset       = 4,
		Spine2_J__offset       = 5,
		Neck_J                 = 6,
		Neck_J__offset         = 7,
		Head_J                 = 8,
		Head_J__offset         = 9,
		L_Clavicle_J           = 10,
		L_Arm_J__offset        = 11,
		L_ForeArm_J__offset    = 12,
		L_Wrist_J              = 13,
		HLP_L_ForeArm_Mid      = 14,
		HLP_L_ForeArm_Btm      = 15,
		HLP_L_ForeArm_Slide    = 16,
		HLP_L_Arm_Mid          = 17,
		HLP_L_Arm_Top          = 18,
		HLP_L_Elbow            = 19,
		HLP_L_Arm_Slide        = 20,
		HLP_L_ShldrBlade       = 21,
		HLP_L_ShldrBlade_Trans = 22,
		HLP_L_CollarBone       = 23,
		Chest_J                = 24,
		L_Pectoral_OPT001      = 25,
		L_Pectoral_OPT002      = 26,
		Rear_J                 = 27,
		L_UpLeg_J              = 28,
		L_UpLeg_J__offset      = 29,
		L_Leg_J__offset        = 30,
		L_Foot_J               = 31,
		L_Foot_J__offset       = 32,
		HLP_L_Leg_Slide        = 33,
		HLP_L_Leg_Btm          = 34,
		HLP_L_Leg_Mid          = 35,
		HLP_L_Knee             = 36,
		HLP_L_UpLeg_Top        = 37,
		HLP_L_UpLeg_Mid        = 38,
		HLP_L_UpLeg_Slide      = 39,
		HLP_L_Butt             = 40,
		HLP_L_Butt_Trans       = 41,
		HLP_L_Hip              = 42,
		HLP_L_Hip_Trans        = 43,
		MAX                    = 44
	};

	/**
	 * Enum SBAnimNode.ECharaPartsCrtBone
	 */
	enum class ECharaPartsCrtBone : uint8_t
	{
		None                 = 0,
		CRT_L_Arm_UPPER      = 1,
		CRT_L_ForeArm_UPPER1 = 2,
		CRT_L_ForeArm_UPPER2 = 3,
		CRT_L_ForeArm_UPPER3 = 4,
		CRT_Hip_Upper        = 5,
		CRT_L_UpLeg_LOWER1   = 6,
		CRT_L_UpLeg_LOWER2   = 7,
		CRT_L_Leg_LOWER1     = 8,
		CRT_L_Leg_LOWER2     = 9,
		CRT_Hip_Lower        = 10,
		CRT_L_Ankle          = 11,
		MAX                  = 12
	};

	/**
	 * Enum SBAnimNode.ESBIKMode
	 */
	enum class ESBIKMode : uint8_t
	{
		Leg       = 0,
		Climb     = 1,
		Quadruped = 2,
		Arm       = 3,
		MAX       = 4
	};

	/**
	 * Enum SBAnimNode.ESBBoneModificationMode
	 */
	enum class ESBBoneModificationMode : uint8_t
	{
		SB_BMM_Ignore   = 0,
		SB_BMM_Replace  = 1,
		SB_BMM_Additive = 2,
		SB_BMM_MAX      = 3
	};

	/**
	 * Enum SBAnimNode.EPartsDamageState
	 */
	enum class EPartsDamageState : uint8_t
	{
		Off    = 0,
		On     = 1,
		Cancel = 2,
		MAX    = 3
	};

	/**
	 * Enum SBAnimNode.ESBSplineBoneAxis
	 */
	enum class ESBSplineBoneAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum SBAnimNode.ESBIKJointNum
	 */
	enum class ESBIKJointNum : uint8_t
	{
		Two   = 0,
		Three = 1,
		Four  = 2,
		MAX   = 3
	};

	/**
	 * Enum SBAnimNode.ESBIKBoneNum
	 */
	enum class ESBIKBoneNum : uint8_t
	{
		Two   = 0,
		Three = 1,
		Four  = 2,
		MAX   = 3
	};

	/**
	 * Enum SBAnimNode.ESBLegIKRotateType
	 */
	enum class ESBLegIKRotateType : uint8_t
	{
		OneAxis   = 0,
		TwoAxis   = 1,
		ThreeAxis = 2,
		Num       = 3,
		MAX       = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_Base
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	struct FSBAnimNode_Base : public FAnimNode_SkeletalControlBase
	{
	public:
		bool                                                       bActive;                                                 // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipRoleAuthority;                                      // 0x00C9(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHAN[0xE];                                   // 0x00CA(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      ScaleBaseBone;                                           // 0x00D8(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R0RZ[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_CameraLookAt
	 * Size -> 0x00D8 (FullSize[0x01A0] - InheritedSize[0x00C8])
	 */
	struct FSBAnimNode_CameraLookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLDI[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   LookAtTarget;                                            // 0x00E0(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneSocketTarget                                   UpTarget;                                                // 0x0140(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_CopyBoneParameter
	 * Size -> 0x0028
	 */
	struct FSBAnimNode_CopyBoneParameter
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ControlSpace;                                            // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendAlpha;                                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_CopyBone
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_CopyBone : public FSBAnimNode_Base
	{
	public:
		TArray<struct FSBAnimNode_CopyBoneParameter>               ParamArray;                                              // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           SourcePose;                                              // 0x0108(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IRK[0xC];                                   // 0x011C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_CrtBoneScale
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FSBAnimNode_CrtBoneScale : public FAnimNode_SkeletalControlBase
	{
	public:
		bool                                                       bDivide;                                                 // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6CY[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_CustomBoneScale
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FSBAnimNode_CustomBoneScale : public FAnimNode_SkeletalControlBase
	{
	public:
		bool                                                       bDivide;                                                 // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFSBCustomBoneScaleAxisSwapType                            AxisSwap;                                                // 0x00C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKBK[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_CustomBoneScaleLocal
	 * Size -> 0x1038 (FullSize[0x1048] - InheritedSize[0x0010])
	 */
	struct FSBAnimNode_CustomBoneScaleLocal : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8N4B[0x1028];                                // 0x0020(0x1028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBCustomBoneScaleLocal
	 * Size -> 0x0014
	 */
	struct FSBCustomBoneScaleLocal
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ECharaCreateBoneScaleID                                    SourceBoneScaleID;                                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharaPartsCrtBone                                         SourceCrtBoneScaleID;                                    // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDivide;                                                 // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFSBCustomBoneScaleAxisSwapType                            AxisSwap;                                                // 0x0013(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_FacialEyelid
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	struct FSBAnimNode_FacialEyelid : public FAnimNode_PoseHandler
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0080(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                MoveUEyeLPoseName;                                       // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveDEyeLPoseName;                                       // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveLEyeLPoseName;                                       // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveREyeLPoseName;                                       // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveUEyeRPoseName;                                       // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveDEyeRPoseName;                                       // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveLEyeRPoseName;                                       // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MoveREyeRPoseName;                                       // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeUD;                                                   // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeLR;                                                   // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFMQ[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBMinAndMax
	 * Size -> 0x0008
	 */
	struct FSBMinAndMax
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBLegIKInfo
	 * Size -> 0x00B0
	 */
	struct FSBLegIKInfo
	{
	public:
		struct FBoneReference                                      IKBone;                                                  // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESBIKBoneNum                                               BoneNum;                                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYEX[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      SoleBone;                                                // 0x0014(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      SoleBoneForTrace;                                        // 0x0024(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      CachedEndBone;                                           // 0x0034(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             JointTargetLocation;                                     // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStickPosition;                                          // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDQR[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StickLimitDistanceOffset;                                // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SoleDirection;                                           // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotate;                                                 // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESBLegIKRotateType                                         LegIKRotateType;                                         // 0x0065(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOneAxisRotate;                                          // 0x0066(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G47O[0x1];                                   // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RotateDirection;                                         // 0x0068(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSBMinAndMax                                        AngleMinAndMaxSole;                                      // 0x0074(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXDG[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBMinAndMax>                                AngleLimitArray;                                         // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SoleContactLimbRatio;                                    // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceStartLimbRatio;                                     // 0x0094(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceEndLimbRatio;                                       // 0x0098(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRHR[0x14];                                  // 0x009C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBThreeFourBoneIKParam
	 * Size -> 0x0010
	 */
	struct FSBThreeFourBoneIKParam
	{
	public:
		float                                                      TranslationLimit;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Lambda;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterationNum;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorToleranceTranslation;                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBIKStatus
	 * Size -> 0x0001
	 */
	struct FSBIKStatus
	{
	public:
		bool                                                       bForceContact;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBIKStatusAll
	 * Size -> 0x0010
	 */
	struct FSBIKStatusAll
	{
	public:
		TArray<struct FSBIKStatus>                                 IKStatusArray;                                           // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_LegIK
	 * Size -> 0x06C8 (FullSize[0x07C0] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_LegIK : public FSBAnimNode_Base
	{
	public:
		struct FPoseLink                                           ReferencePose;                                           // 0x00F8(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStickReferencePoseLimb;                                 // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_333O[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BaseBone;                                                // 0x010C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBaseMove;                                               // 0x011C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3N42[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlane                                              RefAnimPlane;                                            // 0x0120(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1B0R[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlaneNormalScale;                                        // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESBIKMode                                                  ModeType;                                                // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDOV[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotateLeftRightWeight;                                   // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotateForeBackWeight;                                    // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetDistance;                                          // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL0W[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBLegIKInfo>                                LegIKInfoArray;                                          // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      BaseInterpSpeedMultiple;                                 // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseInterpSpeedPow;                                      // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseRotateInterpSpeedMultiple;                           // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseRotateInterpSpeedPow;                                // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegInGroundInterpSpeedMultiple;                          // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegInterpSpeedMultiple;                                  // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegInterpSpeedPow;                                       // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootRotateInterpSpeedMultiple;                           // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootRotateInterpSpeedPow;                                // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundLegMoveThreshold;                                  // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SleepTraceDuration;                                      // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugDrawInGame;                                  // 0x0194(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3NHE[0x3];                                   // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBThreeFourBoneIKParam                             ThreeFourBoneIKParam;                                    // 0x0198(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSBIKStatusAll                                      IKStatusAll;                                             // 0x01A8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      BaseMoveLimit;                                           // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceStartRatio;                                         // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceEndRatio;                                           // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseRotateLimit;                                         // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KYG[0x5F8];                                 // 0x01C8(0x05F8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBLookAtBlendWeight
	 * Size -> 0x0010
	 */
	struct FSBLookAtBlendWeight
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBLookAtCustomParam
	 * Size -> 0x001C
	 */
	struct FSBLookAtCustomParam
	{
	public:
		float                                                      SpeedMultiply;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedPowMultiply;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampPitchMultiply;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampYawMultiply;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PropagationHierarchyWeight;                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeadBandMultiply;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFiltering;                                        // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBOD[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_LookAt
	 * Size -> 0x0C08 (FullSize[0x0D00] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_LookAt : public FSBAnimNode_Base
	{
	public:
		struct FBoneReference                                      RotateBoneReference;                                     // 0x00F8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTQ5[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   AimTReference;                                           // 0x0110(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneSocketTarget                                   TargetTReference;                                        // 0x0170(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EyeBoneReference;                                        // 0x01D0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              ArmRotateBoneReferenceArray;                             // 0x01E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ArmRotateSpineTwist;                                     // 0x01F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmRotateSpineBend;                                      // 0x01F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ArmRotateSpineAxis;                                      // 0x01F8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtTargetLocation;                                    // 0x0204(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActiveCustomEye;                                        // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LA0[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtCustomEyeTargetLocation;                           // 0x0214(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                               LookAt_Axis;                                             // 0x0220(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               LookUp_Axis;                                             // 0x0230(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LookAtClampYaw;                                          // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAtClampPitch;                                        // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAtEyeClampYaw;                                       // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAtEyeClampPitch;                                     // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterTerm;                                              // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFiltering;                                        // 0x0254(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRKO[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolationVelocityMultiple;                           // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationVelocityPow;                                // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationVelocityMin;                                // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalWeight;                                             // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutWeightStrength;                                   // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSBLookAtBlendWeight                                TopWeight;                                               // 0x026C(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OI5J[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBLookAtBlendWeight>                        WeightArray;                                             // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDebug;                                            // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16Y3[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBLookAtCustomParam                                CustomParam;                                             // 0x0294(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bArmRotateControl;                                       // 0x02B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisable;                                           // 0x02B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TD5[0xA4E];                                 // 0x02B2(0x0A4E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.MechanicalLookAtRotateSetting
	 * Size -> 0x0030
	 */
	struct FMechanicalLookAtRotateSetting
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               Rotate_Axis;                                             // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SpeedRate;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDegree;                                               // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDegree;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_MechanicalLookAt
	 * Size -> 0x0578 (FullSize[0x0670] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_MechanicalLookAt : public FSBAnimNode_Base
	{
	public:
		unsigned char                                              UnknownData_NWRM[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   AimTReference;                                           // 0x0100(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               LookAt_Axis;                                             // 0x0160(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FMechanicalLookAtRotateSetting>              LookAtRotateSettingArray;                                // 0x0170(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             LookAtTargetLocation;                                    // 0x0180(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebug;                                            // 0x018C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXGI[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FilterTerm;                                              // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFiltering;                                        // 0x0194(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XHAD[0x3];                                   // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedPow;                                                // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedMin;                                                // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PM29[0x4CC];                                 // 0x01A4(0x04CC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_ModifyBoneParameter
	 * Size -> 0x003C
	 */
	struct FSBAnimNode_ModifyBoneParameter
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESBBoneModificationMode                                    TranslationMode;                                         // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESBBoneModificationMode                                    RotationMode;                                            // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESBBoneModificationMode                                    ScaleMode;                                               // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TranslationSpace;                                        // 0x0037(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          RotationSpace;                                           // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ScaleSpace;                                              // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4HC[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_ModifyBone
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	struct FSBAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FSBAnimNode_ModifyBoneParameter>             ParamArray;                                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_ObserveBone
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	struct FSBAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToObserve;                                           // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          DisplaySpace;                                            // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeToRefPose;                                      // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQ9R[0x2];                                   // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x00DC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x00E8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x00F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBPDBranchSetting
	 * Size -> 0x0014
	 */
	struct FSBPDBranchSetting
	{
	public:
		struct FBoneReference                                      EndBone;                                                 // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EndStickAlpha;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBPDCollisionSetting
	 * Size -> 0x0068
	 */
	struct FSBPDCollisionSetting
	{
	public:
		struct FBoneReference                                      CollisionBone;                                           // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                GroupName;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ExtraGroupNameArray;                                     // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      CustomRootBone;                                          // 0x0038(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EndStickAlpha;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25SO[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBPDBranchSetting>                          BranchSettingArray;                                      // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ImpactRate;                                              // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Z4O[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_PartsDamage
	 * Size -> 0x00A0 (FullSize[0x0198] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_PartsDamage : public FSBAnimNode_Base
	{
	public:
		TArray<struct FSBPDCollisionSetting>                       CollisionSettingArray;                                   // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RootBone;                                                // 0x0108(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ToParentInfluence;                                       // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ToChildInfluence;                                        // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootMoveImpact;                                          // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLen;                                                 // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutStartTimeLen;                                     // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutTimeLen;                                          // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Impact;                                                  // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideImpact;                                          // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableOverrideImpact;                                    // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EM0G[0x3];                                   // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SwingDecay;                                              // 0x013C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeWarpPower;                                           // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PropagationTimeRate;                                     // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomImpact;                                            // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomDirection;                                         // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactDistanceInfluence;                                 // 0x0150(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAnimationAdditive;                                    // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParentPropagationRate;                                   // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoRootHierarchy;                                       // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseBoneScaleRate;                                       // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C45Z[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBPartsDamageAnimParamter*                          PartsDamageAnimParamter;                                 // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPVI[0x28];                                  // 0x0170(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBPDDecayLine
	 * Size -> 0x0014
	 */
	struct FSBPDDecayLine
	{
	public:
		struct FBoneReference                                      EndBone;                                                 // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ToEndInfluence;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBPDAxisRad
	 * Size -> 0x0010
	 */
	struct FSBPDAxisRad
	{
	public:
		unsigned char                                              UnknownData_VB1U[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.PDCachedBoneData
	 * Size -> 0x0014
	 */
	struct FPDCachedBoneData
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RefSkeletonIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBPoseAlongInfo
	 * Size -> 0x002C
	 */
	struct FSBPoseAlongInfo
	{
	public:
		struct FBoneReference                                      TraceBone;                                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      SoleBoneForTrace;                                        // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TraceDirection;                                          // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_PoseAlong
	 * Size -> 0x0118 (FullSize[0x0210] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_PoseAlong : public FSBAnimNode_Base
	{
	public:
		struct FVector2D                                           CenterPosition;                                          // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CenterRotation;                                          // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceStart;                                              // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceEnd;                                                // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslateLimitScale;                                     // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceScaleCorrection;                                    // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BaseBone;                                                // 0x011C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4QC[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlane                                              AnimPlane;                                               // 0x0130(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundThreshold;                                         // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotateLeftRightWeight;                                   // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotateForeBackWeight;                                    // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlaneNormalScale;                                        // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotateForeWeight;                                        // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotateBackWeight;                                        // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotateLeftWeight;                                        // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotateRightWeight;                                       // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSBPoseAlongInfo>                            PoseAlongInfoArray;                                      // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      BaseInterpSpeedMultiple;                                 // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseInterpSpeedPow;                                      // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseRotateInterpSpeedMultiple;                           // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseRotateInterpSpeedPow;                                // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseRotateLimit;                                         // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugDrawInGame;                                  // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WICU[0x8B];                                  // 0x0185(0x008B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBIKTraceResult
	 * Size -> 0x0034
	 */
	struct FSBIKTraceResult
	{
	public:
		bool                                                       Hit;                                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H17Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitPositionLocal;                                        // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RayCenterPositionLocal;                                  // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RayCenterPosition;                                       // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBPoseAlongStatusAll
	 * Size -> 0x00D4
	 */
	struct FSBPoseAlongStatusAll
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOTD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBIKTraceResult                                    TraceResultForeL;                                        // 0x0004(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSBIKTraceResult                                    TraceResultForeR;                                        // 0x0038(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSBIKTraceResult                                    TraceResultBackL;                                        // 0x006C(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSBIKTraceResult                                    TraceResultBackR;                                        // 0x00A0(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_RigidBody
	 * Size -> 0x00C0 (FullSize[0x09A0] - InheritedSize[0x08E0])
	 */
	struct FSBAnimNode_RigidBody : public FAnimNode_RigidBody
	{
	public:
		float                                                      LimitBoneLengthScale;                                    // 0x08E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitBoneLengthBaseBoneRelativeScale;                    // 0x08E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      LimitTransformReferenceBaseBone;                         // 0x08E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAlwaysUpdateParam;                                      // 0x08F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachePhysicsResult;                                     // 0x08F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLGX[0x2];                                   // 0x08FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StiffnessScale;                                          // 0x08FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingScale;                                            // 0x0900(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassScale;                                               // 0x0904(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CustomMassScale;                                         // 0x0908(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransformAlpha;                                          // 0x090C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      ParameterReferenceBaseBone;                              // 0x0910(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ScaleInfuence;                                           // 0x0920(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConstrainPowerScaleInfluence;                            // 0x0924(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleInfuenceGravity;                                    // 0x0928(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8M1G[0x74];                                  // 0x092C(0x0074) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBRotateBlendWeight
	 * Size -> 0x0010
	 */
	struct FSBRotateBlendWeight
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBRotateCustomParam
	 * Size -> 0x0010
	 */
	struct FSBRotateCustomParam
	{
	public:
		float                                                      SpeedMultiply;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampPitchMultiply;                                      // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampYawMultiply;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PropagationHierarchyWeight;                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_Rotate
	 * Size -> 0x0528 (FullSize[0x0620] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_Rotate : public FSBAnimNode_Base
	{
	public:
		float                                                      Yaw;                                                     // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                               Yaw_Axis;                                                // 0x0104(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               Roll_Axis;                                               // 0x0114(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RotateBoneReference;                                     // 0x0124(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RotateBaseBoneReference;                                 // 0x0134(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FilterTerm;                                              // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationVelocityMultiple;                           // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationVelocityPow;                                // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalWeight;                                             // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4H9E[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBRotateBlendWeight>                        WeightArray;                                             // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDebug;                                            // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFJE[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBRotateCustomParam                                CustomParam;                                             // 0x016C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLSS[0x4A4];                                 // 0x017C(0x04A4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBLimbIKInfo
	 * Size -> 0x00F0
	 */
	struct FSBLimbIKInfo
	{
	public:
		struct FBoneReference                                      IKBone;                                                  // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESBIKBoneNum                                               BoneNum;                                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0SL[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   EffectorBone;                                            // 0x0020(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             BoneRotaterLocation;                                     // 0x0080(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKY2[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   EffectorTargetBone;                                      // 0x0090(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBLimbIKUpdateParam
	 * Size -> 0x0010
	 */
	struct FSBLimbIKUpdateParam
	{
	public:
		bool                                                       bParamActive;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z698[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_SimpleIK
	 * Size -> 0x0078 (FullSize[0x0170] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_SimpleIK : public FSBAnimNode_Base
	{
	public:
		struct FPoseLink                                           ReferencePose;                                           // 0x00F8(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		struct FSBThreeFourBoneIKParam                             ThreeFourBoneIKParam;                                    // 0x0108(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FSBLimbIKInfo>                               LimbIKInfoArray;                                         // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSBLimbIKUpdateParam>                        LimbIKUpdateParamArray;                                  // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      LimbInterpSpeedMultiple;                                 // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimbInterpSpeedPow;                                      // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugDrawInGame;                                  // 0x0140(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4A6[0x2F];                                  // 0x0141(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBIKUpdateParamAll
	 * Size -> 0x0058
	 */
	struct FSBIKUpdateParamAll
	{
	public:
		unsigned char                                              UnknownData_C660[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_SnakeTail
	 * Size -> 0x01B0 (FullSize[0x02A8] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_SnakeTail : public FSBAnimNode_Base
	{
	public:
		struct FBoneReference                                      StartBone;                                               // 0x00F8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x0108(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Stretch;                                                 // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlPointDistRate;                                    // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlphaDelay;                                              // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitAngleInterp;                                        // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendDuration;                                           // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ControlPoint_SkipBoneNum;                                // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ControlPoint_Sub;                                        // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDUN[0xB0];                                  // 0x0138(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSplineCurves                                       BoneSpline;                                              // 0x01E8(0x0070) NativeAccessSpecifierPublic
		float                                                      OriginalSplineLength;                                    // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XEEX[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSplineIKCachedBoneData>                     CachedBoneReferences;                                    // 0x0260(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              CachedBoneLengths;                                       // 0x0270(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FSplineIKCachedBoneData                             CachedRootBoneReference;                                 // 0x0280(0x0014) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4R9[0x14];                                  // 0x0294(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBSplineIKCachedBoneData
	 * Size -> 0x0014
	 */
	struct FSBSplineIKCachedBoneData
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RefSkeletonIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_SplineIK
	 * Size -> 0x01D8 (FullSize[0x02A0] - InheritedSize[0x00C8])
	 */
	struct FSBAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      StartControlBone;                                        // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndControlBone;                                          // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      StartBone;                                               // 0x00E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x00F8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESBSplineBoneAxis                                          BoneAxis;                                                // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCalculateSpline;                                    // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57J1[0x2];                                   // 0x010A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PointCount;                                              // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ControlPoints;                                           // 0x0110(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistStart;                                              // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistEnd;                                                // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUMJ[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         TwistBlend;                                              // 0x0130(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Stretch;                                                 // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZ6G[0x80];                                  // 0x0168(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSplineCurves                                       BoneSpline;                                              // 0x01E8(0x0070) Protected, NativeAccessSpecifierProtected
		float                                                      OriginalSplineLength;                                    // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1V0L[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBSplineIKCachedBoneData>                   CachedBoneReferences;                                    // 0x0260(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              CachedBoneLengths;                                       // 0x0270(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FQuat>                                       CachedOffsetRotations;                                   // 0x0280(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSBSplineIKCachedBoneData>                   CachedControlBoneReferences;                             // 0x0290(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct SBAnimNode.TailBoneParam
	 * Size -> 0x0024
	 */
	struct FTailBoneParam
	{
	public:
		struct FBoneReference                                      StartBone;                                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      InterpPowCollision;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpPowRecovery;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitAngle;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TraceBack;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.TailCachedBoneData
	 * Size -> 0x0014
	 */
	struct FTailCachedBoneData
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RefSkeletonIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBAnimNode_TailCollision
	 * Size -> 0x00D0 (FullSize[0x01C8] - InheritedSize[0x00F8])
	 */
	struct FSBAnimNode_TailCollision : public FSBAnimNode_Base
	{
	public:
		struct FBoneReference                                      StartBone;                                               // 0x00F8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x0108(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              RayCalcOmitBones;                                        // 0x0118(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTailBoneParam>                              TailBoneParams;                                          // 0x0128(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTailCachedBoneData>                         CachedBoneReferences;                                    // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              CachedBoneLengths;                                       // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FDA[0x70];                                  // 0x0158(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SBAnimNode.SBLegIKInfoAll
	 * Size -> 0x0010
	 */
	struct FSBLegIKInfoAll
	{
	public:
		TArray<struct FSBLegIKInfo>                                IKLegIKInfoArray;                                        // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SBAnimNode.SBIKTraceResultAll
	 * Size -> 0x0010
	 */
	struct FSBIKTraceResultAll
	{
	public:
		TArray<struct FSBIKTraceResult>                            IKTraceResultArray;                                      // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
