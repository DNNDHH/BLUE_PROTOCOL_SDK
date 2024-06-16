#pragma once

 

// Package: SBAnimNode

#include "Basic.hpp"

#include "AnimationCore_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum SBAnimNode.FSBCustomBoneScaleAxisSwapType
// NumValues: 0x0008
enum class EFSBCustomBoneScaleAxisSwapType : uint8
{
	NoSwap                                   = 0,
	ToYXZ                                    = 1,
	ToXZY                                    = 2,
	ToZYX                                    = 3,
	ToYZX                                    = 4,
	ToZXY                                    = 5,
	Num                                      = 6,
	FSBCustomBoneScaleAxisSwapType_MAX       = 7,
};

// Enum SBAnimNode.ECharaCreateBoneScaleType
// NumValues: 0x0006
enum class ECharaCreateBoneScaleType : uint8
{
	XYZ_Scale                                = 0,
	YZ_Scale                                 = 1,
	X_Scale                                  = 2,
	Y_Scale                                  = 3,
	Z_Scale                                  = 4,
	ECharaCreateBoneScaleType_MAX            = 5,
};

// Enum SBAnimNode.ECharaCreateBoneScaleID
// NumValues: 0x002D
enum class ECharaCreateBoneScaleID : uint8
{
	Root_J                                   = 0,
	Hip_J__offset                            = 1,
	HLP_Spine1__offset                       = 2,
	Spine1_J                                 = 3,
	Spine1_J__offset                         = 4,
	Spine2_J__offset                         = 5,
	Neck_J                                   = 6,
	Neck_J__offset                           = 7,
	Head_J                                   = 8,
	Head_J__offset                           = 9,
	L_Clavicle_J                             = 10,
	L_Arm_J__offset                          = 11,
	L_ForeArm_J__offset                      = 12,
	L_Wrist_J                                = 13,
	HLP_L_ForeArm_Mid                        = 14,
	HLP_L_ForeArm_Btm                        = 15,
	HLP_L_ForeArm_Slide                      = 16,
	HLP_L_Arm_Mid                            = 17,
	HLP_L_Arm_Top                            = 18,
	HLP_L_Elbow                              = 19,
	HLP_L_Arm_Slide                          = 20,
	HLP_L_ShldrBlade                         = 21,
	HLP_L_ShldrBlade_Trans                   = 22,
	HLP_L_CollarBone                         = 23,
	Chest_J                                  = 24,
	L_Pectoral_OPT001                        = 25,
	L_Pectoral_OPT002                        = 26,
	Rear_J                                   = 27,
	L_UpLeg_J                                = 28,
	L_UpLeg_J__offset                        = 29,
	L_Leg_J__offset                          = 30,
	L_Foot_J                                 = 31,
	L_Foot_J__offset                         = 32,
	HLP_L_Leg_Slide                          = 33,
	HLP_L_Leg_Btm                            = 34,
	HLP_L_Leg_Mid                            = 35,
	HLP_L_Knee                               = 36,
	HLP_L_UpLeg_Top                          = 37,
	HLP_L_UpLeg_Mid                          = 38,
	HLP_L_UpLeg_Slide                        = 39,
	HLP_L_Butt                               = 40,
	HLP_L_Butt_Trans                         = 41,
	HLP_L_Hip                                = 42,
	HLP_L_Hip_Trans                          = 43,
	MAX                                      = 44,
};

// Enum SBAnimNode.ECharaPartsCrtBone
// NumValues: 0x000D
enum class ECharaPartsCrtBone : uint8
{
	None                                     = 0,
	CRT_L_Arm_UPPER                          = 1,
	CRT_L_ForeArm_UPPER1                     = 2,
	CRT_L_ForeArm_UPPER2                     = 3,
	CRT_L_ForeArm_UPPER3                     = 4,
	CRT_Hip_Upper                            = 5,
	CRT_L_UpLeg_LOWER1                       = 6,
	CRT_L_UpLeg_LOWER2                       = 7,
	CRT_L_Leg_LOWER1                         = 8,
	CRT_L_Leg_LOWER2                         = 9,
	CRT_Hip_Lower                            = 10,
	CRT_L_Ankle                              = 11,
	MAX                                      = 12,
};

// Enum SBAnimNode.ESBIKMode
// NumValues: 0x0005
enum class ESBIKMode : uint8
{
	Leg                                      = 0,
	Climb                                    = 1,
	Quadruped                                = 2,
	Arm                                      = 3,
	ESBIKMode_MAX                            = 4,
};

// Enum SBAnimNode.ESBBoneModificationMode
// NumValues: 0x0004
enum class ESBBoneModificationMode : uint8
{
	SB_BMM_Ignore                            = 0,
	SB_BMM_Replace                           = 1,
	SB_BMM_Additive                          = 2,
	SB_BMM_MAX                               = 3,
};

// Enum SBAnimNode.EPartsDamageState
// NumValues: 0x0004
enum class EPartsDamageState : uint8
{
	Off                                      = 0,
	On                                       = 1,
	Cancel                                   = 2,
	EPartsDamageState_MAX                    = 3,
};

// Enum SBAnimNode.ESBSplineBoneAxis
// NumValues: 0x0004
enum class ESBSplineBoneAxis : uint8
{
	X                                        = 1,
	Y                                        = 2,
	Z                                        = 3,
	ESBSplineBoneAxis_MAX                    = 4,
};

// Enum SBAnimNode.ESBIKJointNum
// NumValues: 0x0004
enum class ESBIKJointNum : uint8
{
	Two                                      = 2,
	Three                                    = 3,
	Four                                     = 4,
	ESBIKJointNum_MAX                        = 5,
};

// Enum SBAnimNode.ESBIKBoneNum
// NumValues: 0x0004
enum class ESBIKBoneNum : uint8
{
	Two                                      = 2,
	Three                                    = 3,
	Four                                     = 4,
	ESBIKBoneNum_MAX                         = 5,
};

// Enum SBAnimNode.ESBLegIKRotateType
// NumValues: 0x0005
enum class ESBLegIKRotateType : uint8
{
	OneAxis                                  = 0,
	TwoAxis                                  = 1,
	ThreeAxis                                = 2,
	Num                                      = 3,
	ESBLegIKRotateType_MAX                   = 4,
};

// ScriptStruct SBAnimNode.SBAnimNode_CustomBoneScaleLocal
// 0x1038 (0x1048 - 0x0010)
struct FSBAnimNode_CustomBoneScaleLocal final : public FAnimNode_Base
{
public:
	struct FPoseLink                              InputPose;                                         // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CC7[0x1028];                                  // 0x0020(0x1028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_CustomBoneScaleLocal) == 0x000008, "Wrong alignment on FSBAnimNode_CustomBoneScaleLocal");
static_assert(sizeof(FSBAnimNode_CustomBoneScaleLocal) == 0x001048, "Wrong size on FSBAnimNode_CustomBoneScaleLocal");
static_assert(offsetof(FSBAnimNode_CustomBoneScaleLocal, InputPose) == 0x000010, "Member 'FSBAnimNode_CustomBoneScaleLocal::InputPose' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_Base
// 0x0030 (0x00F8 - 0x00C8)
struct FSBAnimNode_Base : public FAnimNode_SkeletalControlBase
{
public:
	bool                                          bActive;                                           // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipRoleAuthority;                                // 0x00C9(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CC8[0xE];                                     // 0x00CA(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneReference                         ScaleBaseBone;                                     // 0x00D8(0x0010)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1CC9[0x10];                                    // 0x00E8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_Base) == 0x000008, "Wrong alignment on FSBAnimNode_Base");
static_assert(sizeof(FSBAnimNode_Base) == 0x0000F8, "Wrong size on FSBAnimNode_Base");
static_assert(offsetof(FSBAnimNode_Base, bActive) == 0x0000C8, "Member 'FSBAnimNode_Base::bActive' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Base, bSkipRoleAuthority) == 0x0000C9, "Member 'FSBAnimNode_Base::bSkipRoleAuthority' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Base, ScaleBaseBone) == 0x0000D8, "Member 'FSBAnimNode_Base::ScaleBaseBone' has a wrong offset!");

// ScriptStruct SBAnimNode.SBCustomBoneScaleLocal
// 0x0014 (0x0014 - 0x0000)
struct FSBCustomBoneScaleLocal final
{
public:
	struct FBoneReference                         TargetBone;                                        // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	ECharaCreateBoneScaleID                       SourceBoneScaleID;                                 // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECharaPartsCrtBone                            SourceCrtBoneScaleID;                              // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDivide;                                           // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFSBCustomBoneScaleAxisSwapType               AxisSwap;                                          // 0x0013(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBCustomBoneScaleLocal) == 0x000004, "Wrong alignment on FSBCustomBoneScaleLocal");
static_assert(sizeof(FSBCustomBoneScaleLocal) == 0x000014, "Wrong size on FSBCustomBoneScaleLocal");
static_assert(offsetof(FSBCustomBoneScaleLocal, TargetBone) == 0x000000, "Member 'FSBCustomBoneScaleLocal::TargetBone' has a wrong offset!");
static_assert(offsetof(FSBCustomBoneScaleLocal, SourceBoneScaleID) == 0x000010, "Member 'FSBCustomBoneScaleLocal::SourceBoneScaleID' has a wrong offset!");
static_assert(offsetof(FSBCustomBoneScaleLocal, SourceCrtBoneScaleID) == 0x000011, "Member 'FSBCustomBoneScaleLocal::SourceCrtBoneScaleID' has a wrong offset!");
static_assert(offsetof(FSBCustomBoneScaleLocal, bDivide) == 0x000012, "Member 'FSBCustomBoneScaleLocal::bDivide' has a wrong offset!");
static_assert(offsetof(FSBCustomBoneScaleLocal, AxisSwap) == 0x000013, "Member 'FSBCustomBoneScaleLocal::AxisSwap' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_CameraLookAt
// 0x00D8 (0x01A0 - 0x00C8)
struct FSBAnimNode_CameraLookAt final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         BoneToModify;                                      // 0x00C8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CCA[0x8];                                     // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneSocketTarget                      LookAtTarget;                                      // 0x00E0(0x0060)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                      UpTarget;                                          // 0x0140(0x0060)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBAnimNode_CameraLookAt) == 0x000010, "Wrong alignment on FSBAnimNode_CameraLookAt");
static_assert(sizeof(FSBAnimNode_CameraLookAt) == 0x0001A0, "Wrong size on FSBAnimNode_CameraLookAt");
static_assert(offsetof(FSBAnimNode_CameraLookAt, BoneToModify) == 0x0000C8, "Member 'FSBAnimNode_CameraLookAt::BoneToModify' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CameraLookAt, LookAtTarget) == 0x0000E0, "Member 'FSBAnimNode_CameraLookAt::LookAtTarget' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CameraLookAt, UpTarget) == 0x000140, "Member 'FSBAnimNode_CameraLookAt::UpTarget' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_CopyBoneParameter
// 0x0028 (0x0028 - 0x0000)
struct FSBAnimNode_CopyBoneParameter final
{
public:
	struct FBoneReference                         SourceBone;                                        // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         TargetBone;                                        // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bCopyTranslation;                                  // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCopyRotation;                                     // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCopyScale;                                        // 0x0022(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBoneControlSpace                             ControlSpace;                                      // 0x0023(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendAlpha;                                        // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBAnimNode_CopyBoneParameter) == 0x000004, "Wrong alignment on FSBAnimNode_CopyBoneParameter");
static_assert(sizeof(FSBAnimNode_CopyBoneParameter) == 0x000028, "Wrong size on FSBAnimNode_CopyBoneParameter");
static_assert(offsetof(FSBAnimNode_CopyBoneParameter, SourceBone) == 0x000000, "Member 'FSBAnimNode_CopyBoneParameter::SourceBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CopyBoneParameter, TargetBone) == 0x000010, "Member 'FSBAnimNode_CopyBoneParameter::TargetBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CopyBoneParameter, bCopyTranslation) == 0x000020, "Member 'FSBAnimNode_CopyBoneParameter::bCopyTranslation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CopyBoneParameter, bCopyRotation) == 0x000021, "Member 'FSBAnimNode_CopyBoneParameter::bCopyRotation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CopyBoneParameter, bCopyScale) == 0x000022, "Member 'FSBAnimNode_CopyBoneParameter::bCopyScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CopyBoneParameter, ControlSpace) == 0x000023, "Member 'FSBAnimNode_CopyBoneParameter::ControlSpace' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CopyBoneParameter, BlendAlpha) == 0x000024, "Member 'FSBAnimNode_CopyBoneParameter::BlendAlpha' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_CopyBone
// 0x0030 (0x0128 - 0x00F8)
struct FSBAnimNode_CopyBone final : public FSBAnimNode_Base
{
public:
	TArray<struct FSBAnimNode_CopyBoneParameter>  ParamArray;                                        // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPoseLink                              SourcePose;                                        // 0x0108(0x0010)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	float                                         BlendTime;                                         // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CCB[0xC];                                     // 0x011C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_CopyBone) == 0x000008, "Wrong alignment on FSBAnimNode_CopyBone");
static_assert(sizeof(FSBAnimNode_CopyBone) == 0x000128, "Wrong size on FSBAnimNode_CopyBone");
static_assert(offsetof(FSBAnimNode_CopyBone, ParamArray) == 0x0000F8, "Member 'FSBAnimNode_CopyBone::ParamArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CopyBone, SourcePose) == 0x000108, "Member 'FSBAnimNode_CopyBone::SourcePose' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CopyBone, BlendTime) == 0x000118, "Member 'FSBAnimNode_CopyBone::BlendTime' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_CrtBoneScale
// 0x0008 (0x00D0 - 0x00C8)
struct FSBAnimNode_CrtBoneScale final : public FAnimNode_SkeletalControlBase
{
public:
	bool                                          bDivide;                                           // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CCC[0x7];                                     // 0x00C9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_CrtBoneScale) == 0x000008, "Wrong alignment on FSBAnimNode_CrtBoneScale");
static_assert(sizeof(FSBAnimNode_CrtBoneScale) == 0x0000D0, "Wrong size on FSBAnimNode_CrtBoneScale");
static_assert(offsetof(FSBAnimNode_CrtBoneScale, bDivide) == 0x0000C8, "Member 'FSBAnimNode_CrtBoneScale::bDivide' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_CustomBoneScale
// 0x0008 (0x00D0 - 0x00C8)
struct FSBAnimNode_CustomBoneScale final : public FAnimNode_SkeletalControlBase
{
public:
	bool                                          bDivide;                                           // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFSBCustomBoneScaleAxisSwapType               AxisSwap;                                          // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CCD[0x6];                                     // 0x00CA(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_CustomBoneScale) == 0x000008, "Wrong alignment on FSBAnimNode_CustomBoneScale");
static_assert(sizeof(FSBAnimNode_CustomBoneScale) == 0x0000D0, "Wrong size on FSBAnimNode_CustomBoneScale");
static_assert(offsetof(FSBAnimNode_CustomBoneScale, bDivide) == 0x0000C8, "Member 'FSBAnimNode_CustomBoneScale::bDivide' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_CustomBoneScale, AxisSwap) == 0x0000C9, "Member 'FSBAnimNode_CustomBoneScale::AxisSwap' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_FacialEyelid
// 0x0068 (0x00E8 - 0x0080)
struct FSBAnimNode_FacialEyelid final : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                              SourcePose;                                        // 0x0080(0x0010)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   MoveUEyeLPoseName;                                 // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MoveDEyeLPoseName;                                 // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MoveLEyeLPoseName;                                 // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MoveREyeLPoseName;                                 // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MoveUEyeRPoseName;                                 // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MoveDEyeRPoseName;                                 // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MoveLEyeRPoseName;                                 // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MoveREyeRPoseName;                                 // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EyeUD;                                             // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EyeLR;                                             // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CCE[0x10];                                    // 0x00D8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_FacialEyelid) == 0x000008, "Wrong alignment on FSBAnimNode_FacialEyelid");
static_assert(sizeof(FSBAnimNode_FacialEyelid) == 0x0000E8, "Wrong size on FSBAnimNode_FacialEyelid");
static_assert(offsetof(FSBAnimNode_FacialEyelid, SourcePose) == 0x000080, "Member 'FSBAnimNode_FacialEyelid::SourcePose' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, MoveUEyeLPoseName) == 0x000090, "Member 'FSBAnimNode_FacialEyelid::MoveUEyeLPoseName' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, MoveDEyeLPoseName) == 0x000098, "Member 'FSBAnimNode_FacialEyelid::MoveDEyeLPoseName' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, MoveLEyeLPoseName) == 0x0000A0, "Member 'FSBAnimNode_FacialEyelid::MoveLEyeLPoseName' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, MoveREyeLPoseName) == 0x0000A8, "Member 'FSBAnimNode_FacialEyelid::MoveREyeLPoseName' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, MoveUEyeRPoseName) == 0x0000B0, "Member 'FSBAnimNode_FacialEyelid::MoveUEyeRPoseName' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, MoveDEyeRPoseName) == 0x0000B8, "Member 'FSBAnimNode_FacialEyelid::MoveDEyeRPoseName' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, MoveLEyeRPoseName) == 0x0000C0, "Member 'FSBAnimNode_FacialEyelid::MoveLEyeRPoseName' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, MoveREyeRPoseName) == 0x0000C8, "Member 'FSBAnimNode_FacialEyelid::MoveREyeRPoseName' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, EyeUD) == 0x0000D0, "Member 'FSBAnimNode_FacialEyelid::EyeUD' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_FacialEyelid, EyeLR) == 0x0000D4, "Member 'FSBAnimNode_FacialEyelid::EyeLR' has a wrong offset!");

// ScriptStruct SBAnimNode.SBMinAndMax
// 0x0008 (0x0008 - 0x0000)
struct FSBMinAndMax final
{
public:
	float                                         Min;                                               // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Max;                                               // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBMinAndMax) == 0x000004, "Wrong alignment on FSBMinAndMax");
static_assert(sizeof(FSBMinAndMax) == 0x000008, "Wrong size on FSBMinAndMax");
static_assert(offsetof(FSBMinAndMax, Min) == 0x000000, "Member 'FSBMinAndMax::Min' has a wrong offset!");
static_assert(offsetof(FSBMinAndMax, Max) == 0x000004, "Member 'FSBMinAndMax::Max' has a wrong offset!");

// ScriptStruct SBAnimNode.SBLegIKInfo
// 0x00B0 (0x00B0 - 0x0000)
struct FSBLegIKInfo final
{
public:
	struct FBoneReference                         IKBone;                                            // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	ESBIKBoneNum                                  BoneNum;                                           // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CCF[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneReference                         SoleBone;                                          // 0x0014(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         SoleBoneForTrace;                                  // 0x0024(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         CachedEndBone;                                     // 0x0034(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                JointTargetLocation;                               // 0x0044(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStickPosition;                                    // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD0[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StickLimitDistanceOffset;                          // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SoleDirection;                                     // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRotate;                                           // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESBLegIKRotateType                            LegIKRotateType;                                   // 0x0065(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOneAxisRotate;                                    // 0x0066(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD1[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                RotateDirection;                                   // 0x0068(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSBMinAndMax                           AngleMinAndMaxSole;                                // 0x0074(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD2[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMinAndMax>                   AngleLimitArray;                                   // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         SoleContactLimbRatio;                              // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceStartLimbRatio;                               // 0x0094(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceEndLimbRatio;                                 // 0x0098(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD3[0x14];                                    // 0x009C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBLegIKInfo) == 0x000008, "Wrong alignment on FSBLegIKInfo");
static_assert(sizeof(FSBLegIKInfo) == 0x0000B0, "Wrong size on FSBLegIKInfo");
static_assert(offsetof(FSBLegIKInfo, IKBone) == 0x000000, "Member 'FSBLegIKInfo::IKBone' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, BoneNum) == 0x000010, "Member 'FSBLegIKInfo::BoneNum' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, SoleBone) == 0x000014, "Member 'FSBLegIKInfo::SoleBone' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, SoleBoneForTrace) == 0x000024, "Member 'FSBLegIKInfo::SoleBoneForTrace' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, CachedEndBone) == 0x000034, "Member 'FSBLegIKInfo::CachedEndBone' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, JointTargetLocation) == 0x000044, "Member 'FSBLegIKInfo::JointTargetLocation' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, bStickPosition) == 0x000050, "Member 'FSBLegIKInfo::bStickPosition' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, StickLimitDistanceOffset) == 0x000054, "Member 'FSBLegIKInfo::StickLimitDistanceOffset' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, SoleDirection) == 0x000058, "Member 'FSBLegIKInfo::SoleDirection' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, bRotate) == 0x000064, "Member 'FSBLegIKInfo::bRotate' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, LegIKRotateType) == 0x000065, "Member 'FSBLegIKInfo::LegIKRotateType' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, bOneAxisRotate) == 0x000066, "Member 'FSBLegIKInfo::bOneAxisRotate' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, RotateDirection) == 0x000068, "Member 'FSBLegIKInfo::RotateDirection' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, AngleMinAndMaxSole) == 0x000074, "Member 'FSBLegIKInfo::AngleMinAndMaxSole' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, AngleLimitArray) == 0x000080, "Member 'FSBLegIKInfo::AngleLimitArray' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, SoleContactLimbRatio) == 0x000090, "Member 'FSBLegIKInfo::SoleContactLimbRatio' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, TraceStartLimbRatio) == 0x000094, "Member 'FSBLegIKInfo::TraceStartLimbRatio' has a wrong offset!");
static_assert(offsetof(FSBLegIKInfo, TraceEndLimbRatio) == 0x000098, "Member 'FSBLegIKInfo::TraceEndLimbRatio' has a wrong offset!");

// ScriptStruct SBAnimNode.SBThreeFourBoneIKParam
// 0x0010 (0x0010 - 0x0000)
struct FSBThreeFourBoneIKParam final
{
public:
	float                                         TranslationLimit;                                  // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Lambda;                                            // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxIterationNum;                                   // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ErrorToleranceTranslation;                         // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBThreeFourBoneIKParam) == 0x000004, "Wrong alignment on FSBThreeFourBoneIKParam");
static_assert(sizeof(FSBThreeFourBoneIKParam) == 0x000010, "Wrong size on FSBThreeFourBoneIKParam");
static_assert(offsetof(FSBThreeFourBoneIKParam, TranslationLimit) == 0x000000, "Member 'FSBThreeFourBoneIKParam::TranslationLimit' has a wrong offset!");
static_assert(offsetof(FSBThreeFourBoneIKParam, Lambda) == 0x000004, "Member 'FSBThreeFourBoneIKParam::Lambda' has a wrong offset!");
static_assert(offsetof(FSBThreeFourBoneIKParam, MaxIterationNum) == 0x000008, "Member 'FSBThreeFourBoneIKParam::MaxIterationNum' has a wrong offset!");
static_assert(offsetof(FSBThreeFourBoneIKParam, ErrorToleranceTranslation) == 0x00000C, "Member 'FSBThreeFourBoneIKParam::ErrorToleranceTranslation' has a wrong offset!");

// ScriptStruct SBAnimNode.SBIKStatus
// 0x0001 (0x0001 - 0x0000)
struct FSBIKStatus final
{
public:
	bool                                          bForceContact;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBIKStatus) == 0x000001, "Wrong alignment on FSBIKStatus");
static_assert(sizeof(FSBIKStatus) == 0x000001, "Wrong size on FSBIKStatus");
static_assert(offsetof(FSBIKStatus, bForceContact) == 0x000000, "Member 'FSBIKStatus::bForceContact' has a wrong offset!");

// ScriptStruct SBAnimNode.SBIKStatusAll
// 0x0010 (0x0010 - 0x0000)
struct FSBIKStatusAll final
{
public:
	TArray<struct FSBIKStatus>                    IKStatusArray;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBIKStatusAll) == 0x000008, "Wrong alignment on FSBIKStatusAll");
static_assert(sizeof(FSBIKStatusAll) == 0x000010, "Wrong size on FSBIKStatusAll");
static_assert(offsetof(FSBIKStatusAll, IKStatusArray) == 0x000000, "Member 'FSBIKStatusAll::IKStatusArray' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_LegIK
// 0x06C8 (0x07C0 - 0x00F8)
struct FSBAnimNode_LegIK final : public FSBAnimNode_Base
{
public:
	struct FPoseLink                              ReferencePose;                                     // 0x00F8(0x0010)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bStickReferencePoseLimb;                           // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD4[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneReference                         BaseBone;                                          // 0x010C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bBaseMove;                                         // 0x011C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD5[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlane                                 RefAnimPlane;                                      // 0x0120(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD6[0x10];                                    // 0x0130(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlaneNormalScale;                                  // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESBIKMode                                     ModeType;                                          // 0x0144(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD7[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RotateLeftRightWeight;                             // 0x0148(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotateForeBackWeight;                              // 0x014C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OffsetDistance;                                    // 0x0150(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD8[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLegIKInfo>                   LegIKInfoArray;                                    // 0x0158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         BaseInterpSpeedMultiple;                           // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseInterpSpeedPow;                                // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseRotateInterpSpeedMultiple;                     // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseRotateInterpSpeedPow;                          // 0x0174(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LegInGroundInterpSpeedMultiple;                    // 0x0178(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LegInterpSpeedMultiple;                            // 0x017C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LegInterpSpeedPow;                                 // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FootRotateInterpSpeedMultiple;                     // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FootRotateInterpSpeedPow;                          // 0x0188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GroundLegMoveThreshold;                            // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepTraceDuration;                                // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDebugDrawInGame;                            // 0x0194(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD9[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBThreeFourBoneIKParam                ThreeFourBoneIKParam;                              // 0x0198(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSBIKStatusAll                         IKStatusAll;                                       // 0x01A8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         BaseMoveLimit;                                     // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceStartRatio;                                   // 0x01BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceEndRatio;                                     // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseRotateLimit;                                   // 0x01C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CDA[0x5F8];                                   // 0x01C8(0x05F8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_LegIK) == 0x000010, "Wrong alignment on FSBAnimNode_LegIK");
static_assert(sizeof(FSBAnimNode_LegIK) == 0x0007C0, "Wrong size on FSBAnimNode_LegIK");
static_assert(offsetof(FSBAnimNode_LegIK, ReferencePose) == 0x0000F8, "Member 'FSBAnimNode_LegIK::ReferencePose' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, bStickReferencePoseLimb) == 0x000108, "Member 'FSBAnimNode_LegIK::bStickReferencePoseLimb' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, BaseBone) == 0x00010C, "Member 'FSBAnimNode_LegIK::BaseBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, bBaseMove) == 0x00011C, "Member 'FSBAnimNode_LegIK::bBaseMove' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, RefAnimPlane) == 0x000120, "Member 'FSBAnimNode_LegIK::RefAnimPlane' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, PlaneNormalScale) == 0x000140, "Member 'FSBAnimNode_LegIK::PlaneNormalScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, ModeType) == 0x000144, "Member 'FSBAnimNode_LegIK::ModeType' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, RotateLeftRightWeight) == 0x000148, "Member 'FSBAnimNode_LegIK::RotateLeftRightWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, RotateForeBackWeight) == 0x00014C, "Member 'FSBAnimNode_LegIK::RotateForeBackWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, OffsetDistance) == 0x000150, "Member 'FSBAnimNode_LegIK::OffsetDistance' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, LegIKInfoArray) == 0x000158, "Member 'FSBAnimNode_LegIK::LegIKInfoArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, BaseInterpSpeedMultiple) == 0x000168, "Member 'FSBAnimNode_LegIK::BaseInterpSpeedMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, BaseInterpSpeedPow) == 0x00016C, "Member 'FSBAnimNode_LegIK::BaseInterpSpeedPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, BaseRotateInterpSpeedMultiple) == 0x000170, "Member 'FSBAnimNode_LegIK::BaseRotateInterpSpeedMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, BaseRotateInterpSpeedPow) == 0x000174, "Member 'FSBAnimNode_LegIK::BaseRotateInterpSpeedPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, LegInGroundInterpSpeedMultiple) == 0x000178, "Member 'FSBAnimNode_LegIK::LegInGroundInterpSpeedMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, LegInterpSpeedMultiple) == 0x00017C, "Member 'FSBAnimNode_LegIK::LegInterpSpeedMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, LegInterpSpeedPow) == 0x000180, "Member 'FSBAnimNode_LegIK::LegInterpSpeedPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, FootRotateInterpSpeedMultiple) == 0x000184, "Member 'FSBAnimNode_LegIK::FootRotateInterpSpeedMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, FootRotateInterpSpeedPow) == 0x000188, "Member 'FSBAnimNode_LegIK::FootRotateInterpSpeedPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, GroundLegMoveThreshold) == 0x00018C, "Member 'FSBAnimNode_LegIK::GroundLegMoveThreshold' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, SleepTraceDuration) == 0x000190, "Member 'FSBAnimNode_LegIK::SleepTraceDuration' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, bEnableDebugDrawInGame) == 0x000194, "Member 'FSBAnimNode_LegIK::bEnableDebugDrawInGame' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, ThreeFourBoneIKParam) == 0x000198, "Member 'FSBAnimNode_LegIK::ThreeFourBoneIKParam' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, IKStatusAll) == 0x0001A8, "Member 'FSBAnimNode_LegIK::IKStatusAll' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, BaseMoveLimit) == 0x0001B8, "Member 'FSBAnimNode_LegIK::BaseMoveLimit' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, TraceStartRatio) == 0x0001BC, "Member 'FSBAnimNode_LegIK::TraceStartRatio' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, TraceEndRatio) == 0x0001C0, "Member 'FSBAnimNode_LegIK::TraceEndRatio' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LegIK, BaseRotateLimit) == 0x0001C4, "Member 'FSBAnimNode_LegIK::BaseRotateLimit' has a wrong offset!");

// ScriptStruct SBAnimNode.SBLookAtCustomParam
// 0x001C (0x001C - 0x0000)
struct FSBLookAtCustomParam final
{
public:
	float                                         SpeedMultiply;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpeedPowMultiply;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClampPitchMultiply;                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClampYawMultiply;                                  // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PropagationHierarchyWeight;                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeadBandMultiply;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableFiltering;                                  // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CDB[0x3];                                     // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBLookAtCustomParam) == 0x000004, "Wrong alignment on FSBLookAtCustomParam");
static_assert(sizeof(FSBLookAtCustomParam) == 0x00001C, "Wrong size on FSBLookAtCustomParam");
static_assert(offsetof(FSBLookAtCustomParam, SpeedMultiply) == 0x000000, "Member 'FSBLookAtCustomParam::SpeedMultiply' has a wrong offset!");
static_assert(offsetof(FSBLookAtCustomParam, SpeedPowMultiply) == 0x000004, "Member 'FSBLookAtCustomParam::SpeedPowMultiply' has a wrong offset!");
static_assert(offsetof(FSBLookAtCustomParam, ClampPitchMultiply) == 0x000008, "Member 'FSBLookAtCustomParam::ClampPitchMultiply' has a wrong offset!");
static_assert(offsetof(FSBLookAtCustomParam, ClampYawMultiply) == 0x00000C, "Member 'FSBLookAtCustomParam::ClampYawMultiply' has a wrong offset!");
static_assert(offsetof(FSBLookAtCustomParam, PropagationHierarchyWeight) == 0x000010, "Member 'FSBLookAtCustomParam::PropagationHierarchyWeight' has a wrong offset!");
static_assert(offsetof(FSBLookAtCustomParam, DeadBandMultiply) == 0x000014, "Member 'FSBLookAtCustomParam::DeadBandMultiply' has a wrong offset!");
static_assert(offsetof(FSBLookAtCustomParam, bEnableFiltering) == 0x000018, "Member 'FSBLookAtCustomParam::bEnableFiltering' has a wrong offset!");

// ScriptStruct SBAnimNode.SBLookAtBlendWeight
// 0x0010 (0x0010 - 0x0000)
struct FSBLookAtBlendWeight final
{
public:
	float                                         Yaw;                                               // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Pitch;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Roll;                                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Speed;                                             // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBLookAtBlendWeight) == 0x000004, "Wrong alignment on FSBLookAtBlendWeight");
static_assert(sizeof(FSBLookAtBlendWeight) == 0x000010, "Wrong size on FSBLookAtBlendWeight");
static_assert(offsetof(FSBLookAtBlendWeight, Yaw) == 0x000000, "Member 'FSBLookAtBlendWeight::Yaw' has a wrong offset!");
static_assert(offsetof(FSBLookAtBlendWeight, Pitch) == 0x000004, "Member 'FSBLookAtBlendWeight::Pitch' has a wrong offset!");
static_assert(offsetof(FSBLookAtBlendWeight, Roll) == 0x000008, "Member 'FSBLookAtBlendWeight::Roll' has a wrong offset!");
static_assert(offsetof(FSBLookAtBlendWeight, Speed) == 0x00000C, "Member 'FSBLookAtBlendWeight::Speed' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_LookAt
// 0x0C08 (0x0D00 - 0x00F8)
struct FSBAnimNode_LookAt final : public FSBAnimNode_Base
{
public:
	struct FBoneReference                         RotateBoneReference;                               // 0x00F8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CDC[0x8];                                     // 0x0108(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneSocketTarget                      AimTReference;                                     // 0x0110(0x0060)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                      TargetTReference;                                  // 0x0170(0x0060)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         EyeBoneReference;                                  // 0x01D0(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                 ArmRotateBoneReferenceArray;                       // 0x01E0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         ArmRotateSpineTwist;                               // 0x01F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ArmRotateSpineBend;                                // 0x01F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ArmRotateSpineAxis;                                // 0x01F8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LookAtTargetLocation;                              // 0x0204(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bActiveCustomEye;                                  // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CDD[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LookAtCustomEyeTargetLocation;                     // 0x0214(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                  LookAt_Axis;                                       // 0x0220(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                  LookUp_Axis;                                       // 0x0230(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         LookAtClampYaw;                                    // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LookAtClampPitch;                                  // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LookAtEyeClampYaw;                                 // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LookAtEyeClampPitch;                               // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FilterTerm;                                        // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableFiltering;                                  // 0x0254(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CDE[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InterpolationVelocityMultiple;                     // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterpolationVelocityPow;                          // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterpolationVelocityMin;                          // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalWeight;                                       // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeOutWeightStrength;                             // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSBLookAtBlendWeight                   TopWeight;                                         // 0x026C(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CDF[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLookAtBlendWeight>           WeightArray;                                       // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEnableDebug;                                      // 0x0290(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE0[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLookAtCustomParam                   CustomParam;                                       // 0x0294(0x001C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bArmRotateControl;                                 // 0x02B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceDisable;                                     // 0x02B1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE1[0xA4E];                                   // 0x02B2(0x0A4E)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_LookAt) == 0x000010, "Wrong alignment on FSBAnimNode_LookAt");
static_assert(sizeof(FSBAnimNode_LookAt) == 0x000D00, "Wrong size on FSBAnimNode_LookAt");
static_assert(offsetof(FSBAnimNode_LookAt, RotateBoneReference) == 0x0000F8, "Member 'FSBAnimNode_LookAt::RotateBoneReference' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, AimTReference) == 0x000110, "Member 'FSBAnimNode_LookAt::AimTReference' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, TargetTReference) == 0x000170, "Member 'FSBAnimNode_LookAt::TargetTReference' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, EyeBoneReference) == 0x0001D0, "Member 'FSBAnimNode_LookAt::EyeBoneReference' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, ArmRotateBoneReferenceArray) == 0x0001E0, "Member 'FSBAnimNode_LookAt::ArmRotateBoneReferenceArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, ArmRotateSpineTwist) == 0x0001F0, "Member 'FSBAnimNode_LookAt::ArmRotateSpineTwist' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, ArmRotateSpineBend) == 0x0001F4, "Member 'FSBAnimNode_LookAt::ArmRotateSpineBend' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, ArmRotateSpineAxis) == 0x0001F8, "Member 'FSBAnimNode_LookAt::ArmRotateSpineAxis' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, LookAtTargetLocation) == 0x000204, "Member 'FSBAnimNode_LookAt::LookAtTargetLocation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, bActiveCustomEye) == 0x000210, "Member 'FSBAnimNode_LookAt::bActiveCustomEye' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, LookAtCustomEyeTargetLocation) == 0x000214, "Member 'FSBAnimNode_LookAt::LookAtCustomEyeTargetLocation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, LookAt_Axis) == 0x000220, "Member 'FSBAnimNode_LookAt::LookAt_Axis' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, LookUp_Axis) == 0x000230, "Member 'FSBAnimNode_LookAt::LookUp_Axis' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, LookAtClampYaw) == 0x000240, "Member 'FSBAnimNode_LookAt::LookAtClampYaw' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, LookAtClampPitch) == 0x000244, "Member 'FSBAnimNode_LookAt::LookAtClampPitch' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, LookAtEyeClampYaw) == 0x000248, "Member 'FSBAnimNode_LookAt::LookAtEyeClampYaw' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, LookAtEyeClampPitch) == 0x00024C, "Member 'FSBAnimNode_LookAt::LookAtEyeClampPitch' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, FilterTerm) == 0x000250, "Member 'FSBAnimNode_LookAt::FilterTerm' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, bEnableFiltering) == 0x000254, "Member 'FSBAnimNode_LookAt::bEnableFiltering' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, InterpolationVelocityMultiple) == 0x000258, "Member 'FSBAnimNode_LookAt::InterpolationVelocityMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, InterpolationVelocityPow) == 0x00025C, "Member 'FSBAnimNode_LookAt::InterpolationVelocityPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, InterpolationVelocityMin) == 0x000260, "Member 'FSBAnimNode_LookAt::InterpolationVelocityMin' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, TotalWeight) == 0x000264, "Member 'FSBAnimNode_LookAt::TotalWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, FadeOutWeightStrength) == 0x000268, "Member 'FSBAnimNode_LookAt::FadeOutWeightStrength' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, TopWeight) == 0x00026C, "Member 'FSBAnimNode_LookAt::TopWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, WeightArray) == 0x000280, "Member 'FSBAnimNode_LookAt::WeightArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, bEnableDebug) == 0x000290, "Member 'FSBAnimNode_LookAt::bEnableDebug' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, CustomParam) == 0x000294, "Member 'FSBAnimNode_LookAt::CustomParam' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, bArmRotateControl) == 0x0002B0, "Member 'FSBAnimNode_LookAt::bArmRotateControl' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_LookAt, bForceDisable) == 0x0002B1, "Member 'FSBAnimNode_LookAt::bForceDisable' has a wrong offset!");

// ScriptStruct SBAnimNode.MechanicalLookAtRotateSetting
// 0x0030 (0x0030 - 0x0000)
struct FMechanicalLookAtRotateSetting final
{
public:
	struct FBoneReference                         Bone;                                              // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                  Rotate_Axis;                                       // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         SpeedRate;                                         // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinDegree;                                         // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDegree;                                         // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMechanicalLookAtRotateSetting) == 0x000004, "Wrong alignment on FMechanicalLookAtRotateSetting");
static_assert(sizeof(FMechanicalLookAtRotateSetting) == 0x000030, "Wrong size on FMechanicalLookAtRotateSetting");
static_assert(offsetof(FMechanicalLookAtRotateSetting, Bone) == 0x000000, "Member 'FMechanicalLookAtRotateSetting::Bone' has a wrong offset!");
static_assert(offsetof(FMechanicalLookAtRotateSetting, Rotate_Axis) == 0x000010, "Member 'FMechanicalLookAtRotateSetting::Rotate_Axis' has a wrong offset!");
static_assert(offsetof(FMechanicalLookAtRotateSetting, SpeedRate) == 0x000020, "Member 'FMechanicalLookAtRotateSetting::SpeedRate' has a wrong offset!");
static_assert(offsetof(FMechanicalLookAtRotateSetting, MinDegree) == 0x000024, "Member 'FMechanicalLookAtRotateSetting::MinDegree' has a wrong offset!");
static_assert(offsetof(FMechanicalLookAtRotateSetting, MaxDegree) == 0x000028, "Member 'FMechanicalLookAtRotateSetting::MaxDegree' has a wrong offset!");
static_assert(offsetof(FMechanicalLookAtRotateSetting, Weight) == 0x00002C, "Member 'FMechanicalLookAtRotateSetting::Weight' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_MechanicalLookAt
// 0x0578 (0x0670 - 0x00F8)
struct FSBAnimNode_MechanicalLookAt final : public FSBAnimNode_Base
{
public:
	uint8                                         Pad_1CE2[0x8];                                     // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneSocketTarget                      AimTReference;                                     // 0x0100(0x0060)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                  LookAt_Axis;                                       // 0x0160(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FMechanicalLookAtRotateSetting> LookAtRotateSettingArray;                          // 0x0170(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                LookAtTargetLocation;                              // 0x0180(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDebug;                                      // 0x018C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE3[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FilterTerm;                                        // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableFiltering;                                  // 0x0194(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE4[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpeedPow;                                          // 0x0198(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpeedMin;                                          // 0x019C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Speed;                                             // 0x01A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE5[0x4CC];                                   // 0x01A4(0x04CC)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_MechanicalLookAt) == 0x000010, "Wrong alignment on FSBAnimNode_MechanicalLookAt");
static_assert(sizeof(FSBAnimNode_MechanicalLookAt) == 0x000670, "Wrong size on FSBAnimNode_MechanicalLookAt");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, AimTReference) == 0x000100, "Member 'FSBAnimNode_MechanicalLookAt::AimTReference' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, LookAt_Axis) == 0x000160, "Member 'FSBAnimNode_MechanicalLookAt::LookAt_Axis' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, LookAtRotateSettingArray) == 0x000170, "Member 'FSBAnimNode_MechanicalLookAt::LookAtRotateSettingArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, LookAtTargetLocation) == 0x000180, "Member 'FSBAnimNode_MechanicalLookAt::LookAtTargetLocation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, bEnableDebug) == 0x00018C, "Member 'FSBAnimNode_MechanicalLookAt::bEnableDebug' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, FilterTerm) == 0x000190, "Member 'FSBAnimNode_MechanicalLookAt::FilterTerm' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, bEnableFiltering) == 0x000194, "Member 'FSBAnimNode_MechanicalLookAt::bEnableFiltering' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, SpeedPow) == 0x000198, "Member 'FSBAnimNode_MechanicalLookAt::SpeedPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, SpeedMin) == 0x00019C, "Member 'FSBAnimNode_MechanicalLookAt::SpeedMin' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_MechanicalLookAt, Speed) == 0x0001A0, "Member 'FSBAnimNode_MechanicalLookAt::Speed' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_ModifyBoneParameter
// 0x003C (0x003C - 0x0000)
struct FSBAnimNode_ModifyBoneParameter final
{
public:
	struct FBoneReference                         BoneToModify;                                      // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Translation;                                       // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0028(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESBBoneModificationMode                       TranslationMode;                                   // 0x0034(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESBBoneModificationMode                       RotationMode;                                      // 0x0035(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESBBoneModificationMode                       ScaleMode;                                         // 0x0036(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBoneControlSpace                             TranslationSpace;                                  // 0x0037(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBoneControlSpace                             RotationSpace;                                     // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBoneControlSpace                             ScaleSpace;                                        // 0x0039(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE6[0x2];                                     // 0x003A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_ModifyBoneParameter) == 0x000004, "Wrong alignment on FSBAnimNode_ModifyBoneParameter");
static_assert(sizeof(FSBAnimNode_ModifyBoneParameter) == 0x00003C, "Wrong size on FSBAnimNode_ModifyBoneParameter");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, BoneToModify) == 0x000000, "Member 'FSBAnimNode_ModifyBoneParameter::BoneToModify' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, Translation) == 0x000010, "Member 'FSBAnimNode_ModifyBoneParameter::Translation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, Rotation) == 0x00001C, "Member 'FSBAnimNode_ModifyBoneParameter::Rotation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, Scale) == 0x000028, "Member 'FSBAnimNode_ModifyBoneParameter::Scale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, TranslationMode) == 0x000034, "Member 'FSBAnimNode_ModifyBoneParameter::TranslationMode' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, RotationMode) == 0x000035, "Member 'FSBAnimNode_ModifyBoneParameter::RotationMode' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, ScaleMode) == 0x000036, "Member 'FSBAnimNode_ModifyBoneParameter::ScaleMode' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, TranslationSpace) == 0x000037, "Member 'FSBAnimNode_ModifyBoneParameter::TranslationSpace' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, RotationSpace) == 0x000038, "Member 'FSBAnimNode_ModifyBoneParameter::RotationSpace' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ModifyBoneParameter, ScaleSpace) == 0x000039, "Member 'FSBAnimNode_ModifyBoneParameter::ScaleSpace' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_ModifyBone
// 0x0010 (0x00D8 - 0x00C8)
struct FSBAnimNode_ModifyBone final : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FSBAnimNode_ModifyBoneParameter> ParamArray;                                        // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBAnimNode_ModifyBone) == 0x000008, "Wrong alignment on FSBAnimNode_ModifyBone");
static_assert(sizeof(FSBAnimNode_ModifyBone) == 0x0000D8, "Wrong size on FSBAnimNode_ModifyBone");
static_assert(offsetof(FSBAnimNode_ModifyBone, ParamArray) == 0x0000C8, "Member 'FSBAnimNode_ModifyBone::ParamArray' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_ObserveBone
// 0x0038 (0x0100 - 0x00C8)
struct FSBAnimNode_ObserveBone final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         BoneToObserve;                                     // 0x00C8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	EBoneControlSpace                             DisplaySpace;                                      // 0x00D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRelativeToRefPose;                                // 0x00D9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE7[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Translation;                                       // 0x00DC(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x00E8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x00F4(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBAnimNode_ObserveBone) == 0x000008, "Wrong alignment on FSBAnimNode_ObserveBone");
static_assert(sizeof(FSBAnimNode_ObserveBone) == 0x000100, "Wrong size on FSBAnimNode_ObserveBone");
static_assert(offsetof(FSBAnimNode_ObserveBone, BoneToObserve) == 0x0000C8, "Member 'FSBAnimNode_ObserveBone::BoneToObserve' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ObserveBone, DisplaySpace) == 0x0000D8, "Member 'FSBAnimNode_ObserveBone::DisplaySpace' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ObserveBone, bRelativeToRefPose) == 0x0000D9, "Member 'FSBAnimNode_ObserveBone::bRelativeToRefPose' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ObserveBone, Translation) == 0x0000DC, "Member 'FSBAnimNode_ObserveBone::Translation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ObserveBone, Rotation) == 0x0000E8, "Member 'FSBAnimNode_ObserveBone::Rotation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_ObserveBone, Scale) == 0x0000F4, "Member 'FSBAnimNode_ObserveBone::Scale' has a wrong offset!");

// ScriptStruct SBAnimNode.SBPDBranchSetting
// 0x0014 (0x0014 - 0x0000)
struct FSBPDBranchSetting final
{
public:
	struct FBoneReference                         EndBone;                                           // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         EndStickAlpha;                                     // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBPDBranchSetting) == 0x000004, "Wrong alignment on FSBPDBranchSetting");
static_assert(sizeof(FSBPDBranchSetting) == 0x000014, "Wrong size on FSBPDBranchSetting");
static_assert(offsetof(FSBPDBranchSetting, EndBone) == 0x000000, "Member 'FSBPDBranchSetting::EndBone' has a wrong offset!");
static_assert(offsetof(FSBPDBranchSetting, EndStickAlpha) == 0x000010, "Member 'FSBPDBranchSetting::EndStickAlpha' has a wrong offset!");

// ScriptStruct SBAnimNode.SBPDCollisionSetting
// 0x0068 (0x0068 - 0x0000)
struct FSBPDCollisionSetting final
{
public:
	struct FBoneReference                         CollisionBone;                                     // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         EndBone;                                           // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   GroupName;                                         // 0x0020(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ExtraGroupNameArray;                               // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         CustomRootBone;                                    // 0x0038(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         EndStickAlpha;                                     // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE8[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPDBranchSetting>             BranchSettingArray;                                // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         ImpactRate;                                        // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE9[0x4];                                     // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBPDCollisionSetting) == 0x000008, "Wrong alignment on FSBPDCollisionSetting");
static_assert(sizeof(FSBPDCollisionSetting) == 0x000068, "Wrong size on FSBPDCollisionSetting");
static_assert(offsetof(FSBPDCollisionSetting, CollisionBone) == 0x000000, "Member 'FSBPDCollisionSetting::CollisionBone' has a wrong offset!");
static_assert(offsetof(FSBPDCollisionSetting, EndBone) == 0x000010, "Member 'FSBPDCollisionSetting::EndBone' has a wrong offset!");
static_assert(offsetof(FSBPDCollisionSetting, GroupName) == 0x000020, "Member 'FSBPDCollisionSetting::GroupName' has a wrong offset!");
static_assert(offsetof(FSBPDCollisionSetting, ExtraGroupNameArray) == 0x000028, "Member 'FSBPDCollisionSetting::ExtraGroupNameArray' has a wrong offset!");
static_assert(offsetof(FSBPDCollisionSetting, CustomRootBone) == 0x000038, "Member 'FSBPDCollisionSetting::CustomRootBone' has a wrong offset!");
static_assert(offsetof(FSBPDCollisionSetting, EndStickAlpha) == 0x000048, "Member 'FSBPDCollisionSetting::EndStickAlpha' has a wrong offset!");
static_assert(offsetof(FSBPDCollisionSetting, BranchSettingArray) == 0x000050, "Member 'FSBPDCollisionSetting::BranchSettingArray' has a wrong offset!");
static_assert(offsetof(FSBPDCollisionSetting, ImpactRate) == 0x000060, "Member 'FSBPDCollisionSetting::ImpactRate' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_PartsDamage
// 0x00A0 (0x0198 - 0x00F8)
struct FSBAnimNode_PartsDamage final : public FSBAnimNode_Base
{
public:
	TArray<struct FSBPDCollisionSetting>          CollisionSettingArray;                             // 0x00F8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         RootBone;                                          // 0x0108(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         ToParentInfluence;                                 // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ToChildInfluence;                                  // 0x011C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RootMoveImpact;                                    // 0x0120(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeLen;                                           // 0x0124(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeOutStartTimeLen;                               // 0x0128(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeOutTimeLen;                                    // 0x012C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Impact;                                            // 0x0130(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OverrideImpact;                                    // 0x0134(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableOverrideImpact;                              // 0x0138(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CEA[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SwingDecay;                                        // 0x013C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeWarpPower;                                     // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PropagationTimeRate;                               // 0x0144(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomImpact;                                      // 0x0148(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomDirection;                                   // 0x014C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpactDistanceInfluence;                           // 0x0150(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxAnimationAdditive;                              // 0x0154(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ParentPropagationRate;                             // 0x0158(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AutoRootHierarchy;                                 // 0x015C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseBoneScaleRate;                                 // 0x0160(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CEB[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartsDamageAnimParamter*             PartsDamageAnimParamter;                           // 0x0168(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CEC[0x28];                                    // 0x0170(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_PartsDamage) == 0x000008, "Wrong alignment on FSBAnimNode_PartsDamage");
static_assert(sizeof(FSBAnimNode_PartsDamage) == 0x000198, "Wrong size on FSBAnimNode_PartsDamage");
static_assert(offsetof(FSBAnimNode_PartsDamage, CollisionSettingArray) == 0x0000F8, "Member 'FSBAnimNode_PartsDamage::CollisionSettingArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, RootBone) == 0x000108, "Member 'FSBAnimNode_PartsDamage::RootBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, ToParentInfluence) == 0x000118, "Member 'FSBAnimNode_PartsDamage::ToParentInfluence' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, ToChildInfluence) == 0x00011C, "Member 'FSBAnimNode_PartsDamage::ToChildInfluence' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, RootMoveImpact) == 0x000120, "Member 'FSBAnimNode_PartsDamage::RootMoveImpact' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, TimeLen) == 0x000124, "Member 'FSBAnimNode_PartsDamage::TimeLen' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, FadeOutStartTimeLen) == 0x000128, "Member 'FSBAnimNode_PartsDamage::FadeOutStartTimeLen' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, FadeOutTimeLen) == 0x00012C, "Member 'FSBAnimNode_PartsDamage::FadeOutTimeLen' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, Impact) == 0x000130, "Member 'FSBAnimNode_PartsDamage::Impact' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, OverrideImpact) == 0x000134, "Member 'FSBAnimNode_PartsDamage::OverrideImpact' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, EnableOverrideImpact) == 0x000138, "Member 'FSBAnimNode_PartsDamage::EnableOverrideImpact' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, SwingDecay) == 0x00013C, "Member 'FSBAnimNode_PartsDamage::SwingDecay' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, TimeWarpPower) == 0x000140, "Member 'FSBAnimNode_PartsDamage::TimeWarpPower' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, PropagationTimeRate) == 0x000144, "Member 'FSBAnimNode_PartsDamage::PropagationTimeRate' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, RandomImpact) == 0x000148, "Member 'FSBAnimNode_PartsDamage::RandomImpact' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, RandomDirection) == 0x00014C, "Member 'FSBAnimNode_PartsDamage::RandomDirection' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, ImpactDistanceInfluence) == 0x000150, "Member 'FSBAnimNode_PartsDamage::ImpactDistanceInfluence' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, MaxAnimationAdditive) == 0x000154, "Member 'FSBAnimNode_PartsDamage::MaxAnimationAdditive' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, ParentPropagationRate) == 0x000158, "Member 'FSBAnimNode_PartsDamage::ParentPropagationRate' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, AutoRootHierarchy) == 0x00015C, "Member 'FSBAnimNode_PartsDamage::AutoRootHierarchy' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, BaseBoneScaleRate) == 0x000160, "Member 'FSBAnimNode_PartsDamage::BaseBoneScaleRate' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PartsDamage, PartsDamageAnimParamter) == 0x000168, "Member 'FSBAnimNode_PartsDamage::PartsDamageAnimParamter' has a wrong offset!");

// ScriptStruct SBAnimNode.SBPDDecayLine
// 0x0014 (0x0014 - 0x0000)
struct FSBPDDecayLine final
{
public:
	struct FBoneReference                         EndBone;                                           // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         ToEndInfluence;                                    // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBPDDecayLine) == 0x000004, "Wrong alignment on FSBPDDecayLine");
static_assert(sizeof(FSBPDDecayLine) == 0x000014, "Wrong size on FSBPDDecayLine");
static_assert(offsetof(FSBPDDecayLine, EndBone) == 0x000000, "Member 'FSBPDDecayLine::EndBone' has a wrong offset!");
static_assert(offsetof(FSBPDDecayLine, ToEndInfluence) == 0x000010, "Member 'FSBPDDecayLine::ToEndInfluence' has a wrong offset!");

// ScriptStruct SBAnimNode.SBPDAxisRad
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x04) FSBPDAxisRad final
{
public:
	uint8                                         Pad_1CED[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBPDAxisRad) == 0x000004, "Wrong alignment on FSBPDAxisRad");
static_assert(sizeof(FSBPDAxisRad) == 0x000010, "Wrong size on FSBPDAxisRad");

// ScriptStruct SBAnimNode.PDCachedBoneData
// 0x0014 (0x0014 - 0x0000)
struct FPDCachedBoneData final
{
public:
	struct FBoneReference                         Bone;                                              // 0x0000(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                         RefSkeletonIndex;                                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPDCachedBoneData) == 0x000004, "Wrong alignment on FPDCachedBoneData");
static_assert(sizeof(FPDCachedBoneData) == 0x000014, "Wrong size on FPDCachedBoneData");
static_assert(offsetof(FPDCachedBoneData, Bone) == 0x000000, "Member 'FPDCachedBoneData::Bone' has a wrong offset!");
static_assert(offsetof(FPDCachedBoneData, RefSkeletonIndex) == 0x000010, "Member 'FPDCachedBoneData::RefSkeletonIndex' has a wrong offset!");

// ScriptStruct SBAnimNode.SBPoseAlongInfo
// 0x002C (0x002C - 0x0000)
struct FSBPoseAlongInfo final
{
public:
	struct FBoneReference                         TraceBone;                                         // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         SoleBoneForTrace;                                  // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                TraceDirection;                                    // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBPoseAlongInfo) == 0x000004, "Wrong alignment on FSBPoseAlongInfo");
static_assert(sizeof(FSBPoseAlongInfo) == 0x00002C, "Wrong size on FSBPoseAlongInfo");
static_assert(offsetof(FSBPoseAlongInfo, TraceBone) == 0x000000, "Member 'FSBPoseAlongInfo::TraceBone' has a wrong offset!");
static_assert(offsetof(FSBPoseAlongInfo, SoleBoneForTrace) == 0x000010, "Member 'FSBPoseAlongInfo::SoleBoneForTrace' has a wrong offset!");
static_assert(offsetof(FSBPoseAlongInfo, TraceDirection) == 0x000020, "Member 'FSBPoseAlongInfo::TraceDirection' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_PoseAlong
// 0x0118 (0x0210 - 0x00F8)
struct FSBAnimNode_PoseAlong final : public FSBAnimNode_Base
{
public:
	struct FVector2D                              CenterPosition;                                    // 0x00F8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CenterRotation;                                    // 0x0100(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Width;                                             // 0x0104(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Height;                                            // 0x0108(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceStart;                                        // 0x010C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceEnd;                                          // 0x0110(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TranslateLimitScale;                               // 0x0114(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceScaleCorrection;                              // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                         BaseBone;                                          // 0x011C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CEE[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlane                                 AnimPlane;                                         // 0x0130(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GroundThreshold;                                   // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotateLeftRightWeight;                             // 0x0144(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotateForeBackWeight;                              // 0x0148(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlaneNormalScale;                                  // 0x014C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotateForeWeight;                                  // 0x0150(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotateBackWeight;                                  // 0x0154(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotateLeftWeight;                                  // 0x0158(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotateRightWeight;                                 // 0x015C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSBPoseAlongInfo>               PoseAlongInfoArray;                                // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         BaseInterpSpeedMultiple;                           // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseInterpSpeedPow;                                // 0x0174(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseRotateInterpSpeedMultiple;                     // 0x0178(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseRotateInterpSpeedPow;                          // 0x017C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseRotateLimit;                                   // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDebugDrawInGame;                            // 0x0184(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CEF[0x8B];                                    // 0x0185(0x008B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_PoseAlong) == 0x000010, "Wrong alignment on FSBAnimNode_PoseAlong");
static_assert(sizeof(FSBAnimNode_PoseAlong) == 0x000210, "Wrong size on FSBAnimNode_PoseAlong");
static_assert(offsetof(FSBAnimNode_PoseAlong, CenterPosition) == 0x0000F8, "Member 'FSBAnimNode_PoseAlong::CenterPosition' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, CenterRotation) == 0x000100, "Member 'FSBAnimNode_PoseAlong::CenterRotation' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, Width) == 0x000104, "Member 'FSBAnimNode_PoseAlong::Width' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, Height) == 0x000108, "Member 'FSBAnimNode_PoseAlong::Height' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, TraceStart) == 0x00010C, "Member 'FSBAnimNode_PoseAlong::TraceStart' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, TraceEnd) == 0x000110, "Member 'FSBAnimNode_PoseAlong::TraceEnd' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, TranslateLimitScale) == 0x000114, "Member 'FSBAnimNode_PoseAlong::TranslateLimitScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, TraceScaleCorrection) == 0x000118, "Member 'FSBAnimNode_PoseAlong::TraceScaleCorrection' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, BaseBone) == 0x00011C, "Member 'FSBAnimNode_PoseAlong::BaseBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, AnimPlane) == 0x000130, "Member 'FSBAnimNode_PoseAlong::AnimPlane' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, GroundThreshold) == 0x000140, "Member 'FSBAnimNode_PoseAlong::GroundThreshold' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, RotateLeftRightWeight) == 0x000144, "Member 'FSBAnimNode_PoseAlong::RotateLeftRightWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, RotateForeBackWeight) == 0x000148, "Member 'FSBAnimNode_PoseAlong::RotateForeBackWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, PlaneNormalScale) == 0x00014C, "Member 'FSBAnimNode_PoseAlong::PlaneNormalScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, RotateForeWeight) == 0x000150, "Member 'FSBAnimNode_PoseAlong::RotateForeWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, RotateBackWeight) == 0x000154, "Member 'FSBAnimNode_PoseAlong::RotateBackWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, RotateLeftWeight) == 0x000158, "Member 'FSBAnimNode_PoseAlong::RotateLeftWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, RotateRightWeight) == 0x00015C, "Member 'FSBAnimNode_PoseAlong::RotateRightWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, PoseAlongInfoArray) == 0x000160, "Member 'FSBAnimNode_PoseAlong::PoseAlongInfoArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, BaseInterpSpeedMultiple) == 0x000170, "Member 'FSBAnimNode_PoseAlong::BaseInterpSpeedMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, BaseInterpSpeedPow) == 0x000174, "Member 'FSBAnimNode_PoseAlong::BaseInterpSpeedPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, BaseRotateInterpSpeedMultiple) == 0x000178, "Member 'FSBAnimNode_PoseAlong::BaseRotateInterpSpeedMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, BaseRotateInterpSpeedPow) == 0x00017C, "Member 'FSBAnimNode_PoseAlong::BaseRotateInterpSpeedPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, BaseRotateLimit) == 0x000180, "Member 'FSBAnimNode_PoseAlong::BaseRotateLimit' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_PoseAlong, bEnableDebugDrawInGame) == 0x000184, "Member 'FSBAnimNode_PoseAlong::bEnableDebugDrawInGame' has a wrong offset!");

// ScriptStruct SBAnimNode.SBIKTraceResult
// 0x0034 (0x0034 - 0x0000)
struct FSBIKTraceResult final
{
public:
	bool                                          Hit;                                               // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitPositionLocal;                                  // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RayCenterPositionLocal;                            // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitNormal;                                         // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RayCenterPosition;                                 // 0x0028(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBIKTraceResult) == 0x000004, "Wrong alignment on FSBIKTraceResult");
static_assert(sizeof(FSBIKTraceResult) == 0x000034, "Wrong size on FSBIKTraceResult");
static_assert(offsetof(FSBIKTraceResult, Hit) == 0x000000, "Member 'FSBIKTraceResult::Hit' has a wrong offset!");
static_assert(offsetof(FSBIKTraceResult, HitPositionLocal) == 0x000004, "Member 'FSBIKTraceResult::HitPositionLocal' has a wrong offset!");
static_assert(offsetof(FSBIKTraceResult, RayCenterPositionLocal) == 0x000010, "Member 'FSBIKTraceResult::RayCenterPositionLocal' has a wrong offset!");
static_assert(offsetof(FSBIKTraceResult, HitNormal) == 0x00001C, "Member 'FSBIKTraceResult::HitNormal' has a wrong offset!");
static_assert(offsetof(FSBIKTraceResult, RayCenterPosition) == 0x000028, "Member 'FSBIKTraceResult::RayCenterPosition' has a wrong offset!");

// ScriptStruct SBAnimNode.SBPoseAlongStatusAll
// 0x00D4 (0x00D4 - 0x0000)
struct FSBPoseAlongStatusAll final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBIKTraceResult                       TraceResultForeL;                                  // 0x0004(0x0034)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSBIKTraceResult                       TraceResultForeR;                                  // 0x0038(0x0034)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSBIKTraceResult                       TraceResultBackL;                                  // 0x006C(0x0034)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSBIKTraceResult                       TraceResultBackR;                                  // 0x00A0(0x0034)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBPoseAlongStatusAll) == 0x000004, "Wrong alignment on FSBPoseAlongStatusAll");
static_assert(sizeof(FSBPoseAlongStatusAll) == 0x0000D4, "Wrong size on FSBPoseAlongStatusAll");
static_assert(offsetof(FSBPoseAlongStatusAll, bActive) == 0x000000, "Member 'FSBPoseAlongStatusAll::bActive' has a wrong offset!");
static_assert(offsetof(FSBPoseAlongStatusAll, TraceResultForeL) == 0x000004, "Member 'FSBPoseAlongStatusAll::TraceResultForeL' has a wrong offset!");
static_assert(offsetof(FSBPoseAlongStatusAll, TraceResultForeR) == 0x000038, "Member 'FSBPoseAlongStatusAll::TraceResultForeR' has a wrong offset!");
static_assert(offsetof(FSBPoseAlongStatusAll, TraceResultBackL) == 0x00006C, "Member 'FSBPoseAlongStatusAll::TraceResultBackL' has a wrong offset!");
static_assert(offsetof(FSBPoseAlongStatusAll, TraceResultBackR) == 0x0000A0, "Member 'FSBPoseAlongStatusAll::TraceResultBackR' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_RigidBody
// 0x00C0 (0x09A0 - 0x08E0)
struct FSBAnimNode_RigidBody final : public FAnimNode_RigidBody
{
public:
	float                                         LimitBoneLengthScale;                              // 0x08E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LimitBoneLengthBaseBoneRelativeScale;              // 0x08E4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                         LimitTransformReferenceBaseBone;                   // 0x08E8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bAlwaysUpdateParam;                                // 0x08F8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCachePhysicsResult;                               // 0x08F9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF2[0x2];                                     // 0x08FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StiffnessScale;                                    // 0x08FC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingScale;                                      // 0x0900(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassScale;                                         // 0x0904(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CustomMassScale;                                   // 0x0908(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TransformAlpha;                                    // 0x090C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                         ParameterReferenceBaseBone;                        // 0x0910(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         ScaleInfuence;                                     // 0x0920(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstrainPowerScaleInfluence;                      // 0x0924(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleInfuenceGravity;                              // 0x0928(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF3[0x74];                                    // 0x092C(0x0074)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_RigidBody) == 0x000010, "Wrong alignment on FSBAnimNode_RigidBody");
static_assert(sizeof(FSBAnimNode_RigidBody) == 0x0009A0, "Wrong size on FSBAnimNode_RigidBody");
static_assert(offsetof(FSBAnimNode_RigidBody, LimitBoneLengthScale) == 0x0008E0, "Member 'FSBAnimNode_RigidBody::LimitBoneLengthScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, LimitBoneLengthBaseBoneRelativeScale) == 0x0008E4, "Member 'FSBAnimNode_RigidBody::LimitBoneLengthBaseBoneRelativeScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, LimitTransformReferenceBaseBone) == 0x0008E8, "Member 'FSBAnimNode_RigidBody::LimitTransformReferenceBaseBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, bAlwaysUpdateParam) == 0x0008F8, "Member 'FSBAnimNode_RigidBody::bAlwaysUpdateParam' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, bCachePhysicsResult) == 0x0008F9, "Member 'FSBAnimNode_RigidBody::bCachePhysicsResult' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, StiffnessScale) == 0x0008FC, "Member 'FSBAnimNode_RigidBody::StiffnessScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, DampingScale) == 0x000900, "Member 'FSBAnimNode_RigidBody::DampingScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, MassScale) == 0x000904, "Member 'FSBAnimNode_RigidBody::MassScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, CustomMassScale) == 0x000908, "Member 'FSBAnimNode_RigidBody::CustomMassScale' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, TransformAlpha) == 0x00090C, "Member 'FSBAnimNode_RigidBody::TransformAlpha' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, ParameterReferenceBaseBone) == 0x000910, "Member 'FSBAnimNode_RigidBody::ParameterReferenceBaseBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, ScaleInfuence) == 0x000920, "Member 'FSBAnimNode_RigidBody::ScaleInfuence' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, ConstrainPowerScaleInfluence) == 0x000924, "Member 'FSBAnimNode_RigidBody::ConstrainPowerScaleInfluence' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_RigidBody, ScaleInfuenceGravity) == 0x000928, "Member 'FSBAnimNode_RigidBody::ScaleInfuenceGravity' has a wrong offset!");

// ScriptStruct SBAnimNode.SBRotateBlendWeight
// 0x0010 (0x0010 - 0x0000)
struct FSBRotateBlendWeight final
{
public:
	float                                         Yaw;                                               // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Pitch;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Roll;                                              // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Speed;                                             // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBRotateBlendWeight) == 0x000004, "Wrong alignment on FSBRotateBlendWeight");
static_assert(sizeof(FSBRotateBlendWeight) == 0x000010, "Wrong size on FSBRotateBlendWeight");
static_assert(offsetof(FSBRotateBlendWeight, Yaw) == 0x000000, "Member 'FSBRotateBlendWeight::Yaw' has a wrong offset!");
static_assert(offsetof(FSBRotateBlendWeight, Pitch) == 0x000004, "Member 'FSBRotateBlendWeight::Pitch' has a wrong offset!");
static_assert(offsetof(FSBRotateBlendWeight, Roll) == 0x000008, "Member 'FSBRotateBlendWeight::Roll' has a wrong offset!");
static_assert(offsetof(FSBRotateBlendWeight, Speed) == 0x00000C, "Member 'FSBRotateBlendWeight::Speed' has a wrong offset!");

// ScriptStruct SBAnimNode.SBRotateCustomParam
// 0x0010 (0x0010 - 0x0000)
struct FSBRotateCustomParam final
{
public:
	float                                         SpeedMultiply;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClampPitchMultiply;                                // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClampYawMultiply;                                  // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PropagationHierarchyWeight;                        // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBRotateCustomParam) == 0x000004, "Wrong alignment on FSBRotateCustomParam");
static_assert(sizeof(FSBRotateCustomParam) == 0x000010, "Wrong size on FSBRotateCustomParam");
static_assert(offsetof(FSBRotateCustomParam, SpeedMultiply) == 0x000000, "Member 'FSBRotateCustomParam::SpeedMultiply' has a wrong offset!");
static_assert(offsetof(FSBRotateCustomParam, ClampPitchMultiply) == 0x000004, "Member 'FSBRotateCustomParam::ClampPitchMultiply' has a wrong offset!");
static_assert(offsetof(FSBRotateCustomParam, ClampYawMultiply) == 0x000008, "Member 'FSBRotateCustomParam::ClampYawMultiply' has a wrong offset!");
static_assert(offsetof(FSBRotateCustomParam, PropagationHierarchyWeight) == 0x00000C, "Member 'FSBRotateCustomParam::PropagationHierarchyWeight' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_Rotate
// 0x0528 (0x0620 - 0x00F8)
struct alignas(0x10) FSBAnimNode_Rotate final : public FSBAnimNode_Base
{
public:
	float                                         Yaw;                                               // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Pitch;                                             // 0x00FC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Roll;                                              // 0x0100(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                  Yaw_Axis;                                          // 0x0104(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                  Roll_Axis;                                         // 0x0114(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         RotateBoneReference;                               // 0x0124(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         RotateBaseBoneReference;                           // 0x0134(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         FilterTerm;                                        // 0x0144(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterpolationVelocityMultiple;                     // 0x0148(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterpolationVelocityPow;                          // 0x014C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalWeight;                                       // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF4[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRotateBlendWeight>           WeightArray;                                       // 0x0158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEnableDebug;                                      // 0x0168(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF5[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRotateCustomParam                   CustomParam;                                       // 0x016C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF6[0x4A4];                                   // 0x017C(0x04A4)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_Rotate) == 0x000010, "Wrong alignment on FSBAnimNode_Rotate");
static_assert(sizeof(FSBAnimNode_Rotate) == 0x000620, "Wrong size on FSBAnimNode_Rotate");
static_assert(offsetof(FSBAnimNode_Rotate, Yaw) == 0x0000F8, "Member 'FSBAnimNode_Rotate::Yaw' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, Pitch) == 0x0000FC, "Member 'FSBAnimNode_Rotate::Pitch' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, Roll) == 0x000100, "Member 'FSBAnimNode_Rotate::Roll' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, Yaw_Axis) == 0x000104, "Member 'FSBAnimNode_Rotate::Yaw_Axis' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, Roll_Axis) == 0x000114, "Member 'FSBAnimNode_Rotate::Roll_Axis' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, RotateBoneReference) == 0x000124, "Member 'FSBAnimNode_Rotate::RotateBoneReference' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, RotateBaseBoneReference) == 0x000134, "Member 'FSBAnimNode_Rotate::RotateBaseBoneReference' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, FilterTerm) == 0x000144, "Member 'FSBAnimNode_Rotate::FilterTerm' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, InterpolationVelocityMultiple) == 0x000148, "Member 'FSBAnimNode_Rotate::InterpolationVelocityMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, InterpolationVelocityPow) == 0x00014C, "Member 'FSBAnimNode_Rotate::InterpolationVelocityPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, TotalWeight) == 0x000150, "Member 'FSBAnimNode_Rotate::TotalWeight' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, WeightArray) == 0x000158, "Member 'FSBAnimNode_Rotate::WeightArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, bEnableDebug) == 0x000168, "Member 'FSBAnimNode_Rotate::bEnableDebug' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_Rotate, CustomParam) == 0x00016C, "Member 'FSBAnimNode_Rotate::CustomParam' has a wrong offset!");

// ScriptStruct SBAnimNode.SBLimbIKInfo
// 0x00F0 (0x00F0 - 0x0000)
struct FSBLimbIKInfo final
{
public:
	struct FBoneReference                         IKBone;                                            // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	ESBIKBoneNum                                  BoneNum;                                           // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF7[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneSocketTarget                      EffectorBone;                                      // 0x0020(0x0060)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                BoneRotaterLocation;                               // 0x0080(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF8[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneSocketTarget                      EffectorTargetBone;                                // 0x0090(0x0060)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBLimbIKInfo) == 0x000010, "Wrong alignment on FSBLimbIKInfo");
static_assert(sizeof(FSBLimbIKInfo) == 0x0000F0, "Wrong size on FSBLimbIKInfo");
static_assert(offsetof(FSBLimbIKInfo, IKBone) == 0x000000, "Member 'FSBLimbIKInfo::IKBone' has a wrong offset!");
static_assert(offsetof(FSBLimbIKInfo, BoneNum) == 0x000010, "Member 'FSBLimbIKInfo::BoneNum' has a wrong offset!");
static_assert(offsetof(FSBLimbIKInfo, EffectorBone) == 0x000020, "Member 'FSBLimbIKInfo::EffectorBone' has a wrong offset!");
static_assert(offsetof(FSBLimbIKInfo, BoneRotaterLocation) == 0x000080, "Member 'FSBLimbIKInfo::BoneRotaterLocation' has a wrong offset!");
static_assert(offsetof(FSBLimbIKInfo, EffectorTargetBone) == 0x000090, "Member 'FSBLimbIKInfo::EffectorTargetBone' has a wrong offset!");

// ScriptStruct SBAnimNode.SBLimbIKUpdateParam
// 0x0010 (0x0010 - 0x0000)
struct FSBLimbIKUpdateParam final
{
public:
	bool                                          bParamActive;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Position;                                          // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBLimbIKUpdateParam) == 0x000004, "Wrong alignment on FSBLimbIKUpdateParam");
static_assert(sizeof(FSBLimbIKUpdateParam) == 0x000010, "Wrong size on FSBLimbIKUpdateParam");
static_assert(offsetof(FSBLimbIKUpdateParam, bParamActive) == 0x000000, "Member 'FSBLimbIKUpdateParam::bParamActive' has a wrong offset!");
static_assert(offsetof(FSBLimbIKUpdateParam, Position) == 0x000004, "Member 'FSBLimbIKUpdateParam::Position' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_SimpleIK
// 0x0078 (0x0170 - 0x00F8)
struct FSBAnimNode_SimpleIK final : public FSBAnimNode_Base
{
public:
	struct FPoseLink                              ReferencePose;                                     // 0x00F8(0x0010)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	struct FSBThreeFourBoneIKParam                ThreeFourBoneIKParam;                              // 0x0108(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSBLimbIKInfo>                  LimbIKInfoArray;                                   // 0x0118(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSBLimbIKUpdateParam>           LimbIKUpdateParamArray;                            // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         LimbInterpSpeedMultiple;                           // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LimbInterpSpeedPow;                                // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDebugDrawInGame;                            // 0x0140(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CFA[0x2F];                                    // 0x0141(0x002F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_SimpleIK) == 0x000008, "Wrong alignment on FSBAnimNode_SimpleIK");
static_assert(sizeof(FSBAnimNode_SimpleIK) == 0x000170, "Wrong size on FSBAnimNode_SimpleIK");
static_assert(offsetof(FSBAnimNode_SimpleIK, ReferencePose) == 0x0000F8, "Member 'FSBAnimNode_SimpleIK::ReferencePose' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SimpleIK, ThreeFourBoneIKParam) == 0x000108, "Member 'FSBAnimNode_SimpleIK::ThreeFourBoneIKParam' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SimpleIK, LimbIKInfoArray) == 0x000118, "Member 'FSBAnimNode_SimpleIK::LimbIKInfoArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SimpleIK, LimbIKUpdateParamArray) == 0x000128, "Member 'FSBAnimNode_SimpleIK::LimbIKUpdateParamArray' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SimpleIK, LimbInterpSpeedMultiple) == 0x000138, "Member 'FSBAnimNode_SimpleIK::LimbInterpSpeedMultiple' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SimpleIK, LimbInterpSpeedPow) == 0x00013C, "Member 'FSBAnimNode_SimpleIK::LimbInterpSpeedPow' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SimpleIK, bEnableDebugDrawInGame) == 0x000140, "Member 'FSBAnimNode_SimpleIK::bEnableDebugDrawInGame' has a wrong offset!");

// ScriptStruct SBAnimNode.SBIKUpdateParamAll
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FSBIKUpdateParamAll final
{
public:
	uint8                                         Pad_1CFB[0x58];                                    // 0x0000(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBIKUpdateParamAll) == 0x000008, "Wrong alignment on FSBIKUpdateParamAll");
static_assert(sizeof(FSBIKUpdateParamAll) == 0x000058, "Wrong size on FSBIKUpdateParamAll");

// ScriptStruct SBAnimNode.SBAnimNode_SnakeTail
// 0x01B0 (0x02A8 - 0x00F8)
struct FSBAnimNode_SnakeTail final : public FSBAnimNode_Base
{
public:
	struct FBoneReference                         StartBone;                                         // 0x00F8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         EndBone;                                           // 0x0108(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Stretch;                                           // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Offset;                                            // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ControlPointDistRate;                              // 0x0120(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AlphaDelay;                                        // 0x0124(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LimitAngleInterp;                                  // 0x0128(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendDuration;                                     // 0x012C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ControlPoint_SkipBoneNum;                          // 0x0130(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ControlPoint_Sub;                                  // 0x0134(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CFC[0xB0];                                    // 0x0138(0x00B0)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSplineCurves                          BoneSpline;                                        // 0x01E8(0x0070)(NativeAccessSpecifierPublic)
	float                                         OriginalSplineLength;                              // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CFD[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSplineIKCachedBoneData>        CachedBoneReferences;                              // 0x0260(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 CachedBoneLengths;                                 // 0x0270(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSplineIKCachedBoneData                CachedRootBoneReference;                           // 0x0280(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CFE[0x14];                                    // 0x0294(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_SnakeTail) == 0x000008, "Wrong alignment on FSBAnimNode_SnakeTail");
static_assert(sizeof(FSBAnimNode_SnakeTail) == 0x0002A8, "Wrong size on FSBAnimNode_SnakeTail");
static_assert(offsetof(FSBAnimNode_SnakeTail, StartBone) == 0x0000F8, "Member 'FSBAnimNode_SnakeTail::StartBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, EndBone) == 0x000108, "Member 'FSBAnimNode_SnakeTail::EndBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, Stretch) == 0x000118, "Member 'FSBAnimNode_SnakeTail::Stretch' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, Offset) == 0x00011C, "Member 'FSBAnimNode_SnakeTail::Offset' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, ControlPointDistRate) == 0x000120, "Member 'FSBAnimNode_SnakeTail::ControlPointDistRate' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, AlphaDelay) == 0x000124, "Member 'FSBAnimNode_SnakeTail::AlphaDelay' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, LimitAngleInterp) == 0x000128, "Member 'FSBAnimNode_SnakeTail::LimitAngleInterp' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, BlendDuration) == 0x00012C, "Member 'FSBAnimNode_SnakeTail::BlendDuration' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, ControlPoint_SkipBoneNum) == 0x000130, "Member 'FSBAnimNode_SnakeTail::ControlPoint_SkipBoneNum' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, ControlPoint_Sub) == 0x000134, "Member 'FSBAnimNode_SnakeTail::ControlPoint_Sub' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, BoneSpline) == 0x0001E8, "Member 'FSBAnimNode_SnakeTail::BoneSpline' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, OriginalSplineLength) == 0x000258, "Member 'FSBAnimNode_SnakeTail::OriginalSplineLength' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, CachedBoneReferences) == 0x000260, "Member 'FSBAnimNode_SnakeTail::CachedBoneReferences' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, CachedBoneLengths) == 0x000270, "Member 'FSBAnimNode_SnakeTail::CachedBoneLengths' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SnakeTail, CachedRootBoneReference) == 0x000280, "Member 'FSBAnimNode_SnakeTail::CachedRootBoneReference' has a wrong offset!");

// ScriptStruct SBAnimNode.SBSplineIKCachedBoneData
// 0x0014 (0x0014 - 0x0000)
struct FSBSplineIKCachedBoneData final
{
public:
	struct FBoneReference                         Bone;                                              // 0x0000(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                         RefSkeletonIndex;                                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBSplineIKCachedBoneData) == 0x000004, "Wrong alignment on FSBSplineIKCachedBoneData");
static_assert(sizeof(FSBSplineIKCachedBoneData) == 0x000014, "Wrong size on FSBSplineIKCachedBoneData");
static_assert(offsetof(FSBSplineIKCachedBoneData, Bone) == 0x000000, "Member 'FSBSplineIKCachedBoneData::Bone' has a wrong offset!");
static_assert(offsetof(FSBSplineIKCachedBoneData, RefSkeletonIndex) == 0x000010, "Member 'FSBSplineIKCachedBoneData::RefSkeletonIndex' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_SplineIK
// 0x01D8 (0x02A0 - 0x00C8)
struct FSBAnimNode_SplineIK final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         StartControlBone;                                  // 0x00C8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         EndControlBone;                                    // 0x00D8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         StartBone;                                         // 0x00E8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         EndBone;                                           // 0x00F8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	ESBSplineBoneAxis                             BoneAxis;                                          // 0x0108(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoCalculateSpline;                              // 0x0109(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CFF[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PointCount;                                        // 0x010C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     ControlPoints;                                     // 0x0110(0x0010)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         Roll;                                              // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TwistStart;                                        // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TwistEnd;                                          // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D00[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAlphaBlend                            TwistBlend;                                        // 0x0130(0x0030)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Stretch;                                           // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Offset;                                            // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D01[0x80];                                    // 0x0168(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSplineCurves                          BoneSpline;                                        // 0x01E8(0x0070)(Protected, NativeAccessSpecifierProtected)
	float                                         OriginalSplineLength;                              // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1D02[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBSplineIKCachedBoneData>      CachedBoneReferences;                              // 0x0260(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                 CachedBoneLengths;                                 // 0x0270(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FQuat>                          CachedOffsetRotations;                             // 0x0280(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSBSplineIKCachedBoneData>      CachedControlBoneReferences;                       // 0x0290(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};
static_assert(alignof(FSBAnimNode_SplineIK) == 0x000008, "Wrong alignment on FSBAnimNode_SplineIK");
static_assert(sizeof(FSBAnimNode_SplineIK) == 0x0002A0, "Wrong size on FSBAnimNode_SplineIK");
static_assert(offsetof(FSBAnimNode_SplineIK, StartControlBone) == 0x0000C8, "Member 'FSBAnimNode_SplineIK::StartControlBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, EndControlBone) == 0x0000D8, "Member 'FSBAnimNode_SplineIK::EndControlBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, StartBone) == 0x0000E8, "Member 'FSBAnimNode_SplineIK::StartBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, EndBone) == 0x0000F8, "Member 'FSBAnimNode_SplineIK::EndBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, BoneAxis) == 0x000108, "Member 'FSBAnimNode_SplineIK::BoneAxis' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, bAutoCalculateSpline) == 0x000109, "Member 'FSBAnimNode_SplineIK::bAutoCalculateSpline' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, PointCount) == 0x00010C, "Member 'FSBAnimNode_SplineIK::PointCount' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, ControlPoints) == 0x000110, "Member 'FSBAnimNode_SplineIK::ControlPoints' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, Roll) == 0x000120, "Member 'FSBAnimNode_SplineIK::Roll' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, TwistStart) == 0x000124, "Member 'FSBAnimNode_SplineIK::TwistStart' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, TwistEnd) == 0x000128, "Member 'FSBAnimNode_SplineIK::TwistEnd' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, TwistBlend) == 0x000130, "Member 'FSBAnimNode_SplineIK::TwistBlend' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, Stretch) == 0x000160, "Member 'FSBAnimNode_SplineIK::Stretch' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, Offset) == 0x000164, "Member 'FSBAnimNode_SplineIK::Offset' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, BoneSpline) == 0x0001E8, "Member 'FSBAnimNode_SplineIK::BoneSpline' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, OriginalSplineLength) == 0x000258, "Member 'FSBAnimNode_SplineIK::OriginalSplineLength' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, CachedBoneReferences) == 0x000260, "Member 'FSBAnimNode_SplineIK::CachedBoneReferences' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, CachedBoneLengths) == 0x000270, "Member 'FSBAnimNode_SplineIK::CachedBoneLengths' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, CachedOffsetRotations) == 0x000280, "Member 'FSBAnimNode_SplineIK::CachedOffsetRotations' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_SplineIK, CachedControlBoneReferences) == 0x000290, "Member 'FSBAnimNode_SplineIK::CachedControlBoneReferences' has a wrong offset!");

// ScriptStruct SBAnimNode.TailBoneParam
// 0x0024 (0x0024 - 0x0000)
struct FTailBoneParam final
{
public:
	struct FBoneReference                         StartBone;                                         // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         InterpPowCollision;                                // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterpPowRecovery;                                 // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Thickness;                                         // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LimitAngle;                                        // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TraceBack;                                         // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTailBoneParam) == 0x000004, "Wrong alignment on FTailBoneParam");
static_assert(sizeof(FTailBoneParam) == 0x000024, "Wrong size on FTailBoneParam");
static_assert(offsetof(FTailBoneParam, StartBone) == 0x000000, "Member 'FTailBoneParam::StartBone' has a wrong offset!");
static_assert(offsetof(FTailBoneParam, InterpPowCollision) == 0x000010, "Member 'FTailBoneParam::InterpPowCollision' has a wrong offset!");
static_assert(offsetof(FTailBoneParam, InterpPowRecovery) == 0x000014, "Member 'FTailBoneParam::InterpPowRecovery' has a wrong offset!");
static_assert(offsetof(FTailBoneParam, Thickness) == 0x000018, "Member 'FTailBoneParam::Thickness' has a wrong offset!");
static_assert(offsetof(FTailBoneParam, LimitAngle) == 0x00001C, "Member 'FTailBoneParam::LimitAngle' has a wrong offset!");
static_assert(offsetof(FTailBoneParam, TraceBack) == 0x000020, "Member 'FTailBoneParam::TraceBack' has a wrong offset!");

// ScriptStruct SBAnimNode.TailCachedBoneData
// 0x0014 (0x0014 - 0x0000)
struct FTailCachedBoneData final
{
public:
	struct FBoneReference                         Bone;                                              // 0x0000(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                         RefSkeletonIndex;                                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTailCachedBoneData) == 0x000004, "Wrong alignment on FTailCachedBoneData");
static_assert(sizeof(FTailCachedBoneData) == 0x000014, "Wrong size on FTailCachedBoneData");
static_assert(offsetof(FTailCachedBoneData, Bone) == 0x000000, "Member 'FTailCachedBoneData::Bone' has a wrong offset!");
static_assert(offsetof(FTailCachedBoneData, RefSkeletonIndex) == 0x000010, "Member 'FTailCachedBoneData::RefSkeletonIndex' has a wrong offset!");

// ScriptStruct SBAnimNode.SBAnimNode_TailCollision
// 0x00D0 (0x01C8 - 0x00F8)
struct FSBAnimNode_TailCollision final : public FSBAnimNode_Base
{
public:
	struct FBoneReference                         StartBone;                                         // 0x00F8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         EndBone;                                           // 0x0108(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                 RayCalcOmitBones;                                  // 0x0118(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTailBoneParam>                 TailBoneParams;                                    // 0x0128(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTailCachedBoneData>            CachedBoneReferences;                              // 0x0138(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 CachedBoneLengths;                                 // 0x0148(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D03[0x70];                                    // 0x0158(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSBAnimNode_TailCollision) == 0x000008, "Wrong alignment on FSBAnimNode_TailCollision");
static_assert(sizeof(FSBAnimNode_TailCollision) == 0x0001C8, "Wrong size on FSBAnimNode_TailCollision");
static_assert(offsetof(FSBAnimNode_TailCollision, StartBone) == 0x0000F8, "Member 'FSBAnimNode_TailCollision::StartBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_TailCollision, EndBone) == 0x000108, "Member 'FSBAnimNode_TailCollision::EndBone' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_TailCollision, RayCalcOmitBones) == 0x000118, "Member 'FSBAnimNode_TailCollision::RayCalcOmitBones' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_TailCollision, TailBoneParams) == 0x000128, "Member 'FSBAnimNode_TailCollision::TailBoneParams' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_TailCollision, CachedBoneReferences) == 0x000138, "Member 'FSBAnimNode_TailCollision::CachedBoneReferences' has a wrong offset!");
static_assert(offsetof(FSBAnimNode_TailCollision, CachedBoneLengths) == 0x000148, "Member 'FSBAnimNode_TailCollision::CachedBoneLengths' has a wrong offset!");

// ScriptStruct SBAnimNode.SBLegIKInfoAll
// 0x0010 (0x0010 - 0x0000)
struct FSBLegIKInfoAll final
{
public:
	TArray<struct FSBLegIKInfo>                   IKLegIKInfoArray;                                  // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBLegIKInfoAll) == 0x000008, "Wrong alignment on FSBLegIKInfoAll");
static_assert(sizeof(FSBLegIKInfoAll) == 0x000010, "Wrong size on FSBLegIKInfoAll");
static_assert(offsetof(FSBLegIKInfoAll, IKLegIKInfoArray) == 0x000000, "Member 'FSBLegIKInfoAll::IKLegIKInfoArray' has a wrong offset!");

// ScriptStruct SBAnimNode.SBIKTraceResultAll
// 0x0010 (0x0010 - 0x0000)
struct FSBIKTraceResultAll final
{
public:
	TArray<struct FSBIKTraceResult>               IKTraceResultArray;                                // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSBIKTraceResultAll) == 0x000008, "Wrong alignment on FSBIKTraceResultAll");
static_assert(sizeof(FSBIKTraceResultAll) == 0x000010, "Wrong size on FSBIKTraceResultAll");
static_assert(offsetof(FSBIKTraceResultAll, IKTraceResultArray) == 0x000000, "Member 'FSBIKTraceResultAll::IKTraceResultArray' has a wrong offset!");

}

